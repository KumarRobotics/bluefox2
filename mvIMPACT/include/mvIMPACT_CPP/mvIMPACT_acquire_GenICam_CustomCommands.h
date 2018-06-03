//-----------------------------------------------------------------------------
#ifndef MVIMPACT_ACQUIRE_CUSTOM_COMMANDS_H
#ifndef DOXYGEN_SHOULD_SKIP_THIS
#   define MVIMPACT_ACQUIRE_CUSTOM_COMMANDS_H MVIMPACT_ACQUIRE_CUSTOM_COMMANDS_H
#endif // #ifndef DOXYGEN_SHOULD_SKIP_THIS
//-----------------------------------------------------------------------------
#include <mvIMPACT_CPP/mvIMPACT_acquire_GenICam.h>

#ifndef WRAP_ANY
#   include <common/auto_array_ptr.h>
#   include <limits.h>
#endif // #ifndef WRAP_ANY

#ifdef _MSC_VER // is Microsoft compiler?
#   pragma warning( push )
#   if _MSC_VER < 1300 // is 'old' VC 6 compiler?
#       pragma warning( disable : 4786 ) // 'identifier was truncated to '255' characters in the debug information'
#       define __FUNCTION__ "No function name information as the __FUNCTION__ macro is not supported by this(VC 6) compiler"
#       pragma message( "WARNING: This header(" __FILE__ ") uses the __FUNCTION__ macro, which is not supported by this compiler. A default definition(\"" __FUNCTION__ "\") will be used!" )
#       pragma message( "WARNING: This header(" __FILE__ ") uses inheritance for exception classes. However this compiler can't handle this correctly. Trying to catch a specific exception by writing a catch block for a base class will not work!" )
#   endif // #if _MSC_VER < 1300
#   pragma warning( disable : 4512 ) // 'assignment operator could not be generated' (reason: assignment operators declared 'private' but not implemented)
#endif // #ifdef _MSC_VER

#ifndef WRAP_ANY
#   if CHAR_BIT != 8
#       error "unsupported char size"
#   endif
#endif // #ifndef WRAP_ANY

#include <DriverBase/Include/mvCustomCommandDataTypes.h> // C-API header will be imported into mvIMPACT::acquire::GenICam if included from here

