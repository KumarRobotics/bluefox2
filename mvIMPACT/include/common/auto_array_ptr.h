//-----------------------------------------------------------------------------
#ifndef auto_array_ptrH
#define auto_array_ptrH auto_array_ptrH
//-----------------------------------------------------------------------------
#include <stddef.h>
#include <string.h>
//-----------------------------------------------------------------------------
/// \brief A automatically managed buffer type to handle subscriptable data.
template<class T>
class auto_array_ptr
//-----------------------------------------------------------------------------
{
    size_t  m_cnt;
    T*      m_pBuf;
public:
    auto_array_ptr( size_t initialSize = 0 ) : m_cnt( initialSize ), m_pBuf( 0 )
    {
        if( initialSize > 0 )
        {
            m_pBuf = new T[initialSize];
        }
    }
    /// \brief Pass ownership to the new object.
    auto_array_ptr( auto_array_ptr& rhs ) : m_cnt( rhs.m_cnt ), m_pBuf( rhs.release() ) {}
    /// \brief Pass ownership to the new object.
    ///
    /// Do NOT delete the original T*. This is done by this class now.
    auto_array_ptr( T* pBuf, size_t cnt ) : m_cnt( cnt ), m_pBuf( pBuf ) {}
    ~auto_array_ptr()
    {
        delete [] m_pBuf;
    }
    // functions
    operator T* ()
    {
        return m_pBuf;
    }
    /// \brief Pass ownership. Old buffer on the left hand side object is
    /// freed, the lhs object takes ownership of the buffer of the rhs object.
    auto_array_ptr& operator=( auto_array_ptr& rhs )
    {
        if( this != &rhs )
        {
            delete [] m_pBuf;
            m_cnt = rhs.m_cnt;
            m_pBuf = rhs.release();
        }
        return *this;
    }
    /// \brief If the new size differs from the current one free old buffer, allocate new buffer.
    void realloc( size_t newSize )
    {
        if( newSize != m_cnt )
        {
            delete [] m_pBuf;
            m_pBuf = ( newSize > 0 ) ? new T[newSize] : 0;
            m_cnt = newSize;
        }
    }
    /// \brief Increases the buffer size if necessary and keeps the old data.
    void grow( size_t newSize )
    {
        if( newSize > m_cnt )
        {
            T* p = new T[newSize];
            memcpy( p, m_pBuf, m_cnt );
            delete [] m_pBuf;
            m_pBuf = p;
            m_cnt = newSize;
        }
    }
    /// \brief Release ownership, return pointer to buffer.
    T* release( void )
    {
        T* p = m_pBuf;
        m_pBuf = 0;
        m_cnt = 0;
        return p;
    }
    /// \brief Return pointer to buffer.
    T* get( void )
    {
        return m_pBuf;
    }
    /// \brief Return const pointer to buffer.
    const T* get( void ) const
    {
        return m_pBuf;
    }
    /// \brief Return element count.
    size_t parCnt( void ) const
    {
        return m_cnt;
    }
};

#endif // auto_array_ptr
