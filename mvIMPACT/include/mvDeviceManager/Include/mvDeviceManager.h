//-----------------------------------------------------------------------------
#ifndef mvDeviceManagerH
#if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
#   define mvDeviceManagerH mvDeviceManagerH
#endif // DOXYGEN_SHOULD_SKIP_THIS && WRAP_ANY
//-----------------------------------------------------------------------------
#ifndef WRAP_ANY
#   include <stddef.h>
#endif // #ifndef WRAP_ANY

#include <DriverBase/Include/mvDriverBaseEnums.h>
#include <mvPropHandling/Include/mvPropHandlingDatatypes.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#if defined(MVIMPACT_ACQUIRE_H_) || defined(DOXYGEN_CPP_DOCUMENTATION)
namespace mvIMPACT
{
namespace acquire
{
#endif // #if defined(MVIMPACT_ACQUIRE_H_) || defined(DOXYGEN_CPP_DOCUMENTATION)

#ifndef DOXYGEN_SHOULD_SKIP_THIS
#   ifdef _WIN32
#       define DMR_CALL __stdcall
#       ifndef WRAP_ANY
#           define MVDMR_API
#           ifdef __BORLANDC__ // is Borland compiler?
#               pragma option push -b // force enums to size of integer
#           endif // __BORLANDC__
#           ifndef NO_MV_DEVICE_MANAGER_AUTOLINK
#               ifdef __BORLANDC__ // is Borland compiler?
#                   pragma comment(lib,"mvDeviceManagerb.lib")
#                   pragma message( "Automatically linking with mvDeviceManagerb.lib" )
#               elif defined(_MSC_VER) // is Microsoft compiler?
#                   pragma comment(lib,"mvDeviceManager.lib")
#                   pragma message( "Automatically linking with mvDeviceManager.lib" )
#               endif // __BORLANDC__
#           endif // NO_MV_DEVICE_MANAGER_AUTOLINK
#       endif // ifndef WRAP_ANY
#   else // not _WIN32
#       ifndef WRAP_ANY
#           if __GNUC__ >= 4
#               define MVDMR_API __attribute__ ((visibility ("default")))
#           else
#               define MVDMR_API
#           endif // #if __GNUC__ >= 4
#       endif // ifndef WRAP_ANY
#       define DMR_CALL
#   endif // _WIN32
#endif // DOXYGEN_SHOULD_SKIP_THIS

#ifdef DOXYGEN_SHOULD_SKIP_THIS
#   define __vl_base_h__ // force doxygen to include mvIMPACT related functions
#endif // #ifdef DOXYGEN_SHOULD_SKIP_THIS

#ifdef __GNUC__
#define ATTR_PACK __attribute__((packed)) __attribute__ ((aligned (8)))
#else
#define ATTR_PACK
#pragma pack(push, 8) // 8 byte structure alignment
#endif

#if !defined(MVIMPACT_DEPRECATED_C) && !defined(DOXYGEN_SHOULD_SKIP_THIS)
#   if !defined(MVIMPACT_ACQUIRE_H_) && !defined(NO_MVIMPACT_DEPRECATED_C_WARNINGS)
#       if defined(__GNUC__) && (__GNUC__ >= 3) && defined(__GNUC_MINOR__) && (__GNUC_MINOR__ >= 1) // is at least GCC 3.1 compiler?
#           define MVIMPACT_DEPRECATED_C(FUNCTION) FUNCTION __attribute__ ((deprecated))
#       elif defined(_MSC_VER) && (_MSC_VER >= 1310) // is at least VC 2003 compiler?
#           define MVIMPACT_DEPRECATED_C(FUNCTION) __declspec(deprecated) FUNCTION
#       else
#           define MVIMPACT_DEPRECATED_C(FUNCTION) FUNCTION
#       endif // compiler check
#   else
#       define MVIMPACT_DEPRECATED_C(FUNCTION) FUNCTION
#   endif // #if !defined(MVIMPACT_ACQUIRE_H_) && !defined(NO_MVIMPACT_DEPRECATED_C_WARNINGS)
#endif // #if !defined(MVIMPACT_DEPRECATED_C) && !defined(DOXYGEN_SHOULD_SKIP_THIS)

//-----------------------------------------------------------------------------
/// \brief A structure for image buffer channel specific data
/**
 *  Channel specific data in an image is data, that in e.g. and RGB image
 *  might differ for the color components red, green and blue.
 */
/// \ingroup CommonInterface
struct ChannelData
//-----------------------------------------------------------------------------
{
    /// \brief The offset (in bytes) to the next channel.
    int iChannelOffset;
    /// \brief The offset (in bytes) to the next line of this channel.
    int iLinePitch;
    /// \brief The offset (in bytes) to the next pixel of this channel.
    int iPixelPitch;
    /// \brief The string descriptor for this channel.
    /**
     *  For an RGB image the string values of three <b>mvIMPACT::acquire::ChannelData</b>
     *  structures this might e.g. be "R", "G" and "B".
     */
    char szChannelDesc[DEFAULT_STRING_SIZE_LIMIT];
} ATTR_PACK;

#if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
typedef struct ChannelData ChannelData;
#endif // DOXYGEN_SHOULD_SKIP_THIS && WARP_ANY

//-----------------------------------------------------------------------------
/// \brief Fully describes a captured image.
/**
 *  This class serves as a describing structure for captured images.
 */
/// \ingroup CommonInterface
struct ImageBuffer
//-----------------------------------------------------------------------------
{
    /// \brief The number of bytes per pixel.
    int iBytesPerPixel;
    /// \brief The height of the image in pixel or lines.
    int iHeight;
    /// \brief The width of the image in pixel.
    int iWidth;
    /// \brief The pixel format of this image.
    /**
     *  This might be important, when the image data needs to be processed or stored in
     *  a file or maybe even if the image shall be displayed.
     */
    TImageBufferPixelFormat pixelFormat;
    /// \brief The size (in bytes) of the whole image.
    /**
     *  This value in connection with <b>mvIMPACT::acquire::ImageBuffer::vpData</b>
     *  is sufficient to copy the complete image without having any additional information about it.
     */
    int iSize;
    /// \brief The starting address of the image.
    /**
     *  This address in connection with <b>mvIMPACT::acquire::ImageBuffer::iSize</b>
     *  is sufficient to copy the complete image without having any additional information about it.
     *
     *  <b>EXAMPLE:</b><br><br>
     * \code
     *  const ImageBuffer* pib = getImageBufferFromSomewhere();
     *  unsigned char* pTempBuf = new unsigned char[ib.iSize];
     *  memcpy( pTempBuf, pib.vpData, pIB.iSize );
     * \endcode
     *
     *  \note
     *  It's not always necessary to copy the image data! Each <b>mvIMPACT::acquire::ImageBuffer</b> is an
     *  integral part of the <b>mvIMPACT::acquire::Request</b> object returned to the user by a call to
     *  the corresponding 'waitFor' function offered by the interface.
     *  The data in this <b>mvIMPACT::acquire::ImageBuffer</b> remains valid until the user either
     *  unlocks the request buffer or closes the <b>mvIMPACT::acquire::Device</b> again.
     *
     *  \note
     *  By unlocking the <b>mvIMPACT::acquire::Request</b> the user informs the driver, that this <b>mvIMPACT::acquire::Request</b>
     *  and the <b>mvIMPACT::acquire::ImageBuffer</b> belonging to that <b>mvIMPACT::acquire::Request</b> is not longer needed by the
     *  user. The driver then queues this <b>mvIMPACT::acquire::Request</b> for capturing image data into it once
     *  again. However once a <b>mvIMPACT::acquire::Request</b> has been returned to the user, its <b>mvIMPACT::acquire::ImageBuffer</b>
     *  can't be overwritten by the driver! Therefore the user can work with, modify, store or
     *  copy the data safely until he unlocks the <b>mvIMPACT::acquire::Request</b> again.
     */
    void* vpData;
    /// \brief The number of channels this image consists of.
    /**
     *  For an RGB image this value e.g. would be 3. This value defines how many
     *  <b>mvIMPACT::acquire::ChannelData</b> structures <b>mvIMPACT::acquire::ImageBuffer::pChannels</b>
     *  is pointing to once this structure has been allocated and filled with valid data.
     */
    int iChannelCount;
    /// \brief A pointer to an array of channel specific image data.
    ChannelData* pChannels;
} ATTR_PACK;

#if !defined(DOXYGEN_CPP_DOCUMENTATION) && !defined(WRAP_ANY)
//-----------------------------------------------------------------------------
/// \brief This structure contains information about the image currently associated with the request object.
/// \ingroup CommonInterface
struct RequestInfo
//-----------------------------------------------------------------------------
{
    /// \brief A unique frame identifier.
    /**
     *  This parameter is returned as part of the each request object. It can be
     *  used to associate a certain image with a unique identifier.
     *  \if DOXYGEN_CPP_DOCUMENTATION
     *  When an <b>mvIMPACT::acquire::RTCtrProgramStep</b> instruction of the type <b>mvIMPACT::acquire::rtctrlProgTriggerSet</b>
     *  is executed, the \a frameID is set to the value of the property \a FrameID of a corresponding <b>mvIMPACT::acquire::RTCtrProgramStep</b> if the
     *  HRTC is used and any program step executes the setting of the ID.
     *  \endif
     *
     *  \note For some devices this property will only contain meaningful data if the device supports <b>HRTC</b> and a program is running and writing data to
     *  the property.
     */
    int frameID;
    /// \brief The number of images captured since the driver has been initialised including the current image.
    int frameNr;
    /// \brief A timestamp (in us) defining the time the device started the exposure of the image associated with this request object.
    /**
     *  This value will stay 0 if nothing is known about the time the exposure did start.
     *  In such a case the timeStamp_us parameter should be used instead.
     */
    int exposeStart_us;
    /// \brief The 'real' expose time (in us) used to generate this image.
    /**
     *  This might differ slightly from the value selected by the user via
     *  the corresponding exposure property depending on the precision
     *  available for the device or the connected camera.
     */
    int exposeTime_us;
    /// \brief The time the transaction of this image has been delayed (in us) because either the bus was blocked or the CPU was busy.
    /**
     *  Normally this value will be 0. A value larger than 0 indicates that the system
     *  can't manage the current load.
     *
     *  \note This property is not supported by every device.
     */
    int transferDelay_us;
    /// \brief The gain(in dB) this image has been taken with.
    double gain_dB;
    /// \brief A timestamp to define the exact time this image has been captured (stored after the integration).
    /**
     *  The timestamp is independent from the FPGA and has a resolution of 1 us.
     *
     *  \b mvBlueFOX \b specific:
     *  The counter of the timestamp starts when the camera gets initialized. It is measured in us.
     */
    int timeStamp_us;
    /// \brief Currently unsupported.
    double imageAverage;
    /// \brief The video input channel of the device this image has been acquired from.
    /**
     *  \note This property is not supported by every device. Devices with only a
     *  single video channel will always leave this value at 0.
     */
    int videoChannel;
    /// \brief The camera output used to transmit the image to the capture device.
    /**
     *  \note This property is not supported by every device. It will contain valid data for
     *  capture devices with at least one physical video input channel.
     */
    TCameraOutput cameraOutputUsed;
    /// \brief Line number since last trigger event.
    /**
     *  Will contain
     *  - the line number since last trigger event of the first line of the snap if line counting is enabled
     *  - -1 otherwise
     *
     *  \note This property is not supported by every device.
     */
    int lineCounter;
    /// \brief The amount of data missing in the current image.
    /**
     *  The value of this property will be 0 almost always. However if a device
     *  can detect blocks of missing data and an image request has returned with
     *  \if DOXYGEN_CPP_DOCUMENTATION
     *  <b>mvIMPACT::acquire::rrFrameIncomplete</b>
     *  \else
     *  ::rrFrameIncomplete
     *  \endif
     *  to indicate that not all the data has been captured, this property will contain the amount of data missing in percent.
     */
    double missingData_pc;
} ATTR_PACK;

//-----------------------------------------------------------------------------
/// \brief Contains status information about the capture process.
/**
 *  This part of a complete request contains general status information about the
 *  request or the image currently referenced by it.
 */
/// \ingroup CommonInterface
struct RequestResult
//-----------------------------------------------------------------------------
{
    /// \brief The result of this request.
    /**
     *  This parameter indicates whether a previous image acquisition has been
     *  successful or not.
     */
    TRequestResult result;
    /// \brief The current state of this request.
    /**
     *  This parameter indicates the current state of this request. A request e.g.
     *  can currently be idle. This would mean, that it is currently not used for
     *  image acquisition. Also a request can be in 'Capturing' state, which means
     *  it is currently processed by the driver.
     */
    TRequestState state;
} ATTR_PACK;
#endif // #if !defined(DOXYGEN_CPP_DOCUMENTATION) && !defined(WRAP_ANY)

//-----------------------------------------------------------------------------
/// \brief A structure containing information about an event that has been reported by the device driver and has been successfully waited for.
/**
 *  \deprecated This structure has been declared <b>deprecated</b>. 'onChanged' callbacks can
 *  directly be registered on every feature now.
 */
/// \ingroup CommonInterface
struct EventData
//-----------------------------------------------------------------------------
{
    /// \brief A consecutive number telling the user how many times this event has occurred already.
    unsigned int count;
    /// \brief The lower part of the timestamp associated with this event.
    unsigned int timestamp_lowPart;
    /// \brief The higher part of the timestamp associated with this event.
    /**
     *  \note Not every device or event type will support this parameter. If the
     *  parameter is not supported, it will be 0.
     */
    unsigned int timestamp_highPart;
} ATTR_PACK;

//-----------------------------------------------------------------------------
/// \brief Defines valid image request parameters.
/**
 *  Some functions accept this type as the input for certain parameter related
 *  functions such as obtaining a string representation of the parameter specified.
 */
/// \ingroup CommonInterface
enum TImageRequestParam
//-----------------------------------------------------------------------------
{
    /// \brief The pixel format of an image request buffer.
    irpPixelFormat = 0,
    /// \brief The Result associated with an image request.
    irpResult = 1,
    /// \brief The current state of an image request.
    irpState = 2,
    /// \brief The camera output used to transmit the image from the imaging device to the capture device.
    irpCameraOutputUsed = 3
};

//-----------------------------------------------------------------------------
/// \brief Flags to define the way an <b>mvIMPACT</b> buffer is created and handled.
/// \ingroup CommonInterface
enum TImpactBufferFlag
//-----------------------------------------------------------------------------
{
    /// \brief A dummy constant to state that none of the flags shall be specified.
    /**
     *  This flag can be used instead of writing code like this: TImpactBufferFlag(0) or
     *  static_cast<TImpactBufferFlag>(0).
     */
    ibfNone = 0x0,
    /// \brief If set no new memory will be allocated for the creation of the <b>mvIMPACT</b> buffer.
    /**
     *  This way of creating the images is fast, but modifying the image data with an image processing
     *  function will always modify the image data associated with the underlying request object.
     *
     *  \note
     *  Once the underlying request object has been unlocked, working with the image is no longer
     *  save when this flag was set during creation of the <b>mvIMPACT</b> buffer, as the memory might
     *  be freed by the driver. If you want to keep the created image do <b>NOT</b> specify this flag
     *  during creation.
     *
     *  \note
     *  Whenever a new image is acquired from a device the device might be using the memory already associated
     *  with another image thus you might end up with to IMPACT images that internally reference the
     *  same buffer. However a large DMA memory will (at least twice the size of one image) will allow
     *  to work with a double buffering scheme.
     */
    ibfUseRequestMemory = 0x1,
    /// \brief If an existing \b IPL_BUFHANDLE is passed to a function it will try to copy data in this buffer instead of freeing it.
    /**
     *  This flag can be used to allow the continuous usage of the same mvIMPACT buffer. If this
     *  flag is NOT specified whenever a valid mvIMPACT buffer handle is passed to a function
     *  accepting flags of type
     *  \if DOXYGEN_CPP_DOCUMENTATION
     *  <b>mvIMPACT::acquire::TImpactBufferFlag</b>
     *  \else
     *  <b>::TImpactBufferFlag</b>
     *  \endif
     *  it might free the
     *  existing buffer and create a new one.
     *
     *  If this flag is specified and the new buffer doesn't match the existing one in terms of
     *  the number of bands, size, etc. the function will fail and return an error code. Thus this
     *  flag can be used to optimize performance if the buffer layout will remain constant during
     *  application runtime.
     */
    ibfRecycleBufHandle = 0x2
};

//-----------------------------------------------------------------------------
/// \brief Defines valid libraries to query information from.
/// \ingroup CommonInterface
enum TLibraryQuery
//-----------------------------------------------------------------------------
{
    /// \brief Specifies the mvDeviceManager library.
    lqDeviceManager = 0,
    /// \brief Specifies the mvPropHandling library.
    lqPropHandling = 1
};

/// \brief A type for handles bound to a certain device.
typedef int HDEV;
/// \brief A type for handles bound to an interface of a certain device.
typedef int HDRV;
/// \brief A type for handles bound to an object list.
typedef int HLIST;
/// \brief A type for handles bound to an unspecified object.
typedef int HOBJ;

#if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
typedef struct EventData EventData;
typedef struct ImageBuffer ImageBuffer;
typedef struct RequestInfo RequestInfo;
typedef struct RequestResult RequestResult;
typedef enum TImageRequestParam TImageRequestParam;
typedef enum TImpactBufferFlag TImpactBufferFlag;
typedef enum TLibraryQuery TLibraryQuery;
#endif // #if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)

#if !defined(DOXYGEN_CPP_DOCUMENTATION) && !defined(WRAP_ANY)

/// \brief a handle to the device manager bound to the list of all devices.
typedef int HDMR;

#ifdef __cplusplus
/// \brief A constant defining the maximum length of the strings in the <b>TDMR_DeviceInfo</b> structure.
/**
 *  \note
 *  This is used if <b>__cplusplus</b> is defined.
 */
const size_t INFO_STRING_SIZE = 38;
#else // C compatible set of constants
/// \brief A macro defining the maximum length of the strings in the <b>TDMR_DeviceInfo</b> structure.
/**
 *  \note
 *  This is used if <b>__cplusplus</b> is NOT defined.
 */
#define INFO_STRING_SIZE (38)
#endif // __cplusplus

//-----------------------------------------------------------------------------
/// \brief Valid handle check modes.
enum TOBJ_HandleCheckMode // no_managed_type
//-----------------------------------------------------------------------------
{
    /// \brief Only the owner list of the current HOBJ is checked.
    hcmOwnerList    = 1,
    /// \brief The owner list and the object referenced by the HOBJ parameter is checked.
    hcmFull         = 2
};

//-----------------------------------------------------------------------------
/// \brief Valid string query types.
/**
 *  Certain information for an object can be queried as a string with direct
 *  construction.
 */
enum TOBJ_StringQuery // no_managed_type
//-----------------------------------------------------------------------------
{
    /// \brief The name of the object referenced by HOBJ.
    sqObjName               = 0,
    /// \brief The documentation string of the object referenced by HOBJ.
    sqObjDocString          = 1,
    /// \brief The content descriptor of the object referenced by HOBJ.
    /**
     *  \note
     *  This value is only defined if the referenced object is of type <b>::ctList</b>.
     */
    sqListContentDescriptor = 2,
    /// \brief The value of the object referenced by HOBJ.
    /**
     *  \note
     *  This value is only defined if the referenced object is of type <b>::ctProp</b>.
     */
    sqPropVal               = 3,
    /// \brief The format string of the object referenced by HOBJ.
    /**
     *  \note
     *  This value is only defined if the referenced object is of type <b>::ctProp</b>.
     */
    sqPropFormatString      = 4,
    /// \brief The parameter list of the object referenced by HOBJ.
    /**
     *  \note
     *  This value is only defined if the referenced object is of type <b>::ctMeth</b>.
     *
     *  The returned string will contain characters giving information about the parameters expected by
     *  the method object.
     *
     *  The characters have the following meaning:
     *  - i specifies a 32-bit integer value
     *  - I specifies a 64-bit integer value
     *  - s specifies a pointer to a C-string
     *  - f specifies a double precision float value
     *  - v specifies a void return value
     *
     *  Examples:
     *
     *  - 'v': This is a function returning nothing (void). It expects no parameters.
     *  - 'viis': This is a function returning nothing (void). It expects 2 integer values
     *  and one pointer to a C-string.
     *  - 'if': This function returns an integer value and expects a float value.
     */
    sqMethParamString       = 5,
    /// \brief The display name of the object referenced by HOBJ.
    sqObjDisplayName        = 6
};

//-----------------------------------------------------------------------------
/// \brief A structure for device specific information.
/**
 *  \sa
 *  <b>DMR_GetDeviceInfo()</b>
 */
struct TDMR_DeviceInfo // no_managed_type
//-----------------------------------------------------------------------------
{
    /// \brief A string representation of the serial number of this device.
    char serial[INFO_STRING_SIZE];
    /// \brief A string representation of the family this device belongs to.
    char family[INFO_STRING_SIZE];
    /// \brief A string representation of the product name of this device.
    char product[INFO_STRING_SIZE];
    /// \brief An integer value containing the current firmware version this device is programmed with.
    int firmwareVersion;
    /// \brief The device ID this device has been associated with.
    int deviceId;
} ATTR_PACK;

//-----------------------------------------------------------------------------
/// \brief Valid search modes for the function \b DMR_GetDevice() when searching for a certain device.
/**
 *  \note
 *  <b>::dmdsmUseDevID</b> can be 'ored' (|) together with
 *  all the other modes.
 */
enum TDMR_DeviceSearchMode // no_managed_type
//-----------------------------------------------------------------------------
{
    /// \brief Searches for a device with a certain serial number.
    dmdsmSerial     = 1,
    /// \brief Searches for a device belonging to a certain family.
    dmdsmFamily     = 2,
    /// \brief Searches for a devices with a certain product string identifier.
    dmdsmProduct    = 3,
    /// \brief This flag can be 'ored' (|) together with one of the other values.
    /**
     *  When <b>::dmdsmUseDevID</b> is specified, the device
     *  is located via the criteria specified above <b>AND</b> the device must have
     *  a certain ID stored into some internal memory.
     */
    dmdsmUseDevID   = 0x8000
};

//-----------------------------------------------------------------------------
/// \brief Defines valid info query types, which can be passed to the function \b DMR_GetDeviceInfoEx().
enum TDMR_DeviceInfoType
//-----------------------------------------------------------------------------
{
    /// \brief Used to query a small structure containing some information about the device.
    /**
     *  <b>DMR_GetDeviceInfoEx()</b> will expect a pointer to a <b>TDMR_DeviceInfo</b>
     *  structure when called with <b>::dmditDeviceInfoStructure</b>.
     */
    dmditDeviceInfoStructure    = 0,
    /// \brief Checks if the device is in use by an application.
    /**
     *  The output value will be a 4 byte unsigned integer. A value different from 0
     *  indicates the device is already in use. In this case the device might be in
     *  use either by the current process, by another process running on this machine
     *  or even by a process running on a different machine(e.g. when talking to a
     *  network device).
     */
    dmditDeviceIsInUse          = 1,
    /// \brief Returns a handle providing access to device driver library specific features.
    /**
     *  The output value will be a HOBJ.
     *  This list does exist only once per device driver library. Changes in this list will affect all
     *  devices that are operated using this device driver library.
     */
    dmdithDeviceDriver          = 2
};

//-----------------------------------------------------------------------------
/// \brief Defines valid interface list types, which can be located using the function \b DMR_FindList().
enum TDMR_ListType // no_managed_type
//-----------------------------------------------------------------------------
{
    /// \brief A placeholder for an undefined list type
    dmltUndefined = -1,
    /// \brief Specifies a certain setting.
    /**
     *  An additional string defines the name of the setting to look for.
     */
    dmltSetting = 0,
    /// \brief Specifies the list of driver owned image request objects.
    dmltRequest = 1,
    /// \brief Specifies a certain image request control.
    /**
     *  An additional string defines the name of the setting to look for.
     */
    dmltRequestCtrl = 2,
    /// \brief Specifies the driver interfaces list containing general information.
    /**
     *  This e.g. can be properties containing the driver version, the current state
     *  of the device and stuff like that.
     */
    dmltInfo = 3,
    /// \brief Specifies the driver interface list containing statistical information.
    /**
     *  This list e.g. might contain the current frame rate, the total number of images
     *  captured, etc..
     */
    dmltStatistics = 4,
    /// \brief Specifies the driver interface list containing properties, which influence the overall operation of the device.
    /**
     *  This list e.g. might contain the priority of the drivers internal worker thread,
     *  the number of request objects the driver shall work with, etc..
     */
    dmltSystemSettings = 5,
    /// \brief Specifies the driver interface list containing properties to work with any kind of I/O pin belonging to that device.
    /**
     *  Here properties addressing the digital inputs and outputs and other I/O related
     *  properties can be found.
     */
    dmltIOSubSystem = 6,
    /// \brief Specifies the driver interface list providing access to the drivers <b>H</b>ardware <b>R</b>eal-<b>T</b>ime <b>C</b>ontroller (HRTC).
    /**
     *  Here properties to control the behaviour of the HRTCs can be found.
     *  \note
     *  This feature might not be available for every device.
     */
    dmltRTCtr = 7,
    /// \brief Specifies the driver interface list providing access to the recognized camera description lists.
    /**
     *  Within this list all recognized camera descriptions can be found, each forming a sub list
     *  containing the properties describing the camera.
     *
     *  \note This feature currently is only available for frame grabber devices.
     */
    dmltCameraDescriptions = 8,
    /// \brief Specifies the driver interface list providing access to the device specific settings lists.
    /**
     *  \note This feature currently is only available for frame grabber devices.
     */
    dmltDeviceSpecificData = 9,
    /// \brief Specifies the driver interface list providing access to the device specific event type settings lists (\b deprecated).
    /**
     *  \note Every device will support a different set of events that can be waited for by the user.
     *
     *  This list will contain a sublist for each event type recognized for this device. Within this sublist
     *  all properties that can be describe the current mode an event is operated in user can be found.
     *
     *  \deprecated
     *  This value has been declared deprecated and will be removed in future versions of this interface.
     *  A more flexible way of getting informed about changes in driver features
     *  has been added to the interface and should be used instead. An example for this new method
     *  is \b Callback_C.c.
     */
    dmltEventSubSystemSettings = 10,
    /// \brief Specifies the driver interface list providing access to the device specific event type results lists (\b deprecated).
    /**
     *  \note Every device will support a different set of events that can be waited for by the user.
     *
     *  This list will contain a sublist for each event type recognized for this device. Within this sublist
     *  all result properties that can be queried by the user can be found.
     *
     *  \deprecated
     *  This value has been declared deprecated and will be removed in future versions of this interface.
     *  A more flexible way of getting informed about changes in driver features
     *  has been added to the interface and should be used instead. An example for this new method
     *  is \b Callback_C.c.
     */
    dmltEventSubSystemResults = 11,
    /// \brief Specifies the driver interface list providing access to the devices memory manager list.
    /**
     *  \note This feature currently is only available for frame grabber devices.
     *
     *  This list will contain properties and lists providing access to settings related to the memory
     *  handling used by the device. E.g. the buffer size for individual DMA blocks can be configured
     *  here.
     *
     *  \note
     *  Properties in this list should only be modified by advanced users.
     */
    dmltImageMemoryManager = 12
};

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef enum TOBJ_HandleCheckMode TOBJ_HandleCheckMode;
typedef enum TOBJ_StringQuery TOBJ_StringQuery;
typedef struct TDMR_DeviceInfo TDMR_DeviceInfo;
typedef enum TDMR_DeviceInfoType TDMR_DeviceInfoType;
typedef enum TDMR_ListType TDMR_ListType;
typedef enum TDMR_DeviceSearchMode TDMR_DeviceSearchMode;
#endif // DOXYGEN_SHOULD_SKIP_THIS

// general library functions
MVDMR_API TDMR_ERROR DMR_CALL DMR_Init( HDMR* pHDmr );
MVDMR_API TDMR_ERROR DMR_CALL DMR_Close( void );
MVDMR_API TDMR_ERROR DMR_CALL DMR_GetDevice( HDEV* pHDev, TDMR_DeviceSearchMode searchMode, const char* pSearchString, unsigned int devNr, char wildcard );
MVDMR_API TDMR_ERROR DMR_CALL DMR_GetDeviceCount( unsigned int* pDevCnt );
MVDMR_API TDMR_ERROR DMR_CALL DMR_OpenDevice( HDEV hDev, HDRV* pHDrv );
MVDMR_API TDMR_ERROR DMR_CALL DMR_CloseDevice( HDRV hDrv, HDEV hDev );
MVIMPACT_DEPRECATED_C( MVDMR_API TDMR_ERROR DMR_CALL DMR_GetDeviceInfo( unsigned int devNr, TDMR_DeviceInfo* pInfo, size_t infoSize ) );
MVDMR_API TDMR_ERROR DMR_CALL DMR_GetDeviceInfoEx( HDEV hDev, TDMR_DeviceInfoType infoType, void* pInfo, size_t* pInfoSize );
MVDMR_API TDMR_ERROR DMR_CALL DMR_GetDriverHandle( HDEV hDev, HDRV* pHDrv );
MVDMR_API TDMR_ERROR DMR_CALL DMR_UpdateDeviceList( unsigned int reserved, int reserved2 );
// device specific functions. These function require a handle to an initialised device
// basic operations
MVDMR_API TDMR_ERROR DMR_CALL DMR_CreateSetting( HDRV hDrv, const char* pName, const char* pParentName, HLIST* pNewID );
MVDMR_API TDMR_ERROR DMR_CALL DMR_CreateRequestControl( HDRV hDrv, const char* pName, const char* pParentName, HLIST* pNewID, int* pRequestCtrl );
MVDMR_API TDMR_ERROR DMR_CALL DMR_DeleteList( HDRV hDrv, const char* pName, TDMR_ListType type );
MVDMR_API TDMR_ERROR DMR_CALL DMR_FindList( HDRV hDrv, const char* pName, TDMR_ListType type, unsigned int flags, HLIST* phDevList );
// image acquisition functions
MVDMR_API TDMR_ERROR DMR_CALL DMR_AcquisitionStart( HDRV hDrv );
MVDMR_API TDMR_ERROR DMR_CALL DMR_AcquisitionStop( HDRV hDrv );
MVDMR_API TDMR_ERROR DMR_CALL DMR_ImageRequestReset( HDRV hDrv, int requestCtrl, int mode );
MVDMR_API TDMR_ERROR DMR_CALL DMR_ImageRequestSingle( HDRV hDrv, int requestCtrl, int* pRequestUsed );
MVDMR_API TDMR_ERROR DMR_CALL DMR_ImageRequestUnlock( HDRV hDrv, int requestNr );
MVDMR_API TDMR_ERROR DMR_CALL DMR_ImageRequestConfigure( HDRV hDrv, int requestNr, int reserved, void* pReserved );
MVDMR_API TDMR_ERROR DMR_CALL DMR_ImageRequestWaitFor( HDRV hDrv, int timeout_ms, int queueNr, int* pRequestNr );
MVDMR_API TDMR_ERROR DMR_CALL DMR_ImageRequestResultQueueElementCount( HDRV hDrv, int queueNr, int* pResultQueueElements );
MVDMR_API TDMR_ERROR DMR_CALL DMR_GetImageRequestBuffer( HDRV hDrv, int requestNr, ImageBuffer** ppBuffer );
// functions only needed to query certain information from other languages such as VB.
MVDMR_API TDMR_ERROR DMR_CALL DMR_GetImageRequestBufferData( HDRV hDrv, int requestNr, int* pBytesPerPixel, int* pChannelCount, int* pHeight, int* pWidth, int* pSize, TImageBufferPixelFormat* pPixelFormat, void** ppData );
MVDMR_API TDMR_ERROR DMR_CALL DMR_GetImageRequestBufferChannelData( HDRV hDrv, int requestNr, int channelNr, int* pChannelOffset, int* pLinePitch, int* pPixelPitch, char* pChannelDesc, size_t channelDescSize );
MVDMR_API TDMR_ERROR DMR_CALL DMR_GetImageRequestBufferImageData( HDRV hDrv, int requestNr, int xOff, int yOff, int width, int height, char* pBuf, size_t bufSize );
MVDMR_API TDMR_ERROR DMR_CALL DMR_SetImageRequestBufferImageData( HDRV hDrv, int requestNr, int xOff, int yOff, int width, int height, char* pBuf, size_t bufSize );
// functions only needed to query certain information from other languages such as VB END.
#ifdef __vl_base_h__
MVDMR_API TDMR_ERROR DMR_CALL DMR_GetImpactRequestBufferEx( HDRV hDrv, int requestNr, IPL_BUFHANDLE* pBuffer, TImpactBufferFlag flags, unsigned int reserved );
MVDMR_API TDMR_ERROR DMR_CALL DMR_BuildImpactImage( const ImageBuffer* pBuffer, IPL_BUFHANDLE* pBufHandle, TImpactBufferFlag flags, void* pReserved, size_t reservedSize );
#endif // __vl_base_h__
MVDMR_API TDMR_ERROR DMR_CALL DMR_GetImageRequestInfoEx( HDRV hDrv, int requestNr, RequestInfo* pInfo, size_t infoSize, int reserved, int reserved2 );
MVDMR_API TDMR_ERROR DMR_CALL DMR_GetImageRequestResultEx( HDRV hDrv, int requestNr, RequestResult* pResult, size_t resultSize, int reserved, int reserved2 );
MVDMR_API TDMR_ERROR DMR_CALL DMR_GetImageRequestParamS( HDRV hDrv, int requestNr, TImageRequestParam param, char* pBuf, size_t bufSize );
// file I/O functions
MVDMR_API TDMR_ERROR DMR_CALL DMR_LoadRTCtrProgram( HDRV hDrv, HLIST hRTCtrList );
MVDMR_API TDMR_ERROR DMR_CALL DMR_SaveRTCtrProgram( HDRV hDrv, HLIST hRTCtrList );
MVDMR_API TDMR_ERROR DMR_CALL DMR_LoadSetting( HDRV hDrv, const char* pName, TStorageFlag storageflags, TScope scope );
MVDMR_API TDMR_ERROR DMR_CALL DMR_SaveSetting( HDRV hDrv, const char* pName, TStorageFlag storageflags, TScope scope );
MVDMR_API TDMR_ERROR DMR_CALL DMR_LoadSettingFromDefault( HDRV hDrv, TScope scope );
MVDMR_API TDMR_ERROR DMR_CALL DMR_SaveSettingToDefault( HDRV hDrv, TScope scope );
MVIMPACT_DEPRECATED_C( MVDMR_API TDMR_ERROR DMR_CALL DMR_SaveSystemToDefault( HDRV hDrv, TScope scope ) );
MVDMR_API TDMR_ERROR DMR_CALL DMR_ExportCameraDescription( HDRV hDrv, HLIST hCameraDescList );
MVDMR_API TDMR_ERROR DMR_CALL DMR_ImportCameraDescription( HDRV hDrv, HLIST hCameraDescList );
MVDMR_API TDMR_ERROR DMR_CALL DMR_CopyCameraDescription( HDRV hDrv, HLIST hCameraDescList, const char* pNewName );
// miscellaneous HW specific functions
MVDMR_API TDMR_ERROR DMR_CALL DMR_SetDeviceID( HDEV hDev, int newID );
MVDMR_API TDMR_ERROR DMR_CALL DMR_UpdateFirmware( HDEV hDev );
MVDMR_API TDMR_ERROR DMR_CALL DMR_UpdateDigitalInputs( HDRV hDrv );
MVIMPACT_DEPRECATED_C( MVDMR_API TDMR_ERROR DMR_CALL DMR_UpgradeDeviceFeatures( HDEV hDev, const char* pLicenceFilename, int reserved, int reserved2 ) );
MVDMR_API TDMR_ERROR DMR_CALL DMR_CreateUserDataEntry( HDEV hDev, HLIST* pEntry );
MVDMR_API TDMR_ERROR DMR_CALL DMR_DeleteUserDataEntry( HDEV hDev, HLIST hEntry );
MVDMR_API TDMR_ERROR DMR_CALL DMR_WriteUserDataToHardware( HDEV hDev );
MVIMPACT_DEPRECATED_C( MVDMR_API TDMR_ERROR DMR_CALL DMR_EventWaitFor( HDRV hDrv, int timeout_ms, TDeviceEventType mask, int reserved, int reserved2, TDeviceEventType* pResultType ) );
MVIMPACT_DEPRECATED_C( MVDMR_API TDMR_ERROR DMR_CALL DMR_EventGetData( HDRV hDrv, TDeviceEventType type, int reserved, int reserved2, EventData* pResult, size_t resultSize ) );

// device indepentdent image buffer related functions
MVDMR_API TDMR_ERROR DMR_CALL DMR_AllocImageRequestBufferDesc( ImageBuffer** ppBuffer, int channelCount );
MVDMR_API TDMR_ERROR DMR_CALL DMR_ReleaseImageRequestBufferDesc( ImageBuffer** ppBuffer );
MVDMR_API TDMR_ERROR DMR_CALL DMR_CopyImageRequestBufferDesc( const ImageBuffer* pSrc, ImageBuffer** ppDst, int flags );
MVDMR_API TDMR_ERROR DMR_CALL DMR_AllocImageBuffer( ImageBuffer** ppBuffer, TImageBufferPixelFormat pixelFormat, int width, int height );
MVDMR_API TDMR_ERROR DMR_CALL DMR_ReleaseImageBuffer( ImageBuffer** ppBuffer );
MVDMR_API TDMR_ERROR DMR_CALL DMR_CopyImageBuffer( const ImageBuffer* pSrc, ImageBuffer** ppDst, int flags );
// miscellaneous functions
MVDMR_API const char* DMR_CALL DMR_ErrorCodeToString( int errorCode );
MVDMR_API const char* DMR_CALL DMR_GetVersion( TLibraryQuery libraryQuery );
// general object specific functions
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_IsSettingAvailable( const char* pName, TStorageFlag storageflags, TScope scope );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_DeleteSetting( const char* pName, TStorageFlag storageflags, TScope scope );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_CheckHandle( HOBJ hObj, TOBJ_HandleCheckMode mode );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetChangedCounter( HOBJ hObj, unsigned int* pChangedCounter );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetChangedCounterAttr( HOBJ hObj, unsigned int* pChangedCounter );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetContentDesc( HOBJ hList, char* pBuf, size_t bufSize );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetDocString( HOBJ hObj, char* pBuf, size_t bufSize );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetFlags( HOBJ hObj, TComponentFlag* pFlags );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetFlagsS( HOBJ hObj, const char* pSeparator, char* pBuf, size_t bufSize );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetName( HOBJ hObj, char* pBuf, size_t bufSize );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetDisplayName( HOBJ hObj, char* pBuf, size_t bufSize );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetType( HOBJ hObj, TComponentType* pType );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetTypeS( HOBJ hObj, char* pBuf, size_t bufSize );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetVisibility( HOBJ hObj, TComponentVisibility* pVisibility );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetVisibilityS( HOBJ hObj, char* pBuf, size_t bufSize );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_VisibilityToString( TComponentVisibility visibility, char* pBuf, size_t bufSize );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_IsDefault( HOBJ hObj, unsigned int* pResult );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_RestoreDefault( HOBJ hObj );
MVIMPACT_DEPRECATED_C( MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetHandle( HLIST hList, const char* pPathAndObjName, HOBJ* phObj ) );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetSelectedFeatures( HOBJ hObj, int index, HOBJ* phFeatures, size_t* pFeatureCount );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetSelectingFeatures( HOBJ hObj, int index, HOBJ* phFeatures, size_t* pFeatureCount );

//-----------------------------------------------------------------------------
/// \brief A prototype for a callback function that can be attached to a feature.
/**
 *  This callback will be executed whenever the feature changes
 */
typedef void ( DMR_CALL* CBOBJChanged )( /// The feature which has changed
    HOBJ hObj,
    /// A pointer to additional user data bound to this callback.
    /// This data can be passed to the callback on creation.
    /// Whenever the callback gets executed this data is passed back to the user.
    void* pUserData );
//-----------------------------------------------------------------------------
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_CreateCallback( TCallbackType type, CBOBJChanged pMeth, void* pUserData, CallbackHandle* phCallback );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_DeleteCallback( CallbackHandle hCallback );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_AttachCallback( HOBJ hObj, CallbackHandle hCallback );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_DetachCallback( HOBJ hObj, CallbackHandle hCallback );
// navigation within object hierachies
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetFirstSibling( HOBJ hObj, HOBJ* phFirstSibling );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetNextSibling( HOBJ hObj, HOBJ* phNextSibling );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetLastSibling( HOBJ hObj, HOBJ* phLastSibling );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetFirstChild( HOBJ hObj, HOBJ* phFirstChild );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetParent( HOBJ hObj, HOBJ* phParent );
// property specific object functions
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetMaxValCount( HOBJ hProp, unsigned int* pValCount );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetValCount( HOBJ hProp, unsigned int* pValCount );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_SetValCount( HOBJ hProp, unsigned int valCount );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetBinary( HOBJ hProp, char* pBuf, unsigned int bufSize, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_SetBinary( HOBJ hProp, const char* pBuf, unsigned int bufSize, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetBinaryBufferSize( HOBJ hProp, unsigned int* pBufSize, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetBinaryBufferMaxSize( HOBJ hProp, unsigned int* pBufSize );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetF( HOBJ hProp, double* pVal, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetFArray( HOBJ hProp, double* pVal, unsigned int valCount, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_SetF( HOBJ hProp, double val, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_SetFArray( HOBJ hProp, const double* pVal, unsigned int valCount, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetFDictEntry( HOBJ hProp, char* pTranslationString, size_t translationStringBufSize, double* pValue, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetFDictEntries( HOBJ hProp, char** pTranslationArray, size_t sizePerTranslationBuf, double* pValArray, size_t arraySizes );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetI( HOBJ hProp, int* pVal, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetIArray( HOBJ hProp, int* pVal, unsigned int valCount, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_SetI( HOBJ hProp, int val, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_SetIArray( HOBJ hProp, const int* pVal, unsigned int valCount, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetIDictEntry( HOBJ hProp, char* pTranslationString, size_t translationStringBufSize, int* pValue, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetIDictEntries( HOBJ hObj, char** pTranslationArray, size_t sizePerTranslationBuf, int* pValArray, size_t arraySizes );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetI64( HOBJ hProp, int64_type* pVal, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetI64Array( HOBJ hProp, int64_type* pVal, unsigned int valCount, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_SetI64( HOBJ hProp, int64_type val, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_SetI64Array( HOBJ hProp, const int64_type* pVal, unsigned int valCount, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetI64DictEntry( HOBJ hProp, char* pTranslationString, size_t translationStringBufSize, int64_type* pValue, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetI64DictEntries( HOBJ hObj, char** pTranslationArray, size_t sizePerTranslationBuf, int64_type* pValArray, size_t arraySizes );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetP( HOBJ hProp, void** pVal, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_SetP( HOBJ hProp, void* val, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetS( HOBJ hProp, char* pVal, size_t bufSize, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_SetS( HOBJ hProp, const char* pVal, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetSFormattedEx( HOBJ hProp, char* pBuf, size_t* pBufSize, const char* pFormat, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetSArrayFormattedEx( HOBJ hProp, char* pBuf, size_t* pBufSize, const char* pFormat, const char* pDelimiters, int startIndex, int endIndex, int mode );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_RemoveVal( HOBJ hProp, int index );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_IsConstantDefined( HOBJ hProp, int constant, unsigned int* pResult );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetDictSize( HOBJ hProp, unsigned int* pDictSize );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetFormatString( HOBJ hProp, char* pBuf, size_t bufSize );
// list specific object functions
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetElementCount( HLIST hList, unsigned int* pElementCount );
// method specific object functions
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_Execute( HOBJ hMeth, const char* pCallParams, const char* pDelimiters, int* pResult );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetSParamList( HOBJ hMeth, char* pBuf, size_t bufSize );
// advanced object specific functions
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetHandleEx( HLIST hList, const char* pObjName, HOBJ* phObj, unsigned int searchMode, int maxSearchDepth );
/// \brief A prototype for a function pointer used for in place string construction
/**
 *  This function pointer can be used to prototype advanced efficient calls to interface functions.
 *  \sa
 *  \b OBJ_GetSWithInplaceConstruction()
 */
typedef char* ( *SCF )( const char* pBuf, size_t bufSize );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_GetSWithInplaceConstruction( HOBJ hObj, TOBJ_StringQuery sq, char** pResult, SCF constructionFunc, int mode, int reserved );
MVDMR_API TPROPHANDLING_ERROR DMR_CALL OBJ_FreeSMemory( char* pBuffer );

#endif // DOXYGEN_CPP_DOCUMENTATION && WRAP_ANY

#ifndef __GNUC__
#pragma pack(pop) // restore previous structure alignment
#endif

#if defined(MVIMPACT_ACQUIRE_H_) || defined(DOXYGEN_CPP_DOCUMENTATION)
} // namespace acquire
} // namespace mvIMPACT
#endif // #if defined(MVIMPACT_ACQUIRE_H_) || defined(DOXYGEN_CPP_DOCUMENTATION)

#ifdef __cplusplus
}
#endif // __cplusplus

// restore Borland compiler switch 'force enums to the size of integer'
#if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
#   ifdef _WIN32
#       ifdef __BORLANDC__ // is Borland compiler?
#           pragma option pop
#       endif // __BORLANDC__
#   endif // _WIN32
#endif // !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)

#endif // mvDeviceManagerH