namespace mvIMPACT
{
namespace acquire
{
namespace GenICam
{

/// \ingroup GenICamInterfaceDevice
/// @{

//-----------------------------------------------------------------------------
/// \brief Contains convenience functions to control features understood by a devices custom command interpreter.
/**
* Contains convenience functions to control features understood by a devices custom command interpreter.
* \note Creating an instance of this class will only succeed when the device associated with this object
* supports the <b>mvIMPACT::acquire::GenICam::mvCustomData.mvCustomCommandBuffer</b> feature. If the
* feature is not supported an exception will be raised!
*
* This class will allow to create various special commands understood by <b>MATRIX VISION GmbH</b> devices.
* For example an application can modify parameters in a running sequencer program without stopping the
* acquisition engine and/or the sequencer program
* (see <b>mvIMPACT::acquire::GenICam::SequencerControl</b> and the corresponding use cases for details).
* This allows changes to be applied much faster than with a conventional approach which would work like this:
* \code
*  mvIMPACT::acquire::GenICam::AcquisitionControl ac( getDevicePointerFromSomewhere() );
*  mvIMPACT::acquire::GenICam::SequencerControl sc( getDevicePointerFromSomewhere() );
*  sc.sequencerMode.writeS( "Off" );
*  sc.sequencerConfigurationMode.writeS( "On" );
*  sc.sequencerSetSelector.write( 2 );
*  sc.sequencerSetLoad.call(); // needed as otherwise other parameters in the set might get changed as well.
*  ac.exposureTime.write( 20000 );
*  sc.sequencerSetSave.call();
*  sc.sequencerConfigurationMode.writeS( "Off" );
*  sc.sequencerMode.writeS( "On" );
* \endcode
*
* A single parameter in a defined sequencer set can be modified much faster at runtime like this:
*
* \code
*  mvIMPACT::acquire::GenICam::CustomCommandGenerator ccg( getDevicePointerFromSomewhere() );
*  // change the exposure time in sequencer set 2 to 30000 us.
*  ccg.modifySequencerSetValue( 2, sspExposureTime, 30000 );
* \endcode
*
* \attention In a real world application the instance of <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator</b> should be a member of a class
* or stored elsewhere as constructing objects from the <b>mvIMPACT::acquire::GenICam</b> namespace is taking time so this shouldn't be done for each command
* that shall be sent!
*
* This class uses an internal command buffer which allows an application to send multiple change commands in a single packet.
* This can be achieved like this:
*
* \code
*  mvIMPACT::acquire::GenICam::CustomCommandGenerator ccg( getDevicePointerFromSomewhere() );
*  // queue 2 parameter change requests
*  // change the \c AnalogAll gain in sequencer set 0 to 3.14 dB.
*  ccg.queueSequencerSetValueModification( 0, sspGain_AnalogAll, 3.14 );
*  // change the exposure time in sequencer set 1 to 20000 us.
*  ccg.queueSequencerSetValueModification( 1, sspExposureTime, 20000 );
*  // send the 2 modifications in a single package
*  ccg.sendCommandBuffer();
* \endcode
*
* The command queue NEVER overflows. When no more data can be stored in the queue before queuing the next parameter
* change all the pending changes will be transmitted to the device. Calling <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator.queueSequencerSetValueModification</b>
* and <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator.sendCommandBuffer</b> directly afterwards is equivalent to call
* <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator.modifySequencerSetValue</b>. So the previous example can also be rewritten like this:
*
* \code
*  mvIMPACT::acquire::GenICam::CustomCommandGenerator ccg = new mvIMPACT::acquire::GenICam::CustomCommandGenerator( getDevicePointerFromSomewhere() );
*  // queue 2 parameter change requests
*  // change the \c AnalogAll gain in sequencer set 0 to 3.14 dB.
*  ccg.queueSequencerSetValueModification( 0, sspGain_AnalogAll, 3.14 );
*  // change the exposure time in sequencer set 1 to 20000 us and send both requests to the device in a single packet.
*  ccg.modifySequencerSetValue( 1, sspExposureTime, 20000 );
* \endcode
*
* Because there can never be an overflow of the command queue even this code is valid:
* \code
*  for( int i = 0; i < 100; i += 2 )
*  {
*    // if the command buffer is full everything should be sent to the device thus no error should be returned here
*    ccg.queueSequencerSetValueModification( i % 5, GenICam.sspCounterDuration_Counter1, i * 100 );
*    ccg.queueSequencerSetValueModification( i % 5, GenICam.sspExposureTime, ac.exposureTime.minValue + static_cast<double>( i * 10 ) );
* }
* \endcode
*
* Apart from modifying sequencer sets at runtime some <b>MATRIX VISION GmbH</b> devices support the so called <tt>Smart Frame Recall</tt> feature.
* For more information about the feature itself please refer to the corresponding use case in the product documentation. There is also a C++ example
* called \b GenICamSmartFrameRecallUsage.cpp which can be read to get a first glimpse. The source code and the documentation of this example can be found in the C++
* version of this documentation. The <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator</b> provides functions to request a full resolution
* version of an image based on a <b>mvIMPACT::acquire::Request</b> object containing an image with
* reduced resolution passed to it (internally the relevant piece of information is the timestamp of the image to request). To request an image an
* application can call one of the various versions of the <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator.requestTransmission</b> functions.
*
* \code
* int64_type getNextRandomValue( Random r, int64_type min, int64_type max )
* {
*   int64_type value = min + static_cast<int64_type>( ( max - min + 1 ) * r.NextDouble() );
*   return value < min ? min : value > max ? max : value;
* }
* // switch on the smart frame recall feature
* mvIMPACT::acquire::GenICam::AcquisitionControl ac( pDev );
* ac.mvSmartFrameRecallEnable.write( bTrue );
* // more code
* Request* pRequest = getRequestFromSomewhere();
* // request the transmission of an arbitrary ROI of this image in full resolution
* int w = getNextRandomValue( r, 1, pRequest->imageWidth.read() );
* int h = getNextRandomValue( r, 1, pRequest->imageHeight.read() );
* int x = getNextRandomValue( r, 0, pRequest->imageWidth.read() - w );
* int y = getNextRandomValue( r, 0, pRequest->imageHeight.read() - h );
* ccg.requestTransmission( pRequest, x, y, w, h, rtmFullResolution );
* \endcode
*
* To allow the application to distinguish easily between images belonging to the reduced data stream and the ones that have been explicitly requested
* by the application the <b>mvIMPACT::acquire::Request.chunkmvCustomIdentifier</b> can be used. When requesting a full resolution ROI the application can
* tag the requested images with a custom identifier. This identifier is later returned in the chunk data of the image. The following example demonstrates
* how to use this feature:
*
* \code
* // switch on the smart frame recall feature
* mvIMPACT::acquire::GenICam::AcquisitionControl ac( pDev );
* ac.mvSmartFrameRecallEnable.write( bTrue );
* // the chunk mode must be switched on to use chunk data for processing:
* mvIMPACT::acquire::GenICam::ChunkDataControl cdc( getDevicePointerFromSomewhere() );
* cdc.chunkModeActive.write( bTrue );
* cdc.chunkSelector.writeS("Image");
* cdc.chunkEnable.write( bTrue );
* // enable the 'mvCustomIdentifier' chunk
* cdc.chunkSelector.writeS("mvCustomIdentifier");
* cdc.chunkEnable.write( bTrue );
* // more code ...
* Request* pRequest = getRequestFromSomewhere();
* uint customID = 42;
* Request pRequest = getRequestFromSomewhere();
* if( pRequest->chunkmvCustomIdentifier.read() == 0 )
* {
*   // As the 'mvCustomIdentifier' is 0 this is a frame from the normal stream
*   Rect r;
*   if( doesImageContainInteresstingData( r ) )
*   {
*     // request the transmission of the interesting ROI this image in full resolution
*     ccg.requestTransmission( pRequest, r.x, r.y, r.w, r.h, rtmFullResolution, customID );
*   }
* }
* else if( pRequest->chunkmvCustomIdentifier.read() == static_cast<int64_type>( customID ) )
* {
*   // As the 'mvCustomIdentifier' is 'customID' this is a frame explicitly requested by the application
*   processImage( pRequest );
* }
* else
* {
*   // some other ID (this however must have been set by the application as well)
* }
* // normal 'unlocking' code for requests should reside here!!
* // more code...
* \endcode
*
* \since 2.18.0
*/
/// \ingroup GenICamInterfaceDevice
class CustomCommandGenerator
//-----------------------------------------------------------------------------
{
#if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
    enum THostByteOrder
    {
        O32_LITTLE_ENDIAN = 0x03020100ul,
        //O32_PDP_ENDIAN = 0x01000302ul, // we don't handle PDP endianess here!
        O32_BIG_ENDIAN = 0x00010203ul
    };
    class O32HostByteOrderEvaluator
    {
        union Helper
        {
            unsigned char bytes[4];
            uint32_type value;
        } h_;
    public:
        explicit O32HostByteOrderEvaluator()
        {
            for( unsigned char i = 0; i < 4; i++ )
            {
                h_.bytes[i] = i;
            }
        }
        THostByteOrder get32BitHostByteOrder( void ) const
        {
            return static_cast<THostByteOrder>( h_.value );
        }
    };

protected:
    template<typename _Ty>
    _Ty hostToNet16( _Ty value )
    {
        switch( O32HostByteOrderEvaluator_.get32BitHostByteOrder() )
        {
        case O32_LITTLE_ENDIAN:
            return ( ( value & 0xff00 ) >> 8 ) | ( ( value & 0x00ff ) << 8 );
        case O32_BIG_ENDIAN:
            break;
        }
        return value;
    }
    template<typename _Ty>
    _Ty hostToNet32( _Ty value )
    {
        switch( O32HostByteOrderEvaluator_.get32BitHostByteOrder() )
        {
        case O32_LITTLE_ENDIAN:
            return ( ( value & 0xff000000 ) >> 24 ) | ( ( value & 0x00ff0000 ) >> 8 ) | ( ( value & 0x0000ff00 ) << 8 ) | ( ( value & 0x000000ff ) << 24 );
        case O32_BIG_ENDIAN:
            break;
        }
        return value;
    }
    mvCustomData cd_;
    O32HostByteOrderEvaluator O32HostByteOrderEvaluator_;
    auto_array_ptr<char> commandBuffer_;
    size_t currentCommandBufferOffset_;
    int16_type currentCommandRequestID_;
    int16_type mvCustomCommandInterpreterVersionMajor_;
    int16_type mvCustomCommandInterpreterVersionMinor_;

    bool checkMinInterpreterVersion( int16_type versionMajor, int16_type versionMinor ) const
    {
        if( mvCustomCommandInterpreterVersionMajor_ < versionMajor )
        {
            return false;
        }
        if( mvCustomCommandInterpreterVersionMajor_ > versionMajor )
        {
            return true;
        }
        return mvCustomCommandInterpreterVersionMinor_ >= versionMinor;
    }
    void prepareCommandBuffer( void )
    {
        commandBuffer_.realloc( cd_.mvCustomCommandBuffer.binaryDataBufferMaxSize() );
        memset( commandBuffer_.get(), 0, commandBuffer_.parCnt() );
        currentCommandBufferOffset_ = sizeof( CustomCommandProtocolHeader );
    }
    void prepareCommandProtocolHeader( char* pBuf, const uint16_type commandSize )
    {
        CustomCommandProtocolHeader* pHeader = reinterpret_cast<CustomCommandProtocolHeader*>( pBuf );
        pHeader->interpreterVersionMajor = hostToNet16( uint16_type( mvCustomCommandInterpreterVersionMajor_ ) );
        pHeader->interpreterVersionMinor = hostToNet16( uint16_type( mvCustomCommandInterpreterVersionMinor_ ) );
        pHeader->totalMessageLength = hostToNet16( commandSize );
        pHeader->request_id = hostToNet16( currentCommandRequestID_++ );
    }
    void prepareCustomCommandHeader( char* pBuf, const TCustomCommand command, const size_t messageLength )
    {
        CustomCommandHeader* pPacket = reinterpret_cast<CustomCommandHeader*>( pBuf );
        pPacket->command = hostToNet16( uint16_type( command ) );
        pPacket->messageLength = hostToNet16( uint16_type( messageLength ) );
    }
    void prepareCustomCommandUpdateSequencerSet( char* pBuf, const TCustomCommand command, const size_t messageLength, const int64_type sequencerSet, const TSequencerSetParameter parameter )
    {
        prepareCustomCommandHeader( pBuf, command, messageLength );
        CustomCommandUpdateSequencerSet* pPacket = ( CustomCommandUpdateSequencerSet* )( pBuf );
        pPacket->sequencerSet = hostToNet16( static_cast<uint16_type>( sequencerSet ) );
        pPacket->sequencerSetParameter = hostToNet16( static_cast<uint16_type>( parameter ) );
    }
    int queueCustomCommandPreCondition( const size_t sizeOfCommand )
    {
        int result = DMR_NO_ERROR;
        if( currentCommandBufferOffset_ == 0 )
        {
            prepareCommandBuffer();
        }
        else if( ( currentCommandBufferOffset_ + sizeOfCommand ) > commandBuffer_.parCnt() )
        {
            result = sendCommandBuffer();
            prepareCommandBuffer();
        }
        return result;
    }
    int sendCommandBuffer( const char* pBuf, const size_t bufSize )
    {
        if( !pBuf || ( bufSize < sizeof( CustomCommandProtocolHeader ) ) )
        {
            return DMR_INVALID_PARAMETER;
        }
        const std::string bufS( pBuf, bufSize );
        try
        {
            cd_.mvCustomCommandBuffer.writeBinary( bufS );
        }
        catch( const ImpactAcquireException& e )
        {
            return e.getErrorCode();
        }
        return DMR_NO_ERROR;
    }
#endif // #if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator</b> object.
    explicit CustomCommandGenerator(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) : cd_( pDev, settingName ),
        O32HostByteOrderEvaluator_(), commandBuffer_(), currentCommandBufferOffset_( 0 ),
        currentCommandRequestID_( 0 )
    {
        mvCustomCommandInterpreterVersionMajor_ = static_cast<int16_type>( cd_.mvCustomCommandInterpreterVersionMajor.read() );
        mvCustomCommandInterpreterVersionMinor_ = static_cast<int16_type>( cd_.mvCustomCommandInterpreterVersionMinor.read() );
        if( mvCustomCommandInterpreterVersionMajor_ > 2 )
        {
            // this interpreter currently does not support versions > 2
            mvCustomCommandInterpreterVersionMajor_ = 2;
            mvCustomCommandInterpreterVersionMinor_ = 0;
        }
    }
    /// \brief Discards all pending custom commands to the device.
    /**
     * This function will discard all pending custom commands. After calling this function
     * the pending command queue will be empty an can be filled with new commands.
     *
     * \since 2.18.0
     *
     * \return
     * - \b mvIMPACT::acquire::DMR_NO_ERROR if successful.
     * - A negative error code of type \b mvIMPACT::acquire::TDMR_ERROR otherwise.
     */
    void discardCommandBuffer()
    {
        if( commandBuffer_.parCnt() > 0 )
        {
            memset( commandBuffer_.get(), 0, commandBuffer_.parCnt() );
        }
        currentCommandBufferOffset_ = 0;
    }
    /// \brief Request the transmission of an image with a certain timestamp in a different mode/ROI.
    /**
     * If <b>mvIMPACT::acquire::GenICam::AcquisitionControl::mvSmartFrameRecallEnable</b> is set to <b>mvIMPACT::acquire::bTrue</b> this
     * function can be used to request the transmission of the image currently associated with \c pRequest in a different mode/resolution.
     * One use case would be to transmit every image taken by the sensor with a very coarse resolution e.g. by setting the properties
     * <b>mvIMPACT::acquire::GenICam::ImageFormatControl::decimationHorizontal</b> and/or <b>mvIMPACT::acquire::GenICam::ImageFormatControl::decimationVertical</b>
     * to values greater than 1. When then an algorithm finds something interesting within an image this function can be used to request the transmission
     * of the very same image in full resolution for detailed processing.
     *
     * \since 2.18.1
     *
     * \return
     * - \b mvIMPACT::acquire::DMR_NO_ERROR if successful.
     * - A negative error code of type \b mvIMPACT::acquire::TDMR_ERROR otherwise.
     */
    int queueTransmissionRequest(
        /// [in] The timestamp of the <b>mv.impact.acquire.Request</b> object shall be transmitted again.
        int64_type timestamp_us,
        /// [in] The X-offset of the ROI of the image that shall be transmitted within the current image.
        int offsetX,
        /// [in] The Y-offset of the ROI of the image that shall be transmitted within the current image.
        int offsetY,
        /// [in] The width of the ROI of the image that shall be transmitted within the current image.
        int width,
        /// [in] The height of the ROI of the image that shall be transmitted within the current image.
        int height,
        /// [in] The mode in which this image shall be transmitted.
        TRequestTransmissionMode mode = rtmFullResolution,
        /// [in] A user defined identifier that shall be attached to the image that will be sent as a result of calling this function. This value will be written into the
        /// <b>mvIMPACT::acquire::Request::chunkmvCustomIdentifier</b> property so in order to actually benefit from this parameter the corresponding chunk must be enabled.
        /// See <b>mvIMPACT::acquire::GenICam::ChunkDataControl</b> for details.
        unsigned int identifier = 0 )
    {
        if( !cd_.mvCustomCommandBuffer.isValid() )
        {
            return DMR_FEATURE_NOT_AVAILABLE;
        }
        if( mode != rtmFullResolution )
        {
            return DMR_FEATURE_NOT_AVAILABLE;
        }
        const int result = queueCustomCommandPreCondition( sizeof( CustomCommandSendFrame ) );
        prepareCustomCommandHeader( commandBuffer_.get() + currentCommandBufferOffset_, ccSendFrame, sizeof( CustomCommandSendFrame ) - sizeof( CustomCommandHeader ) );
        CustomCommandSendFrame* pPacket = ( CustomCommandSendFrame* )( commandBuffer_.get() + sizeof( CustomCommandProtocolHeader ) );
        pPacket->offsetX = hostToNet32( static_cast<uint32_type>( offsetX ) );
        pPacket->offsetY = hostToNet32( static_cast<uint32_type>( offsetY ) );
        pPacket->width = hostToNet32( static_cast<uint32_type>( width ) );
        pPacket->height = hostToNet32( static_cast<uint32_type>( height ) );
        pPacket->identifier = hostToNet32( identifier );
        pPacket->timestamp_high = hostToNet32( static_cast<uint32_type>( ( timestamp_us >> 32 ) & 0xFFFFFFFF ) );
        pPacket->timestamp_low = hostToNet32( static_cast<uint32_type>( timestamp_us & 0xFFFFFFFF ) );
        currentCommandBufferOffset_ += sizeof( CustomCommandSendFrame );
        return result;
    }
    /// \brief Request the transmission of an image currently associated with the Request object in a different mode/ROI.
    /**
     * If <b>mvIMPACT::acquire::GenICam::AcquisitionControl::mvSmartFrameRecallEnable</b> is set to <b>mvIMPACT::acquire::bTrue</b> this
     * function can be used to request the transmission of the image currently associated with \c pRequest in a different mode/resolution.
     * One use case would be to transmit every image taken by the sensor with a very coarse resolution e.g. by setting the properties
     * <b>mvIMPACT::acquire::GenICam::ImageFormatControl::decimationHorizontal</b> and/or <b>mvIMPACT::acquire::GenICam::ImageFormatControl::decimationVertical</b>
     * to values greater than 1. When then an algorithm finds something interesting within an image this function can be used to request the transmission
     * of the very same image in full resolution for detailed processing.
     *
     * \since 2.18.1
     *
     * \return
     * - \b mvIMPACT::acquire::DMR_NO_ERROR if successful.
     * - A negative error code of type \b mvIMPACT::acquire::TDMR_ERROR otherwise.
     */
    int queueTransmissionRequest(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Request</b> object currently associated with the image that shall be transmitted again.
        const Request* pRequest,
        /// [in] The X-offset of the ROI of the image that shall be transmitted within the current image.
        int offsetX,
        /// [in] The Y-offset of the ROI of the image that shall be transmitted within the current image.
        int offsetY,
        /// [in] The width of the ROI of the image that shall be transmitted within the current image.
        int width,
        /// [in] The height of the ROI of the image that shall be transmitted within the current image.
        int height,
        /// [in] The mode in which this image shall be transmitted.
        TRequestTransmissionMode mode = rtmFullResolution,
        /// [in] A user defined identifier that shall be attached to the image that will be sent as a result of calling this function. This value will be written into the
        /// <b>mvIMPACT::acquire::Request::chunkmvCustomIdentifier</b> property so in order to actually benefit from this parameter the corresponding chunk must be enabled.
        /// See <b>mvIMPACT::acquire::GenICam::ChunkDataControl</b> for details.
        unsigned int identifier = 0 )
    {
        return queueTransmissionRequest( pRequest->infoTimeStamp_us.read(), offsetX, offsetY, width, height, mode, identifier );
    }
    /// \brief Request the transmission of an image currently associated with the Request object in full resolution.
    /**
     * If <b>mvIMPACT::acquire::GenICam::AcquisitionControl::mvSmartFrameRecallEnable</b> is set to <b>mvIMPACT::acquire::bTrue</b> this
     * function can be used to queue the transmission request of the image currently associated with \c pRequest in full resolution.
     * One use case would be to transmit every image taken by the sensor with a very coarse resolution e.g. by setting the properties
     * <b>mvIMPACT::acquire::GenICam::ImageFormatControl::decimationHorizontal</b> and/or <b>mvIMPACT::acquire::GenICam::ImageFormatControl::decimationVertical</b>
     * to values greater than 1. When then an algorithm finds something interesting within an image this function can be used to request the transmission
     * of the very same image in full resolution for detailed processing.
     *
     * The actual transmission request will not be sent to the device until <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator::sendCommandBuffer</b>
     * is called. With this function multiple commands can be sent to a device at once. When the new
     * command does not fit inside the internal command queue any more all pending commands will be sent
     * to the device before the new one is put into the queue.
     *
     * \sa
     * \b mvIMPACT::acquire::GenICam::CustomCommandGenerator::sendCommandBuffer
     *
     * \since 2.18.1
     *
     * \return
     * - \b mvIMPACT::acquire::DMR_NO_ERROR if successful.
     * - A negative error code of type \b mvIMPACT::acquire::TDMR_ERROR otherwise.
     */
    int queueTransmissionRequest(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Request</b> object currently associated with the image that shall be transmitted again.
        const Request* pRequest,
        /// [in] A user defined identifier that shall be attached to the image that will be sent as a result of calling this function. This value will be written into the
        /// <b>mvIMPACT::acquire::Request::chunkmvCustomIdentifier</b> property so in order to actually benefit from this parameter the corresponding chunk must be enabled.
        /// See <b>mvIMPACT::acquire::GenICam::ChunkDataControl</b> for details.
        unsigned int identifier = 0 )
    {
        return queueTransmissionRequest( pRequest,
                                         pRequest->imageOffsetX.read(),
                                         pRequest->imageOffsetY.read(),
                                         pRequest->imageWidth.read(),
                                         pRequest->imageHeight.read(),
                                         rtmFullResolution,
                                         identifier );
    }
    /// \brief Request the transmission of an image with a certain timestamp in a different mode/ROI.
    /**
     * This is a convenience function combining a call to <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator::queueTransmissionRequest</b>
     * directly followed by a call to <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator::sendCommandBuffer</b>. Commands which have been
     * queued before and have not yet been sent will be sent as well when calling this function.
     *
     * If <b>mvIMPACT::acquire::GenICam::AcquisitionControl::mvSmartFrameRecallEnable</b> is set to <b>mvIMPACT::acquire::bTrue</b> this
     * function can be used to request the transmission of the image currently associated with \c pRequest in a different mode/resolution.
     * One use case would be to transmit every image taken by the sensor with a very coarse resolution e.g. by setting the properties
     * <b>mvIMPACT::acquire::GenICam::ImageFormatControl::decimationHorizontal</b> and/or <b>mvIMPACT::acquire::GenICam::ImageFormatControl::decimationVertical</b>
     * to values greater than 1. When then an algorithm finds something interesting within an image this function can be used to request the transmission
     * of the very same image in full resolution for detailed processing.
     *
     * \since 2.18.1
     *
     * \return
     * - \b mvIMPACT::acquire::DMR_NO_ERROR if successful.
     * - A negative error code of type \b mvIMPACT::acquire::TDMR_ERROR otherwise.
     */
    int requestTransmission(
        /// [in] The timestamp of the <b>mv.impact.acquire.Request</b> object shall be transmitted again.
        int64_type timestamp_us,
        /// [in] The X-offset of the ROI of the image that shall be transmitted within the current image.
        int offsetX,
        /// [in] The Y-offset of the ROI of the image that shall be transmitted within the current image.
        int offsetY,
        /// [in] The width of the ROI of the image that shall be transmitted within the current image.
        int width,
        /// [in] The height of the ROI of the image that shall be transmitted within the current image.
        int height,
        /// [in] The mode in which this image shall be transmitted.
        TRequestTransmissionMode mode = rtmFullResolution,
        /// [in] A user defined identifier that shall be attached to the image that will be sent as a result of calling this function. This value will be written into the
        /// <b>mvIMPACT::acquire::Request::chunkmvCustomIdentifier</b> property so in order to actually benefit from this parameter the corresponding chunk must be enabled.
        /// See <b>mvIMPACT::acquire::GenICam::ChunkDataControl</b> for details.
        unsigned int identifier = 0 )
    {
        const int result = queueTransmissionRequest( timestamp_us, offsetX, offsetY, width, height, mode, identifier );
        if( result != DMR_NO_ERROR )
        {
            return result;
        }
        return sendCommandBuffer();
    }
    /// \brief Request the transmission of an image currently associated with the Request object in a different mode/ROI.
    /**
     * This is a convenience function combining a call to <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator::queueTransmissionRequest</b>
     * directly followed by a call to <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator::sendCommandBuffer</b>. Commands which have been
     * queued before and have not yet been sent will be sent as well when calling this function.
     *
     * If <b>mvIMPACT::acquire::GenICam::AcquisitionControl::mvSmartFrameRecallEnable</b> is set to <b>mvIMPACT::acquire::bTrue</b> this
     * function can be used to request the transmission of the image currently associated with \c pRequest in a different mode/resolution.
     * One use case would be to transmit every image taken by the sensor with a very coarse resolution e.g. by setting the properties
     * <b>mvIMPACT::acquire::GenICam::ImageFormatControl::decimationHorizontal</b> and/or <b>mvIMPACT::acquire::GenICam::ImageFormatControl::decimationVertical</b>
     * to values greater than 1. When then an algorithm finds something interesting within an image this function can be used to request the transmission
     * of the very same image in full resolution for detailed processing.
     *
     * \since 2.18.0
     *
     * \return
     * - \b mvIMPACT::acquire::DMR_NO_ERROR if successful.
     * - A negative error code of type \b mvIMPACT::acquire::TDMR_ERROR otherwise.
     */
    int requestTransmission(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Request</b> object currently associated with the image that shall be transmitted again.
        const Request* pRequest,
        /// [in] The X-offset of the ROI of the image that shall be transmitted within the current image.
        int offsetX,
        /// [in] The Y-offset of the ROI of the image that shall be transmitted within the current image.
        int offsetY,
        /// [in] The width of the ROI of the image that shall be transmitted within the current image.
        int width,
        /// [in] The height of the ROI of the image that shall be transmitted within the current image.
        int height,
        /// [in] The mode in which this image shall be transmitted.
        TRequestTransmissionMode mode = rtmFullResolution,
        /// [in] A user defined identifier that shall be attached to the image that will be sent as a result of calling this function. This value will be written into the
        /// <b>mvIMPACT::acquire::Request::chunkmvCustomIdentifier</b> property so in order to actually benefit from this parameter the corresponding chunk must be enabled.
        /// See <b>mvIMPACT::acquire::GenICam::ChunkDataControl</b> for details.
        unsigned int identifier = 0 )
    {
        return requestTransmission( pRequest->infoTimeStamp_us.read(), offsetX, offsetY, width, height, mode, identifier );
    }
    /// \brief Request the transmission of an image currently associated with the Request object in full resolution.
    /**
     * This is a convenience function combining a call to <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator::queueTransmissionRequest</b>
     * directly followed by a call to <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator::sendCommandBuffer</b>. Commands which have been
     * queued before and have not yet been sent will be sent as well when calling this function.
     *
     * If <b>mvIMPACT::acquire::GenICam::AcquisitionControl::mvSmartFrameRecallEnable</b> is set to <b>mvIMPACT::acquire::bTrue</b> this
     * function can be used to request the transmission of the image currently associated with \c pRequest in full resolution.
     * One use case would be to transmit every image taken by the sensor with a very coarse resolution e.g. by setting the properties
     * <b>mvIMPACT::acquire::GenICam::ImageFormatControl::decimationHorizontal</b> and/or <b>mvIMPACT::acquire::GenICam::ImageFormatControl::decimationVertical</b>
     * to values greater than 1. When then an algorithm finds something interesting within an image this function can be used to request the transmission
     * of the very same image in full resolution for detailed processing.
     *
     * \since 2.18.0
     *
     * \return
     * - \b mvIMPACT::acquire::DMR_NO_ERROR if successful.
     * - A negative error code of type \b mvIMPACT::acquire::TDMR_ERROR otherwise.
     */
    int requestTransmission(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Request</b> object currently associated with the image that shall be transmitted again.
        const Request* pRequest,
        /// [in] A user defined identifier that shall be attached to the image that will be sent as a result of calling this function. This value will be written into the
        /// <b>mvIMPACT::acquire::Request::chunkmvCustomIdentifier</b> property so in order to actually benefit from this parameter the corresponding chunk must be enabled.
        /// See <b>mvIMPACT::acquire::GenICam::ChunkDataControl</b> for details.
        unsigned int identifier = 0 )
    {
        return requestTransmission( pRequest->infoTimeStamp_us.read(),
                                    pRequest->imageOffsetX.read(),
                                    pRequest->imageOffsetY.read(),
                                    pRequest->imageWidth.read(),
                                    pRequest->imageHeight.read(),
                                    rtmFullResolution,
                                    identifier );
    }
    /// \brief Modifies a value of a certain sequencer set at runtime.
    /**
     * This is a convenience function combining a call to <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator::queueSequencerSetValueModification</b>
     * directly followed by a call to <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator::sendCommandBuffer</b>. Commands which have been
     * queued before and have not yet been sent will be sent as well when calling this function.
     *
     * \since 2.18.0
     *
     * \return
     * - \b mvIMPACT::acquire::DMR_NO_ERROR if successful.
     * - A negative error code of type \b mvIMPACT::acquire::TDMR_ERROR otherwise.
     */
    int modifySequencerSetValue(
        /// The index of the sequencer set to modify.
        const int64_type sequencerSet,
        /// The parameter within the selected sequencer set to modify.
        const TSequencerSetParameter parameter,
        /// The new value the selected parameter within the selected sequencer set shall be set to.
        const int64_type value )
    {
        const int result = queueSequencerSetValueModification( sequencerSet, parameter, value );
        if( result != DMR_NO_ERROR )
        {
            return result;
        }
        return sendCommandBuffer();
    }
    /// \brief Modifies a value of a certain sequencer set at runtime.
    /**
     * This is a convenience function combining a call to <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator::queueSequencerSetValueModification</b>
     * directly followed by a call to <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator::sendCommandBuffer</b>. Commands which have been
     * queued before and have not yet been sent will be sent as well when calling this function.
     *
     * \since 2.18.0
     *
     * \return
     * - \b mvIMPACT::acquire::DMR_NO_ERROR if successful.
     * - A negative error code of type \b mvIMPACT::acquire::TDMR_ERROR otherwise.
     */
    int modifySequencerSetValue(
        /// The index of the sequencer set to modify.
        const int64_type sequencerSet,
        /// The parameter within the selected sequencer set to modify.
        const TSequencerSetParameter parameter,
        /// The new value the selected parameter within the selected sequencer set shall be set to.
        const double value )
    {
        const int result = queueSequencerSetValueModification( sequencerSet, parameter, value );
        if( result != DMR_NO_ERROR )
        {
            return result;
        }
        return sendCommandBuffer();
    }
    /// \brief Queues the modification of a value of a certain sequencer set at runtime.
    /**
     * This function queues a single parameter modification of a selected sequencer set. The actual
     * modification will not become effective until <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator::sendCommandBuffer</b>
     * is called. With this function multiple modifications can be sent to a device at once. When the new
     * command does not fit inside the internal command queue any more all pending commands will be sent
     * to the device before the new one is put into the queue.
     *
     * \sa
     * \b mvIMPACT::acquire::GenICam::CustomCommandGenerator::sendCommandBuffer
     *
     * \since 2.18.0
     *
     * \return
     * - \b mvIMPACT::acquire::DMR_NO_ERROR if successful.
     * - A negative error code of type \b mvIMPACT::acquire::TDMR_ERROR otherwise.
     */
    int queueSequencerSetValueModification(
        /// The index of the sequencer set to modify.
        const int64_type sequencerSet,
        /// The parameter within the selected sequencer set to modify.
        const TSequencerSetParameter parameter,
        /// The new value the selected parameter within the selected sequencer set shall be set to.
        const int64_type value )
    {
        const int result = queueCustomCommandPreCondition( sizeof( CustomCommandUpdateSequencerSetI64 ) );
        prepareCustomCommandUpdateSequencerSet( commandBuffer_.get() + currentCommandBufferOffset_, ccUpdateSequencerSet, sizeof( CustomCommandUpdateSequencerSetI64 ) - sizeof( CustomCommandHeader ), sequencerSet, parameter );
        CustomCommandUpdateSequencerSetI64* pPacket = ( CustomCommandUpdateSequencerSetI64* )( commandBuffer_.get() + currentCommandBufferOffset_ );
        pPacket->value_high = hostToNet32( static_cast<uint32_type>( ( value >> 32 ) & 0xFFFFFFFF ) );
        pPacket->value_low = hostToNet32( static_cast<uint32_type>( value & 0xFFFFFFFF ) );
        currentCommandBufferOffset_ += sizeof( CustomCommandUpdateSequencerSetI64 );
        return result;
    }
    /// \brief Queues the modification of a value of a certain sequencer set at runtime.
    /**
     * This function queues a single parameter modification of a selected sequencer set. The actual
     * modification will not become effective until <b>mvIMPACT::acquire::GenICam::CustomCommandGenerator::sendCommandBuffer</b>
     * is called. With this function multiple modifications can be sent to a device at once. When the new
     * command does not fit inside the internal command queue any more all pending commands will be sent
     * to the device before the new one is put into the queue.
     *
     * \sa
     * \b mvIMPACT::acquire::GenICam::CustomCommandGenerator::sendCommandBuffer
     *
     * \since 2.18.0
     *
     * \return
     * - \b mvIMPACT::acquire::DMR_NO_ERROR if successful.
     * - A negative error code of type \b mvIMPACT::acquire::TDMR_ERROR otherwise.
     */
    int queueSequencerSetValueModification(
        /// The index of the sequencer set to modify.
        const int64_type sequencerSet,
        /// The parameter within the selected sequencer set to modify.
        const TSequencerSetParameter parameter,
        /// The new value the selected parameter within the selected sequencer set shall be set to.
        const double value )
    {
        const int result = queueCustomCommandPreCondition( sizeof( CustomCommandUpdateSequencerSetF ) );
        prepareCustomCommandUpdateSequencerSet( commandBuffer_.get() + currentCommandBufferOffset_, ccUpdateSequencerSet, sizeof( CustomCommandUpdateSequencerSetF ) - sizeof( CustomCommandHeader ), sequencerSet, parameter );
        CustomCommandUpdateSequencerSetF* pPacket = ( CustomCommandUpdateSequencerSetF* )( commandBuffer_.get() + currentCommandBufferOffset_ );
        const size_t byteCount = sizeof( double ) < 8 ? sizeof( double ) : 8;
        switch( O32HostByteOrderEvaluator_.get32BitHostByteOrder() )
        {
        case O32_LITTLE_ENDIAN:
            {
                for( size_t i = byteCount ; i > 0; i-- )
                {
                    pPacket->data[i - 1] = ( reinterpret_cast<const char*>( &value ) )[byteCount - i];
                }
            }
            break;
        case O32_BIG_ENDIAN:
            memcpy( pPacket->data, &value, byteCount );
            break;
        }
        currentCommandBufferOffset_ += sizeof( CustomCommandUpdateSequencerSetF );
        return result;
    }
    /// \brief Applies all pending custom commands to the device.
    /**
     * This function will send all pending custom commands to a device. After calling this function
     * the pending command queue will be empty an can be filled with new commands. Calling this function
     * multiple times without queuing new commands after each send will have no effect!
     *
     * \since 2.18.0
     *
     * \return
     * - \b mvIMPACT::acquire::DMR_NO_ERROR if successful.
     * - A negative error code of type \b mvIMPACT::acquire::TDMR_ERROR otherwise.
     */
    int sendCommandBuffer( void )
    {
        if( currentCommandBufferOffset_ <= sizeof( CustomCommandProtocolHeader ) )
        {
            return DMR_INVALID_PARAMETER;
        }
        prepareCommandProtocolHeader( commandBuffer_.get(), static_cast<uint16_type>( currentCommandBufferOffset_ - sizeof( CustomCommandProtocolHeader ) ) );
        const int result = sendCommandBuffer( commandBuffer_.get(), commandBuffer_.parCnt() );
        discardCommandBuffer();
        return result;
    }
    /// \brief Returns the size of the command buffer for this device in bytes.
    /**
     * \since 2.18.0
     *
     * \return The size of the command buffer for this device in bytes.
     */
    unsigned int commandBufferSize( void ) const
    {
        return cd_.mvCustomCommandBuffer.binaryDataBufferMaxSize();
    }
    /// \brief Returns the amount of bytes of the command buffer currently used(thus the amount of bytes that await sending) for this device in bytes.
    /**
     * \since 2.18.0
     *
     * \return The amount of bytes of the command buffer currently used(thus the amount of bytes that await sending) for this device in bytes.
     */
    unsigned int commandBufferSizeUsed( void ) const
    {
        return static_cast<unsigned int>( currentCommandBufferOffset_ );
    }
};

/// @}

} // namespace GenICam
} // namespace acquire
} // namespace mvIMPACT

#if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_PYTHON)
#   ifndef MVIMPACT_USE_NAMESPACES
using namespace mvIMPACT::acquire::GenICam;
#   endif // #ifndef MVIMPACT_USE_NAMESPACES
#endif // #if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_PYTHON)

#endif //MVIMPACT_ACQUIRE_CUSTOM_COMMANDS_H
