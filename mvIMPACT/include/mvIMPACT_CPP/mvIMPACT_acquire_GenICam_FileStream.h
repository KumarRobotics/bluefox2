#ifndef MVIMPACT_ACQUIRE__GENICAM__FILESTREAM_H_
#if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
#   define MVIMPACT_ACQUIRE__GENICAM__FILESTREAM_H_ MVIMPACT_ACQUIRE__GENICAM__FILESTREAM_H_
#endif // DOXYGEN_SHOULD_SKIP_THIS && WRAP_ANY

#include <iostream>
#include <streambuf>
#include <iomanip>
#include <iosfwd>
#include <mvIMPACT_CPP/mvIMPACT_acquire.h>
#include <string>
#include <sstream>
#include <algorithm>

#ifdef _MSC_VER
#   pragma push_macro("min")
#   undef min
#endif

namespace mvIMPACT
{
namespace acquire
{
/// \namespace mvIMPACT::acquire::GenICam This namespace contains classes and functions belonging to the GenICam specific part of the image acquisition module of this SDK.
namespace GenICam
{

/** \defgroup GenICamInterfaceFileStream GenICam interface layout(file stream)
 * \brief Classes and functions that will be available if the device is used with the \a GenICam interface layout.
 *
 *  This group contains classes and functions that will be available if the device is used
 *  with the <b>mvIMPACT::acquire::dilGenICam</b> interface layout.
 *
 * \ingroup GenICamInterface
 *
 * @{
 */

//-----------------------------------------------------------------------------
/// \brief Adapter between the std::iostreambuf and the SFNC Features representing the device filesystem
/**
 *  The adapter assumes, that the features provide stdio fileaccess compatible semantic
 */
class FileProtocolAdapter
//-----------------------------------------------------------------------------
{
    /// \brief Align an integer
    /**
     *  \return v aligned at i
     */
    int64_type Align(
        /// value to align
        int64_type v,
        /// Alignment
        const int64_type i )
    {
        if( i > 1 )
        {
            int64_type r = ( v + ( i - 1 ) ) / i;
            return r * i;
        }
        else if( i < 1 )
        {
            std::ostringstream oss;
            oss << "Unexpected increment " << i;
            ExceptionFactory::raiseException( __FUNCTION__, __LINE__, DMR_INVALID_PARAMETER, INVALID_ID, oss.str() );
        }
        return v;
    }
public:
    /// \brief Constructor
    explicit FileProtocolAdapter() {}
    /// \brief Attach file protocol adapter to the corresponding properties
    /**
     *  \return true if attach was successful, false if not
     */
    bool attach(
        /// A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from
        /// a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" )
    {
        if( !pDev->isOpen() )
        {
            pDev->open();
        }
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, dltSetting, settingName );
        locator.bindComponent( m_ptrFileSelector, "FileSelector" );
        locator.bindComponent( m_ptrFileOperationSelector, "FileOperationSelector" );
        locator.bindComponent( m_ptrFileOperationExecute, "FileOperationExecute@i" );
        locator.bindComponent( m_ptrFileOpenMode, "FileOpenMode" );
        locator.bindComponent( m_ptrFileAccessBuffer, "FileAccessBuffer" );
        locator.bindComponent( m_ptrFileAccessOffset, "FileAccessOffset" );
        locator.bindComponent( m_ptrFileAccessLength, "FileAccessLength" );
        locator.bindComponent( m_ptrFileOperationStatus, "FileOperationStatus" );
        locator.bindComponent( m_ptrFileOperationResult, "FileOperationResult" );
        locator.bindComponent( m_ptrFileSize, "FileSize" );
        return m_ptrFileAccessBuffer.isValid() && m_ptrFileAccessLength.isValid() && m_ptrFileAccessOffset.isValid() &&
               m_ptrFileOpenMode.isValid() && m_ptrFileOperationExecute.isValid() && m_ptrFileOperationResult.isValid() &&
               m_ptrFileOperationSelector.isValid() && m_ptrFileOperationStatus.isValid() && m_ptrFileSelector.isValid();
    }
    /// \brief Open a file on the device
    /**
     *  \return true on success, false on error
     */
    bool openFile(
        /// Name of the file to open. The filename must exist in the Enumeration FileSelector
        const char* pFileName,
        /// mode to open the file. The mode must exist in the Enunmeration FileOpenMode
        std::ios_base::openmode mode )
    {
        if( !m_ptrFileSelector.isValid() )
        {
            return false;
        }

        m_ptrFileSelector.writeS( pFileName );
        if( mode & ( std::ios_base::out | std::ios_base::trunc ) )
        {
            m_ptrFileOpenMode.writeS( "Write" );
        }
        else if( mode & std::ios_base::in )
        {
            m_ptrFileOpenMode.writeS( "Read" );
        }
        else
        {
            return false;
        }

        m_ptrFileOperationSelector.writeS( "Open" );
        m_ptrFileOperationExecute.call();
        return m_ptrFileOperationStatus.readS() == "Success";
    }
    /// \brief Close a file on the device
    /**
     *  \return true on success, false on error
     */
    bool closeFile(
        /// Name of the file to open. The filename must exist in the Enumeration FileSelector
        const char* pFileName )
    {
        m_ptrFileSelector.writeS( pFileName );
        m_ptrFileOperationSelector.writeS( "Close" );
        m_ptrFileOperationExecute.call();
        return m_ptrFileOperationStatus.readS() == "Success";
    }
    /// \brief Writes data into a file.
    /**
     *  \return Number of bytes written
     */
    std::streamsize write(
        /// Source buffer
        const char* pBuf,
        /// Offset into the device file
        int64_type offs,
        /// Number of bytes to write
        int64_type len,
        /// Name of the file to write into The filename must exist in the Enumeration FileSelector
        const char* pFileName )
    {
        m_ptrFileSelector.writeS( pFileName );
        m_ptrFileOperationSelector.writeS( "Write" );

        const std::streamsize maxWriteLen( static_cast<std::streamsize>( m_ptrFileAccessBuffer.binaryDataBufferMaxSize() ) );
        std::streamsize bytesWritten = 0;
        while ( bytesWritten < len )
        {
            // copy streamdata to xchange buffer
            const int64_type remain( len - bytesWritten );
            const int64_type writeSize( remain <= maxWriteLen ? remain : maxWriteLen );

            // offset
            if( offs + bytesWritten > m_ptrFileAccessOffset.getMaxValue() )
            {
                // we cannot move the outbuffer any further
                break;
            }

            m_ptrFileAccessOffset.write( offs + bytesWritten );
            m_ptrFileAccessLength.write( writeSize );
            // set the buffer
            std::string bufS( pBuf + bytesWritten, static_cast<unsigned int>( Align( writeSize, 4 ) ) );
            m_ptrFileAccessBuffer.writeBinary( bufS );
            m_ptrFileOperationExecute.call();
            bytesWritten += static_cast<std::streamsize>( m_ptrFileOperationResult.read() );
            if( m_ptrFileOperationStatus.readS() != "Success" )
            {
                // no more space on device
                break;
            }
        }
        return bytesWritten;
    }
    /// \brief Read data from the device into a buffer
    /**
     *  \return number of bytes successfully read
     */
    std::streamsize read(
        /// Target buffer
        char* pBuf,
        /// Offset in the device file to read from
        int64_type offs,
        /// Number of bytes to read
        std::streamsize len,
        /// Name of the file to write into The filename must exist in the Enumeration FileSelector
        const char* pFileName )
    {
        m_ptrFileSelector.writeS( pFileName );
        m_ptrFileOperationSelector.writeS( "Read" );
        const std::streamsize maxReadLen = static_cast<std::streamsize>( m_ptrFileAccessBuffer.binaryDataBufferMaxSize() );
        std::streamsize bytesRead = 0;
        while( bytesRead < len )
        {
            // copy xchange buffer to streamdata
            const std::streamsize readSize = std::min( len - bytesRead, maxReadLen );
            // offset
            if( offs + bytesRead > m_ptrFileAccessOffset.getMaxValue() )
            {
                // we cannot move the inbuffer any further
                break;
            }
            m_ptrFileAccessOffset.write( offs + bytesRead );
            m_ptrFileAccessLength.write( readSize );
            // fetch file data into xchange buffer
            m_ptrFileOperationExecute.call();
            std::streamsize result = static_cast<std::streamsize>( m_ptrFileOperationResult.read() );
            std::string bufS( m_ptrFileAccessBuffer.readBinary() );
            memcpy( pBuf + bytesRead, bufS.c_str(), static_cast<size_t>( readSize ) );
            bytesRead += result;
            if( m_ptrFileOperationStatus.readS() != "Success" )
            {
                // reached end of file
                break;
            }
        }
        return bytesRead;
    }
    /// \brief Fetch max FileAccessBuffer length for a file
    /**
     *  \return Max length of FileAccessBuffer in the given mode on the given file
     */
    int64_type getBufSize(
        /// Name of the file to open. The filename must exist in the Enumeration FileSelector
        const char* pFileName,
        /// mode to open the file. The mode must exist in the Enunmeration FileOpenMode
        std::ios_base::openmode mode )
    {
        m_ptrFileSelector.writeS( pFileName );
        if( mode & ( std::ios_base::out | std::ios_base::trunc ) )
        {
            m_ptrFileOperationSelector.writeS( "Write" );
            return m_ptrFileAccessBuffer.binaryDataBufferMaxSize();
        }
        else if( mode & ( std::ios_base::in ) )
        {
            m_ptrFileOperationSelector.writeS( "Read" );
            return m_ptrFileAccessBuffer.binaryDataBufferMaxSize();
        }
        return 0;
    }
    /// \brief Fetch the size of the file currently selected on the device.
    /**
     *  \return The size(in bytes) of the file currently selected.
     */
    std::streamsize size( void ) const
    {
        return static_cast<std::streamsize>( m_ptrFileSize.read() );
    }
private:
    PropertyI64 m_ptrFileSelector;
    PropertyI64 m_ptrFileOperationSelector;
    Method      m_ptrFileOperationExecute;
    PropertyI64 m_ptrFileOpenMode;
    PropertyI64 m_ptrFileAccessOffset;
    PropertyI64 m_ptrFileAccessLength;
    PropertyS   m_ptrFileAccessBuffer;
    PropertyI64 m_ptrFileOperationStatus;
    PropertyI64 m_ptrFileOperationResult;
    PropertyI64 m_ptrFileSize;
};

//-----------------------------------------------------------------------------
/// \brief An input stream buffer derived from std::basic_streambuf used to read from a file of a device.
/**
 *  \note See description of the std::basic_streambuf in a STL implementation of
 *  your choice to find out more about how to use this object.
 */
template<typename CharType, typename Traits>
class IDevFileStreamBuf : public std::basic_streambuf<CharType, Traits>
//-----------------------------------------------------------------------------
{
    typedef Traits traits_type;
    typedef typename Traits::int_type int_type;
    typedef typename Traits::char_type char_type;
    typedef IDevFileStreamBuf<CharType, Traits> filebuf_type;
    // GET next ptr
    using std::basic_streambuf<CharType, Traits>::gptr;
    // GET end ptr
    using std::basic_streambuf<CharType, Traits>::egptr;
    // GET begin ptr
    using std::basic_streambuf<CharType, Traits>::eback;
    // increment next pointer
    using std::basic_streambuf<CharType, Traits>::gbump;
    // set buffer info
    using std::basic_streambuf<CharType, Traits>::setg;
public:
    /// \brief Constructs a new \b mvIMPACT::acquire::GenICam::IDevFileStreamBuf object.
    IDevFileStreamBuf() : m_pBuffer( 0 ), m_BufSize( 0 ), m_file( 0 ), m_pAdapter( 0 ), m_fpos( 0 ) {}
    /// \brief class destructor.
    ~IDevFileStreamBuf()
    {
        // catch and dump all exceptions - we're in a desctructor...
        try
        {
            this->close();
        }
        catch( ... ) {}
    }
    /// \brief Opens a file on the device.
    /**
     *  The member function calls rdbuf -> open(_Filename, _Mode | ios_base::in). If open fails,
     *  the function calls setstate(failbit), which may throw an ios_base::failure exception.
     */
    filebuf_type* open(
        /// A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// Name of the file to open
        const char* pFileName,
        /// File open mode. One of the enumerations in ios_base::openmode
        std::ios_base::openmode mode = std::ios_base::in )
    {
        m_pAdapter = new FileProtocolAdapter();
        if( !m_pAdapter )
        {
            return 0;
        }

        if( !m_pAdapter->attach( pDev ) || !m_pAdapter->openFile( pFileName, mode ) )
        {
            delete m_pAdapter;
            m_pAdapter = 0;
            return 0;
        }

        m_file = pFileName;
        // allocate buffer according to fileinfo
        m_BufSize = ( std::streamsize )m_pAdapter->getBufSize( m_file, mode );
        m_pBuffer = new char_type[static_cast<size_t>( m_BufSize ) / sizeof( char_type )];
        // setg(buffer+pbSize, buffer+pbSize, buffer+pbSize);
        setg( m_pBuffer, m_pBuffer + m_BufSize, m_pBuffer + m_BufSize );
#ifdef _MSC_VER
        // is this reasonable?
        std::basic_streambuf<CharType, Traits>::_Init();
#endif
        return this;
    }
    /// \brief Determines if a file is open.
    /**
     *  \return
     *  - true if the file is open
     *  - false otherwise
     */
    bool is_open( void ) const
    {
        return ( m_pAdapter != 0 ) && ( m_file != 0 );
    }
    /// \brief Fetch the size of the file currently selected on the device.
    /**
     *  \return The size(in bytes) of the file currently selected.
     */
    std::streamsize size( void ) const
    {
        return m_pAdapter ? m_pAdapter->size() : 0;
    }
    /// \brief Closes a file on the device.
    /**
     *  \return
     *  - A pointer to itself if successful
     *  - 0 otherwise
     */
    filebuf_type* close( void )
    {
        filebuf_type* ret = 0;
        if( this->is_open() )
        {
            if( m_pAdapter->closeFile( m_file ) )
            {
                // no error
                ret = this;
            }
        }
        delete m_pAdapter;
        m_pAdapter = 0;
        delete[] m_pBuffer;
        m_pBuffer = 0;
        return ret;
    }
protected:
    int_type underflow( void )
    {
        if( gptr() < egptr() )
        {
            return traits_type::to_int_type( *gptr() );
        }
        if( buffer_in() < 0 )
        {
            return traits_type::eof();
        }
        return traits_type::to_int_type( *gptr() );
    }
    int_type pbackfail( int_type c )
    {
        if( ( gptr() != eback() ) || ( eback() < gptr() ) )
        {
            gbump( -1 );
            if( !traits_type::eq_int_type( c, traits_type::eof() ) )
            {
                *( gptr() ) = static_cast<char_type>( traits_type::not_eof( c ) );
            }
            return traits_type::not_eof( c );
        }
        return traits_type::eof();
    }
private:
    char_type* m_pBuffer;
    std::streamsize m_BufSize;
    const char* m_file;
    FileProtocolAdapter* m_pAdapter;
    int64_type m_fpos;

    int buffer_in( void )
    {
        std::streamsize retval = m_pAdapter->read( m_pBuffer, m_fpos, m_BufSize, m_file );
        if( retval <= 0 )
        {
            setg( 0, 0, 0 );
            return -1;
        }
        setg( m_pBuffer, m_pBuffer, m_pBuffer + retval );
        m_fpos += retval;
        return static_cast<int>( retval );
    }

    // prohibit copying and assignment
    IDevFileStreamBuf( const IDevFileStreamBuf& );
    IDevFileStreamBuf& operator=( const IDevFileStreamBuf& );
};

//-----------------------------------------------------------------------------
/// \brief An output stream buffer derived from std::basic_streambuf used to write to a file on a device.
/**
 *  \note See description of the std::basic_streambuf in a STL implementation of
 *  your choice to find out more about how to use this object.
 */
template<typename CharType, typename Traits>
class ODevFileStreamBuf : public std::basic_streambuf<CharType, Traits>
//-----------------------------------------------------------------------------
{
    typedef Traits traits_type;
    typedef typename Traits::int_type int_type;
    typedef typename Traits::char_type char_type;
    typedef typename Traits::pos_type pos_type;
    typedef typename Traits::off_type off_type;
    typedef ODevFileStreamBuf<CharType, Traits> filebuf_type;
    // PUT begin
    using std::basic_streambuf<CharType, Traits>::pbase;
    // PUT next
    using std::basic_streambuf<CharType, Traits>::pptr;
    // PUT end
    using std::basic_streambuf<CharType, Traits>::epptr;
    // increment next pointer
    using std::basic_streambuf<CharType, Traits>::pbump;
public:
    /// \brief Constructs a new \b mvIMPACT::acquire::GenICam::ODevFileStreamBuf object.
    ODevFileStreamBuf() : m_pBuffer( 0 ), m_file( 0 ), m_pAdapter( 0 ), m_fpos( 0 ) {}
    /// \brief class destructor.
    ~ODevFileStreamBuf()
    {
        // catch and dump all exceptions - we're in a desctructor...
        try
        {
            this->close();
        }
        catch( ... ) {}
    }
    /// \brief Opens a file on the device.
    /**
     *  The member function calls rdbuf -> open(_Filename, _Mode | ios_base::in). If open fails,
     *  the function calls setstate(failbit), which may throw an ios_base::failure exception.
     */
    filebuf_type* open(
        /// A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// Name of the file to open
        const char* pFileName,
        /// File open mode
        std::ios_base::openmode mode )
    {
        m_pAdapter = new FileProtocolAdapter();
        if( !m_pAdapter )
        {
            return 0;
        }

        if( !m_pAdapter->attach( pDev ) || !m_pAdapter->openFile( pFileName, mode ) )
        {
            delete m_pAdapter;
            m_pAdapter = 0;
            return 0;
        }

        m_file = pFileName;
        // allocate buffer according to fileinfo
        const int64_type bufSize = m_pAdapter->getBufSize( m_file, mode );
        m_pBuffer = new char_type[static_cast<size_t>( bufSize ) / sizeof( char_type )];
        std::basic_streambuf<CharType, Traits>::setp( m_pBuffer, m_pBuffer + bufSize );
        return this;
    }
    /// \brief Determines if a file is open.
    /**
     *  \return
     *  - true if the file is open
     *  - false otherwise
     */
    bool is_open( void ) const
    {
        return ( m_pAdapter != 0 ) && ( m_file != 0 );
    }
    /// \brief Closes a file on the device.
    /**
     *  \return
     *  - A pointer to itself if successful
     *  - 0 otherwise
     */
    filebuf_type* close( void )
    {
        filebuf_type* ret = 0;
        bool syncFailed = false;
        if( this->is_open() )
        {
            if( sync() )
            {
                syncFailed = true;
            }
            if( m_pAdapter->closeFile( m_file ) )
            {
                ret = syncFailed ? 0 : this;
            }
        }
        delete m_pAdapter;
        m_pAdapter = 0;
        delete[] m_pBuffer;
        m_pBuffer = 0;
        return ret;
    }
protected:
    std::streamsize xsputn( const char_type* s, std::streamsize n )
    {
        if( n < epptr() - pptr() )
        {
            memcpy( pptr(), s, static_cast<size_t>( n ) * sizeof( char_type ) );
            pbump( static_cast<int>( n ) );
            return n;
        }
        else
        {
            for( std::streamsize i = 0; i < n; ++i )
            {
                if( traits_type::eq_int_type( std::basic_streambuf<CharType, Traits>::sputc( s[i] ), traits_type::eof() ) )
                {
                    return i;
                }
            }
            return n;
        }
    }
    int_type overflow( int_type c = traits_type::eof() )
    {
        if ( buffer_out() < 0 )
        {
            return traits_type::eof();
        }
        else if ( !traits_type::eq_int_type( c, traits_type::eof() ) )
        {
            return std::basic_streambuf<CharType, Traits>::sputc( static_cast<char_type>( c ) );
        }
        return traits_type::not_eof( c );
    }
    int sync( void )
    {
        return static_cast<int>( buffer_out() );
    }
private:
    char_type* m_pBuffer;
    const char* m_file;
    FileProtocolAdapter* m_pAdapter;
    int64_type m_fpos;

    int64_type buffer_out( void )
    {
        int64_type cnt = pptr() - pbase();
        int64_type retval;
        int64_type res = m_pAdapter->write( m_pBuffer, m_fpos, cnt, m_file );
        retval = ( res == cnt ) ? 0 : -1;
        m_fpos += res;
        pbump( -static_cast<int>( cnt ) );
        return retval;
    }

    // prohibit copying assignment
    ODevFileStreamBuf( const ODevFileStreamBuf& );
    ODevFileStreamBuf& operator=( const ODevFileStreamBuf& );
};

//-----------------------------------------------------------------------------
/// \brief An output stream buffer derived from std::basic_ostream used to write to a file on a device.
/**
 *  \note See description of the std::basic_ostream in a STL implementation of
 *  your choice to find out more about how to use this object.
 */
template<typename CharType, typename Traits>
class ODevFileStreamBase : public std::basic_ostream<CharType, Traits>
//-----------------------------------------------------------------------------
{
public:
    // Non-standard types:
    typedef ODevFileStreamBuf<CharType, Traits> filebuf_type;
    typedef std::basic_ios<CharType, Traits> ios_type;
    typedef std::basic_ostream<CharType, Traits> ostream_type;
private:
    filebuf_type m_streambuf;
public:
#if defined (_MSC_VER)
    /// \brief Constructs a new \b mvIMPACT::acquire::GenICam::ODevFileStreamBase object.
    ODevFileStreamBase() : ostream_type( std::_Noinit ), m_streambuf()
    {
        this->init( &m_streambuf );
    }
    /// \brief Constructs a new \b mvIMPACT::acquire::GenICam::ODevFileStreamBase object.
    ODevFileStreamBase(
        /// A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// Name of the file to open
        const char* pFileName,
        /// File open mode
        std::ios_base::openmode mode = std::ios_base::out | std::ios_base::trunc ) : ostream_type( std::_Noinit ), m_streambuf()
    {
        this->init( &m_streambuf );
        this->open( pDev, pFileName, mode );
    }
#elif defined (__GNUC__)
    /// \brief Constructs a new \b mvIMPACT::acquire::GenICam::ODevFileStreamBase object.
    ODevFileStreamBase() : ostream_type(), m_streambuf()
    {
        this->init( &m_streambuf );
    }
    /// \brief Constructs a new \b mvIMPACT::acquire::GenICam::ODevFileStreamBase object.
    ODevFileStreamBase(
        /// A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// Name of the file to open
        const char* pFileName,
        /// File open mode
        std::ios_base::openmode mode = std::ios_base::out | std::ios_base::trunc ) : ostream_type(), m_streambuf()
    {
        this->init( &m_streambuf );
        this->open( pDev, pFileName, mode );
    }
#else
#   error Unknown C++ library
#endif
    /// \brief Returns the address of the stored stream buffer.
    /**
     *  \return The address of the stored stream buffer.
     */
    filebuf_type* rdbuf( void ) const
    {
        return const_cast<filebuf_type*>( &m_streambuf );
    }
    /// \brief Determines if a file is open.
    /**
     *  \return
     *  - true if the file is open
     *  - false otherwise
     */
    bool is_open( void ) const
    {
        return m_streambuf.is_open();
    }
    /// \brief Open file on device in write mode
    void open(
        /// A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// Name of the file to open
        const char* pFileName,
        /// File open mode
        std::ios_base::openmode mode = std::ios_base::out | std::ios_base::trunc )
    {
        if( !m_streambuf.open( pDev, pFileName, mode ) )
        {
            this->setstate( std::ios_base::failbit );
        }
        else
        {
            this->clear();
        }
    }
    /// \brief Close the file on device.
    void close( void )
    {
        if( !m_streambuf.close() )
        {
            this->setstate( std::ios_base::failbit );
        }
    }
};

//-----------------------------------------------------------------------------
/// \brief An output stream buffer derived from std::basic_istream used to read from a file on a device.
/**
 *  \note See description of the std::basic_istream in a STL implementation of
 *  your choice to find out more about how to use this object.
 */
template<typename CharType, typename Traits>
class IDevFileStreamBase : public std::basic_istream<CharType, Traits>
//-----------------------------------------------------------------------------
{
public:
    // Non-standard types:
    typedef IDevFileStreamBuf<CharType, Traits> filebuf_type;
    typedef std::basic_ios<CharType, Traits> ios_type;
    typedef std::basic_istream<CharType, Traits> istream_type;
private:
    filebuf_type m_streambuf;
public:
#if defined (_MSC_VER)
    /// \brief Constructs a new \b mvIMPACT::acquire::GenICam::IDevFileStreamBase object.
    IDevFileStreamBase() : istream_type( std::_Noinit ), m_streambuf()
    {
        this->init( &m_streambuf );
    }
    /// \brief Constructs a new \b mvIMPACT::acquire::GenICam::IDevFileStreamBase object.
    IDevFileStreamBase(
        /// A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// Name of the file to open
        const char* pFileName,
        /// File open mode
        std::ios_base::openmode mode = std::ios_base::in ) : istream_type( std::_Noinit ), m_streambuf()
    {
        this->init( &m_streambuf );
        this->open( pDev, pFileName, mode );
    }
#elif defined (__GNUC__)
    /// \brief Constructs a new \b mvIMPACT::acquire::GenICam::IDevFileStreamBase object.
    IDevFileStreamBase() : istream_type(), m_streambuf()
    {
        this->init( &m_streambuf );
    }
    /// \brief Constructs a new \b mvIMPACT::acquire::GenICam::IDevFileStreamBase object.
    IDevFileStreamBase(
        /// A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// Name of the file to open
        const char* pFileName,
        /// File open mode
        std::ios_base::openmode mode = std::ios_base::in ) : istream_type(), m_streambuf()
    {
        this->init( &m_streambuf );
        this->open( pDev, pFileName, mode );
    }
#else
#   error Unknown C++ library
#endif
    /// \brief Returns the address of the stored stream buffer.
    /**
     *  \return The address of the stored stream buffer.
     */
    filebuf_type* rdbuf( void ) const
    {
        return const_cast<filebuf_type*>( &m_streambuf );
    }
    /// \brief Determines if a file is open.
    /**
     *  \return
     *  - true if the file is open
     *  - false otherwise
     */
    bool is_open( void ) const
    {
        return m_streambuf.is_open();
    }
    /// \brief Opens a file on the device.
    /**
     *  The member function calls rdbuf -> open(_Filename, _Mode | ios_base::in). If open fails,
     *  the function calls setstate(failbit), which may throw an ios_base::failure exception.
     */
    void open(
        /// A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// name of the file to open
        const char* pFileName,
        /// open mode
        std::ios_base::openmode mode = std::ios_base::in )
    {
        if( !m_streambuf.open( pDev, pFileName, mode ) )
        {
            this->setstate( std::ios_base::failbit );
        }
        else
        {
            this->clear();
        }
    }
    /// \brief Close the file on the device
    void close( void )
    {
        if( !m_streambuf.close() )
        {
            this->setstate( std::ios_base::failbit );
        }
    }
    /// \brief Returns the size of the file on the device
    std::streamsize size( void ) const
    {
        return m_streambuf.size();
    }
};

/// \brief A type for <b>char</b> type file access.
/**
 *  Provided for convenience only. This type represents an output file stream for <b>char</b> data.
 *  \if DOXYGEN_CPP_DOCUMENTATION
 *
 *  \b Example:
 * \code
 * //-----------------------------------------------------------------------------
 * void uploadUserFile( Device* pDev )
 * //-----------------------------------------------------------------------------
 * {
 *   string srcName = "Upload_Source.txt";
 *   string dstName = "UserFile"; // This name hase to be used.
 *   bool boOk = false;
 *
 *   try
 *   {
 *     // upload a file
 *     mvIMPACT::acquire::GenICam::ODevFileStream file;
 *     file.open( pDev, dstName.c_str() );
 *     if( !file.fail() )
 *     {
 *       FILE* pFile;
 *       size_t lSize;
 *       char * pBuffer;
 *       size_t result;
 *
 *       pFile = fopen( srcName.c_str(), "rb" );
 *       if( pFile != NULL )
 *       {
 *         // obtain file size:
 *         fseek( pFile , 0 , SEEK_END );
 *         lSize = ftell( pFile );
 *         rewind( pFile );
 *
 *         // allocate memory to contain the whole file:
 *         pBuffer = (char*)malloc( sizeof(char) * lSize );
 *         if( pBuffer )
 *         {
 *           // copy the file into the pBuffer:
 *           printf( "Copying file to pBuffer..." );
 *           result = fread( pBuffer, 1, lSize, pFile );
 *           if( result != lSize )
 *           {
 *             printf( "%s(%d): Could not read all data from file %s locally.\n", __FUNCTION__, __LINE__, srcName.c_str() );
 *           }
 *           else
 *           {
 *             // the whole file has been copied into 'pBuffer' now.
 *             //file.seekp();
 *             file.write( pBuffer, lSize );
 *             printf( "ready.\nSaving to flash..." );
 *             boOk = true;
 *           }
 *           free( pBuffer );
 *         }
 *         else
 *         {
 *           printf( "Memory error\n" );
 *         }
 *         fclose( pFile );
 *       }
 *       else
 *       {
 *         printf( "%s(%d): Could not open file %s with read access locally.\n", __FUNCTION__, __LINE__, srcName.c_str() );
 *       }
 *     }
 *     else
 *     {
 *       printf( "%s(%d): Could not open file %s with write access on device.\n", __FUNCTION__, __LINE__, dstName.c_str() );
 *     }
 *   }
 *   catch( const ImpactAcquireException& e )
 *   {
 *     // this e.g. might happen if the same device is already opened in another process...
 *     cout << "An error occurred while opening the device " << pDev->serial.read()
 *          << "(error code: " << e.getErrorCodeAsString() << "). Press [ENTER] to end the application..." << endl;
 *   }
 *   if( boOk )
 *   {
 *     printf( "ready.\nFile '%s' successfully uploaded to device.\n", srcName.c_str() );
 *   }
 * }
 * \endcode
 *  \endif
 */
typedef ODevFileStreamBase<char, std::char_traits<char> > ODevFileStream;
/// \brief A type for <b>char</b> type file access.
/**
 *  Provided for convenience only. This type represents an input file stream for <b>char</b> data.
 *  \if DOXYGEN_CPP_DOCUMENTATION
 *
 *  \b Example:
 * \code
 * //-----------------------------------------------------------------------------
 * void downloadUserFile( Device* pDev )
 * //-----------------------------------------------------------------------------
 * {
 *   string srcName = "UserFile";
 *   string dstName = "Downloaded_file.txt";
 *   bool boOk = false;
 *
 *   try
 *   {
 *     // download a file
 *     mvIMPACT::acquire::GenICam::IDevFileStream file;
 *     file.open( pDev, srcName.c_str() );
 *     if( !file.fail() )
 *     {
 *       FILE* pFile;
 *       size_t lSize;
 *       char * pBuffer;
 *       size_t result;
 *
 *       lSize = file.size();
 *       // allocate memory to contain the whole file:
 *       pBuffer = (char*)malloc( sizeof(char) * lSize );
 *       if( pBuffer )
 *       {
 *         // copy the file into the pBuffer:
 *         printf( "Copying from flash to pBuffer..." );
 *         file.read( pBuffer, lSize );
 *         printf( "Ready.\n" );
 *         // write pBuffer to file
 *         pFile = fopen( dstName.c_str(), "wb" );
 *         if( pFile != NULL )
 *         {
 *           result = fwrite( pBuffer, 1, lSize, pFile );
 *           if( result != lSize )
 *           {
 *             printf( "%s(%d): Could not write all data to file %s locally.\n", __FUNCTION__, __LINE__, dstName.c_str() );
 *           }
 *           else
 *           {
 *             boOk = true;
 *           }
 *         }
 *         else
 *         {
 *           printf( "%s(%d): Could not open file %s with write access locally.\n", __FUNCTION__, __LINE__, dstName.c_str() );
 *         }
 *         free( pBuffer );
 *         fclose( pFile );
 *       }
 *       else
 *       {
 *         printf("Memory error\n");
 *       }
 *     }
 *     else
 *     {
 *       printf( "%s(%d): Could not open file %s with read access on device.\n", __FUNCTION__, __LINE__, srcName.c_str() );
 *     }
 *   }
 *   catch( const ImpactAcquireException& e )
 *   {
 *     // this e.g. might happen if the same device is already opened in another process...
 *      cout << "An error occurred while opening the device " << pDev->serial.read()
 *           << "(error code: " << e.getErrorCodeAsString() << "). Press [ENTER] to end the application..." << endl;
 *   }
 *   if( boOk )
 *   {
 *     printf( "User file successfully saved to file '%s'.\n", dstName.c_str() );
 *   }
 * }
 * \endcode
 *  \endif
 */
typedef IDevFileStreamBase<char, std::char_traits<char> > IDevFileStream;

/// @}

} // namespace GenICam
} // namespace acquire
} // namespace mvIMPACT

#ifdef _MSC_VER
#   pragma pop_macro("min")
#endif

#endif // MVIMPACT_ACQUIRE__GENICAM__FILESTREAM_H_
