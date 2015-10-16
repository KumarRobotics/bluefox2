//-----------------------------------------------------------------------------
#ifndef mvIMPACT_acquire_GenICam_CPP_autogen_h
#if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
#   define mvIMPACT_acquire_GenICam_CPP_autogen_h mvIMPACT_acquire_GenICam_CPP_autogen_h
#endif // DOXYGEN_SHOULD_SKIP_THIS && WRAP_ANY
//-----------------------------------------------------------------------------
// AUTOMATICALLY GENERATED CODE. DO NOT EDIT!!!

#include <mvIMPACT_CPP/mvIMPACT_acquire.h>

#ifdef SWIG
#   ifdef SWIGPYTHON
#       define WRAP_PYTHON
#   endif
#   ifdef SWIGJAVA
#       define WRAP_JAVA
#   endif
#endif

#ifdef WRAP_PYTHON
#   define PYTHON_ONLY(X) X
#   define PYTHON_CPP_SWITCH(PYTHON_WRAPPER_CODE,CPP_WRAPPER_CODE) PYTHON_WRAPPER_CODE
#   ifndef WRAP_ANY
#       define WRAP_ANY
#   endif // #ifndef WRAP_ANY
#else // #ifdef WRAP_PYTHON
#   define PYTHON_ONLY(X)
#   define PYTHON_CPP_SWITCH(PYTHON_WRAPPER_CODE,CPP_WRAPPER_CODE) CPP_WRAPPER_CODE
#endif // #ifdef WRAP_PYTHON

#ifdef _MSC_VER // is Microsoft compiler?
#   pragma warning( push )
#   if _MSC_VER < 1300 // is 'old' VC 6 compiler?
#       pragma warning( disable : 4786 ) // 'identifier was truncated to '255' characters in the debug information'
#       define __FUNCTION__ "No function name information as the __FUNCTION__ macro is not supported by this(VC 6) compiler"
#       pragma message( "WARNING: This header(" __FILE__ ") uses the __FUNCTION__ macro, which is not supported by this compiler. A default definition(\"" __FUNCTION__ "\") will be used!" )
#       pragma message( "WARNING: This header(" __FILE__ ") uses inheritance for exception classes. However this compiler can't handle this correctly. Trying to catch a specific exception by writing a catch block for a base class will not work!" )
#   endif // #if _MSC_VER < 1300
#   if _MSC_VER >= 1400 // is at least VC 2005 compiler?
#       include <assert.h>
#   endif // #if _MSC_VER >= 1400
#   pragma warning( disable : 4512 ) // 'assignment operator could not be generated' (reason: assignment operators declared 'private' but not implemented)
#endif // #ifdef _MSC_VER

namespace mvIMPACT
{
namespace acquire
{
namespace GenICam
{

/// \defgroup GenICamInterface GenICam interface layout
/// \brief Classes and functions that will be available if the device is used
/// with the \a GenICam interface layout
/**
 *  This group contains classes and functions that will be available if the device is used
 *  with the <b>mvIMPACT::acquire::dilGenICam</b> interface layout.
 */
/// @{

//-----------------------------------------------------------------------------
/// \brief Category for device information and control.
/**
 *  A category for device information and control.
 */
class DeviceControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::DeviceControl</b> object.
    explicit DeviceControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        deviceType(),
        deviceScanType(),
        deviceVendorName(),
        deviceModelName(),
        deviceFamilyName(),
        deviceManufacturerInfo(),
        deviceVersion(),
        deviceFirmwareVersion(),
        deviceSerialNumber(),
        deviceID(),
        deviceUserID(),
        deviceSFNCVersionMajor(),
        deviceSFNCVersionMinor(),
        deviceSFNCVersionSubMinor(),
        deviceManifestEntrySelector(),
        deviceManifestXMLMajorVersion(),
        deviceManifestXMLMinorVersion(),
        deviceManifestXMLSubMinorVersion(),
        deviceManifestSchemaMajorVersion(),
        deviceManifestSchemaMinorVersion(),
        deviceManifestPrimaryURL(),
        deviceManifestSecondaryURL(),
        deviceTLType(),
        deviceTLVersionMajor(),
        deviceTLVersionMinor(),
        deviceTLVersionSubMinor(),
        deviceGenCPVersionMajor(),
        deviceGenCPVersionMinor(),
        deviceMaxThroughput(),
        deviceConnectionSelector(),
        deviceConnectionSpeed(),
        deviceConnectionStatus(),
        deviceLinkSelector(),
        deviceLinkSpeed(),
        deviceLinkThroughputLimitMode(),
        deviceLinkThroughputLimit(),
        deviceLinkConnectionCount(),
        deviceLinkHeartbeatMode(),
        deviceLinkHeartbeatTimeout(),
        deviceLinkCommandTimeout(),
        deviceStreamChannelCount(),
        deviceStreamChannelSelector(),
        deviceStreamChannelType(),
        deviceStreamChannelLink(),
        deviceStreamChannelEndianness(),
        deviceStreamChannelPacketSize(),
        deviceEventChannelCount(),
        deviceMessageChannelCount(),
        deviceCharacterSet(),
        deviceReset(),
        deviceIndicatorMode(),
        deviceFeaturePersistenceStart(),
        deviceFeaturePersistenceEnd(),
        deviceRegistersStreamingStart(),
        deviceRegistersStreamingEnd(),
        deviceRegistersCheck(),
        deviceRegistersValid(),
        deviceRegistersEndianness(),
        deviceTemperatureSelector(),
        deviceTemperature(),
        deviceClockSelector(),
        deviceClockFrequency(),
        deviceSerialPortSelector(),
        deviceSerialPortBaudRate(),
        timestamp(),
        timestampReset(),
        timestampLatch(),
        timestampLatchValue(),
        mvDeviceTemperatureRaw(),
        mvDeviceTemperatureUpperLimit(),
        mvDeviceTemperatureLowerLimit(),
        mvDeviceTemperatureLimitHysteresis(),
        mvDeviceClockFrequency(),
        mvDeviceClockGranularity(),
        mvDeviceSensorName(),
        mvDeviceSensorColorMode(),
        mvDeviceSensor(),
        mvDeviceFPGAVersion(),
        mvDeviceFirmwareSource(),
        mvDeviceProcessingUnitSelector(),
        mvDeviceProcessingUnit(),
        mvDevicePowerMode()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( deviceType, "DeviceType" );
        locator.bindComponent( deviceScanType, "DeviceScanType" );
        locator.bindComponent( deviceVendorName, "DeviceVendorName" );
        locator.bindComponent( deviceModelName, "DeviceModelName" );
        locator.bindComponent( deviceFamilyName, "DeviceFamilyName" );
        locator.bindComponent( deviceManufacturerInfo, "DeviceManufacturerInfo" );
        locator.bindComponent( deviceVersion, "DeviceVersion" );
        locator.bindComponent( deviceFirmwareVersion, "DeviceFirmwareVersion" );
        locator.bindComponent( deviceSerialNumber, "DeviceSerialNumber" );
        locator.bindComponent( deviceID, "DeviceID" );
        locator.bindComponent( deviceUserID, "DeviceUserID" );
        locator.bindComponent( deviceSFNCVersionMajor, "DeviceSFNCVersionMajor" );
        locator.bindComponent( deviceSFNCVersionMinor, "DeviceSFNCVersionMinor" );
        locator.bindComponent( deviceSFNCVersionSubMinor, "DeviceSFNCVersionSubMinor" );
        locator.bindComponent( deviceManifestEntrySelector, "DeviceManifestEntrySelector" );
        locator.bindComponent( deviceManifestXMLMajorVersion, "DeviceManifestXMLMajorVersion" );
        locator.bindComponent( deviceManifestXMLMinorVersion, "DeviceManifestXMLMinorVersion" );
        locator.bindComponent( deviceManifestXMLSubMinorVersion, "DeviceManifestXMLSubMinorVersion" );
        locator.bindComponent( deviceManifestSchemaMajorVersion, "DeviceManifestSchemaMajorVersion" );
        locator.bindComponent( deviceManifestSchemaMinorVersion, "DeviceManifestSchemaMinorVersion" );
        locator.bindComponent( deviceManifestPrimaryURL, "DeviceManifestPrimaryURL" );
        locator.bindComponent( deviceManifestSecondaryURL, "DeviceManifestSecondaryURL" );
        locator.bindComponent( deviceTLType, "DeviceTLType" );
        locator.bindComponent( deviceTLVersionMajor, "DeviceTLVersionMajor" );
        locator.bindComponent( deviceTLVersionMinor, "DeviceTLVersionMinor" );
        locator.bindComponent( deviceTLVersionSubMinor, "DeviceTLVersionSubMinor" );
        locator.bindComponent( deviceGenCPVersionMajor, "DeviceGenCPVersionMajor" );
        locator.bindComponent( deviceGenCPVersionMinor, "DeviceGenCPVersionMinor" );
        locator.bindComponent( deviceMaxThroughput, "DeviceMaxThroughput" );
        locator.bindComponent( deviceConnectionSelector, "DeviceConnectionSelector" );
        locator.bindComponent( deviceConnectionSpeed, "DeviceConnectionSpeed" );
        locator.bindComponent( deviceConnectionStatus, "DeviceConnectionStatus" );
        locator.bindComponent( deviceLinkSelector, "DeviceLinkSelector" );
        locator.bindComponent( deviceLinkSpeed, "DeviceLinkSpeed" );
        locator.bindComponent( deviceLinkThroughputLimitMode, "DeviceLinkThroughputLimitMode" );
        locator.bindComponent( deviceLinkThroughputLimit, "DeviceLinkThroughputLimit" );
        locator.bindComponent( deviceLinkConnectionCount, "DeviceLinkConnectionCount" );
        locator.bindComponent( deviceLinkHeartbeatMode, "DeviceLinkHeartbeatMode" );
        locator.bindComponent( deviceLinkHeartbeatTimeout, "DeviceLinkHeartbeatTimeout" );
        locator.bindComponent( deviceLinkCommandTimeout, "DeviceLinkCommandTimeout" );
        locator.bindComponent( deviceStreamChannelCount, "DeviceStreamChannelCount" );
        locator.bindComponent( deviceStreamChannelSelector, "DeviceStreamChannelSelector" );
        locator.bindComponent( deviceStreamChannelType, "DeviceStreamChannelType" );
        locator.bindComponent( deviceStreamChannelLink, "DeviceStreamChannelLink" );
        locator.bindComponent( deviceStreamChannelEndianness, "DeviceStreamChannelEndianness" );
        locator.bindComponent( deviceStreamChannelPacketSize, "DeviceStreamChannelPacketSize" );
        locator.bindComponent( deviceEventChannelCount, "DeviceEventChannelCount" );
        locator.bindComponent( deviceMessageChannelCount, "DeviceMessageChannelCount" );
        locator.bindComponent( deviceCharacterSet, "DeviceCharacterSet" );
        locator.bindComponent( deviceReset, "DeviceReset@i" );
        locator.bindComponent( deviceIndicatorMode, "DeviceIndicatorMode" );
        locator.bindComponent( deviceFeaturePersistenceStart, "DeviceFeaturePersistenceStart@i" );
        locator.bindComponent( deviceFeaturePersistenceEnd, "DeviceFeaturePersistenceEnd@i" );
        locator.bindComponent( deviceRegistersStreamingStart, "DeviceRegistersStreamingStart@i" );
        locator.bindComponent( deviceRegistersStreamingEnd, "DeviceRegistersStreamingEnd@i" );
        locator.bindComponent( deviceRegistersCheck, "DeviceRegistersCheck@i" );
        locator.bindComponent( deviceRegistersValid, "DeviceRegistersValid" );
        locator.bindComponent( deviceRegistersEndianness, "DeviceRegistersEndianness" );
        locator.bindComponent( deviceTemperatureSelector, "DeviceTemperatureSelector" );
        locator.bindComponent( deviceTemperature, "DeviceTemperature" );
        locator.bindComponent( deviceClockSelector, "DeviceClockSelector" );
        locator.bindComponent( deviceClockFrequency, "DeviceClockFrequency" );
        locator.bindComponent( deviceSerialPortSelector, "DeviceSerialPortSelector" );
        locator.bindComponent( deviceSerialPortBaudRate, "DeviceSerialPortBaudRate" );
        locator.bindComponent( timestamp, "Timestamp" );
        locator.bindComponent( timestampReset, "TimestampReset@i" );
        locator.bindComponent( timestampLatch, "TimestampLatch@i" );
        locator.bindComponent( timestampLatchValue, "TimestampLatchValue" );
        locator.bindComponent( mvDeviceTemperatureRaw, "mvDeviceTemperatureRaw" );
        locator.bindComponent( mvDeviceTemperatureUpperLimit, "mvDeviceTemperatureUpperLimit" );
        locator.bindComponent( mvDeviceTemperatureLowerLimit, "mvDeviceTemperatureLowerLimit" );
        locator.bindComponent( mvDeviceTemperatureLimitHysteresis, "mvDeviceTemperatureLimitHysteresis" );
        locator.bindComponent( mvDeviceClockFrequency, "mvDeviceClockFrequency" );
        locator.bindComponent( mvDeviceClockGranularity, "mvDeviceClockGranularity" );
        locator.bindComponent( mvDeviceSensorName, "mvDeviceSensorName" );
        locator.bindComponent( mvDeviceSensorColorMode, "mvDeviceSensorColorMode" );
        locator.bindComponent( mvDeviceSensor, "mvDeviceSensor" );
        locator.bindComponent( mvDeviceFPGAVersion, "mvDeviceFPGAVersion" );
        locator.bindComponent( mvDeviceFirmwareSource, "mvDeviceFirmwareSource" );
        if( !mvDeviceFirmwareSource.isValid() )
        {
            locator.bindComponent( mvDeviceFirmwareSource, "FirmwareSource" );
        }
        locator.bindComponent( mvDeviceProcessingUnitSelector, "mvDeviceProcessingUnitSelector" );
        locator.bindComponent( mvDeviceProcessingUnit, "mvDeviceProcessingUnit" );
        locator.bindComponent( mvDevicePowerMode, "mvDevicePowerMode" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Returns the device type.
    /**
     *  Returns the device type.
     *
     *  The following string values might be valid for this feature:
     *  - \b Transmitter (Display string: 'Transmitter'): Data stream transmitter device.
     *  - \b Receiver (Display string: 'Receiver'): Data stream receiver device.
     *  - \b Transceiver (Display string: 'Transceiver'): Data stream receiver and transmitter device.
     *  - \b Peripheral (Display string: 'Peripheral'): Controllable device (with no data stream handling).
     *  - \b Custom (Display string: 'Custom'): This enumeration value indicates that this is a device for a custom protocol.
     *  - \b GEV (Display string: 'GigE Vision'): This enumeration value indicates that this is a device for the GigE Vision protocol.
     *  - \b U3V (Display string: 'USB3 Vision'): This enumeration value indicates that this is a device for the USB3 Vision protocol.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceType;
    /// \brief An enumerated integer property. Scan type of the sensor of the device.
    /**
     *  Scan type of the sensor of the device.
     *
     *  The following string values might be valid for this feature:
     *  - \b Areascan (Display string: 'Areascan'): 2D sensor.
     *  - \b Linescan (Display string: 'Linescan'): 1D sensor.
     *  - \b Areascan3D (Display string: 'Areascan 3 D'): device outputs 2D range image.
     *  - \b Linescan3D (Display string: 'Linescan 3 D'): device outputs 1D range image.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceScanType;
    /// \brief A string property. Name of the manufacturer of the device.
    /**
     *  Name of the manufacturer of the device.
     */
    PropertyS deviceVendorName;
    /// \brief A string property. Model of the device.
    /**
     *  Model of the device.
     */
    PropertyS deviceModelName;
    /// \brief A string property. Identifier of the product family of the device.
    /**
     *  Identifier of the product family of the device.
     */
    PropertyS deviceFamilyName;
    /// \brief A string property. Manufacturer information about the device.
    /**
     *  Manufacturer information about the device.
     */
    PropertyS deviceManufacturerInfo;
    /// \brief A string property. Version of the device.
    /**
     *  Version of the device.
     */
    PropertyS deviceVersion;
    /// \brief A string property. Version of the firmware in the device.
    /**
     *  Version of the firmware in the device.
     */
    PropertyS deviceFirmwareVersion;
    /// \brief A string property. Device's serial number.
    /**
     *  Device's serial number. This string is a unique identifier of the device.
     */
    PropertyS deviceSerialNumber;
    /// \brief A string property. This feature is deprecated (See DeviceSerialNumber).
    /**
     *  \deprecated
     *  This feature is deprecated (See DeviceSerialNumber). It was representing the Device unique identifier (serial number).
     */
    PropertyS deviceID;
    /// \brief A string property. User-programmable device identifier.
    /**
     *  User-programmable device identifier.
     */
    PropertyS deviceUserID;
    /// \brief An integer property. Major version of the Standard Features Naming Convention that was used to create the device's GenICam XML.
    /**
     *  Major version of the Standard Features Naming Convention that was used to create the device's GenICam XML.
     */
    PropertyI64 deviceSFNCVersionMajor;
    /// \brief An integer property. Minor version of the Standard Features Naming Convention that was used to create the device's GenICam XML.
    /**
     *  Minor version of the Standard Features Naming Convention that was used to create the device's GenICam XML.
     */
    PropertyI64 deviceSFNCVersionMinor;
    /// \brief An integer property. Sub minor version of Standard Features Naming Convention that was used to create the device's GenICam XML.
    /**
     *  Sub minor version of Standard Features Naming Convention that was used to create the device's GenICam XML.
     */
    PropertyI64 deviceSFNCVersionSubMinor;
    /// \brief An integer property. Selects the manifest entry to reference.
    /**
     *  Selects the manifest entry to reference.
     */
    PropertyI64 deviceManifestEntrySelector;
    /// \brief An integer property. Indicates the major version number of the GenICam XML file of the selected manifest entry.
    /**
     *  Indicates the major version number of the GenICam XML file of the selected manifest entry.
     */
    PropertyI64 deviceManifestXMLMajorVersion;
    /// \brief An integer property. Indicates the minor version number of the GenICam XML file of the selected manifest entry.
    /**
     *  Indicates the minor version number of the GenICam XML file of the selected manifest entry.
     */
    PropertyI64 deviceManifestXMLMinorVersion;
    /// \brief An integer property. Indicates the subminor version number of the GenICam XML file of the selected manifest entry.
    /**
     *  Indicates the subminor version number of the GenICam XML file of the selected manifest entry.
     */
    PropertyI64 deviceManifestXMLSubMinorVersion;
    /// \brief An integer property. Indicates the major version number of the schema file of the selected manifest entry.
    /**
     *  Indicates the major version number of the schema file of the selected manifest entry.
     */
    PropertyI64 deviceManifestSchemaMajorVersion;
    /// \brief An integer property. Indicates the minor version number of the schema file of the selected manifest entry.
    /**
     *  Indicates the minor version number of the schema file of the selected manifest entry.
     */
    PropertyI64 deviceManifestSchemaMinorVersion;
    /// \brief A string property. Indicates the first URL to the GenICam XML device description file of the selected manifest entry.
    /**
     *  Indicates the first URL to the GenICam XML device description file of the selected manifest entry.
     */
    PropertyS deviceManifestPrimaryURL;
    /// \brief A string property. Indicates the second URL to the GenICam XML device description file of the selected manifest entry.
    /**
     *  Indicates the second URL to the GenICam XML device description file of the selected manifest entry.
     */
    PropertyS deviceManifestSecondaryURL;
    /// \brief An enumerated integer property. Transport Layer type of the device.
    /**
     *  Transport Layer type of the device.
     *
     *  The following string values might be valid for this feature:
     *  - \b GigEVision (Display string: 'GigE Vision'): GigE Vision.
     *  - \b CameraLink (Display string: 'Camera Link'): Camera Link.
     *  - \b CameraLinkHS (Display string: 'Camera Link HS'): Camera Link High Speed.
     *  - \b CoaXPress (Display string: 'CoaXPress'): CoaXPress.
     *  - \b USB3Vision (Display string: 'USB3 Vision'): USB3 Vision.
     *  - \b Custom (Display string: 'Custom'): Custom Transport Layer.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceTLType;
    /// \brief An integer property. Major version of the Transport Layer of the device.
    /**
     *  Major version of the Transport Layer of the device.
     */
    PropertyI64 deviceTLVersionMajor;
    /// \brief An integer property. Minor version of the Transport Layer of the device.
    /**
     *  Minor version of the Transport Layer of the device.
     */
    PropertyI64 deviceTLVersionMinor;
    /// \brief An integer property. Sub minor version of the Transport Layer of the device.
    /**
     *  Sub minor version of the Transport Layer of the device.
     */
    PropertyI64 deviceTLVersionSubMinor;
    /// \brief An integer property. Major version of the GenCP protocol supported by the device.
    /**
     *  Major version of the GenCP protocol supported by the device.
     */
    PropertyI64 deviceGenCPVersionMajor;
    /// \brief An integer property. Minor version of the GenCP protocol supported by the device.
    /**
     *  Minor version of the GenCP protocol supported by the device.
     */
    PropertyI64 deviceGenCPVersionMinor;
    /// \brief An integer property. Maximum bandwidth of the data that can be streamed out of the device.
    /**
     *  Maximum bandwidth of the data that can be streamed out of the device. This can be used to estimate if the physical connection(s) can sustain transfer of free-running images from the camera at its maximum speed.
     */
    PropertyI64 deviceMaxThroughput;
    /// \brief An integer property. Selects which Connection of the device to control.
    /**
     *  Selects which Connection of the device to control.
     */
    PropertyI64 deviceConnectionSelector;
    /// \brief An integer property. Indicates the speed of transmission of the specified Connection.
    /**
     *  Indicates the speed of transmission of the specified Connection
     */
    PropertyI64 deviceConnectionSpeed;
    /// \brief An enumerated integer property. Indicates the status of the specified Connection.
    /**
     *  Indicates the status of the specified Connection.
     *
     *  The following string values might be valid for this feature:
     *  - \b Active (Display string: 'Active'): Connection is in use.
     *  - \b Inactive (Display string: 'Inactive'): Connection is not in use.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceConnectionStatus;
    /// \brief An integer property. Selects which Link of the device to control.
    /**
     *  Selects which Link of the device to control.
     */
    PropertyI64 deviceLinkSelector;
    /// \brief An integer property. Indicates the speed of transmission negotiated on the specified Link.
    /**
     *  Indicates the speed of transmission negotiated on the specified Link.
     */
    PropertyI64 deviceLinkSpeed;
    /// \brief An enumerated integer property. Controls if the DeviceLinkThroughputLimit is active.
    /**
     *  Controls if the DeviceLinkThroughputLimit is active. When disabled, lower level TL specific features are expected to control the throughput. When enabled, DeviceLinkThroughputLimit controls the overall throughput.
     *
     *  The following string values might be valid for this feature:
     *  - \b On (Display string: 'On'): Enables the DeviceLinkThroughputLimit feature.
     *  - \b Off (Display string: 'Off'): Disables the DeviceLinkThroughputLimit feature.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceLinkThroughputLimitMode;
    /// \brief An integer property. Limits the maximum bandwidth of the data that will be streamed out by the device on the selected Link.
    /**
     *  Limits the maximum bandwidth of the data that will be streamed out by the device on the selected Link. If necessary, delays will be uniformly inserted between transport layer packets in order to control the peak bandwidth.
     */
    PropertyI64 deviceLinkThroughputLimit;
    /// \brief An integer property. Returns the number of physical connection of the device used by a particular Link.
    /**
     *  Returns the number of physical connection of the device used by a particular Link.
     */
    PropertyI64 deviceLinkConnectionCount;
    /// \brief An enumerated integer property. Activate or deactivate the Link's heartbeat.
    /**
     *  Activate or deactivate the Link's heartbeat.
     *
     *  The following string values might be valid for this feature:
     *  - \b On (Display string: 'On'): Enables the Link heartbeat.
     *  - \b Off (Display string: 'Off'): Disables the Link heartbeat.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceLinkHeartbeatMode;
    /// \brief A floating point property. Controls the current heartbeat timeout of the specific Link.
    /**
     *  Controls the current heartbeat timeout of the specific Link.
     */
    PropertyF deviceLinkHeartbeatTimeout;
    /// \brief A floating point property. Indicates the command timeout of the specified Link.
    /**
     *  Indicates the command timeout of the specified Link. This corresponds to the maximum response time of the device for a command sent on that link.
     */
    PropertyF deviceLinkCommandTimeout;
    /// \brief An integer property. Indicates the number of streaming channels supported by the device.
    /**
     *  Indicates the number of streaming channels supported by the device.
     */
    PropertyI64 deviceStreamChannelCount;
    /// \brief An integer property. Selects the stream channel to control.
    /**
     *  Selects the stream channel to control.
     */
    PropertyI64 deviceStreamChannelSelector;
    /// \brief An enumerated integer property. Reports the type of the stream channel.
    /**
     *  Reports the type of the stream channel.
     *
     *  The following string values might be valid for this feature:
     *  - \b Transmitter (Display string: 'Transmitter'): Data stream transmitter channel.
     *  - \b Receiver (Display string: 'Receiver'): Data stream receiver channel.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceStreamChannelType;
    /// \brief An integer property. Index of device's Link to use for streaming the specifed stream channel.
    /**
     *  Index of device's Link to use for streaming the specifed stream channel.
     */
    PropertyI64 deviceStreamChannelLink;
    /// \brief An enumerated integer property. Endianess of multi-byte pixel data for this stream.
    /**
     *  Endianess of multi-byte pixel data for this stream.
     *
     *  The following string values might be valid for this feature:
     *  - \b Big (Display string: 'Big'): Stream channel data is big Endian.
     *  - \b Little (Display string: 'Little'): Stream channel data is little Endian.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceStreamChannelEndianness;
    /// \brief An integer property. Specifies the stream packet size, in bytes, to send on the selected channel for a Transmitter or specifies the maximum packet size supported by a receiver.
    /**
     *  Specifies the stream packet size, in bytes, to send on the selected channel for a Transmitter or specifies the maximum packet size supported by a receiver.
     */
    PropertyI64 deviceStreamChannelPacketSize;
    /// \brief An integer property. Indicates the number of event channels supported by the device.
    /**
     *  Indicates the number of event channels supported by the device.
     */
    PropertyI64 deviceEventChannelCount;
    /// \brief An integer property. This feature is deprecated (See DeviceEventChannelCount).
    /**
     *  \deprecated
     *  This feature is deprecated (See DeviceEventChannelCount). It indicates the number of message/event channels supported by the device.
     */
    PropertyI64 deviceMessageChannelCount;
    /// \brief An enumerated integer property. Character set used by the strings of the device's bootstrap registers.
    /**
     *  Character set used by the strings of the device's bootstrap registers.
     *
     *  The following string values might be valid for this feature:
     *  - \b UTF8 (Display string: 'UTF 8'): Device use UTF8 character set.
     *  - \b ASCII (Display string: 'ASCII'): Device use ASCII character set.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceCharacterSet;
    /// \brief A method object. Resets the device to its power up state.
    /**
     *  Resets the device to its power up state. After reset, the device must be rediscovered.
     */
    Method deviceReset;
    /// \brief An enumerated integer property. Controls the behavior of the indicators (such as LEDs) showing the status of the Device.
    /**
     *  Controls the behavior of the indicators (such as LEDs) showing the status of the Device.
     *
     *  The following string values might be valid for this feature:
     *  - \b Inactive (Display string: 'Inactive'): Device's indicators are inactive (Off).
     *  - \b Active (Display string: 'Active'): Device's indicators are active showing their respective status.
     *  - \b ErrorStatus (Display string: 'Error Status'): Device's indicators are inactive unless an error occurs.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceIndicatorMode;
    /// \brief A method object. Indicate to the device and GenICam XML to get ready for persisting of all streamable features.
    /**
     *  Indicate to the device and GenICam XML to get ready for persisting of all streamable features.
     */
    Method deviceFeaturePersistenceStart;
    /// \brief A method object. Indicate to the device the end of feature persistence.
    /**
     *  Indicate to the device the end of feature persistence.
     */
    Method deviceFeaturePersistenceEnd;
    /// \brief A method object. Prepare the device for registers streaming without checking for consistency.
    /**
     *  Prepare the device for registers streaming without checking for consistency.
     */
    Method deviceRegistersStreamingStart;
    /// \brief A method object. Announce the end of registers streaming.
    /**
     *  Announce the end of registers streaming. This will do a register set validation for consistency and activate it. This will also update the DeviceRegistersValid flag.
     */
    Method deviceRegistersStreamingEnd;
    /// \brief A method object. Perform the validation of the current register set for consistency.
    /**
     *  Perform the validation of the current register set for consistency. This will update the DeviceRegistersValid flag.
     */
    Method deviceRegistersCheck;
    /// \brief A boolean property. Returns if the current register set is valid and consistent.
    /**
     *  Returns if the current register set is valid and consistent.
     */
    PropertyIBoolean deviceRegistersValid;
    /// \brief An enumerated integer property. Endianess of the registers of the device.
    /**
     *  Endianess of the registers of the device.
     *
     *  The following string values might be valid for this feature:
     *  - \b Big (Display string: 'Big'): Device's registers are big Endian.
     *  - \b Little (Display string: 'Little'): Device's registers are little Endian.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceRegistersEndianness;
    /// \brief An enumerated integer property. Selects the location within the device, where the temperature will be measured.
    /**
     *  Selects the location within the device, where the temperature will be measured.
     *
     *  The following string values might be valid for this feature:
     *  - \b Sensor (Display string: 'Sensor'): Temperature of the image sensor of the camera.
     *  - \b Mainboard (Display string: 'Mainboard'): Temperature of the device's mainboard.
     *  - \b XLamp (Display string: 'Device Temperature Selector')
     *  - \b SensorCMVx000 (Display string: 'Device Temperature Selector')
     *  - \b SensorInternal (Display string: 'Device Temperature Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceTemperatureSelector;
    /// \brief A floating point property. Device temperature in degrees Celsius (C).
    /**
     *  Device temperature in degrees Celsius (C). It is measured at the location selected by DeviceTemperatureSelector.
     */
    PropertyF deviceTemperature;
    /// \brief An enumerated integer property. Selects the clock frequency to access from the device.
    /**
     *  Selects the clock frequency to access from the device.
     *
     *  The following string values might be valid for this feature:
     *  - \b Sensor (Display string: 'Sensor'): Clock frequency of the image sensor of the camera.
     *  - \b SensorDigitization (Display string: 'Sensor Digitization'): Clock frequency of the camera A/D conversion stage.
     *  - \b CameraLink (Display string: 'Camera Link'): Frequency of the Camera Link clock.
     *  - \b DeviceSpecific (Display string: 'Device Clock Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceClockSelector;
    /// \brief A floating point property. Returns the frequency of the selected Clock.
    /**
     *  Returns the frequency of the selected Clock.
     */
    PropertyF deviceClockFrequency;
    /// \brief An enumerated integer property. Selects which serial port of the device to control.
    /**
     *  Selects which serial port of the device to control.
     *
     *  The following string values might be valid for this feature:
     *  - \b CameraLink (Display string: 'Camera Link'): Serial port associated to the Camera link connection.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceSerialPortSelector;
    /// \brief An enumerated integer property. This feature controls the baud rate used by the selected serial port.
    /**
     *  This feature controls the baud rate used by the selected serial port.
     *
     *  The following string values might be valid for this feature:
     *  - \b Baud9600 (Display string: 'Baud 9600'): Serial port speed of 9600 baud.
     *  - \b Baud19200 (Display string: 'Baud 19200'): Serial port speed of 19200 baud.
     *  - \b Baud38400 (Display string: 'Baud 38400'): Serial port speed of 38400 baud.
     *  - \b Baud57600 (Display string: 'Baud 57600'): Serial port speed of 57600 baud.
     *  - \b Baud115200 (Display string: 'Baud 115200'): Serial port speed of 115200 baud.
     *  - \b Baud230400 (Display string: 'Baud 230400'): Serial port speed of 230400 baud.
     *  - \b Baud460800 (Display string: 'Baud 460800'): Serial port speed of 460800 baud.
     *  - \b Baud921600 (Display string: 'Baud 921600'): Serial port speed of 921600 baud.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceSerialPortBaudRate;
    /// \brief An integer property. Reports the current value of the device timestamp counter.
    /**
     *  Reports the current value of the device timestamp counter.
     */
    PropertyI64 timestamp;
    /// \brief A method object. Resets the current value of the device timestamp counter.
    /**
     *  Resets the current value of the device timestamp counter.
     */
    Method timestampReset;
    /// \brief A method object. Latches the current timestamp counter into TimestampLatchValue.
    /**
     *  Latches the current timestamp counter into TimestampLatchValue.
     */
    Method timestampLatch;
    /// \brief An integer property. Returns the latched value of the timestamp counter.
    /**
     *  Returns the latched value of the timestamp counter.
     */
    PropertyI64 timestampLatchValue;
    /// \brief An integer property. Device temperature in degrees Celsius (C).
    /**
     *  Device temperature in degrees Celsius (C). It is measured at the location selected by DeviceTemperatureSelector.
     */
    PropertyI64 mvDeviceTemperatureRaw;
    /// \brief An integer property. Upper limit in degrees Celsius(C) for the TemperatureOutOfRange signal.
    /**
     *  Upper limit in degrees Celsius(C) for the TemperatureOutOfRange signal.
     */
    PropertyI64 mvDeviceTemperatureUpperLimit;
    /// \brief An integer property. Lower limit in degrees Celsius(C) for the TemperatureOutOfRange signal.
    /**
     *  Lower limit in degrees Celsius(C) for the TemperatureOutOfRange signal.
     */
    PropertyI64 mvDeviceTemperatureLowerLimit;
    /// \brief An enumerated integer property. Hysteresis in degrees Celsius(C) for temperature limits.
    /**
     *  Hysteresis in degrees Celsius(C) for temperature limits.
     *
     *  The following string values might be valid for this feature:
     *  - \b deg_0p0 (Display string: 'mv Device Temperature Limit Hysteresis')
     *  - \b deg_1p5 (Display string: 'mv Device Temperature Limit Hysteresis')
     *  - \b deg_3p0 (Display string: 'mv Device Temperature Limit Hysteresis')
     *  - \b deg_6p0 (Display string: 'mv Device Temperature Limit Hysteresis')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvDeviceTemperatureLimitHysteresis;
    /// \brief An enumerated integer property. Clock frequency of the image sensor of the camera.
    /**
     *  Clock frequency of the image sensor of the camera.
     *
     *  The following string values might be valid for this feature:
     *  - \b kHz_08000 (Display string: '8000 kHz')
     *  - \b kHz_10000 (Display string: '10000 kHz')
     *  - \b kHz_11000 (Display string: '11000 kHz')
     *  - \b kHz_12000 (Display string: '12000 kHz')
     *  - \b kHz_20000 (Display string: '20000 kHz')
     *  - \b kHz_22000 (Display string: '22000 kHz')
     *  - \b kHz_23000 (Display string: '23000 kHz')
     *  - \b kHz_24000 (Display string: '24000 kHz')
     *  - \b kHz_24540 (Display string: '24540 kHz')
     *  - \b kHz_25000 (Display string: '25000 kHz')
     *  - \b kHz_26000 (Display string: '26000 kHz')
     *  - \b kHz_27000 (Display string: '27000 kHz')
     *  - \b kHz_28000 (Display string: '28000 kHz')
     *  - \b kHz_29000 (Display string: '29000 kHz')
     *  - \b kHz_29500 (Display string: '29500 kHz')
     *  - \b kHz_30000 (Display string: '30000 kHz')
     *  - \b kHz_32000 (Display string: '32000 kHz')
     *  - \b kHz_36000 (Display string: '36000 kHz')
     *  - \b kHz_37120 (Display string: '37120 kHz')
     *  - \b kHz_40000 (Display string: '40000 kHz')
     *  - \b kHz_45000 (Display string: '45000 kHz')
     *  - \b kHz_48000 (Display string: '48000 kHz')
     *  - \b kHz_50000 (Display string: '50000 kHz')
     *  - \b kHz_56000 (Display string: '56000 kHz')
     *  - \b kHz_60000 (Display string: '60000 kHz')
     *  - \b kHz_65000 (Display string: '65000 kHz')
     *  - \b kHz_66000 (Display string: '66000 kHz')
     *  - \b kHz_74250 (Display string: '74250 kHz')
     *  - \b kHz_80000 (Display string: '80000 kHz')
     *  - \b kHz_85000 (Display string: '85000 kHz')
     *  - \b kHz_96000 (Display string: '96000 kHz')
     *  - \b kHz_98000 (Display string: '98000 kHz')
     *  - \b kHz_120000 (Display string: '120000 kHz')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvDeviceClockFrequency;
    /// \brief An integer property. Special register to configure the clock granularity for LUPA sensors.
    /**
     *  Special register to configure the clock granularity for LUPA sensors.
     */
    PropertyI64 mvDeviceClockGranularity;
    /// \brief A string property. Shows the name of the sensor.
    /**
     *  Shows the name of the sensor.
     */
    PropertyS mvDeviceSensorName;
    /// \brief An enumerated integer property. Shows color mode of the sensor.
    /**
     *  Shows color mode of the sensor.
     *
     *  The following string values might be valid for this feature:
     *  - \b Unknown (Display string: 'mv Device Sensor Color Mode')
     *  - \b Grey (Display string: 'mv Device Sensor Color Mode')
     *  - \b BayerMosaic (Display string: 'mv Device Sensor Color Mode')
     *  - \b NearInfraRed (Display string: 'mv Device Sensor Color Mode')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvDeviceSensorColorMode;
    /// \brief An enumerated integer property. Selects the sensor interface.
    /**
     *  Selects the start-up sensor interface.
     *
     *  The following string values might be valid for this feature:
     *  - \b mv3DSensor (Display string: 'mv Device Sensor')
     *  - \b mvPreviewSensor (Display string: 'mv Device Sensor')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvDeviceSensor;
    /// \brief A string property. Shows version number of the FPGA.
    /**
     *  Shows version number of the FPGA.
     */
    PropertyS mvDeviceFPGAVersion;
    /// \brief An enumerated integer property. Shows the location from where the firmware was loaded.
    /**
     *  Shows the location from where the firmware was loaded.
     *
     *  The following string values might be valid for this feature:
     *  - \b BootSection (Display string: 'mv Device Firmware Source')
     *  - \b ProgramSection (Display string: 'mv Device Firmware Source')
     *  - \b Upload (Display string: 'mv Device Firmware Source')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvDeviceFirmwareSource;
    /// \brief An integer property. Selects the device processing unit.
    /**
     *  Selects the device processing unit.
     */
    PropertyI64 mvDeviceProcessingUnitSelector;
    /// \brief An enumerated integer property. The processing unit to activate for the selected processing unit.
    /**
     *  The processing unit to activate for the selected processing unit.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvFFC (Display string: 'mv Device Processing Unit'): Selects the Flat-field correction engine for this processing unit.
     *  - \b mvFrameAverage (Display string: 'mv Device Processing Unit'): Selects the frame average engine for this processing unit.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvDeviceProcessingUnit;
    /// \brief An enumerated integer property. Selects the device power mode.
    /**
     *  Selects the device power mode.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvActive (Display string: 'mv Device Power Mode'): Puts the device to power-active mode. Going back to 'mvActive' will take about 10 seconds.
     *  - \b mvStandby (Display string: 'mv Device Power Mode'): Puts the device in power-saving mode. In this mode the device will only consume up to 20 percent of its normal power consumption. Going back to 'mvActive' will take about 10 seconds.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvDevicePowerMode;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category for Image Format Control features.
/**
 *  A category for Image Format Control features.
 */
class ImageFormatControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::ImageFormatControl</b> object.
    explicit ImageFormatControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        sensorWidth(),
        sensorHeight(),
        sensorShutterMode(),
        sensorTaps(),
        sensorDigitizationTaps(),
        widthMax(),
        heightMax(),
        regionSelector(),
        regionMode(),
        regionDestination(),
        imageComponentSelector(),
        imageComponentEnable(),
        width(),
        height(),
        offsetX(),
        offsetY(),
        linePitch(),
        binningSelector(),
        binningHorizontalMode(),
        binningHorizontal(),
        binningVerticalMode(),
        binningVertical(),
        decimationHorizontalMode(),
        decimationHorizontal(),
        decimationVerticalMode(),
        decimationVertical(),
        reverseX(),
        reverseY(),
        pixelFormat(),
        pixelFormatInfoSelector(),
        pixelFormatInfoID(),
        pixelCoding(),
        pixelSize(),
        pixelColorFilter(),
        pixelDynamicRangeMin(),
        pixelDynamicRangeMax(),
        testPatternGeneratorSelector(),
        testPattern(),
        testImageSelector(),
        deinterlacing(),
        imageCompressionMode(),
        imageCompressionRateOption(),
        imageCompressionQuality(),
        imageCompressionBitrate(),
        imageCompressionJPEGFormatOption(),
        mvDigitizationMode(),
        mvDebayerAlgorithm(),
        mvOffsetYSensorB(),
        mvSensorLineOffsetSelector(),
        mvSensorLineOffset(),
        mvSensorLinePeriod()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( sensorWidth, "SensorWidth" );
        locator.bindComponent( sensorHeight, "SensorHeight" );
        locator.bindComponent( sensorShutterMode, "SensorShutterMode" );
        locator.bindComponent( sensorTaps, "SensorTaps" );
        locator.bindComponent( sensorDigitizationTaps, "SensorDigitizationTaps" );
        locator.bindComponent( widthMax, "WidthMax" );
        locator.bindComponent( heightMax, "HeightMax" );
        locator.bindComponent( regionSelector, "RegionSelector" );
        locator.bindComponent( regionMode, "RegionMode" );
        locator.bindComponent( regionDestination, "RegionDestination" );
        locator.bindComponent( imageComponentSelector, "ImageComponentSelector" );
        locator.bindComponent( imageComponentEnable, "ImageComponentEnable" );
        locator.bindComponent( width, "Width" );
        locator.bindComponent( height, "Height" );
        locator.bindComponent( offsetX, "OffsetX" );
        locator.bindComponent( offsetY, "OffsetY" );
        locator.bindComponent( linePitch, "LinePitch" );
        locator.bindComponent( binningSelector, "BinningSelector" );
        locator.bindComponent( binningHorizontalMode, "BinningHorizontalMode" );
        locator.bindComponent( binningHorizontal, "BinningHorizontal" );
        locator.bindComponent( binningVerticalMode, "BinningVerticalMode" );
        locator.bindComponent( binningVertical, "BinningVertical" );
        locator.bindComponent( decimationHorizontalMode, "DecimationHorizontalMode" );
        locator.bindComponent( decimationHorizontal, "DecimationHorizontal" );
        locator.bindComponent( decimationVerticalMode, "DecimationVerticalMode" );
        locator.bindComponent( decimationVertical, "DecimationVertical" );
        locator.bindComponent( reverseX, "ReverseX" );
        locator.bindComponent( reverseY, "ReverseY" );
        locator.bindComponent( pixelFormat, "PixelFormat" );
        locator.bindComponent( pixelFormatInfoSelector, "PixelFormatInfoSelector" );
        locator.bindComponent( pixelFormatInfoID, "PixelFormatInfoID" );
        locator.bindComponent( pixelCoding, "PixelCoding" );
        locator.bindComponent( pixelSize, "PixelSize" );
        locator.bindComponent( pixelColorFilter, "PixelColorFilter" );
        locator.bindComponent( pixelDynamicRangeMin, "PixelDynamicRangeMin" );
        locator.bindComponent( pixelDynamicRangeMax, "PixelDynamicRangeMax" );
        locator.bindComponent( testPatternGeneratorSelector, "TestPatternGeneratorSelector" );
        locator.bindComponent( testPattern, "TestPattern" );
        locator.bindComponent( testImageSelector, "TestImageSelector" );
        locator.bindComponent( deinterlacing, "Deinterlacing" );
        locator.bindComponent( imageCompressionMode, "ImageCompressionMode" );
        locator.bindComponent( imageCompressionRateOption, "ImageCompressionRateOption" );
        locator.bindComponent( imageCompressionQuality, "ImageCompressionQuality" );
        locator.bindComponent( imageCompressionBitrate, "ImageCompressionBitrate" );
        locator.bindComponent( imageCompressionJPEGFormatOption, "ImageCompressionJPEGFormatOption" );
        locator.bindComponent( mvDigitizationMode, "mvDigitizationMode" );
        locator.bindComponent( mvDebayerAlgorithm, "mvDebayerAlgorithm" );
        locator.bindComponent( mvOffsetYSensorB, "mvOffsetYSensorB" );
        locator.bindComponent( mvSensorLineOffsetSelector, "mvSensorLineOffsetSelector" );
        locator.bindComponent( mvSensorLineOffset, "mvSensorLineOffset" );
        locator.bindComponent( mvSensorLinePeriod, "mvSensorLinePeriod" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An integer property. Effective width of the sensor in pixels.
    /**
     *  Effective width of the sensor in pixels.
     */
    PropertyI64 sensorWidth;
    /// \brief An integer property. Effective height of the sensor in pixels.
    /**
     *  Effective height of the sensor in pixels.
     */
    PropertyI64 sensorHeight;
    /// \brief An enumerated integer property. Sets the shutter mode of the device.
    /**
     *  Sets the shutter mode of the device.
     *
     *  The following string values might be valid for this feature:
     *  - \b Global (Display string: 'Global'): The shutter opens and closes at the same time for all pixels. All the pixels are exposed for the same length of time at the same time.
     *  - \b Rolling (Display string: 'Rolling'): The shutter opens and closes sequentially for groups (typically lines) of pixels. All the pixels are exposed for the same length of time but not at the same time.
     *  - \b GlobalReset (Display string: 'Global Reset'): The shutter opens at the same time for all pixels but ends in a sequential manner. The pixels are exposed for different lengths of time.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 sensorShutterMode;
    /// \brief An enumerated integer property. Number of taps of the camera sensor.
    /**
     *  Number of taps of the camera sensor.
     *
     *  The following string values might be valid for this feature:
     *  - \b One (Display string: 'One'): 1 tap.
     *  - \b Two (Display string: 'Two'): 2 taps.
     *  - \b Three (Display string: 'Three'): 3 taps.
     *  - \b Four (Display string: 'Four'): 4 taps.
     *  - \b Eight (Display string: 'Eight'): 8 taps.
     *  - \b Ten (Display string: 'Ten'): 10 taps.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 sensorTaps;
    /// \brief An enumerated integer property. Number of digitized samples outputted simultaneously by the camera A/D conversion stage.
    /**
     *  Number of digitized samples outputted simultaneously by the camera A/D conversion stage.
     *
     *  The following string values might be valid for this feature:
     *  - \b One (Display string: 'One'): 1 tap.
     *  - \b Two (Display string: 'Two'): 2 taps.
     *  - \b Three (Display string: 'Three'): 3 taps.
     *  - \b Four (Display string: 'Four'): 4 taps.
     *  - \b Eight (Display string: 'Eight'): 8 taps.
     *  - \b Ten (Display string: 'Ten'): 10 taps.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 sensorDigitizationTaps;
    /// \brief An integer property. Maximum width of the image (in pixels).
    /**
     *  Maximum width of the image (in pixels). The dimension is calculated after horizontal binning, decimation or any other function changing the horizontal dimension of the image.
     */
    PropertyI64 widthMax;
    /// \brief An integer property. Maximum height of the image (in pixels).
    /**
     *  Maximum height of the image (in pixels). This dimension is calculated after vertical binning, decimation or any other function changing the vertical dimension of the image
     */
    PropertyI64 heightMax;
    /// \brief An enumerated integer property. Selects the Region of interest to control.
    /**
     *  Selects the Region of interest to control. The RegionSelector feature allows devices that are able to extract multiple regions out of an image, to configure the features of those individual regions independently.
     *
     *  The following string values might be valid for this feature:
     *  - \b Region0 (Display string: 'Region 0'): Selected feature will control the region 0.
     *  - \b Region1 (Display string: 'Region 1'): Selected feature will control the region 1.
     *  - \b Region2 (Display string: 'Region 2'): Selected feature will control the region 2.
     *  - \b Region#3# (Display string: 'Region #3#'): Selected feature will control the region #3#.
     *  - \b All (Display string: 'All'): Selected features will control all the regions at the same time.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 regionSelector;
    /// \brief An enumerated integer property. Controls if the selected Region of interest is active and streaming.
    /**
     *  Controls if the selected Region of interest is active and streaming.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Disable the usage of the Region.
     *  - \b On (Display string: 'On'): Enable the usage of the Region.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 regionMode;
    /// \brief An enumerated integer property. Control the destination of the selected region.
    /**
     *  Control the destination of the selected region.
     *
     *  The following string values might be valid for this feature:
     *  - \b Stream0 (Display string: 'Stream 0'): The destination of the region is the data stream 0.
     *  - \b Stream1 (Display string: 'Stream 1'): The destination of the region is the data stream 1.
     *  - \b Stream2 (Display string: 'Stream 2'): The destination of the region is the data stream 2.
     *  - \b Stream#3# (Display string: 'Stream #3#'): The destination of the region is the data stream #3#.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 regionDestination;
    /// \brief An enumerated integer property. Selects a component to activate data streaming from.
    /**
     *  Selects a component to activate data streaming from.
     *
     *  The following string values might be valid for this feature:
     *  - \b Intensity (Display string: 'Intensity'): The acquisition of intensity of the reflected light is controlled.
     *  - \b Color (Display string: 'Color'): The acquisition of color of the reflected light is controlled
     *  - \b Infrared (Display string: 'Infrared'): The acquisition of non-visible infrared light is controlled.
     *  - \b Ultraviolet (Display string: 'Ultraviolet'): The acquisition of non-visible ultraviolet light is controlled.
     *  - \b Range (Display string: 'Range'): The acquisition of range (distance) data is controlled. The data produced may be only range (2.5D) or a point cloud 3D coordinates depending on the Scan3dControl.
     *  - \b Disparity (Display string: 'Disparity'): The acquisition of stereo camera disparity data is controlled. Disparity is a more specific range format approximately inversely proportional to distance. Disparity is typically given in pixel units.
     *  - \b Confidence (Display string: 'Confidence'): The acquisition of confidence map of the acquired image is controlled. Confidence data may be binary (0 - invalid) or an integer where 0 is invalid and increasing value is increased confidence in the data in the corresponding pixel. If floating point representation is used the confidence image is normalized to the range [0,1], for integer representation the maximum possible integer represents maximum confidence.
     *  - \b Scatter (Display string: 'Scatter'): The acquisition of data measuring how much light is scattered around the reflected light. In processing this is used as an additional intensity image, often together with the standard intensity.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 imageComponentSelector;
    /// \brief A boolean property. Controls if the selected component streaming is active.
    /**
     *  Controls if the selected component streaming is active.
     */
    PropertyIBoolean imageComponentEnable;
    /// \brief An integer property. Width of the image provided by the device (in pixels).
    /**
     *  Width of the image provided by the device (in pixels).
     */
    PropertyI64 width;
    /// \brief An integer property. Height of the image provided by the device (in pixels).
    /**
     *  Height of the image provided by the device (in pixels).
     */
    PropertyI64 height;
    /// \brief An integer property. Horizontal offset from the origin to the region of interest (in pixels).
    /**
     *  Horizontal offset from the origin to the region of interest (in pixels).
     */
    PropertyI64 offsetX;
    /// \brief An integer property. Vertical offset from the origin to the region of interest (in pixels).
    /**
     *  Vertical offset from the origin to the region of interest (in pixels).
     */
    PropertyI64 offsetY;
    /// \brief An integer property. Total number of bytes between 2 successive lines.
    /**
     *  Total number of bytes between 2 successive lines. This feature is used to facilitate alignment of image data.
     */
    PropertyI64 linePitch;
    /// \brief An enumerated integer property. Selects which binning engine is controlled by the BinningHorizontal and BinningVertical features.
    /**
     *  Selects which binning engine is controlled by the BinningHorizontal and BinningVertical features.
     *
     *  The following string values might be valid for this feature:
     *  - \b Sensor (Display string: 'Sensor'): Selected features will control the sensor binning.
     *  - \b Region0 (Display string: 'Region 0'): Selected feature will control the region 0 binning.
     *  - \b Region1 (Display string: 'Region 1'): Selected feature will control the region 1 binning.
     *  - \b Region2 (Display string: 'Region 2'): Selected feature will control the region 2 binning.
     *  - \b Region#3# (Display string: 'Region #3#'): Selected feature will control the region #3# binning.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 binningSelector;
    /// \brief An enumerated integer property. Sets the mode to use to combine horizontal photo-sensitive cells together when BinningHorizontal is used.
    /**
     *  Sets the mode to use to combine horizontal photo-sensitive cells together when BinningHorizontal is used.
     *
     *  The following string values might be valid for this feature:
     *  - \b Sum (Display string: 'Sum'): The response from the combined cells will be added, resulting in increased sensitivity.
     *  - \b Average (Display string: 'Average'): The response from the combined cells will be averaged, resulting in increased signal/noise ratio.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 binningHorizontalMode;
    /// \brief An integer property. Number of horizontal photo-sensitive cells to combine together.
    /**
     *  Number of horizontal photo-sensitive cells to combine together. This reduces the horizontal resolution (width) of the image.
     */
    PropertyI64 binningHorizontal;
    /// \brief An enumerated integer property. Sets the mode used to combine horizontal photo-sensitive cells together when BinningVertical is used.
    /**
     *  Sets the mode used to combine horizontal photo-sensitive cells together when BinningVertical is used.
     *
     *  The following string values might be valid for this feature:
     *  - \b Sum (Display string: 'Sum'): The response from the combined cells will be added, resulting in increased sensitivity.
     *  - \b Average (Display string: 'Average'): The response from the combined cells will be averaged, resulting in increased signal/noise ratio.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 binningVerticalMode;
    /// \brief An integer property. Number of vertical photo-sensitive cells to combine together.
    /**
     *  Number of vertical photo-sensitive cells to combine together. This reduces the vertical resolution (height) of the image.
     */
    PropertyI64 binningVertical;
    /// \brief An enumerated integer property. Sets the mode used to reduce the horizontal resolution when DecimationHorizontal is used.
    /**
     *  Sets the mode used to reduce the horizontal resolution when DecimationHorizontal is used.
     *
     *  The following string values might be valid for this feature:
     *  - \b Discard (Display string: 'Discard'): The value of every Nth pixel is kept, others are discarded.
     *  - \b Average (Display string: 'Average'): The value of a group of N adjacents pixels are averaged.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 decimationHorizontalMode;
    /// \brief An integer property. Horizontal sub-sampling of the image.
    /**
     *  Horizontal sub-sampling of the image. This reduces the horizontal resolution (width) of the image by the specified horizontal decimation factor.
     */
    PropertyI64 decimationHorizontal;
    /// \brief An enumerated integer property. Sets the mode used to reduce the Vertical resolution when DecimationVertical is used.
    /**
     *  Sets the mode used to reduce the Vertical resolution when DecimationVertical is used.
     *
     *  The following string values might be valid for this feature:
     *  - \b Discard (Display string: 'Discard'): The value of every Nth pixel is kept, others are discarded.
     *  - \b Average (Display string: 'Average'): The value of a group of N adjacents pixels are averaged.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 decimationVerticalMode;
    /// \brief An integer property. Vertical sub-sampling of the image.
    /**
     *  Vertical sub-sampling of the image. This reduces the vertical resolution (height) of the image by the specified vertical decimation factor.
     */
    PropertyI64 decimationVertical;
    /// \brief A boolean property. Flip horizontally the image sent by the device.
    /**
     *  Flip horizontally the image sent by the device. The Region of interest is applied after the flipping.
     */
    PropertyIBoolean reverseX;
    /// \brief A boolean property. Flip vertically the image sent by the device.
    /**
     *  Flip vertically the image sent by the device. The Region of interest is applied after the flipping.
     */
    PropertyIBoolean reverseY;
    /// \brief An enumerated integer property. Format of the pixels provided by the device.
    /**
     *  Format of the pixels provided by the device. It represents all the information provided by PixelSize, PixelColorFilter combined in a single feature.
     *
     *  The following string values might be valid for this feature:
     *  - \b Mono1p (Display string: 'Mono1p'): Mono 1 bit packed.
     *  - \b Mono2p (Display string: 'Mono2p'): Mono 2 bit packed.
     *  - \b Mono4p (Display string: 'Mono4p'): Mono 4 bit packed.
     *  - \b Mono8 (Display string: 'Mono8'): Mono 8 bit packed.
     *  - \b Mono8s (Display string: 'Mono8s'): Mono 1 bit signed.
     *  - \b Mono10 (Display string: 'Mono10'): Mono 10 bit.
     *  - \b Mono10c3a64 (Display string: 'Mono10c3a64'): Mono 10 bit in 64 bit.
     *  - \b Mono10c3p32 (Display string: 'Mono10c3p32'): Mono 10 bit in 32bit.
     *  - \b Mono10g12 (Display string: 'Mono10g12'): Mono 10 bit grouped in 12 bit.
     *  - \b Mono10msb (Display string: 'Mono10msb'): Mono 10 bit packed aligned on Msb.
     *  - \b Mono10p (Display string: 'Mono10p'): Mono 10 bit packed.
     *  - \b Mono10pmsb (Display string: 'Mono10pmsb'): Mono 10 bit packed aligned on Msb.
     *  - \b Mono10s (Display string: 'Mono10s'): Mono 10 bit signed.
     *  - \b Mono12 (Display string: 'Mono12'): Mono 12 bit.
     *  - \b Mono12p (Display string: 'Mono12p'): Mono 12 bit packed.
     *  - \b Mono12g (Display string: 'Mono12g'): Mono 12 bit grouped.
     *  - \b Mono12msb (Display string: 'Mono12msb'): Mono 12 bit aligned on Msb.
     *  - \b Mono14 (Display string: 'Mono14'): Mono 14 bit.
     *  - \b Mono16 (Display string: 'Mono16'): Mono 16 bit.
     *  - \b R8 (Display string: 'R8'): Red 8 bit.
     *  - \b G8 (Display string: 'G8'): Green 8 bit.
     *  - \b B8 (Display string: 'B8'): Blue 8 bit.
     *  - \b RGB8 (Display string: 'RGB8'): Red, Green, Blue 8 bit
     *  - \b RGB8_Planar (Display string: 'RGB8_Planar'): Red, Green, Blue 8 bit planar.
     *  - \b RGB8a32 (Display string: 'RGB8a32'): Red, Green, Blue 8 bit aligned in 32 bit pixel
     *  - \b RGBa8 (Display string: 'RGBa8'): Red, Green, Blue 8 bit aligned on 8 bit
     *  - \b RGB10 (Display string: 'RGB10'): Red, Green, Blue 10 bit.
     *  - \b RGB10_Planar (Display string: 'RGB10_Planar'): Red, Green, Blue 10 bit planar.
     *  - \b RGB10g32 (Display string: 'RGB10g32'): Red, Green, Blue 8 bit grouped in 32 bit pixel.
     *  - \b RGB10g32msb (Display string: 'RGB10g32msb'): Red, Green, Blue 10 bit grouped in 32 bit pixel aligned on Msb.
     *  - \b RGB10p32 (Display string: 'RGB10p32'): Red, Green, Blue 10 bit packed in 32 bit pixel.
     *  - \b RGB10p32msb (Display string: 'RGB10p32msb'): Red, Green, Blue 10 bit packed in 32 bit pixel.
     *  - \b RGB12 (Display string: 'RGB12'): Red, Green, Blue 12 bit.
     *  - \b RGB12_Planar (Display string: 'RGB12_Planar'): Red, Green, Blue 12 bit planar.
     *  - \b RGB16 (Display string: 'RGB16'): Red, Green, Blue 16 bit.
     *  - \b RGB16_Planar (Display string: 'RGB16_Planar'): Red, Green, Blue 16 bit planar.
     *  - \b RGB565p (Display string: 'RGB565p'): Red, Green, Blue 16 bit packet in 5, 6, 5 bits.
     *  - \b BGR10 (Display string: 'BGR10'): Blue, Green, Red, 10 bit.
     *  - \b BGR12 (Display string: 'BGR12'): Blue, Green, Red, 12 bit.
     *  - \b BGR16 (Display string: 'BGR16'): Blue, Green, Red, 16 bit.
     *  - \b BGR565p (Display string: 'BGR565p'): Blue, Green, Red, 16 bit packet in 5, 6, 5 bits.
     *  - \b BGR8 (Display string: 'BGR8'): Blue, Green, Red, 8 bit.
     *  - \b BGRa8 (Display string: 'BGRa8'): Blue, Green, Red, Alpha 8 bit.
     *  - \b YUV411_8 (Display string: 'YUV411_8'): YUV 411 8 bit.
     *  - \b YUV422_8 (Display string: 'YUV422_8'): YUV 422 8 bit.
     *  - \b YUV8 (Display string: 'YUV8'): YUV 8 bit.
     *  - \b YCbCr411_8 (Display string: 'YCbCr411_8'): YCrCb 411 8 bit.
     *  - \b YCbCr422_8 (Display string: 'YCbCr422_8'): YCrCb 422 8 bit.
     *  - \b YCbCr601_411_8 (Display string: 'YCbCr601_411_8'): YCrCb 601 411 8 bit.
     *  - \b YCbCr601_422_8 (Display string: 'YCbCr601_422_8'): YCrCb 601 422 8 bit.
     *  - \b YCbCr601_8 (Display string: 'YCbCr601_8'): YCrCb 601 8 bit.
     *  - \b YCbCr709_411_8 (Display string: 'YCbCr709_411_8'): YCrCb 709 411 8 bit.
     *  - \b YCbCr709_422_8 (Display string: 'YCbCr709_422_8'): YCrCb 709 422 8 bit.
     *  - \b YCbCr709_8 (Display string: 'YCbCr709_8'): YCrCb 709 8 bit.
     *  - \b YCbCr8 (Display string: 'YCbCr8'): YCbCr 8 bit.
     *  - \b BayerBG8 (Display string: 'BayerBG8'): Bayer Blue Green 8 bit.
     *  - \b BayerGB8 (Display string: 'BayerGB8'): Bayer Green Blue 8 bit.
     *  - \b BayerGR8 (Display string: 'BayerGR8'): Bayer Green Red 8 bit.
     *  - \b BayerRG8 (Display string: 'BayerRG8'): Bayer Red Green 8 bit.
     *  - \b BayerBG10 (Display string: 'BayerBG10'): Bayer Blue Green 10 bit.
     *  - \b BayerBG10g12 (Display string: 'BayerBG10g12'): Bayer Blue Green 8 bit grouped on 12 bit.
     *  - \b BayerGB10 (Display string: 'BayerGB10'): Bayer Green Blue 10 bit.
     *  - \b BayerGB10g12 (Display string: 'BayerGB10g12'): Bayer Green Blue 10 bit grouped on 12 bit.
     *  - \b BayerGR10 (Display string: 'BayerGR10'): Bayer Green Red 10 bit.
     *  - \b BayerGR10g12 (Display string: 'BayerGR10g12'): Bayer Green Red 10 bit grouped on 12 bit.
     *  - \b BayerRG10 (Display string: 'BayerRG10'): Bayer Red Green 10 bit.
     *  - \b BayerRG10g12 (Display string: 'BayerRG10g12'): Bayer Red Green 10 bit grouped on 12 bit.
     *  - \b BayerBG12 (Display string: 'BayerBG12'): Bayer Blue Green 12 bit
     *  - \b BayerBG12g (Display string: 'BayerBG12g'): Bayer Blue Green 12 bit grouped.
     *  - \b BayerGB12 (Display string: 'BayerGB12'): Bayer Green Blue 12 bit
     *  - \b BayerGB12g (Display string: 'BayerGB12g'): Bayer Green Blue 12 bit grouped on 12 bit.
     *  - \b BayerGR12 (Display string: 'BayerGR12'): Bayer Green Red 12 bit.
     *  - \b BayerGR12g (Display string: 'BayerGR12g'): Bayer Green Red 12 bit grouped on 12 bit.
     *  - \b BayerRG12 (Display string: 'BayerRG12'): Bayer Red Green 12 bit.
     *  - \b BayerRG12g (Display string: 'BayerRG12g'): Bayer Red Green 12 bit grouped on 12 bit.
     *  - \b BayerBG16 (Display string: 'BayerBG16'): Bayer Blue Green 16 bit.
     *  - \b BayerGB16 (Display string: 'BayerGB16'): Bayer Green Blue 16 bit.
     *  - \b BayerGR16 (Display string: 'BayerGR16'): Bayer Green Red 16 bit.
     *  - \b BayerRG16 (Display string: 'BayerRG16'): Bayer Red Green 16 bit.
     *  - \b Coord3D_A8 (Display string: 'Coord3D_A8'): 3D coordinate, first component 8 bit.
     *  - \b Coord3D_B8 (Display string: 'Coord3D_B8'): 3D coordinate, second component 8 bit.
     *  - \b Coord3D_C8 (Display string: 'Coord3D_C8'): 3D coordinate, third component 8 bit.
     *  - \b Coord3D_ABC8 (Display string: 'Coord3D_ABC8'): 3D coordinates, 3 components 8 bit.
     *  - \b Coord3D_ABC8_Planar (Display string: 'Coord3D_ABC8_Planar'): 3D coordinates, 3 components 8 bit planar.
     *  - \b Coord3D_A16 (Display string: 'Coord3D_A16'): 3D coordinate, first component 16 bit.
     *  - \b Coord3D_B16 (Display string: 'Coord3D_B16'): 3D coordinate, second component 16 bit.
     *  - \b Coord3D_C16 (Display string: 'Coord3D_C16'): 3D coordinate, third component 16 bit.
     *  - \b Coord3D_ABC16 (Display string: 'Coord3D_ABC16'): 3D coordinates, 3 components 16 bit.
     *  - \b Coord3D_ABC16_Planar (Display string: 'Coord3D_ABC16_Planar'): 3D coordinates, 3 components 16 bit planar.
     *  - \b Coord3D_A32f (Display string: 'Coord3D_A32f'): 3D coordinate, first component 32 bit float.
     *  - \b Coord3D_B32f (Display string: 'Coord3D_B32f'): 3D coordinate, second component 32 bit float.
     *  - \b Coord3D_C32f (Display string: 'Coord3D_C32f'): 3D coordinate, third component 32 bit float.
     *  - \b Coord3D_ABC32f (Display string: 'Coord3D_ABC32f'): 3D coordinates, 3 components 32 bit float.
     *  - \b Coord3D_ABC32f_Planar (Display string: 'Coord3D_ABC32f_Planar'): 3D coordinates, 3 components 32 bit float planar.
     *  - \b Confidence1 (Display string: 'Confidence1'): Confidence data 1 bit.
     *  - \b Confidence1p (Display string: 'Confidence1p'): Confidence data 1 bit packed.
     *  - \b Confidence8 (Display string: 'Confidence8'): Confidence data 8 bit.
     *  - \b Confidence16 (Display string: 'Confidence16'): Confidence data 16 bit.
     *  - \b Confidence32f (Display string: 'Confidence32f'): Confidence data 32 bit float.
     *  - \b Raw8 (Display string: 'Raw8'): Raw 8 bit.
     *  - \b Raw16 (Display string: 'Raw16'): Raw 16 bit.
     *  - \b Mono12Packed (Display string: 'Mono12Packed'): Mono 12 bit packed (GigE Vision Specific).
     *  - \b BayerGR10Packed (Display string: 'BayerGR10Packed'): Bayer GR 10 bit packed (GigE Vision Specific).
     *  - \b BayerRG10Packed (Display string: 'BayerRG10Packed'): Bayer RG 10 bit packed (GigE Vision Specific).
     *  - \b BayerGB10Packed (Display string: 'BayerGB10Packed'): Bayer GB 10 bit packed (GigE Vision Specific).
     *  - \b BayerBG10Packed (Display string: 'BayerBG10Packed'): Bayer BG 10 bit packed (GigE Vision Specific).
     *  - \b BayerGR12Packed (Display string: 'BayerGR12Packed'): Bayer GR 12 bit packed (GigE Vision Specific).
     *  - \b BayerRG12Packed (Display string: 'BayerRG12Packed'): Bayer RG 12 bit packed (GigE Vision Specific).
     *  - \b BayerGB12Packed (Display string: 'BayerGB12Packed'): Bayer GB 12 bit packed (GigE Vision Specific).
     *  - \b BayerBG12Packed (Display string: 'BayerBG12Packed'): Bayer BG 12 bit packed (GigE Vision Specific).
     *  - \b RGB10V1Packed (Display string: 'RGB10V1Packed'): RGB 10 bit packed (GigE Vision Specific).
     *  - \b BGR10V1Packed (Display string: 'BGR10V1Packed'): BGR 10 bit packed (GigE Vision Specific).
     *  - \b RGB12V1Packed (Display string: 'RGB12V1Packed'): RGB 12 bit packed (GigE Vision Specific).
     *  - \b Mono8Signed (Display string: 'Pixel Format')
     *  - \b Mono10Packed (Display string: 'Pixel Format')
     *  - \b RGB8Packed (Display string: 'Pixel Format')
     *  - \b BGR8Packed (Display string: 'Pixel Format')
     *  - \b RGBA8Packed (Display string: 'Pixel Format')
     *  - \b BGRA8Packed (Display string: 'Pixel Format')
     *  - \b RGB10Packed (Display string: 'Pixel Format')
     *  - \b BGR10Packed (Display string: 'Pixel Format')
     *  - \b RGB12Packed (Display string: 'Pixel Format')
     *  - \b BGR12Packed (Display string: 'Pixel Format')
     *  - \b RGB16Packed (Display string: 'Pixel Format')
     *  - \b RGB10V2Packed (Display string: 'Pixel Format')
     *  - \b RGB565Packed (Display string: 'Pixel Format')
     *  - \b BGR565Packed (Display string: 'Pixel Format')
     *  - \b YUV411Packed (Display string: 'Pixel Format')
     *  - \b YUV422Packed (Display string: 'Pixel Format')
     *  - \b YUV444Packed (Display string: 'Pixel Format')
     *  - \b YUYVPacked (Display string: 'Pixel Format')
     *  - \b RGB8Planar (Display string: 'Pixel Format')
     *  - \b RGB10Planar (Display string: 'Pixel Format')
     *  - \b RGB12Planar (Display string: 'Pixel Format')
     *  - \b RGB16Planar (Display string: 'Pixel Format')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 pixelFormat;
    /// \brief An enumerated integer property. Select the pixel format for which the information will be returned.
    /**
     *  Select the pixel format for which the information will be returned.
     *
     *  The following string values might be valid for this feature:
     *  - \b Mono1p (Display string: 'Mono1p'): Mono 1 bit packed.
     *  - \b Mono2p (Display string: 'Mono2p'): Mono 2 bit packed.
     *  - \b Mono4p (Display string: 'Mono4p'): Mono 4 bit packed.
     *  - \b Mono8 (Display string: 'Mono8'): Mono 8 bit packed.
     *  - \b Mono8s (Display string: 'Mono8s'): Mono 1 bit signed.
     *  - \b Mono10 (Display string: 'Mono10'): Mono 10 bit.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 pixelFormatInfoSelector;
    /// \brief An integer property. Returns the value used by the streaming channels to identify the selected pixel format.
    /**
     *  Returns the value used by the streaming channels to identify the selected pixel format.
     */
    PropertyI64 pixelFormatInfoID;
    /// \brief An enumerated integer property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It represents the coding of the pixels in the image. Raw gives the data in the native format of the sensor.
     *
     *  The following string values might be valid for this feature:
     *  - \b Mono (Display string: 'Mono'): Mono.
     *  - \b MonoSigned (Display string: 'MonoSigned'): Mono signed.
     *  - \b MonoPacked (Display string: 'MonoPacked'): Mono packed.
     *  - \b RGBPacked (Display string: 'RGBPacked'): RGB packed.
     *  - \b BGRPacked (Display string: 'BGRPacked'): BGR packed.
     *  - \b RGBAPacked (Display string: 'RGBAPacked'): RGBA packed.
     *  - \b BGRAPacked (Display string: 'BGRAPacked'): BGRA packed.
     *  - \b RGBPlanar (Display string: 'RGBPlanar'): RGB planar.
     *  - \b YUV411Packed (Display string: 'YUV411Packed'): YUV 411 packed.
     *  - \b YUV422Packed (Display string: 'YUV422Packed'): YUV 422 packed.
     *  - \b YUV444Packed (Display string: 'YUV444Packed'): YUV 444 packed.
     *  - \b YUYVPacked (Display string: 'YUYVPacked'): YUYV packed.
     *  - \b Raw (Display string: 'Raw'): Raw.
     *  - \b RawPacked (Display string: 'RawPacked'): Raw packed.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 pixelCoding;
    /// \brief An enumerated integer property. Total size in bits of a pixel of the image.
    /**
     *  Total size in bits of a pixel of the image.
     *
     *  The following string values might be valid for this feature:
     *  - \b Bpp1 (Display string: 'Bpp1'): 1 bit per pixel.
     *  - \b Bpp2 (Display string: 'Bpp2'): 2 bits per pixel.
     *  - \b Bpp4 (Display string: 'Bpp4'): 4 bits per pixel.
     *  - \b Bpp8 (Display string: 'Bpp8'): 8 bits per pixel.
     *  - \b Bpp10 (Display string: 'Bpp10'): 10 bits per pixel.
     *  - \b Bpp12 (Display string: 'Bpp12'): 12 bits per pixel.
     *  - \b Bpp14 (Display string: 'Bpp14'): 14 bits per pixel.
     *  - \b Bpp16 (Display string: 'Bpp16'): 16 bits per pixel.
     *  - \b Bpp20 (Display string: 'Bpp20'): 20 bits per pixel.
     *  - \b Bpp24 (Display string: 'Bpp24'): 24 bits per pixel.
     *  - \b Bpp30 (Display string: 'Bpp30'): 30 bits per pixel.
     *  - \b Bpp32 (Display string: 'Bpp32'): 32 bits per pixel.
     *  - \b Bpp36 (Display string: 'Bpp36'): 36 bits per pixel.
     *  - \b Bpp48 (Display string: 'Bpp48'): 48 bits per pixel.
     *  - \b Bpp64 (Display string: 'Bpp64'): 64 bits per pixel.
     *  - \b Bpp96 (Display string: 'Bpp96'): 96 bits per pixel.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 pixelSize;
    /// \brief An enumerated integer property. Type of color filter that is applied to the image.
    /**
     *  Type of color filter that is applied to the image.
     *
     *  The following string values might be valid for this feature:
     *  - \b None (Display string: 'None'): No color filter.
     *  - \b BayerRG (Display string: 'BayerRG'): Bayer Red Green filter.
     *  - \b BayerGB (Display string: 'BayerGB'): Bayer Green Blue filter.
     *  - \b BayerGR (Display string: 'BayerGR'): Bayer Green Red filter.
     *  - \b BayerBG (Display string: 'BayerBG'): Bayer Blue Green filter.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 pixelColorFilter;
    /// \brief An integer property. Minimum value that can be returned during the digitization process.
    /**
     *  Minimum value that can be returned during the digitization process. This corresponds to the darkest value of the camera. For color camera, this returns the smallest value that each color component can take.
     */
    PropertyI64 pixelDynamicRangeMin;
    /// \brief An integer property. Maximum value that will be returned during the digitization process.
    /**
     *  Maximum value that will be returned during the digitization process. This corresponds to the brightest value of the camera. For color camera, this returns the biggest value that each color component can take.
     */
    PropertyI64 pixelDynamicRangeMax;
    /// \brief An enumerated integer property. Selects which test pattern generator is controlled by the TestPattern feature.
    /**
     *  Selects which test pattern generator is controlled by the TestPattern feature.
     *
     *  The following string values might be valid for this feature:
     *  - \b Sensor (Display string: 'Sensor'): TestPattern feature will control the sensor's test pattern generator.
     *  - \b Region0 (Display string: 'Region 0'): TestPattern feature will control the region 0 test pattern generator.
     *  - \b Region1 (Display string: 'Region 1'): TestPattern feature will control the region 1 test pattern generator.
     *  - \b Region2 (Display string: 'Region 2'): TestPattern feature will control the region 2 test pattern generator.
     *  - \b Region#3# (Display string: 'Region #3#'): TestPattern feature will control the region #3# test pattern generator.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 testPatternGeneratorSelector;
    /// \brief An enumerated integer property. Selects the type of test pattern that is generated by the device as image source.
    /**
     *  Selects the type of test pattern that is generated by the device as image source.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Image is coming from the sensor.
     *  - \b Black (Display string: 'Black'): Image is filled with the darkest possible image.
     *  - \b White (Display string: 'White'): Image is filled with the brightest possible image.
     *  - \b GreyHorizontalRamp (Display string: 'Grey Horizontal Ramp'): Image is filled horizontally with an image that goes from the darkest possible value to the brightest.
     *  - \b GreyVerticalRamp (Display string: 'Grey Vertical Ramp'): Image is filled vertically with an image that goes from the darkest possible value to the brightest.
     *  - \b GreyHorizontalRampMoving (Display string: 'Grey Horizontal Ramp Moving'): Image is filled horizontally with an image that goes from the darkest possible value to the brightest and that moves horizontally from left to right at each frame.
     *  - \b GreyVerticalRampMoving (Display string: 'Grey Vertical Ramp Moving'): Image is filled vertically with an image that goes from the darkest possible value to the brightest and that moves verticaly from top to bottom at each frame.
     *  - \b HorizontalLineMoving (Display string: 'Horizontal Line Moving'): A moving horizontal line is superimposed on the live image.
     *  - \b VerticalLineMoving (Display string: 'Vertical Line Moving'): A moving vertical line is superimposed on the live image.
     *  - \b ColorBar (Display string: 'Color Bar'): Image is filled with stripes of color including White, Black, Red, Green, Blue, Cyan, Magenta and Yellow.
     *  - \b FrameCounter (Display string: 'Frame Counter'): A frame counter is superimposed on the live image.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 testPattern;
    /// \brief An enumerated integer property. Selects the type of test pattern that is generated by the device as image source.
    /**
     *  Selects the type of test pattern that is generated by the device as image source.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Image is coming from the sensor.
     *  - \b Black (Display string: 'Black'): Image is filled with the darkest possible image.
     *  - \b White (Display string: 'White'): Image is filled with the brightest possible image.
     *  - \b GreyHorizontalRamp (Display string: 'Grey Horizontal Ramp'): Image is filled horizontally with an image that goes from the darkest possible value to the brightest.
     *  - \b GreyVerticalRamp (Display string: 'Grey Vertical Ramp'): Image is filled vertically with an image that goes from the darkest possible value to the brightest.
     *  - \b GreyHorizontalRampMoving (Display string: 'Grey Horizontal Ramp Moving'): Image is filled horizontally with an image that goes from the darkest possible value to the brightest and that moves horizontally from left to right at each frame.
     *  - \b GreyVerticalRampMoving (Display string: 'Grey Vertical Ramp Moving'): Image is filled vertically with an image that goes from the darkest possible value to the brightest and that moves verticaly from top to bottom at each frame.
     *  - \b HorizontalLineMoving (Display string: 'Horizontal Line Moving'): A moving horizontal line is superimposed on the live image.
     *  - \b VerticalLineMoving (Display string: 'Vertical Line Moving'): A moving vertical line is superimposed on the live image.
     *  - \b ColorBar (Display string: 'Color Bar'): Image is filled with stripes of color including White, Black, Red, Green, Blue, Cyan, Magenta and Yellow.
     *  - \b FrameCounter (Display string: 'Frame Counter'): A frame counter is superimposed on the live image.
     *  - \b HorzontalLineMoving (Display string: 'Test Image Selector')
     *  - \b mvBayerRaw (Display string: 'Test Image Selector')
     *  - \b mvGreyDiagonalRamp (Display string: 'Test Image Selector')
     *  - \b mvFadeToGreyColorBar (Display string: 'Test Image Selector')
     *  - \b mvFFCImage (Display string: 'Test Image Selector')
     *  - \b mvMovingGreyDiagonalRamp (Display string: 'Test Image Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 testImageSelector;
    /// \brief An enumerated integer property. Controls how the device performs de-interlacing.
    /**
     *  Controls how the device performs de-interlacing.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): The device doesn't perform de-interlacing.
     *  - \b LineDuplication (Display string: 'Line Duplication'): The device performs de-interlacing by outputting each line of each field twice.
     *  - \b Weave (Display string: 'Weave'): The device performs de-interlacing by interleaving the lines of all fields.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deinterlacing;
    /// \brief An enumerated integer property. Enable a specific image compression mode as the base mode for image transfer.
    /**
     *  Enable a specific image compression mode as the base mode for image transfer. Optionally, chunk data can be appended to the compressed image (See chunk section).
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Default value. Image compression is disabled. Images are transmitted uncompressed.
     *  - \b JPEG (Display string: 'JPEG'): JPEG compression is selected.
     *  - \b JPEG2000 (Display string: 'JPEG 2000'): JPEG 2000 compression is selected.
     *  - \b H264 (Display string: 'H 264'): H.264 compression is selected.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 imageCompressionMode;
    /// \brief An enumerated integer property. Two rate controlling options are offered: fixed bit rate or fixed quality.
    /**
     *  Two rate controlling options are offered: fixed bit rate or fixed quality. The exact implementation to achieve one or the other is vendor-specific.
     *
     *  The following string values might be valid for this feature:
     *  - \b FixBitrate (Display string: 'Fix Bitrate'): Output stream follows a constant bit rate. Allows easy bandwidth management on the link.
     *  - \b FixQuality (Display string: 'Fix Quality'): Output stream has a constant image quality. Can be used when image processing algorithms are sensitive to image degradation caused by excessive data compression.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 imageCompressionRateOption;
    /// \brief An integer property. Control the quality of the produced compressed stream.
    /**
     *  Control the quality of the produced compressed stream.
     */
    PropertyI64 imageCompressionQuality;
    /// \brief A floating point property. Control the rate of the produced compressed stream.
    /**
     *  Control the rate of the produced compressed stream.
     */
    PropertyF imageCompressionBitrate;
    /// \brief An enumerated integer property. When JPEG is selected as the compression format, a device might optionally offer better control over JPEG-specific options through this feature.
    /**
     *  When JPEG is selected as the compression format, a device might optionally offer better control over JPEG-specific options through this feature.
     *
     *  The following string values might be valid for this feature:
     *  - \b Lossless (Display string: 'Lossless'): Selects lossless JPEG compression based on a predictive coding model.
     *  - \b BaselineStandard (Display string: 'Baseline Standard'): Indicates this is a baseline sequential (single-scan) DCT-based JPEG.
     *  - \b BaselineOptimized (Display string: 'Baseline Optimized'): Provides optimized color and slightly better compression than baseline standard by using custom Huffman tables optimized after statistical analysis of the image content.
     *  - \b Progressive (Display string: 'Progressive'): Indicates this is a progressive (multi-scan) DCT-based JPEG.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 imageCompressionJPEGFormatOption;
    /// \brief An enumerated integer property. This feature allows to manually select the resolution of the device's ADC.
    /**
     *  This feature allows to manually select the resolution of the device's ADC.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvAuto (Display string: 'mv Digitization Mode'): When the selected pixel format has 12 bits or more the ADC will work with 12 bits. Otherwise the ADC will work with 10 bits.
     *  - \b mv08Bit (Display string: 'mv Digitization Mode'): The ADC will always work with a resolution of  8 bits no matter which pixel format has been selected.
     *  - \b mv10Bit (Display string: 'mv Digitization Mode'): The ADC will always work with a resolution of 10 bits no matter which pixel format has been selected.
     *  - \b mv12Bit (Display string: 'mv Digitization Mode'): The ADC will always work with a resolution of 12 bits no matter which pixel format has been selected. This will allow to achieve higher precision and thus improved quality when internal processing is done (e.g. when applying digital gain to the image).
     *  - \b mvFixed (Display string: 'mv Digitization Mode')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvDigitizationMode;
    /// \brief An enumerated integer property. This feature allows to select the algorithm used to convert the Bayer data into RGB
    /**
     *  This feature allows to select the algorithm used to convert the Bayer data into RGB
     *
     *  The following string values might be valid for this feature:
     *  - \b Bilinear_1 (Display string: 'mv Debayer Algorithm')
     *  - \b Bilinear_2 (Display string: 'mv Debayer Algorithm')
     *  - \b Replication (Display string: 'mv Debayer Algorithm')
     *  - \b Kernel_5x5 (Display string: 'mv Debayer Algorithm')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvDebayerAlgorithm;
    /// \brief An integer property. Vertical offset of SensorB from the origin to the region of interest (in pixels).
    /**
     *  Vertical offset of SensorB from the origin to the region of interest (in pixels).
     */
    PropertyI64 mvOffsetYSensorB;
    /// \brief An enumerated integer property. Selects the sensor to configure
    /**
     *  Selects the sensor to configure
     *
     *  The following string values might be valid for this feature:
     *  - \b SensorA (Display string: 'mv Sensor Line Offset Selector')
     *  - \b SensorB (Display string: 'mv Sensor Line Offset Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvSensorLineOffsetSelector;
    /// \brief An integer property. Sets the offset of the sensor selected by mvSensorLineOffsetSelector.
    /**
     *  Sets the offset of the sensor selected by mvSensorLineOffsetSelector.
     */
    PropertyI64 mvSensorLineOffset;
    /// \brief An integer property. Time in nanoseconds for one line
    /**
     *  Time in nanoseconds for one line
     */
    PropertyI64 mvSensorLinePeriod;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category for the acquisition and trigger control features.
/**
 *  A category for the acquisition and trigger control features.
 */
class AcquisitionControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::AcquisitionControl</b> object.
    explicit AcquisitionControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        acquisitionMode(),
        acquisitionArm(),
        acquisitionFrameCount(),
        acquisitionBurstFrameCount(),
        mvSensorRegister(),
        mvSensorRegisterValue(),
        acquisitionFrameRate(),
        acquisitionFrameRateRaw(),
        acquisitionLineRate(),
        acquisitionLineRateRaw(),
        acquisitionStatusSelector(),
        acquisitionStatus(),
        triggerSelector(),
        triggerMode(),
        triggerSoftware(),
        triggerSource(),
        triggerActivation(),
        triggerOverlap(),
        triggerDelay(),
        triggerDelayRaw(),
        triggerDivider(),
        triggerMultiplier(),
        exposureMode(),
        exposureTimeMode(),
        exposureTimeSelector(),
        exposureTime(),
        exposureTimeRaw(),
        exposureAuto(),
        mvAcquisitionFrameRateLimitMode(),
        mvAcquisitionFrameRateEnable(),
        mvResultingFrameRate(),
        mvShutterMode(),
        mvCompressionKneepoint(),
        mvDefectivePixelEnable(),
        mvExposureAutoLowerLimit(),
        mvExposureAutoUpperLimit(),
        mvExposureAutoSpeed(),
        mvExposureAutoDelayImages(),
        mvExposureAutoAverageGrey(),
        mvExposureAutoHighlightAOI(),
        mvExposureAutoAOIMode(),
        mvExposureAutoOffsetX(),
        mvExposureAutoOffsetY(),
        mvExposureAutoWidth(),
        mvExposureAutoHeight(),
        mvExposureAutoMode(),
        mvSmearReduction(),
        mvAcquisitionMemoryMode(),
        mvPretriggerFrameCount(),
        mvAcquisitionMemoryMaxFrameCount(),
        mvAcquisitionMemoryAOIParameterChanged()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( acquisitionMode, "AcquisitionMode" );
        locator.bindComponent( acquisitionArm, "AcquisitionArm@i" );
        locator.bindComponent( acquisitionFrameCount, "AcquisitionFrameCount" );
        locator.bindComponent( acquisitionBurstFrameCount, "AcquisitionBurstFrameCount" );
        locator.bindComponent( mvSensorRegister, "mvSensorRegister" );
        locator.bindComponent( mvSensorRegisterValue, "mvSensorRegisterValue" );
        locator.bindComponent( acquisitionFrameRate, "AcquisitionFrameRate" );
        if( !acquisitionFrameRate.isValid() )
        {
            locator.bindComponent( acquisitionFrameRate, "AcquisitionFrameRateAbs" );
        }
        locator.bindComponent( acquisitionFrameRateRaw, "AcquisitionFrameRateRaw" );
        locator.bindComponent( acquisitionLineRate, "AcquisitionLineRate" );
        if( !acquisitionLineRate.isValid() )
        {
            locator.bindComponent( acquisitionLineRate, "AcquisitionLineRateAbs" );
        }
        locator.bindComponent( acquisitionLineRateRaw, "AcquisitionLineRateRaw" );
        locator.bindComponent( acquisitionStatusSelector, "AcquisitionStatusSelector" );
        locator.bindComponent( acquisitionStatus, "AcquisitionStatus" );
        locator.bindComponent( triggerSelector, "TriggerSelector" );
        locator.bindComponent( triggerMode, "TriggerMode" );
        locator.bindComponent( triggerSoftware, "TriggerSoftware@i" );
        locator.bindComponent( triggerSource, "TriggerSource" );
        locator.bindComponent( triggerActivation, "TriggerActivation" );
        locator.bindComponent( triggerOverlap, "TriggerOverlap" );
        locator.bindComponent( triggerDelay, "TriggerDelay" );
        if( !triggerDelay.isValid() )
        {
            locator.bindComponent( triggerDelay, "TriggerDelayAbs" );
        }
        locator.bindComponent( triggerDelayRaw, "TriggerDelayRaw" );
        locator.bindComponent( triggerDivider, "TriggerDivider" );
        locator.bindComponent( triggerMultiplier, "TriggerMultiplier" );
        locator.bindComponent( exposureMode, "ExposureMode" );
        locator.bindComponent( exposureTimeMode, "ExposureTimeMode" );
        locator.bindComponent( exposureTimeSelector, "ExposureTimeSelector" );
        locator.bindComponent( exposureTime, "ExposureTime" );
        if( !exposureTime.isValid() )
        {
            locator.bindComponent( exposureTime, "ExposureTimeAbs" );
        }
        locator.bindComponent( exposureTimeRaw, "ExposureTimeRaw" );
        locator.bindComponent( exposureAuto, "ExposureAuto" );
        locator.bindComponent( mvAcquisitionFrameRateLimitMode, "mvAcquisitionFrameRateLimitMode" );
        locator.bindComponent( mvAcquisitionFrameRateEnable, "mvAcquisitionFrameRateEnable" );
        locator.bindComponent( mvResultingFrameRate, "mvResultingFrameRate" );
        locator.bindComponent( mvShutterMode, "mvShutterMode" );
        locator.bindComponent( mvCompressionKneepoint, "mvCompressionKneepoint" );
        locator.bindComponent( mvDefectivePixelEnable, "mvDefectivePixelEnable" );
        locator.bindComponent( mvExposureAutoLowerLimit, "mvExposureAutoLowerLimit" );
        locator.bindComponent( mvExposureAutoUpperLimit, "mvExposureAutoUpperLimit" );
        locator.bindComponent( mvExposureAutoSpeed, "mvExposureAutoSpeed" );
        locator.bindComponent( mvExposureAutoDelayImages, "mvExposureAutoDelayImages" );
        locator.bindComponent( mvExposureAutoAverageGrey, "mvExposureAutoAverageGrey" );
        locator.bindComponent( mvExposureAutoHighlightAOI, "mvExposureAutoHighlightAOI" );
        locator.bindComponent( mvExposureAutoAOIMode, "mvExposureAutoAOIMode" );
        locator.bindComponent( mvExposureAutoOffsetX, "mvExposureAutoOffsetX" );
        locator.bindComponent( mvExposureAutoOffsetY, "mvExposureAutoOffsetY" );
        locator.bindComponent( mvExposureAutoWidth, "mvExposureAutoWidth" );
        locator.bindComponent( mvExposureAutoHeight, "mvExposureAutoHeight" );
        locator.bindComponent( mvExposureAutoMode, "mvExposureAutoMode" );
        locator.bindComponent( mvSmearReduction, "mvSmearReduction" );
        locator.bindComponent( mvAcquisitionMemoryMode, "mvAcquisitionMemoryMode" );
        locator.bindComponent( mvPretriggerFrameCount, "mvPretriggerFrameCount" );
        locator.bindComponent( mvAcquisitionMemoryMaxFrameCount, "mvAcquisitionMemoryMaxFrameCount" );
        locator.bindComponent( mvAcquisitionMemoryAOIParameterChanged, "mvAcquisitionMemoryAOIParameterChanged" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Sets the acquisition mode of the device.
    /**
     *  Sets the acquisition mode of the device. It defines mainly the number of frames to capture during an acquisition and the way the acquisition stops.
     *
     *  The following string values might be valid for this feature:
     *  - \b SingleFrame (Display string: 'Single Frame'): One frame is captured.
     *  - \b MultiFrame (Display string: 'Multi Frame'): The number of frames specified by AcquisitionFrameCount is captured.
     *  - \b Continuous (Display string: 'Continuous'): Frames are captured continuously until stopped with the AcquisitionStop command.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 acquisitionMode;
    /// \brief A method object. Arms the device before an AcquisitionStart command.
    /**
     *  Arms the device before an AcquisitionStart command. This optional command validates all the current features for consistency and prepares the device for a fast start of the Acquisition.
     */
    Method acquisitionArm;
    /// \brief An integer property. Number of frames to acquire in MultiFrame Acquisition mode.
    /**
     *  Number of frames to acquire in MultiFrame Acquisition mode.
     */
    PropertyI64 acquisitionFrameCount;
    /// \brief An integer property. Number of frames to acquire for each FrameBurstStart trigger.
    /**
     *  Number of frames to acquire for each FrameBurstStart trigger.
     */
    PropertyI64 acquisitionBurstFrameCount;
    /// \brief An integer property. Number of sensor register to access.
    /**
     *  Number of sensor register to access.
     */
    PropertyI64 mvSensorRegister;
    /// \brief An integer property. Value of sensor register.
    /**
     *  Value of sensor register.
     */
    PropertyI64 mvSensorRegisterValue;
    /// \brief A floating point property. Controls the acquisition rate (in Hertz) at which the frames are captured.
    /**
     *  Controls the acquisition rate (in Hertz) at which the frames are captured.
     */
    PropertyF acquisitionFrameRate;
    /// \brief An integer property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It controls the rate (in device specific unit) at which the Frames are captured when TriggerMode is Off for the Frame trigger.
     */
    PropertyI64 acquisitionFrameRateRaw;
    /// \brief A floating point property. Controls the rate (in Hertz) at which the Lines in a Frame are captured.
    /**
     *  Controls the rate (in Hertz) at which the Lines in a Frame are captured.
     */
    PropertyF acquisitionLineRate;
    /// \brief An integer property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It controls the rate (in device specific unit) at which the Lines in a Frame are captured when TriggerMode is Off for the Line trigger.
     */
    PropertyI64 acquisitionLineRateRaw;
    /// \brief An enumerated integer property. Selects the internal acquisition signal to read using AcquisitionStatus.
    /**
     *  Selects the internal acquisition signal to read using AcquisitionStatus.
     *
     *  The following string values might be valid for this feature:
     *  - \b AcquisitionTriggerWait (Display string: 'Acquisition Trigger Wait'): Device is currently waiting for a trigger for the capture of one or many frames.
     *  - \b AcquisitionActive (Display string: 'Acquisition Active'): Device is currently doing an acquisition of one or many frames.
     *  - \b AcquisitionTransfer (Display string: 'Acquisition Transfer'): Device is currently transferring an acquisition of one or many frames.
     *  - \b FrameTriggerWait (Display string: 'Frame Trigger Wait'): Device is currently waiting for a frame start trigger.
     *  - \b FrameActive (Display string: 'Frame Active'): Device is currently doing the capture of a frame.
     *  - \b ExposureActive (Display string: 'Exposure Active'): Device is doing the exposure of a frame.
     *  - \b FrameTransfer (Display string: 'Frame Transfer'): See TransferStatus.
     *  - \b FrameTransfer (Display string: 'Frame Transfer'): See TransferStatus.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 acquisitionStatusSelector;
    /// \brief A boolean property. Reads the state of the internal acquisition signal selected using AcquisitionStatusSelector.
    /**
     *  Reads the state of the internal acquisition signal selected using AcquisitionStatusSelector.
     */
    PropertyIBoolean acquisitionStatus;
    /// \brief An enumerated integer property. Selects the type of trigger to configure.
    /**
     *  Selects the type of trigger to configure.
     *
     *  The following string values might be valid for this feature:
     *  - \b AcquisitionStart (Display string: 'Acquisition Start'): Selects a trigger that starts the Acquisition of one or many frames according to AcquisitionMode.
     *  - \b AcquisitionEnd (Display string: 'Acquisition End'): Selects a trigger that ends the Acquisition of one or many frames according to AcquisitionMode.
     *  - \b AcquisitionActive (Display string: 'Acquisition Active'): Selects a trigger that controls the duration of the Acquisition of one or many frames. The Acquisition is activated when the trigger signal becomes active and terminated when it goes back to the inactive state.
     *  - \b FrameStart (Display string: 'Frame Start'): Selects a trigger starting the capture of one frame.
     *  - \b FrameEnd (Display string: 'Frame End'): Selects a trigger ending the capture of one frame (mainly used in line scan mode).
     *  - \b FrameActive (Display string: 'Frame Active'): Selects a trigger controlling the duration of one frame (mainly used in line scan mode).
     *  - \b FrameBurstStart (Display string: 'Frame Burst Start'): Selects a trigger starting the capture of the bursts of frames in an acquisition. AcquisitionBurstFrameCount controls the length of each burst unless a FrameBurstEnd trigger is active. The total number of frames captured is also conditioned by AcquisitionFrameCount if AcquisitionMode is MultiFrame.
     *  - \b FrameBurstEnd (Display string: 'Frame Burst End'): Selects a trigger ending the capture of the bursts of frames in an acquisition.
     *  - \b FrameBurstActive (Display string: 'Frame Burst Active'): Selects a trigger controlling the duration of the capture of the bursts of frames in an acquisition.
     *  - \b LineStart (Display string: 'Line Start'): Selects a trigger starting the capture of one Line of a Frame (mainly used in line scan mode).
     *  - \b ExposureStart (Display string: 'Exposure Start'): Selects a trigger controlling the start of the exposure of one Frame (or Line).
     *  - \b ExposureEnd (Display string: 'Exposure End'): Selects a trigger controlling the end of the exposure of one Frame (or Line).
     *  - \b ExposureActive (Display string: 'Exposure Active'): Selects a trigger controlling the duration of the exposure of one frame (or Line).
     *  - \b mvTimestampReset (Display string: 'Trigger Selector')
     *  - \b mvLoopRecordEnd (Display string: 'Trigger Selector')
     *  - \b mvFrameStartSensor2 (Display string: 'Trigger Selector')
     *  - \b mvInvalidTriggerSelector (Display string: 'Trigger Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 triggerSelector;
    /// \brief An enumerated integer property. Controls if the selected trigger is active.
    /**
     *  Controls if the selected trigger is active.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Disables the selected trigger.
     *  - \b On (Display string: 'On'): Enable the selected trigger.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 triggerMode;
    /// \brief A method object. Generates an internal trigger.
    /**
     *  Generates an internal trigger. TriggerSource must be set to Software.
     */
    Method triggerSoftware;
    /// \brief An enumerated integer property. Specifies the internal signal or physical input Line to use as the trigger source.
    /**
     *  Specifies the internal signal or physical input Line to use as the trigger source. The selected trigger must have its TriggerMode set to On.
     *
     *  The following string values might be valid for this feature:
     *  - \b Software (Display string: 'Software'): Specifies that the trigger source will be generated by software using the TriggerSoftware command.
     *  - \b SoftwareSignal0 (Display string: 'Software Signal 0'): Specifies that the trigger source will be a signal generated by software using the SoftwareSignalPulse command.
     *  - \b SoftwareSignal1 (Display string: 'Software Signal 1'): Specifies that the trigger source will be a signal generated by software using the SoftwareSignalPulse command.
     *  - \b SoftwareSignal2 (Display string: 'Software Signal 2'): Specifies that the trigger source will be a signal generated by software using the SoftwareSignalPulse command.
     *  - \b SoftwareSignal#3# (Display string: 'Software Signal #3#'): Specifies that the trigger source will be a signal generated by software using the SoftwareSignalPulse command.
     *  - \b Line0 (Display string: 'Line 0'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
     *  - \b Line1 (Display string: 'Line 1'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
     *  - \b Line2 (Display string: 'Line 2'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
     *  - \b Line#3# (Display string: 'Line #3#'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
     *  - \b Counter0Start (Display string: 'Counter 0 Start'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter1Start (Display string: 'Counter 1 Start'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter2Start (Display string: 'Counter 2 Start'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter#3#Start (Display string: 'Counter #3# Start'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter0End (Display string: 'Counter 0 End'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter1End (Display string: 'Counter 1 End'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter2End (Display string: 'Counter 2 End'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter#3#End (Display string: 'Counter #3# End'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Timer0Start (Display string: 'Timer 0 Start'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer1Start (Display string: 'Timer 1 Start'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer2Start (Display string: 'Timer 2 Start'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer#3#Start (Display string: 'Timer #3# Start'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer0End (Display string: 'Timer 0 End'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer1End (Display string: 'Timer 1 End'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer2End (Display string: 'Timer 2 End'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer#3#End (Display string: 'Timer #3# End'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Encoder0 (Display string: 'Encoder 0'): Specifies which Encoder signal to use as internal source for the trigger.
     *  - \b Encoder1 (Display string: 'Encoder 1'): Specifies which Encoder signal to use as internal source for the trigger.
     *  - \b Encoder2 (Display string: 'Encoder 2'): Specifies which Encoder signal to use as internal source for the trigger.
     *  - \b Encoder#3# (Display string: 'Encoder #3#'): Specifies which Encoder signal to use as internal source for the trigger.
     *  - \b UserOutput0 (Display string: 'User Output 0'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput1 (Display string: 'User Output 1'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput2 (Display string: 'User Output 2'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput#3# (Display string: 'User Output #3#'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b Action0 (Display string: 'Action 0'): Specifies which Action command to use as internal source for the trigger.
     *  - \b Action1 (Display string: 'Action 1'): Specifies which Action command to use as internal source for the trigger.
     *  - \b Action2 (Display string: 'Action 2'): Specifies which Action command to use as internal source for the trigger.
     *  - \b Action#3# (Display string: 'Action #3#'): Specifies which Action command to use as internal source for the trigger.
     *  - \b LinkTrigger0 (Display string: 'Link Trigger 0'): Specifies which Link Trigger to use as  source for the trigger (received from the transport layer).
     *  - \b LinkTrigger1 (Display string: 'Link Trigger 1'): Specifies which Link Trigger to use as  source for the trigger (received from the transport layer).
     *  - \b LinkTrigger2 (Display string: 'Link Trigger 2'): Specifies which Link Trigger to use as  source for the trigger (received from the transport layer).
     *  - \b LinkTrigger#3# (Display string: 'Link Trigger #3#'): Specifies which Link Trigger to use as  source for the trigger (received from the transport layer).
     *  - \b CC1 (Display string: 'CC 1'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b CC2 (Display string: 'CC 2'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b CC3 (Display string: 'CC 3'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b CC4 (Display string: 'CC 4'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b CC#5# (Display string: 'CC #5#'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b Line3 (Display string: 'Line 3'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
     *  - \b Line4 (Display string: 'Line 4'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
     *  - \b Line5 (Display string: 'Line 5'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
     *  - \b Line6 (Display string: 'Line 6'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
     *  - \b Line7 (Display string: 'Line 7'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
     *  - \b Line8 (Display string: 'Line 8'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
     *  - \b Line9 (Display string: 'Line 9'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
     *  - \b Line10 (Display string: 'Line 10'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
     *  - \b Line11 (Display string: 'Line 11'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
     *  - \b Line12 (Display string: 'Line 12'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
     *  - \b Line13 (Display string: 'Line 13'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
     *  - \b Line14 (Display string: 'Line 14'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
     *  - \b Line15 (Display string: 'Line 15'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the trigger signal.
     *  - \b Timer3Start (Display string: 'Timer 3 Start'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer4Start (Display string: 'Timer 4 Start'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer5Start (Display string: 'Timer 5 Start'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer6Start (Display string: 'Timer 6 Start'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer7Start (Display string: 'Timer 7 Start'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer8Start (Display string: 'Timer 8 Start'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer9Start (Display string: 'Timer 9 Start'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer10Start (Display string: 'Timer 10 Start'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer11Start (Display string: 'Timer 11 Start'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer12Start (Display string: 'Timer 12 Start'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer13Start (Display string: 'Timer 13 Start'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer14Start (Display string: 'Timer 14 Start'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer15Start (Display string: 'Timer 15 Start'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer16Start (Display string: 'Trigger Source')
     *  - \b Timer3End (Display string: 'Timer 3 End'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer4End (Display string: 'Timer 4 End'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer5End (Display string: 'Timer 5 End'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer6End (Display string: 'Timer 6 End'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer7End (Display string: 'Timer 7 End'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer8End (Display string: 'Timer 8 End'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer9End (Display string: 'Timer 9 End'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer10End (Display string: 'Timer 10 End'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer11End (Display string: 'Timer 11 End'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer12End (Display string: 'Timer 12 End'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer13End (Display string: 'Timer 13 End'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer14End (Display string: 'Timer 14 End'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer15End (Display string: 'Timer 15 End'): Specifies which Timer signal to use as internal source for the trigger.
     *  - \b Timer16End (Display string: 'Trigger Source')
     *  - \b Counter3Start (Display string: 'Counter 3 Start'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter4Start (Display string: 'Counter 4 Start'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter5Start (Display string: 'Counter 5 Start'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter6Start (Display string: 'Counter 6 Start'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter7Start (Display string: 'Counter 7 Start'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter8Start (Display string: 'Counter 8 Start'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter9Start (Display string: 'Counter 9 Start'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter10Start (Display string: 'Counter 10 Start'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter11Start (Display string: 'Counter 11 Start'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter12Start (Display string: 'Counter 12 Start'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter13Start (Display string: 'Counter 13 Start'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter14Start (Display string: 'Counter 14 Start'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter15Start (Display string: 'Counter 15 Start'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter16Start (Display string: 'Trigger Source')
     *  - \b Counter3End (Display string: 'Counter 3 End'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter4End (Display string: 'Counter 4 End'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter5End (Display string: 'Counter 5 End'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter6End (Display string: 'Counter 6 End'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter7End (Display string: 'Counter 7 End'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter8End (Display string: 'Counter 8 End'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter9End (Display string: 'Counter 9 End'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter10End (Display string: 'Counter 10 End'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter11End (Display string: 'Counter 11 End'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter12End (Display string: 'Counter 12 End'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter13End (Display string: 'Counter 13 End'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter14End (Display string: 'Counter 14 End'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter15End (Display string: 'Counter 15 End'): Specifies which of the Counter signal to use as internal source for the trigger.
     *  - \b Counter16End (Display string: 'Trigger Source')
     *  - \b mvLogicGateOR1Output (Display string: 'Trigger Source')
     *  - \b mvLogicGateOR2Output (Display string: 'Trigger Source')
     *  - \b mvLogicGateOR3Output (Display string: 'Trigger Source')
     *  - \b mvLogicGateOR4Output (Display string: 'Trigger Source')
     *  - \b UserOutput3 (Display string: 'User Output 3'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput4 (Display string: 'User Output 4'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput5 (Display string: 'User Output 5'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput6 (Display string: 'User Output 6'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput7 (Display string: 'User Output 7'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput8 (Display string: 'User Output 8'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput9 (Display string: 'User Output 9'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput10 (Display string: 'User Output 10'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput11 (Display string: 'User Output 11'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput12 (Display string: 'User Output 12'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput13 (Display string: 'User Output 13'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput14 (Display string: 'User Output 14'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput15 (Display string: 'User Output 15'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b Action3 (Display string: 'Action 3'): Specifies which Action command to use as internal source for the trigger.
     *  - \b Action4 (Display string: 'Action 4'): Specifies which Action command to use as internal source for the trigger.
     *  - \b Action5 (Display string: 'Action 5'): Specifies which Action command to use as internal source for the trigger.
     *  - \b Action6 (Display string: 'Action 6'): Specifies which Action command to use as internal source for the trigger.
     *  - \b Action7 (Display string: 'Action 7'): Specifies which Action command to use as internal source for the trigger.
     *  - \b Action8 (Display string: 'Action 8'): Specifies which Action command to use as internal source for the trigger.
     *  - \b Action9 (Display string: 'Action 9'): Specifies which Action command to use as internal source for the trigger.
     *  - \b Action10 (Display string: 'Action 10'): Specifies which Action command to use as internal source for the trigger.
     *  - \b Action11 (Display string: 'Action 11'): Specifies which Action command to use as internal source for the trigger.
     *  - \b Action12 (Display string: 'Action 12'): Specifies which Action command to use as internal source for the trigger.
     *  - \b Action13 (Display string: 'Action 13'): Specifies which Action command to use as internal source for the trigger.
     *  - \b Action14 (Display string: 'Action 14'): Specifies which Action command to use as internal source for the trigger.
     *  - \b Action15 (Display string: 'Action 15'): Specifies which Action command to use as internal source for the trigger.
     *  - \b Action16 (Display string: 'Trigger Source')
     *  - \b CC5 (Display string: 'CC 5'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b CC6 (Display string: 'CC 6'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b CC7 (Display string: 'CC 7'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b CC8 (Display string: 'CC 8'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b CC9 (Display string: 'CC 9'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b CC10 (Display string: 'CC 10'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b CC11 (Display string: 'CC 11'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b CC12 (Display string: 'CC 12'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b CC13 (Display string: 'CC 13'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b CC14 (Display string: 'CC 14'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b CC15 (Display string: 'CC 15'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b CC16 (Display string: 'Trigger Source')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 triggerSource;
    /// \brief An enumerated integer property. Specifies the activation mode of the trigger.
    /**
     *  Specifies the activation mode of the trigger.
     *
     *  The following string values might be valid for this feature:
     *  - \b RisingEdge (Display string: 'Rising Edge'): Specifies that the trigger is considered valid on the rising edge of the source signal.
     *  - \b FallingEdge (Display string: 'Falling Edge'): Specifies that the trigger is considered valid on the falling edge of the source signal.
     *  - \b AnyEdge (Display string: 'Any Edge'): Specifies that the trigger is considered valid on the falling or rising edge of the source signal.
     *  - \b LevelHigh (Display string: 'Level High'): Specifies that the trigger is considered valid as long as the level of the source signal is high.
     *  - \b LevelLow (Display string: 'Level Low'): Specifies that the trigger is considered valid as long as the level of the source signal is low.
     *  - \b mvNone (Display string: 'Trigger Activation')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 triggerActivation;
    /// \brief An enumerated integer property. Specifies the type trigger overlap permitted with the previous frame or line.
    /**
     *  Specifies the type trigger overlap permitted with the previous frame or line. This defines when a valid trigger will be accepted (or latched) for a new frame or a new line.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): No trigger overlap is permitted.
     *  - \b ReadOut (Display string: 'Read Out'): Trigger is accepted immediately after the exposure period.
     *  - \b PreviousFrame (Display string: 'Previous Frame'): Trigger is accepted (latched) at any time during the capture of the previous frame.
     *  - \b PreviousLine (Display string: 'Previous Line'): Trigger is accepted (latched) at any time during the capture of the previous line.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 triggerOverlap;
    /// \brief A floating point property. Specifies the delay in microseconds (us) to apply after the trigger reception before activating it.
    /**
     *  Specifies the delay in microseconds (us) to apply after the trigger reception before activating it.
     */
    PropertyF triggerDelay;
    /// \brief An integer property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. TriggerDelayRaw specifies the delay in device-specific unit to apply after the trigger reception before effectively activating it. TriggerDelayAbs must reflect the state of TriggerDelayRaw when they are both supported.
     */
    PropertyI64 triggerDelayRaw;
    /// \brief An integer property. Specifies a division factor for the incoming trigger pulses.
    /**
     *  Specifies a division factor for the incoming trigger pulses.
     */
    PropertyI64 triggerDivider;
    /// \brief An integer property. Specifies a multiplication factor for the incoming trigger pulses.
    /**
     *  Specifies a multiplication factor for the incoming trigger pulses. It is used generally used in conjunction with TriggerDivider to control the ratio of triggers that are accepted.
     */
    PropertyI64 triggerMultiplier;
    /// \brief An enumerated integer property. Sets the operation mode of the Exposure.
    /**
     *  Sets the operation mode of the Exposure.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Disables the Exposure and let the shutter open.
     *  - \b Timed (Display string: 'Timed'): Timed exposure. The exposure duration time is set using the ExposureTime or ExposureAuto features and the exposure starts with the FrameStart or LineStart
     *  - \b TriggerWidth (Display string: 'Trigger Width'): Uses the width of the current Frame or Line trigger signal(s) pulse to control the exposure duration. Note that if the Frame or Line TriggerActivation is RisingEdge or LevelHigh, the exposure duration will be the time the trigger stays High. If TriggerActivation is FallingEdge or LevelLow, the exposure time will last as long as the trigger stays Low.
     *  - \b TriggerControlled (Display string: 'Trigger Controlled'): Uses one or more trigger signal(s) to control the exposure duration independently from the current Frame or Line triggers. See ExposureStart, ExposureEnd and ExposureActive of the TriggerSelector feature.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 exposureMode;
    /// \brief An enumerated integer property. Sets the configuration mode of the ExposureTime feature.
    /**
     *  Sets the configuration mode of the ExposureTime feature.
     *
     *  The following string values might be valid for this feature:
     *  - \b Common (Display string: 'Common'): The exposure time is common to all the color components. The common ExposureTime value to use can be set selecting it with ExposureTimeSelector[Common].
     *  - \b Individual (Display string: 'Individual'): The exposure time is individual for each color component. Each individual ExposureTime values to use can be set by selecting them with ExposureTimeSelector.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 exposureTimeMode;
    /// \brief An enumerated integer property. Selects which exposure time is controlled by the ExposureTime feature.
    /**
     *  Selects which exposure time is controlled by the ExposureTime feature. This allows for independent control over the exposure components.
     *
     *  The following string values might be valid for this feature:
     *  - \b Common (Display string: 'Common'): Selects the common ExposureTime.
     *  - \b Red (Display string: 'Red'): Selects the red common ExposureTime.
     *  - \b Green (Display string: 'Green'): Selects the green ExposureTime.
     *  - \b Blue (Display string: 'Blue'): Selects the blue ExposureTime.
     *  - \b Cyan (Display string: 'Cyan'): Selects the cyan common ExposureTime.
     *  - \b Magenta (Display string: 'Magenta'): Selects the magenta ExposureTime.
     *  - \b Yellow (Display string: 'Yellow'): Selects the yellow ExposureTime.
     *  - \b Infrared (Display string: 'Infrared'): Selects the infrared ExposureTime.
     *  - \b Ultraviolet (Display string: 'Ultraviolet'): Selects the ultraviolet ExposureTime.
     *  - \b Stage1 (Display string: 'Stage 1'): Selects the first stage ExposureTime.
     *  - \b Stage2 (Display string: 'Stage 2'): Selects the second stage ExposureTime.
     *  - \b Stage#3# (Display string: 'Stage #3#'): Selects the second stage ExposureTime.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 exposureTimeSelector;
    /// \brief A floating point property. Sets the Exposure time when ExposureMode is Timed and ExposureAuto is Off.
    /**
     *  Sets the Exposure time when ExposureMode is Timed and ExposureAuto is Off. This controls the duration where the photosensitive cells are exposed to light.
     */
    PropertyF exposureTime;
    /// \brief An integer property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It can used to set the Exposure time in device-specific unit when ExposureMode is Timed. This controls the duration where the photosensitive cells are exposed to light.
     */
    PropertyI64 exposureTimeRaw;
    /// \brief An enumerated integer property. Sets the automatic exposure mode when ExposureMode is Timed.
    /**
     *  Sets the automatic exposure mode when ExposureMode is Timed. The exact algorithm used to implement this control is device-specific.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Exposure duration is user controlled using ExposureTime.
     *  - \b Once (Display string: 'Once'): Exposure duration is adapted once by the device. Once it has converged, it returns to the Off state.
     *  - \b Continuous (Display string: 'Continuous'): Exposure duration is constantly adapted by the device to maximize the dynamic range.
     *  - \b mvSequenced (Display string: 'Exposure Auto')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 exposureAuto;
    /// \brief An enumerated integer property. Controls the calculation of the maximum frame rate.
    /**
     *  Controls the calculation of the maximum frame rate.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvDeviceLinkThroughput (Display string: 'mv Acquisition Frame Rate Limit Mode'): Uses the highest possible frame rate depending on bandwidth and sensor settings.
     *  - \b mvDeviceMaxSensorThroughput (Display string: 'mv Acquisition Frame Rate Limit Mode'): Maximum frame rate the sensor can provide depending on AOI and pixel clock. Note: Images might be buffered in the cameras memory. This can result in delayed images.
     *  - \b mvLegacy (Display string: 'mv Acquisition Frame Rate Limit Mode'): Compatibility mode, not recommended.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvAcquisitionFrameRateLimitMode;
    /// \brief An enumerated integer property. Enables the use of the 'AcquisitionFrameRate' feature.
    /**
     *  Enables the use of the 'AcquisitionFrameRate' feature.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'mv Acquisition Frame Rate Enable'): The acquisition frame rate is set automatically to the limit, calculated according to 'mvAcquisitionFrameRateLimitMode' feature.
     *  - \b On (Display string: 'mv Acquisition Frame Rate Enable'): The acquisition frame rate is set by the 'AcquisitionFrameRate' feature.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvAcquisitionFrameRateEnable;
    /// \brief A floating point property. Shows the resulting frame rate.
    /**
     *  Shows the resulting frame rate.
     */
    PropertyF mvResultingFrameRate;
    /// \brief An enumerated integer property. Selects the shutter mode of the sensor.
    /**
     *  Selects the shutter mode of the sensor.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvRollingShutter (Display string: 'mv Shutter Mode')
     *  - \b mvGlobalReset (Display string: 'mv Shutter Mode')
     *  - \b mvGlobalShutter (Display string: 'mv Shutter Mode')
     *  - \b mvGlobalShutterWithoutReset (Display string: 'mv Shutter Mode')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvShutterMode;
    /// \brief An integer property. Knee point of 10 to 8 bit compression.
    /**
     *  Knee point of 10 to 8 bit compression.
     */
    PropertyI64 mvCompressionKneepoint;
    /// \brief A boolean property. Activates the sensor's defective pixel correction.
    /**
     *  Activates the sensor's defective pixel correction.
     */
    PropertyIBoolean mvDefectivePixelEnable;
    /// \brief A floating point property. The lower limit of the exposure time in auto exposure mode.
    /**
     *  The lower limit of the exposure time in auto exposure mode.
     */
    PropertyF mvExposureAutoLowerLimit;
    /// \brief A floating point property. The upper limit of the exposure time in auto exposure mode.
    /**
     *  The upper limit of the exposure time in auto exposure mode.
     */
    PropertyF mvExposureAutoUpperLimit;
    /// \brief An enumerated integer property. Determines the increment or decrement size of exposure value from frame to frame.
    /**
     *  Determines the increment or decrement size of exposure value from frame to frame.
     *
     *  The following string values might be valid for this feature:
     *  - \b Slow (Display string: 'mv Exposure Auto Speed')
     *  - \b Medium (Display string: 'mv Exposure Auto Speed')
     *  - \b Fast (Display string: 'mv Exposure Auto Speed')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvExposureAutoSpeed;
    /// \brief An integer property. The number of frames that the AEC must skip before updating the exposure register.
    /**
     *  The number of frames that the AEC must skip before updating the exposure register.
     */
    PropertyI64 mvExposureAutoDelayImages;
    /// \brief An integer property. Common desired average grey value (in percent) used for Auto Gain Control(AGC) and Auto Exposure Control(AEC).
    /**
     *  Common desired average grey value (in percent) used for auto gain control(AGC) and auto exposure control (AEC).
     */
    PropertyI64 mvExposureAutoAverageGrey;
    /// \brief An enumerated integer property. Highlight auto control AOI to check AOI settings. Switch off for normal operation.
    /**
     *  Highlight auto control AOI to check AOI settings. Switch off for normal operation.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'mv Exposure Auto Highlight AOI')
     *  - \b On (Display string: 'mv Exposure Auto Highlight AOI')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvExposureAutoHighlightAOI;
    /// \brief An enumerated integer property. Common AutoControl AOI used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AutoControl AOI used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     *
     *  The following string values might be valid for this feature:
     *  - \b mvFull (Display string: 'mv Exposure Auto AOI Mode')
     *  - \b mvCenter (Display string: 'mv Exposure Auto AOI Mode')
     *  - \b mvUser (Display string: 'mv Exposure Auto AOI Mode')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvExposureAutoAOIMode;
    /// \brief An integer property. Common AOI XOffset used for auto gain control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI XOffset used for auto gain control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvExposureAutoOffsetX;
    /// \brief An integer property. Common AOI YOffset used for auto gain control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI YOffset used for auto gain control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvExposureAutoOffsetY;
    /// \brief An integer property. Common AOI Width used for auto gain control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI Width used for auto gain control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvExposureAutoWidth;
    /// \brief An integer property. Common AOI Height used for auto gain control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI Height used for auto gain control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvExposureAutoHeight;
    /// \brief An enumerated integer property. Selects the common auto mode for gain and exposure.
    /**
     *  Selects the common auto mode for gain and exposure.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvSensor (Display string: 'mv Exposure Auto Mode'): The sensor itself will do the auto control.
     *  - \b mvDevice (Display string: 'mv Exposure Auto Mode'): The device(firmware) will do the auto control.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvExposureAutoMode;
    /// \brief An enumerated integer property. Smear reduction in triggered and non-overlapped mode.
    /**
     *  Smear reduction in triggered and non-overlapped mode.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvStandard (Display string: 'mv Smear Reduction'): Standard smear reduction.
     *  - \b mvMedium (Display string: 'mv Smear Reduction'): Medium smear reduction.
     *  - \b mvHighest (Display string: 'mv Smear Reduction'): Highest smear but more power consumption.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvSmearReduction;
    /// \brief An enumerated integer property. mvRecord is used to store frames in memory. mvPlayback transfers stored frames. mvPretrigger stores frames in memory to be transferred after trigger.
    /**
     *  mvRecord is used to store frames in memory. mvPlayback transfers stored frames. mvPretrigger stores frames in memory to be transferred after trigger.
     *
     *  The following string values might be valid for this feature:
     *  - \b Default (Display string: 'mv Acquisition Memory Mode'): Default memory mode.
     *  - \b mvRecord (Display string: 'mv Acquisition Memory Mode'): Stores frames in memory.
     *  - \b mvPlayback (Display string: 'mv Acquisition Memory Mode'): Transfers stored frames.
     *  - \b mvPretrigger (Display string: 'mv Acquisition Memory Mode'): Stores frames in memory to be transferred after trigger.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvAcquisitionMemoryMode;
    /// \brief An integer property. Number of frames to acquire before the occurrence of an AcquisitionStart or AcquisitionActive trigger.
    /**
     *  Number of frames to acquire before the occurrence of an AcquisitionStart or AcquisitionActive trigger.
     */
    PropertyI64 mvPretriggerFrameCount;
    /// \brief An integer property. Max number of frames to record.
    /**
     *  Max number of frames to record.
     */
    PropertyI64 mvAcquisitionMemoryMaxFrameCount;
    /// \brief An integer property. AOI and/or binning parameter changed after last Acquisition.
    /**
     *  AOI and/or binning parameter changed after last Acquisition.
     */
    PropertyI64 mvAcquisitionMemoryAOIParameterChanged;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains the Analog control features.
/**
 *  A category that contains the Analog control features.
 */
class AnalogControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::AnalogControl</b> object.
    explicit AnalogControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        gainSelector(),
        gain(),
        gainRaw(),
        gainAuto(),
        gainAutoBalance(),
        blackLevelSelector(),
        blackLevel(),
        blackLevelRaw(),
        blackLevelAuto(),
        blackLevelAutoBalance(),
        whiteClipSelector(),
        whiteClip(),
        whiteClipRaw(),
        balanceRatioSelector(),
        balanceRatio(),
        balanceWhiteAuto(),
        gamma(),
        mvGainAutoDelayImages(),
        mvGainAutoUpperLimit(),
        mvGainAutoLowerLimit(),
        mvGainAutoSpeed(),
        mvGainAutoAverageGrey(),
        mvGainAutoHighlightAOI(),
        mvGainAutoAOIMode(),
        mvGainAutoOffsetX(),
        mvGainAutoOffsetY(),
        mvGainAutoWidth(),
        mvGainAutoHeight(),
        mvGainAutoMode(),
        mvBalanceWhiteAutoAOIMode(),
        mvBalanceWhiteAutoOffsetX(),
        mvBalanceWhiteAutoOffsetY(),
        mvBalanceWhiteAutoWidth(),
        mvBalanceWhiteAutoHeight(),
        mvVCAL(),
        mvVBLACK(),
        mvVOFFSET(),
        mvLowLight(),
        mvADCGain(),
        mvVRamp(),
        mvLinearLogarithmicMode(),
        mvDigitalGainOffset(),
        mvSaveCalibrationData()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( gainSelector, "GainSelector" );
        locator.bindComponent( gain, "Gain" );
        if( !gain.isValid() )
        {
            locator.bindComponent( gain, "GainAbs" );
        }
        locator.bindComponent( gainRaw, "GainRaw" );
        locator.bindComponent( gainAuto, "GainAuto" );
        locator.bindComponent( gainAutoBalance, "GainAutoBalance" );
        locator.bindComponent( blackLevelSelector, "BlackLevelSelector" );
        locator.bindComponent( blackLevel, "BlackLevel" );
        if( !blackLevel.isValid() )
        {
            locator.bindComponent( blackLevel, "BlackLevelAbs" );
        }
        locator.bindComponent( blackLevelRaw, "BlackLevelRaw" );
        locator.bindComponent( blackLevelAuto, "BlackLevelAuto" );
        locator.bindComponent( blackLevelAutoBalance, "BlackLevelAutoBalance" );
        locator.bindComponent( whiteClipSelector, "WhiteClipSelector" );
        locator.bindComponent( whiteClip, "WhiteClip" );
        if( !whiteClip.isValid() )
        {
            locator.bindComponent( whiteClip, "WhiteClipAbs" );
        }
        locator.bindComponent( whiteClipRaw, "WhiteClipRaw" );
        locator.bindComponent( balanceRatioSelector, "BalanceRatioSelector" );
        locator.bindComponent( balanceRatio, "BalanceRatio" );
        if( !balanceRatio.isValid() )
        {
            locator.bindComponent( balanceRatio, "BalanceRatioAbs" );
        }
        locator.bindComponent( balanceWhiteAuto, "BalanceWhiteAuto" );
        locator.bindComponent( gamma, "Gamma" );
        locator.bindComponent( mvGainAutoDelayImages, "mvGainAutoDelayImages" );
        locator.bindComponent( mvGainAutoUpperLimit, "mvGainAutoUpperLimit" );
        locator.bindComponent( mvGainAutoLowerLimit, "mvGainAutoLowerLimit" );
        locator.bindComponent( mvGainAutoSpeed, "mvGainAutoSpeed" );
        locator.bindComponent( mvGainAutoAverageGrey, "mvGainAutoAverageGrey" );
        locator.bindComponent( mvGainAutoHighlightAOI, "mvGainAutoHighlightAOI" );
        locator.bindComponent( mvGainAutoAOIMode, "mvGainAutoAOIMode" );
        locator.bindComponent( mvGainAutoOffsetX, "mvGainAutoOffsetX" );
        locator.bindComponent( mvGainAutoOffsetY, "mvGainAutoOffsetY" );
        locator.bindComponent( mvGainAutoWidth, "mvGainAutoWidth" );
        locator.bindComponent( mvGainAutoHeight, "mvGainAutoHeight" );
        locator.bindComponent( mvGainAutoMode, "mvGainAutoMode" );
        locator.bindComponent( mvBalanceWhiteAutoAOIMode, "mvBalanceWhiteAutoAOIMode" );
        locator.bindComponent( mvBalanceWhiteAutoOffsetX, "mvBalanceWhiteAutoOffsetX" );
        locator.bindComponent( mvBalanceWhiteAutoOffsetY, "mvBalanceWhiteAutoOffsetY" );
        locator.bindComponent( mvBalanceWhiteAutoWidth, "mvBalanceWhiteAutoWidth" );
        locator.bindComponent( mvBalanceWhiteAutoHeight, "mvBalanceWhiteAutoHeight" );
        locator.bindComponent( mvVCAL, "mvVCAL" );
        locator.bindComponent( mvVBLACK, "mvVBLACK" );
        locator.bindComponent( mvVOFFSET, "mvVOFFSET" );
        locator.bindComponent( mvLowLight, "mvLowLight" );
        locator.bindComponent( mvADCGain, "mvADCGain" );
        locator.bindComponent( mvVRamp, "mvVRamp" );
        locator.bindComponent( mvLinearLogarithmicMode, "mvLinearLogarithmicMode" );
        locator.bindComponent( mvDigitalGainOffset, "mvDigitalGainOffset" );
        locator.bindComponent( mvSaveCalibrationData, "mvSaveCalibrationData@i" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Selects which Gain is controlled by the various Gain features.
    /**
     *  Selects which Gain is controlled by the various Gain features.
     *
     *  The following string values might be valid for this feature:
     *  - \b All (Display string: 'All'): Gain will be applied to all channels or taps.
     *  - \b Red (Display string: 'Red'): Gain will be applied to the red channel.
     *  - \b Green (Display string: 'Green'): Gain will be applied to the green channel.
     *  - \b Blue (Display string: 'Blue'): Gain will be applied to the blue channel.
     *  - \b Y (Display string: 'Y'): Gain will be applied to Y channel.
     *  - \b U (Display string: 'U'): Gain will be applied to U channel.
     *  - \b V (Display string: 'V'): Gain will be applied to V channel.
     *  - \b Tap1 (Display string: 'Tap 1'): Gain will be applied to Tap 1.
     *  - \b Tap2 (Display string: 'Tap 2'): Gain will be applied to Tap 2.
     *  - \b Tap#3# (Display string: 'Tap #3#'): Gain will be applied to Tap #3#.
     *  - \b AnalogAll (Display string: 'Analog All'): Gain will be applied to all analog channels or taps.
     *  - \b AnalogRed (Display string: 'Analog Red'): Gain will be applied to the red analog channel.
     *  - \b AnalogGreen (Display string: 'Analog Green'): Gain will be applied to the green analog channel.
     *  - \b AnalogBlue (Display string: 'Analog Blue'): Gain will be applied to the blue analog channel.
     *  - \b AnalogY (Display string: 'Analog Y'): Gain will be applied to Y analog channel.
     *  - \b AnalogU (Display string: 'Analog U'): Gain will be applied to U analog channel.
     *  - \b AnalogV (Display string: 'Analog V'): Gain will be applied to V analog channel.
     *  - \b AnalogTap1 (Display string: 'Analog Tap 1'): Analog gain will be applied to Tap 1.
     *  - \b AnalogTap2 (Display string: 'Analog Tap 2'): Analog gain will be applied to Tap 2.
     *  - \b AnalogTap#3# (Display string: 'Analog Tap #3#'): Analog gain will be applied to Tap #3#.
     *  - \b DigitalAll (Display string: 'Digital All'): Gain will be applied to all digital channels or taps.
     *  - \b DigitalRed (Display string: 'Digital Red'): Gain will be applied to the red digital channel.
     *  - \b DigitalGreen (Display string: 'Digital Green'): Gain will be applied to the green digital channel.
     *  - \b DigitalBlue (Display string: 'Digital Blue'): Gain will be applied to the blue digital channel.
     *  - \b DigitalY (Display string: 'Digital Y'): Gain will be applied to Y digital channel.
     *  - \b DigitalU (Display string: 'Digital U'): Gain will be applied to U digital channel.
     *  - \b DigitalV (Display string: 'Digital V'): Gain will be applied to V digital channel.
     *  - \b DigitalTap1 (Display string: 'Digital Tap 1'): Digital gain will be applied to Tap 1.
     *  - \b DigitalTap2 (Display string: 'Digital Tap 2'): Digital gain will be applied to Tap 2.
     *  - \b DigitalTap#3# (Display string: 'Digital Tap #3#'): Digital gain will be applied to Tap #3#.
     *  - \b Tap3 (Display string: 'Tap 3'): Gain will be applied to Tap 3.
     *  - \b Tap4 (Display string: 'Tap 4'): Gain will be applied to Tap 4.
     *  - \b Tap5 (Display string: 'Tap 5'): Gain will be applied to Tap 5.
     *  - \b Tap6 (Display string: 'Tap 6'): Gain will be applied to Tap 6.
     *  - \b Tap7 (Display string: 'Tap 7'): Gain will be applied to Tap 7.
     *  - \b Tap8 (Display string: 'Tap 8'): Gain will be applied to Tap 8.
     *  - \b Tap9 (Display string: 'Tap 9'): Gain will be applied to Tap 9.
     *  - \b Tap10 (Display string: 'Tap 10'): Gain will be applied to Tap 10.
     *  - \b Tap11 (Display string: 'Tap 11'): Gain will be applied to Tap 11.
     *  - \b Tap12 (Display string: 'Tap 12'): Gain will be applied to Tap 12.
     *  - \b Tap13 (Display string: 'Tap 13'): Gain will be applied to Tap 13.
     *  - \b Tap14 (Display string: 'Tap 14'): Gain will be applied to Tap 14.
     *  - \b Tap15 (Display string: 'Tap 15'): Gain will be applied to Tap 15.
     *  - \b Tap16 (Display string: 'Gain Selector')
     *  - \b AnalogTap3 (Display string: 'Analog Tap 3'): Analog gain will be applied to Tap 3.
     *  - \b AnalogTap4 (Display string: 'Analog Tap 4'): Analog gain will be applied to Tap 4.
     *  - \b AnalogTap5 (Display string: 'Analog Tap 5'): Analog gain will be applied to Tap 5.
     *  - \b AnalogTap6 (Display string: 'Analog Tap 6'): Analog gain will be applied to Tap 6.
     *  - \b AnalogTap7 (Display string: 'Analog Tap 7'): Analog gain will be applied to Tap 7.
     *  - \b AnalogTap8 (Display string: 'Analog Tap 8'): Analog gain will be applied to Tap 8.
     *  - \b AnalogTap9 (Display string: 'Analog Tap 9'): Analog gain will be applied to Tap 9.
     *  - \b AnalogTap10 (Display string: 'Analog Tap 10'): Analog gain will be applied to Tap 10.
     *  - \b AnalogTap11 (Display string: 'Analog Tap 11'): Analog gain will be applied to Tap 11.
     *  - \b AnalogTap12 (Display string: 'Analog Tap 12'): Analog gain will be applied to Tap 12.
     *  - \b AnalogTap13 (Display string: 'Analog Tap 13'): Analog gain will be applied to Tap 13.
     *  - \b AnalogTap14 (Display string: 'Analog Tap 14'): Analog gain will be applied to Tap 14.
     *  - \b AnalogTap15 (Display string: 'Analog Tap 15'): Analog gain will be applied to Tap 15.
     *  - \b AnalogTap16 (Display string: 'Gain Selector')
     *  - \b DigitalTap3 (Display string: 'Digital Tap 3'): Digital gain will be applied to Tap 3.
     *  - \b DigitalTap4 (Display string: 'Digital Tap 4'): Digital gain will be applied to Tap 4.
     *  - \b DigitalTap5 (Display string: 'Digital Tap 5'): Digital gain will be applied to Tap 5.
     *  - \b DigitalTap6 (Display string: 'Digital Tap 6'): Digital gain will be applied to Tap 6.
     *  - \b DigitalTap7 (Display string: 'Digital Tap 7'): Digital gain will be applied to Tap 7.
     *  - \b DigitalTap8 (Display string: 'Digital Tap 8'): Digital gain will be applied to Tap 8.
     *  - \b DigitalTap9 (Display string: 'Digital Tap 9'): Digital gain will be applied to Tap 9.
     *  - \b DigitalTap10 (Display string: 'Digital Tap 10'): Digital gain will be applied to Tap 10.
     *  - \b DigitalTap11 (Display string: 'Digital Tap 11'): Digital gain will be applied to Tap 11.
     *  - \b DigitalTap12 (Display string: 'Digital Tap 12'): Digital gain will be applied to Tap 12.
     *  - \b DigitalTap13 (Display string: 'Digital Tap 13'): Digital gain will be applied to Tap 13.
     *  - \b DigitalTap14 (Display string: 'Digital Tap 14'): Digital gain will be applied to Tap 14.
     *  - \b DigitalTap15 (Display string: 'Digital Tap 15'): Digital gain will be applied to Tap 15.
     *  - \b DigitalTap16 (Display string: 'Gain Selector')
     *  - \b mvAnalogSensorA (Display string: 'Gain Selector')
     *  - \b mvAnalogSensorB (Display string: 'Gain Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 gainSelector;
    /// \brief A floating point property. Controls the selected gain as an absolute physical value.
    /**
     *  Controls the selected gain as an absolute physical value. This is an amplification factor applied to the video signal.
     */
    PropertyF gain;
    /// \brief An integer property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It controls the selected gain as a raw integer value. This is an amplification factor applied to the video signal.
     */
    PropertyI64 gainRaw;
    /// \brief An enumerated integer property. Sets the automatic gain control (AGC) mode.
    /**
     *  Sets the automatic gain control (AGC) mode. The exact algorithm used to implement AGC is device-specific.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Gain is User controlled using Gain.
     *  - \b Once (Display string: 'Once'): Gain is automatically adjusted once by the device. Once it has converged, it automatically returns to the Off state.
     *  - \b Continuous (Display string: 'Continuous'): Gain is constantly adjusted by the device.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 gainAuto;
    /// \brief An enumerated integer property. Sets the mode for automatic gain balancing between the sensor color channels or taps.
    /**
     *  Sets the mode for automatic gain balancing between the sensor color channels or taps. The gain coefficients of each channel or tap are adjusted so they are matched.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Gain tap balancing is user controlled using Gain .
     *  - \b Once (Display string: 'Once'): Gain tap balancing is automatically adjusted once by the device. Once it has converged, it automatically returns to the Off state.
     *  - \b Continuous (Display string: 'Continuous'): Gain tap balancing is constantly adjusted by the device.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 gainAutoBalance;
    /// \brief An enumerated integer property. Selects which Black Level is controlled by the various Black Level features.
    /**
     *  Selects which Black Level is controlled by the various Black Level features.
     *
     *  The following string values might be valid for this feature:
     *  - \b All (Display string: 'All'): Black Level will be applied to all channels or taps.
     *  - \b Red (Display string: 'Red'): Black Level will be applied to the red channel.
     *  - \b Green (Display string: 'Green'): Black Level will be applied to the green channel.
     *  - \b Blue (Display string: 'Blue'): Black Level will be applied to the blue channel.
     *  - \b Y (Display string: 'Y'): Black Level will be applied to Y channel.
     *  - \b U (Display string: 'U'): Black Level will be applied to U channel.
     *  - \b V (Display string: 'V'): Black Level will be applied to V channel.
     *  - \b Tap1 (Display string: 'Tap 1'): Black Level will be applied to Tap 1.
     *  - \b Tap2 (Display string: 'Tap 2'): Black Level will be applied to Tap 2.
     *  - \b Tap#3# (Display string: 'Tap #3#'): Black Level will be applied to Tap #3#.
     *  - \b Tap3 (Display string: 'Tap 3'): Black Level will be applied to Tap 3.
     *  - \b Tap4 (Display string: 'Tap 4'): Black Level will be applied to Tap 4.
     *  - \b Tap5 (Display string: 'Tap 5'): Black Level will be applied to Tap 5.
     *  - \b Tap6 (Display string: 'Tap 6'): Black Level will be applied to Tap 6.
     *  - \b Tap7 (Display string: 'Tap 7'): Black Level will be applied to Tap 7.
     *  - \b Tap8 (Display string: 'Tap 8'): Black Level will be applied to Tap 8.
     *  - \b Tap9 (Display string: 'Tap 9'): Black Level will be applied to Tap 9.
     *  - \b Tap10 (Display string: 'Tap 10'): Black Level will be applied to Tap 10.
     *  - \b Tap11 (Display string: 'Tap 11'): Black Level will be applied to Tap 11.
     *  - \b Tap12 (Display string: 'Tap 12'): Black Level will be applied to Tap 12.
     *  - \b Tap13 (Display string: 'Tap 13'): Black Level will be applied to Tap 13.
     *  - \b Tap14 (Display string: 'Tap 14'): Black Level will be applied to Tap 14.
     *  - \b Tap15 (Display string: 'Tap 15'): Black Level will be applied to Tap 15.
     *  - \b Tap16 (Display string: 'Black Level Selector')
     *  - \b mvAnalogSensorA (Display string: 'Black Level Selector')
     *  - \b mvAnalogSensorB (Display string: 'Black Level Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 blackLevelSelector;
    /// \brief A floating point property. Controls the analog black level as an absolute physical value.
    /**
     *  Controls the analog black level as an absolute physical value. This represents a DC offset applied to the video signal.
     */
    PropertyF blackLevel;
    /// \brief An integer property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It controls the analog black level as a raw integer value. This represents a DC offset applied to the video signal.
     */
    PropertyI64 blackLevelRaw;
    /// \brief An enumerated integer property. Controls the mode for automatic black level adjustment.
    /**
     *  Controls the mode for automatic black level adjustment. The exact algorithm used to implement this adjustment is device-specific.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Analog black level is user controlled using BlackLevel.
     *  - \b Once (Display string: 'Once'): Analog black level is automatically adjusted once by the device. Once it has converged, it automatically returns to the Off state.
     *  - \b Continuous (Display string: 'Continuous'): Analog black level is constantly adjusted by the device.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 blackLevelAuto;
    /// \brief An enumerated integer property. Controls the mode for automatic black level balancing between the sensor color channels or taps.
    /**
     *  Controls the mode for automatic black level balancing between the sensor color channels or taps. The black level coefficients of each channel are adjusted so they are matched.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Black level tap balancing is user controlled using BlackLevel.
     *  - \b Once (Display string: 'Once'): Black level tap balancing is automatically adjusted once by the device. Once it has converged, it automatically returns to the Off state.
     *  - \b Continuous (Display string: 'Continuous'): Black level tap balancing is constantly adjusted by the device.
     *  - \b mvRaw (Display string: 'Black Level Auto Balance')
     *  - \b mvFixed (Display string: 'Black Level Auto Balance')
     *  - \b mvLowerLine (Display string: 'Black Level Auto Balance')
     *  - \b mvSlow (Display string: 'Black Level Auto Balance')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 blackLevelAutoBalance;
    /// \brief An enumerated integer property. Selects which White Clip to control.
    /**
     *  Selects which White Clip to control.
     *
     *  The following string values might be valid for this feature:
     *  - \b All (Display string: 'All'): White Clip will be applied to all channels or taps.
     *  - \b Red (Display string: 'Red'): White Clip will be applied to the red channel.
     *  - \b Green (Display string: 'Green'): White Clip will be applied to the green channel.
     *  - \b Blue (Display string: 'Blue'): White Clip will be applied to the blue channel.
     *  - \b Y (Display string: 'Y'): White Clip will be applied to Y channel.
     *  - \b U (Display string: 'U'): White Clip will be applied to U channel.
     *  - \b V (Display string: 'V'): White Clip will be applied to V channel.
     *  - \b Tap1 (Display string: 'Tap 1'): White Clip will be applied to Tap 1.
     *  - \b Tap2 (Display string: 'Tap 2'): White Clip will be applied to Tap 2.
     *  - \b Tap#3# (Display string: 'Tap #3#'): White Clip will be applied to Tap #3#.
     *  - \b Tap3 (Display string: 'Tap 3'): White Clip will be applied to Tap 3.
     *  - \b Tap4 (Display string: 'Tap 4'): White Clip will be applied to Tap 4.
     *  - \b Tap5 (Display string: 'Tap 5'): White Clip will be applied to Tap 5.
     *  - \b Tap6 (Display string: 'Tap 6'): White Clip will be applied to Tap 6.
     *  - \b Tap7 (Display string: 'Tap 7'): White Clip will be applied to Tap 7.
     *  - \b Tap8 (Display string: 'Tap 8'): White Clip will be applied to Tap 8.
     *  - \b Tap9 (Display string: 'Tap 9'): White Clip will be applied to Tap 9.
     *  - \b Tap10 (Display string: 'Tap 10'): White Clip will be applied to Tap 10.
     *  - \b Tap11 (Display string: 'Tap 11'): White Clip will be applied to Tap 11.
     *  - \b Tap12 (Display string: 'Tap 12'): White Clip will be applied to Tap 12.
     *  - \b Tap13 (Display string: 'Tap 13'): White Clip will be applied to Tap 13.
     *  - \b Tap14 (Display string: 'Tap 14'): White Clip will be applied to Tap 14.
     *  - \b Tap15 (Display string: 'Tap 15'): White Clip will be applied to Tap 15.
     *  - \b Tap16 (Display string: 'White Clip Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 whiteClipSelector;
    /// \brief A floating point property. Controls the maximal intensity taken by the video signal before being clipped as an absolute physical value.
    /**
     *  Controls the maximal intensity taken by the video signal before being clipped as an absolute physical value. The video signal will never exceed the white clipping point: it will saturate at that level.
     */
    PropertyF whiteClip;
    /// \brief An integer property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. Controls the maximal intensity taken by the video signal before being clipped as a raw integer value. The video signal will never exceed the white clipping point: it will saturate at that level.
     */
    PropertyI64 whiteClipRaw;
    /// \brief An enumerated integer property. Selects which Balance ratio to control.
    /**
     *  Selects which Balance ratio to control.
     *
     *  The following string values might be valid for this feature:
     *  - \b All (Display string: 'All'): Balance Ratio will be applied to all channels or taps.
     *  - \b Red (Display string: 'Red'): Balance Ratio will be applied to the red channel.
     *  - \b Green (Display string: 'Green'): Balance Ratio will be applied to the green channel.
     *  - \b Blue (Display string: 'Blue'): Balance Ratio will be applied to the blue channel.
     *  - \b Y (Display string: 'Y'): Balance Ratio will be applied to Y channel.
     *  - \b U (Display string: 'U'): Balance Ratio will be applied to U channel.
     *  - \b V (Display string: 'V'): Balance Ratio will be applied to V channel.
     *  - \b Tap1 (Display string: 'Tap 1'): Balance Ratio will be applied to Tap 1.
     *  - \b Tap2 (Display string: 'Tap 2'): Balance Ratio will be applied to Tap 2.
     *  - \b Tap#3# (Display string: 'Tap #3#'): Balance Ratio will be applied to Tap #3#.
     *  - \b Green0 (Display string: 'Balance Ratio Selector')
     *  - \b Green1 (Display string: 'Balance Ratio Selector')
     *  - \b Tap3 (Display string: 'Tap 3'): Balance Ratio will be applied to Tap 3.
     *  - \b Tap4 (Display string: 'Tap 4'): Balance Ratio will be applied to Tap 4.
     *  - \b Tap5 (Display string: 'Tap 5'): Balance Ratio will be applied to Tap 5.
     *  - \b Tap6 (Display string: 'Tap 6'): Balance Ratio will be applied to Tap 6.
     *  - \b Tap7 (Display string: 'Tap 7'): Balance Ratio will be applied to Tap 7.
     *  - \b Tap8 (Display string: 'Tap 8'): Balance Ratio will be applied to Tap 8.
     *  - \b Tap9 (Display string: 'Tap 9'): Balance Ratio will be applied to Tap 9.
     *  - \b Tap10 (Display string: 'Tap 10'): Balance Ratio will be applied to Tap 10.
     *  - \b Tap11 (Display string: 'Tap 11'): Balance Ratio will be applied to Tap 11.
     *  - \b Tap12 (Display string: 'Tap 12'): Balance Ratio will be applied to Tap 12.
     *  - \b Tap13 (Display string: 'Tap 13'): Balance Ratio will be applied to Tap 13.
     *  - \b Tap14 (Display string: 'Tap 14'): Balance Ratio will be applied to Tap 14.
     *  - \b Tap15 (Display string: 'Tap 15'): Balance Ratio will be applied to Tap 15.
     *  - \b Tap16 (Display string: 'Balance Ratio Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 balanceRatioSelector;
    /// \brief A floating point property. Controls ratio of the selected color component to a reference color component.
    /**
     *  Controls ratio of the selected color component to a reference color component. It is used for white balancing.
     */
    PropertyF balanceRatio;
    /// \brief An enumerated integer property. Controls the mode for automatic white balancing between the color channels.
    /**
     *  Controls the mode for automatic white balancing between the color channels. The white balancing ratios are automatically adjusted.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): White balancing is user controlled using BalanceRatioSelector and BalanceRatio.
     *  - \b Once (Display string: 'Once'): White balancing is automatically adjusted once by the device. Once it has converged, it automatically returns to the Off state.
     *  - \b Continuous (Display string: 'Continuous'): White balancing is constantly adjusted by the device.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 balanceWhiteAuto;
    /// \brief A floating point property. Controls the gamma correction of pixel intensity.
    /**
     *  Controls the gamma correction of pixel intensity. This is typically used to compensate for non-linearity of the display system (such as CRT).
     */
    PropertyF gamma;
    /// \brief An integer property. The number of frames that the AEC must skip before updating the exposure register
    /**
     *  The number of frames that the AEC must skip before updating the exposure register
     */
    PropertyI64 mvGainAutoDelayImages;
    /// \brief A floating point property. The upper limit of the gain in auto gain mode
    /**
     *  The upper limit of the gain in auto gain mode
     */
    PropertyF mvGainAutoUpperLimit;
    /// \brief A floating point property. The lower limit of the gain in auto gain mode
    /**
     *  The lower limit of the gain in auto gain mode
     */
    PropertyF mvGainAutoLowerLimit;
    /// \brief An enumerated integer property. Determines the increment or decrement size of gain value from frame to frame.
    /**
     *  Determines the increment or decrement size of gain value from frame to frame.
     *
     *  The following string values might be valid for this feature:
     *  - \b Slow (Display string: 'mv Gain Auto Speed')
     *  - \b Medium (Display string: 'mv Gain Auto Speed')
     *  - \b Fast (Display string: 'mv Gain Auto Speed')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvGainAutoSpeed;
    /// \brief An integer property. Common desired average grey value (in percent) used for Auto Gain Control(AGC) and Auto Exposure Control(AEC).
    /**
     *  Common desired average grey value (in percent) used for Auto Gain Control(AGC) and Auto Exposure Control(AEC).
     */
    PropertyI64 mvGainAutoAverageGrey;
    /// \brief An enumerated integer property. Highlight auto control AOI to check AOI settings. Switch off for normal operation.
    /**
     *  Highlight auto control AOI to check AOI settings. Switch off for normal operation.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'mv Gain Auto Highlight AOI')
     *  - \b On (Display string: 'mv Gain Auto Highlight AOI')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvGainAutoHighlightAOI;
    /// \brief An enumerated integer property. Common AutoControl AOI used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balancing.
    /**
     *  Common AutoControl AOI used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balancing.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvFull (Display string: 'mv Gain Auto AOI Mode')
     *  - \b mvCenter (Display string: 'mv Gain Auto AOI Mode')
     *  - \b mvUser (Display string: 'mv Gain Auto AOI Mode')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvGainAutoAOIMode;
    /// \brief An integer property. Common AOI X-Offset used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI X-Offset used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvGainAutoOffsetX;
    /// \brief An integer property. Common AOI Y-Offset used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI Y-Offset used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvGainAutoOffsetY;
    /// \brief An integer property. Common AOI Width used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI Width used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvGainAutoWidth;
    /// \brief An integer property. Common AOI Height used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI Height used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvGainAutoHeight;
    /// \brief An enumerated integer property. Selects the common auto mode for gain and exposure.
    /**
     *  Selects the common auto mode for gain and exposure.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvSensor (Display string: 'mv Gain Auto Mode'): The sensor itself will do the auto control.
     *  - \b mvDevice (Display string: 'mv Gain Auto Mode'): The device(firmware) will do the auto control.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvGainAutoMode;
    /// \brief An enumerated integer property. Common AutoControl AOI used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AutoControl AOI used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     *
     *  The following string values might be valid for this feature:
     *  - \b mvFull (Display string: 'mv Balance White Auto AOI Mode')
     *  - \b mvCenter (Display string: 'mv Balance White Auto AOI Mode')
     *  - \b mvUser (Display string: 'mv Balance White Auto AOI Mode')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvBalanceWhiteAutoAOIMode;
    /// \brief An integer property. Common AOI X-Offset used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI XOffset used for auto gain control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvBalanceWhiteAutoOffsetX;
    /// \brief An integer property. Common AOI Y-Offset used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI Y-Offset used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvBalanceWhiteAutoOffsetY;
    /// \brief An integer property. Common AOI Width used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI Width used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvBalanceWhiteAutoWidth;
    /// \brief An integer property. Common AOI Height used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI Height used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvBalanceWhiteAutoHeight;
    /// \brief An integer property. Sets the voltage in millivolt.
    /**
     *  Sets the voltage in millivolt.
     */
    PropertyI64 mvVCAL;
    /// \brief An integer property. Sets the voltage in millivolt.
    /**
     *  Sets the voltage in millivolt.
     */
    PropertyI64 mvVBLACK;
    /// \brief An integer property. Sets the voltage in millivolt.
    /**
     *  Sets the voltage in millivolt.
     */
    PropertyI64 mvVOFFSET;
    /// \brief An enumerated integer property. Makes the image brighter.
    /**
     *  Makes the image brighter.
     *
     *  The following string values might be valid for this feature:
     *  - \b On (Display string: 'mv Low Light')
     *  - \b Off (Display string: 'mv Low Light')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvLowLight;
    /// \brief An integer property. Adapt gain. Gain value of the sensor may differ from sensor to sensor.
    /**
     *  Adapt gain. Gain value of the sensor may differ from sensor to sensor.
     */
    PropertyI64 mvADCGain;
    /// \brief An integer property. Adjusting this value will result in better column CDS (correlated double sampling) which will remove the column FPN from the image.
    /**
     *  Adjusting this value will result in better column CDS (correlated double sampling) which will remove the column FPN from the image.
     */
    PropertyI64 mvVRamp;
    /// \brief An integer property. Controls the knee point between linear response and logarithmic response.
    /**
     *  Controls the knee point between linear response and logarithmic response.
     */
    PropertyI64 mvLinearLogarithmicMode;
    /// \brief An integer property. Used for fine tuning of the brightness of the sensor.
    /**
     *  Used for fine tuning of the brightness of the sensor.
     */
    PropertyI64 mvDigitalGainOffset;
    /// \brief A method object. Saves the calibration data to non-volatile memory.
    /**
     *  Saves the calibration data to non-volatile memory.
     */
    Method mvSaveCalibrationData;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that includes the LUT control features.
/**
 *  A category that includes the LUT control features.
 */
class LUTControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::LUTControl</b> object.
    explicit LUTControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        LUTSelector(),
        LUTEnable(),
        LUTIndex(),
        LUTValue(),
        LUTValueAll()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( LUTSelector, "LUTSelector" );
        locator.bindComponent( LUTEnable, "LUTEnable" );
        locator.bindComponent( LUTIndex, "LUTIndex" );
        locator.bindComponent( LUTValue, "LUTValue" );
        locator.bindComponent( LUTValueAll, "LUTValueAll" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Selects which LUT to control.
    /**
     *  Selects which LUT to control.
     *
     *  The following string values might be valid for this feature:
     *  - \b Luminance (Display string: 'Luminance'): Selects the Luminace LUT.
     *  - \b Red (Display string: 'Red'): Selects the Red LUT.
     *  - \b Green (Display string: 'Green'): Selects the Green LUT.
     *  - \b Blue (Display string: 'Blue'): Selects the Blue LUT.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 LUTSelector;
    /// \brief A boolean property. Activates the selected LUT.
    /**
     *  Activates the selected LUT.
     */
    PropertyIBoolean LUTEnable;
    /// \brief An integer property. Control the index (offset) of the coefficient to access in the selected LUT.
    /**
     *  Control the index (offset) of the coefficient to access in the selected LUT.
     */
    PropertyI64 LUTIndex;
    /// \brief An integer property. Returns the Value at entry LUTIndex of the LUT selected by LUTSelector.
    /**
     *  Returns the Value at entry LUTIndex of the LUT selected by LUTSelector.
     */
    PropertyI64 LUTValue;
    /// \brief A string property. Accesses all the LUT coefficients in a single access without using individual LUTIndex.
    /**
     *  Accesses all the LUT coefficients in a single access without using individual LUTIndex.
     */
    PropertyS LUTValueAll;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains the Color Transformation control features.
/**
 *  A category that contains the Color Transformation control features.
 */
class ColorTransformationControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::ColorTransformationControl</b> object.
    explicit ColorTransformationControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        colorTransformationSelector(),
        colorTransformationEnable(),
        colorTransformationValueSelector(),
        colorTransformationValue()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( colorTransformationSelector, "ColorTransformationSelector" );
        locator.bindComponent( colorTransformationEnable, "ColorTransformationEnable" );
        locator.bindComponent( colorTransformationValueSelector, "ColorTransformationValueSelector" );
        locator.bindComponent( colorTransformationValue, "ColorTransformationValue" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Selects which Color Transformation module is controlled by the various Color Transformation features.
    /**
     *  Selects which Color Transformation module is controlled by the various Color Transformation features.
     *
     *  The following string values might be valid for this feature:
     *  - \b RGBtoRGB (Display string: 'RGB to RGB'): RGB to RGB color transformation.
     *  - \b RGBtoYUV (Display string: 'RGB to YUV'): RGB to YUV color transformation.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 colorTransformationSelector;
    /// \brief A boolean property. Activates the selected Color Transformation module.
    /**
     *  Activates the selected Color Transformation module.
     */
    PropertyIBoolean colorTransformationEnable;
    /// \brief An enumerated integer property. Selects the Gain factor or Offset of the Transformation matrix to access in the selected Color Transformation module.
    /**
     *  Selects the Gain factor or Offset of the Transformation matrix to access in the selected Color Transformation module.
     *
     *  The following string values might be valid for this feature:
     *  - \b Gain00 (Display string: 'Gain 00'): Gain 0,0 of the transformation matrix.
     *  - \b Gain01 (Display string: 'Gain 01'): Gain 0,1 of the transformation matrix.
     *  - \b Gain02 (Display string: 'Gain 02'): Gain 0,2 of the transformation matrix.
     *  - \b Gain10 (Display string: 'Gain 10'): Gain 1,0 of the transformation matrix.
     *  - \b Gain11 (Display string: 'Gain 11'): Gain 1,1 of the transformation matrix.
     *  - \b Gain12 (Display string: 'Gain 12'): Gain 1,2 of the transformation matrix.
     *  - \b Gain20 (Display string: 'Gain 20'): Gain 2,0 of the transformation matrix.
     *  - \b Gain21 (Display string: 'Gain 21'): Gain 2,1 of the transformation matrix.
     *  - \b Gain22 (Display string: 'Gain 22'): Gain 2,2 of the transformation matrix.
     *  - \b Offset0 (Display string: 'Offset 0'): Offset 0 of the transformation matrix.
     *  - \b Offset1 (Display string: 'Offset 1'): Offset 1 of the transformation matrix.
     *  - \b Offset2 (Display string: 'Offset 2'): Offset 2 of the transformation matrix.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 colorTransformationValueSelector;
    /// \brief A floating point property. Represents the value of the selected Gain factor or Offset inside the Transformation matrix.
    /**
     *  Represents the value of the selected Gain factor or Offset inside the Transformation matrix.
     */
    PropertyF colorTransformationValue;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains the digital input and output control features.
/**
 *  A category that contains the digital input and output control features.
 */
class DigitalIOControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::DigitalIOControl</b> object.
    explicit DigitalIOControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        lineSelector(),
        lineMode(),
        lineInverter(),
        lineStatus(),
        lineStatusAll(),
        lineSource(),
        lineFormat(),
        userOutputSelector(),
        userOutputValue(),
        userOutputValueAll(),
        userOutputValueAllMask(),
        mvLineDebounceTimeRisingEdge(),
        mvLineDebounceTimeFallingEdge(),
        mvRTMInputSelector(),
        mvRTMSource()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( lineSelector, "LineSelector" );
        locator.bindComponent( lineMode, "LineMode" );
        locator.bindComponent( lineInverter, "LineInverter" );
        locator.bindComponent( lineStatus, "LineStatus" );
        locator.bindComponent( lineStatusAll, "LineStatusAll" );
        locator.bindComponent( lineSource, "LineSource" );
        locator.bindComponent( lineFormat, "LineFormat" );
        locator.bindComponent( userOutputSelector, "UserOutputSelector" );
        locator.bindComponent( userOutputValue, "UserOutputValue" );
        locator.bindComponent( userOutputValueAll, "UserOutputValueAll" );
        locator.bindComponent( userOutputValueAllMask, "UserOutputValueAllMask" );
        locator.bindComponent( mvLineDebounceTimeRisingEdge, "mvLineDebounceTimeRisingEdge" );
        locator.bindComponent( mvLineDebounceTimeFallingEdge, "mvLineDebounceTimeFallingEdge" );
        locator.bindComponent( mvRTMInputSelector, "mvRTMInputSelector" );
        locator.bindComponent( mvRTMSource, "mvRTMSource" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Selects the physical line (or pin) of the external device connector or the virtual line of the Transport Layer to configure.
    /**
     *  Selects the physical line (or pin) of the external device connector or the virtual line of the Transport Layer to configure.
     *
     *  The following string values might be valid for this feature:
     *  - \b Line0 (Display string: 'Line 0'): Index of the physical line and associated I/O control block to use.
     *  - \b Line1 (Display string: 'Line 1'): Index of the physical line and associated I/O control block to use.
     *  - \b Line2 (Display string: 'Line 2'): Index of the physical line and associated I/O control block to use.
     *  - \b Line#3# (Display string: 'Line #3#'): Index of the physical line and associated I/O control block to use.
     *  - \b LinkTrigger0 (Display string: 'Link Trigger 0'): Index of the virtual line going on the Transport layer to use.
     *  - \b LinkTrigger1 (Display string: 'Link Trigger 1'): Index of the virtual line going on the Transport layer to use.
     *  - \b LinkTrigger2 (Display string: 'Link Trigger 2'): Index of the virtual line going on the Transport layer to use.
     *  - \b LinkTrigger#3# (Display string: 'Link Trigger #3#'): Index of the virtual line going on the Transport layer to use.
     *  - \b CC1 (Display string: 'CC 1'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
     *  - \b CC2 (Display string: 'CC 2'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
     *  - \b CC3 (Display string: 'CC 3'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
     *  - \b CC4 (Display string: 'CC 4'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
     *  - \b CC#5# (Display string: 'CC #5#'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
     *  - \b Line3 (Display string: 'Line 3'): Index of the physical line and associated I/O control block to use.
     *  - \b Line4 (Display string: 'Line 4'): Index of the physical line and associated I/O control block to use.
     *  - \b Line5 (Display string: 'Line 5'): Index of the physical line and associated I/O control block to use.
     *  - \b Line6 (Display string: 'Line 6'): Index of the physical line and associated I/O control block to use.
     *  - \b Line7 (Display string: 'Line 7'): Index of the physical line and associated I/O control block to use.
     *  - \b Line8 (Display string: 'Line 8'): Index of the physical line and associated I/O control block to use.
     *  - \b Line9 (Display string: 'Line 9'): Index of the physical line and associated I/O control block to use.
     *  - \b Line10 (Display string: 'Line 10'): Index of the physical line and associated I/O control block to use.
     *  - \b Line11 (Display string: 'Line 11'): Index of the physical line and associated I/O control block to use.
     *  - \b Line12 (Display string: 'Line 12'): Index of the physical line and associated I/O control block to use.
     *  - \b Line13 (Display string: 'Line 13'): Index of the physical line and associated I/O control block to use.
     *  - \b Line14 (Display string: 'Line 14'): Index of the physical line and associated I/O control block to use.
     *  - \b Line15 (Display string: 'Line 15'): Index of the physical line and associated I/O control block to use.
     *  - \b CC5 (Display string: 'CC 5'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
     *  - \b CC6 (Display string: 'CC 6'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
     *  - \b CC7 (Display string: 'CC 7'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
     *  - \b CC8 (Display string: 'CC 8'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
     *  - \b CC9 (Display string: 'CC 9'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
     *  - \b CC10 (Display string: 'CC 10'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
     *  - \b CC11 (Display string: 'CC 11'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
     *  - \b CC12 (Display string: 'CC 12'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
     *  - \b CC13 (Display string: 'CC 13'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
     *  - \b CC14 (Display string: 'CC 14'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
     *  - \b CC15 (Display string: 'CC 15'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink Product only.
     *  - \b CC16 (Display string: 'Line Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     *
     *  See \b lineStatusAll to find out which line corresponds to which input or output of your device
     *
     */
    PropertyI64 lineSelector;
    /// \brief An enumerated integer property. Controls if the physical Line is used to Input or Output a signal.
    /**
     *  Controls if the physical Line is used to Input or Output a signal.
     *
     *  The following string values might be valid for this feature:
     *  - \b Input (Display string: 'Input'): The selected physical line is used to Input an electrical signal.
     *  - \b Output (Display string: 'Output'): The selected physical line is used to Output an electrical signal.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 lineMode;
    /// \brief A boolean property. Controls the inversion of the signal of the selected input or output Line.
    /**
     *  Controls the inversion of the signal of the selected input or output Line.
     */
    PropertyIBoolean lineInverter;
    /// \brief A boolean property. Returns the current status of the selected input or output Line.
    /**
     *  Returns the current status of the selected input or output Line.
     */
    PropertyIBoolean lineStatus;
    /// \brief An integer property. Returns the current status of all available Line signals at time of polling in a single bitfield.
    /**
     *  Returns the current status of all available Line signals at time of polling in a single bitfield.
     *
     *  The following table documents which bit in this property represents the state of which digital I/O for \b mvBlueLYNX-M7 devices:
     *
     *  <table>
     *  <tr><td class="header">bit</td><td class="header">IO</td></tr>
     *  <tr><td class="indexvalue">0</td><td class="indexvalue">out 0</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">out 1</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">in 0</td></tr>
     *  <tr><td class="indexvalue">3</td><td class="indexvalue">in 1</td></tr>
     *  <tr><td class="indexvalue">4</td><td class="indexvalue">out 2</td></tr>
     *  <tr><td class="indexvalue">5</td><td class="indexvalue">out 3</td></tr>
     *  <tr><td class="indexvalue">6</td><td class="indexvalue">in 2</td></tr>
     *  <tr><td class="indexvalue">7</td><td class="indexvalue">in 3</td></tr>
     *  <tr><td class="indexvalue">8</td><td class="indexvalue">in 4</td></tr>
     *  <tr><td class="indexvalue">9</td><td class="indexvalue">out 4</td></tr>
     *  <tr><td class="indexvalue">10</td><td class="indexvalue">out 5</td></tr>
     *  </table>
     *
     *  The following table documents which bit in this property represents the state of which digital I/O for \b mvBlueCOUGAR-P devices:
     *
     *  <table>
     *  <tr><td class="header">bit</td><td class="header">IO</td></tr>
     *  <tr><td class="indexvalue">0</td><td class="indexvalue">out 0</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">out 1</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">in 0</td></tr>
     *  <tr><td class="indexvalue">3</td><td class="indexvalue">in 1</td></tr>
     *  <tr><td class="indexvalue">4</td><td class="indexvalue">out 2</td></tr>
     *  <tr><td class="indexvalue">5</td><td class="indexvalue">out 3</td></tr>
     *  </table>
     *
     *  The following table documents which bit in this property represents the state of which digital I/O for \b mvBlueCOUGAR-X and \b mvBlueFOX3 devices:
     *
     *  <table>
     *  <tr><td class="header">bit</td><td class="header">IO</td><td class="header">LineSelectorValue</td></tr>
     *  <tr><td class="indexvalue">0</td><td class="indexvalue">out 0</td><td class="indexvalue">Line0</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">out 1</td><td class="indexvalue">Line1</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">out 2</td><td class="indexvalue">Line2</td></tr>
     *  <tr><td class="indexvalue">3</td><td class="indexvalue">out 3</td><td class="indexvalue">Line3</td></tr>
     *  <tr><td class="indexvalue">4</td><td class="indexvalue">in 0</td><td class="indexvalue">Line4</td></tr>
     *  <tr><td class="indexvalue">5</td><td class="indexvalue">in 1</td><td class="indexvalue">Line5</td></tr>
     *  </table>
     *
     *  The following table documents which bit in this property represents the state of which digital I/O for \b mvBlueCOUGAR-X-POE devices:
     *
     *  <table>
     *  <tr><td class="header">bit</td><td class="header">IO</td><td class="header">LineSelectorValue</td></tr>
     *  <tr><td class="indexvalue">0</td><td class="indexvalue">out 0</td><td class="indexvalue">Line0</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">out 1</td><td class="indexvalue">Line1</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">-</td><td class="indexvalue">-</td></tr>
     *  <tr><td class="indexvalue">3</td><td class="indexvalue">-</td><td class="indexvalue">-</td></tr>
     *  <tr><td class="indexvalue">4</td><td class="indexvalue">in 0</td><td class="indexvalue">Line4</td></tr>
     *  <tr><td class="indexvalue">5</td><td class="indexvalue">in 1</td><td class="indexvalue">Line5</td></tr>
     *  </table>
     *
     *  The following table documents which bit in this property represents the state of which digital I/O for \b mvBlueCOUGAR-X-POEI \b mvBlueCOUGAR-XD devices:
     *
     *  <table>
     *  <tr><td class="header">bit</td><td class="header">IO</td><td class="header">LineSelectorValue</td></tr>
     *  <tr><td class="indexvalue">0</td><td class="indexvalue">out 0</td><td class="indexvalue">Line0</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">out 1</td><td class="indexvalue">Line1</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">out 2</td><td class="indexvalue">Line2</td></tr>
     *  <tr><td class="indexvalue">3</td><td class="indexvalue">out 3</td><td class="indexvalue">Line3</td></tr>
     *  <tr><td class="indexvalue">4</td><td class="indexvalue">in 0</td><td class="indexvalue">Line4</td></tr>
     *  <tr><td class="indexvalue">5</td><td class="indexvalue">in 1</td><td class="indexvalue">Line5</td></tr>
     *  <tr><td class="indexvalue">6</td><td class="indexvalue">in 2</td><td class="indexvalue">Line6</td></tr>
     *  <tr><td class="indexvalue">7</td><td class="indexvalue">in 3</td><td class="indexvalue">Line7</td></tr>
     *  </table>
     */
    PropertyI64 lineStatusAll;
    /// \brief An enumerated integer property. Selects which internal acquisition or I/O source signal to output on the selected Line.
    /**
     *  Selects which internal acquisition or I/O source signal to output on the selected Line. LineMode must be Output.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Line output is disabled (Tri-State).
     *  - \b AcquisitionTriggerWait (Display string: 'Acquisition Trigger Wait'): Device is currently waiting for a trigger for the capture of one or many Frames.
     *  - \b AcquisitionActive (Display string: 'Acquisition Active'): Device is currently doing an acquisition of one or many Frames.
     *  - \b FrameTriggerWait (Display string: 'Frame Trigger Wait'): Device is currently waiting for a Frame start trigger.
     *  - \b FrameActive (Display string: 'Frame Active'): Device is currently doing the capture of a Frame.
     *  - \b ExposureActive (Display string: 'Exposure Active'): Device is doing the exposure of a Frame (or Line).
     *  - \b Counter0Active (Display string: 'Counter 0 Active'): The chosen counter is in active state (counting).
     *  - \b Counter1Active (Display string: 'Counter 1 Active'): The chosen counter is in active state (counting).
     *  - \b Counter2Active (Display string: 'Counter 2 Active'): The chosen counter is in active state (counting).
     *  - \b Counter#3#Active (Display string: 'Counter #3# Active'): The chosen counter is in active state (counting).
     *  - \b Timer0Active (Display string: 'Timer 0 Active'): The chosen Timer is in active state.
     *  - \b Timer1Active (Display string: 'Timer 1 Active'): The chosen Timer is in active state.
     *  - \b Timer2Active (Display string: 'Timer 2 Active'): The chosen Timer is in active state.
     *  - \b Timer#3#Active (Display string: 'Timer #3# Active'): The chosen Timer is in active state.
     *  - \b UserOutput0 (Display string: 'User Output 0'): The chosen User Output Bit state as defined by its current UserOutputValue.
     *  - \b UserOutput1 (Display string: 'User Output 1'): The chosen User Output Bit state as defined by its current UserOutputValue.
     *  - \b UserOutput2 (Display string: 'User Output 2'): The chosen User Output Bit state as defined by its current UserOutputValue.
     *  - \b UserOutput#3# (Display string: 'User Output #3#'): The chosen User Output Bit state as defined by its current UserOutputValue.
     *  - \b Stream0TransferActive (Display string: 'Stream 0 Transfer Active'): Transfer on the stream is active.
     *  - \b Stream1TransferActive (Display string: 'Stream 1 Transfer Active'): Transfer on the stream is active.
     *  - \b Stream#2#TransferActive (Display string: 'Stream #2# Transfer Active'): Transfer on the stream is active.
     *  - \b Stream0TransferPaused (Display string: 'Stream 0 Transfer Paused'): Transfer on the stream is paused.
     *  - \b Stream1TransferPaused (Display string: 'Stream 1 Transfer Paused'): Transfer on the stream is paused.
     *  - \b Stream#2#TransferPaused (Display string: 'Stream #2# Transfer Paused'): Transfer on the stream is paused.
     *  - \b Stream0TransferStopping (Display string: 'Stream 0 Transfer Stopping'): Transfer on the stream is stopping.
     *  - \b Stream1TransferStopping (Display string: 'Stream 1 Transfer Stopping'): Transfer on the stream is stopping.
     *  - \b Stream#2#TransferStopping (Display string: 'Stream #2# Transfer Stopping'): Transfer on the stream is stopping.
     *  - \b Stream0TransferStopped (Display string: 'Stream 0 Transfer Stopped'): Transfer on the stream is stopped.
     *  - \b Stream1TransferStopped (Display string: 'Stream 1 Transfer Stopped'): Transfer on the stream is stopped.
     *  - \b Stream#2#TransferStopped (Display string: 'Stream #2# Transfer Stopped'): Transfer on the stream is stopped.
     *  - \b Stream0TransferOverflow (Display string: 'Stream 0 Transfer Overflow'): Transfer on the stream is in overflow.
     *  - \b Stream1TransferOverflow (Display string: 'Stream 1 Transfer Overflow'): Transfer on the stream is in overflow.
     *  - \b Stream#2#TransferOverflow (Display string: 'Stream #2# Transfer Overflow'): Transfer on the stream is in overflow.
     *  - \b mvExposureSensor2Active (Display string: 'Line Source')
     *  - \b UserOutput3 (Display string: 'User Output 3'): The chosen User Output Bit state as defined by its current UserOutputValue.
     *  - \b UserOutput4 (Display string: 'User Output 4'): The chosen User Output Bit state as defined by its current UserOutputValue.
     *  - \b UserOutput5 (Display string: 'User Output 5'): The chosen User Output Bit state as defined by its current UserOutputValue.
     *  - \b UserOutput6 (Display string: 'User Output 6'): The chosen User Output Bit state as defined by its current UserOutputValue.
     *  - \b UserOutput7 (Display string: 'User Output 7'): The chosen User Output Bit state as defined by its current UserOutputValue.
     *  - \b Counter3Active (Display string: 'Counter 3 Active'): The chosen counter is in active state (counting).
     *  - \b Counter4Active (Display string: 'Counter 4 Active'): The chosen counter is in active state (counting).
     *  - \b Counter5Active (Display string: 'Counter 5 Active'): The chosen counter is in active state (counting).
     *  - \b Counter6Active (Display string: 'Counter 6 Active'): The chosen counter is in active state (counting).
     *  - \b Counter7Active (Display string: 'Counter 7 Active'): The chosen counter is in active state (counting).
     *  - \b Counter8Active (Display string: 'Counter 8 Active'): The chosen counter is in active state (counting).
     *  - \b mvReadOutActive (Display string: 'Line Source')
     *  - \b LineActive (Display string: 'Line Source')
     *  - \b mvExposureAndAcquisitionActive (Display string: 'Line Source')
     *  - \b mvTemperatureOutOfRange (Display string: 'Line Source')
     *  - \b mvLogicGateOR1Output (Display string: 'Line Source')
     *  - \b mvLogicGateOR2Output (Display string: 'Line Source')
     *  - \b mvLogicGateOR3Output (Display string: 'Line Source')
     *  - \b mvLogicGateOR4Output (Display string: 'Line Source')
     *  - \b mvExposureActive (Display string: 'Line Source')
     *  - \b mvRTMOutput0 (Display string: 'Line Source')
     *  - \b mvRTMOutput1 (Display string: 'Line Source')
     *  - \b mvRTMOutput2 (Display string: 'Line Source')
     *  - \b mvRTMOutput3 (Display string: 'Line Source')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 lineSource;
    /// \brief An enumerated integer property. Controls the current electrical format of the selected physical input or output Line.
    /**
     *  Controls the current electrical format of the selected physical input or output Line.
     *
     *  The following string values might be valid for this feature:
     *  - \b NoConnect (Display string: 'No Connect'): The Line is not connected.
     *  - \b TriState (Display string: 'Tri State'): The Line is currently in Tri-State mode (Not driven).
     *  - \b TTL (Display string: 'TTL'): The Line is currently accepting or sending TTL level signals.
     *  - \b LVDS (Display string: 'LVDS'): The Line is currently accepting or sending LVDS level signals.
     *  - \b RS422 (Display string: 'RS 422'): The Line is currently accepting or sending RS422 level signals.
     *  - \b OptoCoupled (Display string: 'Opto Coupled'): The Line is opto-coupled.
     *  - \b OpenDrain (Display string: 'Open Drain'): The Line is Open Drain (or Open Collector).
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 lineFormat;
    /// \brief An enumerated integer property. Selects which bit of the User Output register will be set by UserOutputValue.
    /**
     *  Selects which bit of the User Output register will be set by UserOutputValue.
     *
     *  The following string values might be valid for this feature:
     *  - \b UserOutput0 (Display string: 'User Output 0'): Selects the bit 0 of the User Output register.
     *  - \b UserOutput1 (Display string: 'User Output 1'): Selects the bit 1 of the User Output register.
     *  - \b UserOutput2 (Display string: 'User Output 2'): Selects the bit 2 of the User Output register.
     *  - \b UserOutput#3# (Display string: 'User Output #3#'): Selects the bit #3# of the User Output register.
     *  - \b UserOutput3 (Display string: 'User Output 3'): Selects the bit 3 of the User Output register.
     *  - \b UserOutput4 (Display string: 'User Output 4'): Selects the bit 4 of the User Output register.
     *  - \b UserOutput5 (Display string: 'User Output 5'): Selects the bit 5 of the User Output register.
     *  - \b UserOutput6 (Display string: 'User Output 6'): Selects the bit 6 of the User Output register.
     *  - \b UserOutput7 (Display string: 'User Output 7'): Selects the bit 7 of the User Output register.
     *  - \b UserOutput8 (Display string: 'User Output 8'): Selects the bit 8 of the User Output register.
     *  - \b UserOutput9 (Display string: 'User Output 9'): Selects the bit 9 of the User Output register.
     *  - \b UserOutput10 (Display string: 'User Output 10'): Selects the bit 10 of the User Output register.
     *  - \b UserOutput11 (Display string: 'User Output 11'): Selects the bit 11 of the User Output register.
     *  - \b UserOutput12 (Display string: 'User Output 12'): Selects the bit 12 of the User Output register.
     *  - \b UserOutput13 (Display string: 'User Output 13'): Selects the bit 13 of the User Output register.
     *  - \b UserOutput14 (Display string: 'User Output 14'): Selects the bit 14 of the User Output register.
     *  - \b UserOutput15 (Display string: 'User Output 15'): Selects the bit 15 of the User Output register.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 userOutputSelector;
    /// \brief A boolean property. Sets the value of the bit selected by UserOutputSelector.
    /**
     *  Sets the value of the bit selected by UserOutputSelector.
     */
    PropertyIBoolean userOutputValue;
    /// \brief An integer property. Sets the value of all the bits of the User Output register.
    /**
     *  Sets the value of all the bits of the User Output register. It is subject to the UserOutputValueAllMask.
     */
    PropertyI64 userOutputValueAll;
    /// \brief An integer property. Sets the write mask to apply to the value specified by UserOutputValueAll before writing it in the User Output register.
    /**
     *  Sets the write mask to apply to the value specified by UserOutputValueAll before writing it in the User Output register. If the UserOutputValueAllMask feature is present, setting the user Output register using UserOutputValueAll will only change the bits that have a corresponding bit in the mask set to one.
     */
    PropertyI64 userOutputValueAllMask;
    /// \brief An integer property. Sets the debounce time in micro seconds for low to high transitions.
    /**
     *  Sets the debounce time in micro seconds for low to high transitions.
     */
    PropertyI64 mvLineDebounceTimeRisingEdge;
    /// \brief An integer property. Sets the debounce time in micro seconds for high to low transitions.
    /**
     *  Sets the debounce time in micro seconds for high to low transitions.
     */
    PropertyI64 mvLineDebounceTimeFallingEdge;
    /// \brief An enumerated integer property. Selects which RTM input to configure.
    /**
     *  Selects which RTM input to configure.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvRTMInput0 (Display string: 'mv RTM Input Selector')
     *  - \b mvRTMInput1 (Display string: 'mv RTM Input Selector')
     *  - \b mvRTMInput2 (Display string: 'mv RTM Input Selector')
     *  - \b mvRTMInput3 (Display string: 'mv RTM Input Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvRTMInputSelector;
    /// \brief An enumerated integer property. Selects which signal to connect to the selected RTM input.
    /**
     *  Selects which signal to connect to the selected RTM input.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'mv RTM Source')
     *  - \b Line4 (Display string: 'mv RTM Source')
     *  - \b Line5 (Display string: 'mv RTM Source')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvRTMSource;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains the Counter and Timer control features.
/**
 *  A category that contains the Counter and Timer control features.
 */
class CounterAndTimerControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::CounterAndTimerControl</b> object.
    explicit CounterAndTimerControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        counterSelector(),
        counterEventSource(),
        counterEventActivation(),
        counterResetSource(),
        counterResetActivation(),
        counterReset(),
        counterValue(),
        counterValueAtReset(),
        counterDuration(),
        counterStatus(),
        counterTriggerSource(),
        counterTriggerActivation(),
        timerSelector(),
        timerDuration(),
        timerDurationRaw(),
        timerDelay(),
        timerDelayRaw(),
        timerReset(),
        timerValue(),
        timerValueRaw(),
        timerStatus(),
        timerTriggerSource(),
        timerTriggerActivation()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( counterSelector, "CounterSelector" );
        locator.bindComponent( counterEventSource, "CounterEventSource" );
        locator.bindComponent( counterEventActivation, "CounterEventActivation" );
        locator.bindComponent( counterResetSource, "CounterResetSource" );
        locator.bindComponent( counterResetActivation, "CounterResetActivation" );
        locator.bindComponent( counterReset, "CounterReset@i" );
        locator.bindComponent( counterValue, "CounterValue" );
        locator.bindComponent( counterValueAtReset, "CounterValueAtReset" );
        locator.bindComponent( counterDuration, "CounterDuration" );
        locator.bindComponent( counterStatus, "CounterStatus" );
        locator.bindComponent( counterTriggerSource, "CounterTriggerSource" );
        locator.bindComponent( counterTriggerActivation, "CounterTriggerActivation" );
        locator.bindComponent( timerSelector, "TimerSelector" );
        locator.bindComponent( timerDuration, "TimerDuration" );
        if( !timerDuration.isValid() )
        {
            locator.bindComponent( timerDuration, "TimerDurationAbs" );
        }
        locator.bindComponent( timerDurationRaw, "TimerDurationRaw" );
        locator.bindComponent( timerDelay, "TimerDelay" );
        if( !timerDelay.isValid() )
        {
            locator.bindComponent( timerDelay, "TimerDelayAbs" );
        }
        locator.bindComponent( timerDelayRaw, "TimerDelayRaw" );
        locator.bindComponent( timerReset, "TimerReset@i" );
        locator.bindComponent( timerValue, "TimerValue" );
        if( !timerValue.isValid() )
        {
            locator.bindComponent( timerValue, "TimerValueAbs" );
        }
        locator.bindComponent( timerValueRaw, "TimerValueRaw" );
        locator.bindComponent( timerStatus, "TimerStatus" );
        locator.bindComponent( timerTriggerSource, "TimerTriggerSource" );
        locator.bindComponent( timerTriggerActivation, "TimerTriggerActivation" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Selects which Counter to configure.
    /**
     *  Selects which Counter to configure.
     *
     *  The following string values might be valid for this feature:
     *  - \b Counter0 (Display string: 'Counter 0'): Selects the counter 0.
     *  - \b Counter1 (Display string: 'Counter 1'): Selects the counter 1.
     *  - \b Counter2 (Display string: 'Counter 2'): Selects the counter 2.
     *  - \b Counter#3# (Display string: 'Counter #3#'): Selects the counter #3#.
     *  - \b Counter3 (Display string: 'Counter 3'): Selects the counter 3.
     *  - \b Counter4 (Display string: 'Counter 4'): Selects the counter 4.
     *  - \b Counter5 (Display string: 'Counter 5'): Selects the counter 5.
     *  - \b Counter6 (Display string: 'Counter 6'): Selects the counter 6.
     *  - \b Counter7 (Display string: 'Counter 7'): Selects the counter 7.
     *  - \b Counter8 (Display string: 'Counter 8'): Selects the counter 8.
     *  - \b Counter9 (Display string: 'Counter 9'): Selects the counter 9.
     *  - \b Counter10 (Display string: 'Counter 10'): Selects the counter 10.
     *  - \b Counter11 (Display string: 'Counter 11'): Selects the counter 11.
     *  - \b Counter12 (Display string: 'Counter 12'): Selects the counter 12.
     *  - \b Counter13 (Display string: 'Counter 13'): Selects the counter 13.
     *  - \b Counter14 (Display string: 'Counter 14'): Selects the counter 14.
     *  - \b Counter15 (Display string: 'Counter 15'): Selects the counter 15.
     *  - \b Counter16 (Display string: 'Counter Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 counterSelector;
    /// \brief An enumerated integer property. Select the events that will be the source to increment the Counter.
    /**
     *  Select the events that will be the source to increment the Counter.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Counter is stopped.
     *  - \b AcquisitionTrigger (Display string: 'Acquisition Trigger'): Counts the number of Acquisition Trigger.
     *  - \b AcquisitionStart (Display string: 'Acquisition Start'): Counts the number of Acquisition Start.
     *  - \b AcquisitionEnd (Display string: 'Acquisition End'): Counts the number of Acquisition End.
     *  - \b FrameTrigger (Display string: 'Frame Trigger'): Counts the number of Frame Start Trigger.
     *  - \b FrameStart (Display string: 'Frame Start'): Counts the number of Frame Start.
     *  - \b FrameEnd (Display string: 'Frame End'): Counts the number of Frame End.
     *  - \b FrameBurstStart (Display string: 'Frame Burst Start'): Counts the number of Frame Burst Start.
     *  - \b FrameBurstEnd (Display string: 'Frame Burst End'): Counts the number of Frame Burst End.
     *  - \b LineTrigger (Display string: 'Line Trigger'): Counts the number of Line Start Trigger.
     *  - \b LineStart (Display string: 'Line Start'): Counts the number of Line Start.
     *  - \b LineEnd (Display string: 'Line End'): Counts the number of Line End.
     *  - \b ExposureStart (Display string: 'Exposure Start'): Counts the number of Exposure Start.
     *  - \b ExposureEnd (Display string: 'Exposure End'): Counts the number of Exposure End.
     *  - \b Line0 (Display string: 'Line 0'): Counts the number of transitions on the chosen I/O Line.
     *  - \b Line1 (Display string: 'Line 1'): Counts the number of transitions on the chosen I/O Line.
     *  - \b Line2 (Display string: 'Line 2'): Counts the number of transitions on the chosen I/O Line.
     *  - \b Line#3# (Display string: 'Line #3#'): Counts the number of transitions on the chosen I/O Line.
     *  - \b Counter0Start (Display string: 'Counter 0 Start'): Counts the number of Counter Start.
     *  - \b Counter1Start (Display string: 'Counter 1 Start'): Counts the number of Counter Start.
     *  - \b Counter2Start (Display string: 'Counter 2 Start'): Counts the number of Counter Start.
     *  - \b Counter#3#Start (Display string: 'Counter #3# Start'): Counts the number of Counter Start.
     *  - \b Counter0End (Display string: 'Counter 0 End'): Counts the number of Counter End.
     *  - \b Counter1End (Display string: 'Counter 1 End'): Counts the number of Counter End.
     *  - \b Counter2End (Display string: 'Counter 2 End'): Counts the number of Counter End.
     *  - \b Counter#3#End (Display string: 'Counter #3# End'): Counts the number of Counter End.
     *  - \b Timer0Start (Display string: 'Timer 0 Start'): Counts the number of Timer Start pulses generated.
     *  - \b Timer1Start (Display string: 'Timer 1 Start'): Counts the number of Timer Start pulses generated.
     *  - \b Timer2Start (Display string: 'Timer 2 Start'): Counts the number of Timer Start pulses generated.
     *  - \b Timer#3#Start (Display string: 'Timer #3# Start'): Counts the number of Timer Start pulses generated.
     *  - \b Timer0End (Display string: 'Timer 0 End'): Counts the number of Timer End pulses generated.
     *  - \b Timer1End (Display string: 'Timer 1 End'): Counts the number of Timer End pulses generated.
     *  - \b Timer2End (Display string: 'Timer 2 End'): Counts the number of Timer End pulses generated.
     *  - \b Timer#3#End (Display string: 'Timer #3# End'): Counts the number of Timer End pulses generated.
     *  - \b Encoder0 (Display string: 'Encoder 0'): Starts with the reception of the Encoder output signal.
     *  - \b Encoder1 (Display string: 'Encoder 1'): Starts with the reception of the Encoder output signal.
     *  - \b Encoder2 (Display string: 'Encoder 2'): Starts with the reception of the Encoder output signal.
     *  - \b Encoder#3# (Display string: 'Encoder #3#'): Starts with the reception of the Encoder output signal.
     *  - \b TimestampTick (Display string: 'Timestamp Tick'): Counts the number of clock ticks of the Timestamp clock. Can be used to create a programmable timer.
     *  - \b SoftwareSignal0 (Display string: 'Software Signal 0'): Counts the number of Software Signal.
     *  - \b SoftwareSignal1 (Display string: 'Software Signal 1'): Counts the number of Software Signal.
     *  - \b SoftwareSignal2 (Display string: 'Software Signal 2'): Counts the number of Software Signal.
     *  - \b SoftwareSignal#3# (Display string: 'Software Signal #3#'): Counts the number of Software Signal.
     *  - \b Action0 (Display string: 'Action 0'): Counts the number of assertions of the chosen action signal.
     *  - \b Action1 (Display string: 'Action 1'): Counts the number of assertions of the chosen action signal.
     *  - \b Action2 (Display string: 'Action 2'): Counts the number of assertions of the chosen action signal.
     *  - \b Action#3# (Display string: 'Action #3#'): Counts the number of assertions of the chosen action signal.
     *  - \b LinkTrigger0 (Display string: 'Link Trigger 0'): Counts the number of  Link Trigger.
     *  - \b LinkTrigger1 (Display string: 'Link Trigger 1'): Counts the number of  Link Trigger.
     *  - \b LinkTrigger2 (Display string: 'Link Trigger 2'): Counts the number of  Link Trigger.
     *  - \b LinkTrigger#3# (Display string: 'Link Trigger #3#'): Counts the number of  Link Trigger.
     *  - \b Line3 (Display string: 'Line 3'): Counts the number of transitions on the chosen I/O Line.
     *  - \b Line4 (Display string: 'Line 4'): Counts the number of transitions on the chosen I/O Line.
     *  - \b Line5 (Display string: 'Line 5'): Counts the number of transitions on the chosen I/O Line.
     *  - \b Line6 (Display string: 'Line 6'): Counts the number of transitions on the chosen I/O Line.
     *  - \b Line7 (Display string: 'Line 7'): Counts the number of transitions on the chosen I/O Line.
     *  - \b Line8 (Display string: 'Line 8'): Counts the number of transitions on the chosen I/O Line.
     *  - \b Line9 (Display string: 'Line 9'): Counts the number of transitions on the chosen I/O Line.
     *  - \b Line10 (Display string: 'Line 10'): Counts the number of transitions on the chosen I/O Line.
     *  - \b Line11 (Display string: 'Line 11'): Counts the number of transitions on the chosen I/O Line.
     *  - \b Line12 (Display string: 'Line 12'): Counts the number of transitions on the chosen I/O Line.
     *  - \b Line13 (Display string: 'Line 13'): Counts the number of transitions on the chosen I/O Line.
     *  - \b Line14 (Display string: 'Line 14'): Counts the number of transitions on the chosen I/O Line.
     *  - \b Line15 (Display string: 'Line 15'): Counts the number of transitions on the chosen I/O Line.
     *  - \b Counter3End (Display string: 'Counter 3 End'): Counts the number of Counter End.
     *  - \b Counter4End (Display string: 'Counter 4 End'): Counts the number of Counter End.
     *  - \b Counter5End (Display string: 'Counter 5 End'): Counts the number of Counter End.
     *  - \b Counter6End (Display string: 'Counter 6 End'): Counts the number of Counter End.
     *  - \b Counter7End (Display string: 'Counter 7 End'): Counts the number of Counter End.
     *  - \b Counter8End (Display string: 'Counter 8 End'): Counts the number of Counter End.
     *  - \b Counter9End (Display string: 'Counter 9 End'): Counts the number of Counter End.
     *  - \b Counter10End (Display string: 'Counter 10 End'): Counts the number of Counter End.
     *  - \b Counter11End (Display string: 'Counter 11 End'): Counts the number of Counter End.
     *  - \b Counter12End (Display string: 'Counter 12 End'): Counts the number of Counter End.
     *  - \b Counter13End (Display string: 'Counter 13 End'): Counts the number of Counter End.
     *  - \b Counter14End (Display string: 'Counter 14 End'): Counts the number of Counter End.
     *  - \b Counter15End (Display string: 'Counter 15 End'): Counts the number of Counter End.
     *  - \b Counter16End (Display string: 'Counter Event Source')
     *  - \b Timer3End (Display string: 'Timer 3 End'): Counts the number of Timer End pulses generated.
     *  - \b Timer4End (Display string: 'Timer 4 End'): Counts the number of Timer End pulses generated.
     *  - \b Timer5End (Display string: 'Timer 5 End'): Counts the number of Timer End pulses generated.
     *  - \b Timer6End (Display string: 'Timer 6 End'): Counts the number of Timer End pulses generated.
     *  - \b Timer7End (Display string: 'Timer 7 End'): Counts the number of Timer End pulses generated.
     *  - \b Timer8End (Display string: 'Timer 8 End'): Counts the number of Timer End pulses generated.
     *  - \b Timer9End (Display string: 'Timer 9 End'): Counts the number of Timer End pulses generated.
     *  - \b Timer10End (Display string: 'Timer 10 End'): Counts the number of Timer End pulses generated.
     *  - \b Timer11End (Display string: 'Timer 11 End'): Counts the number of Timer End pulses generated.
     *  - \b Timer12End (Display string: 'Timer 12 End'): Counts the number of Timer End pulses generated.
     *  - \b Timer13End (Display string: 'Timer 13 End'): Counts the number of Timer End pulses generated.
     *  - \b Timer14End (Display string: 'Timer 14 End'): Counts the number of Timer End pulses generated.
     *  - \b Timer15End (Display string: 'Timer 15 End'): Counts the number of Timer End pulses generated.
     *  - \b Timer16End (Display string: 'Counter Event Source')
     *  - \b Action3 (Display string: 'Action 3'): Counts the number of assertions of the chosen action signal.
     *  - \b Action4 (Display string: 'Action 4'): Counts the number of assertions of the chosen action signal.
     *  - \b Action5 (Display string: 'Action 5'): Counts the number of assertions of the chosen action signal.
     *  - \b Action6 (Display string: 'Action 6'): Counts the number of assertions of the chosen action signal.
     *  - \b Action7 (Display string: 'Action 7'): Counts the number of assertions of the chosen action signal.
     *  - \b Action8 (Display string: 'Action 8'): Counts the number of assertions of the chosen action signal.
     *  - \b Action9 (Display string: 'Action 9'): Counts the number of assertions of the chosen action signal.
     *  - \b Action10 (Display string: 'Action 10'): Counts the number of assertions of the chosen action signal.
     *  - \b Action11 (Display string: 'Action 11'): Counts the number of assertions of the chosen action signal.
     *  - \b Action12 (Display string: 'Action 12'): Counts the number of assertions of the chosen action signal.
     *  - \b Action13 (Display string: 'Action 13'): Counts the number of assertions of the chosen action signal.
     *  - \b Action14 (Display string: 'Action 14'): Counts the number of assertions of the chosen action signal.
     *  - \b Action15 (Display string: 'Action 15'): Counts the number of assertions of the chosen action signal.
     *  - \b Action16 (Display string: 'Counter Event Source')
     *  - \b Line0RisingEdge (Display string: 'Counter Event Source')
     *  - \b Line1RisingEdge (Display string: 'Counter Event Source')
     *  - \b Line2RisingEdge (Display string: 'Counter Event Source')
     *  - \b Line3RisingEdge (Display string: 'Counter Event Source')
     *  - \b Line4RisingEdge (Display string: 'Counter Event Source')
     *  - \b Line5RisingEdge (Display string: 'Counter Event Source')
     *  - \b Line6RisingEdge (Display string: 'Counter Event Source')
     *  - \b Line7RisingEdge (Display string: 'Counter Event Source')
     *  - \b Line8RisingEdge (Display string: 'Counter Event Source')
     *  - \b Line9RisingEdge (Display string: 'Counter Event Source')
     *  - \b Line10RisingEdge (Display string: 'Counter Event Source')
     *  - \b Line11RisingEdge (Display string: 'Counter Event Source')
     *  - \b Line12RisingEdge (Display string: 'Counter Event Source')
     *  - \b Line13RisingEdge (Display string: 'Counter Event Source')
     *  - \b Line14RisingEdge (Display string: 'Counter Event Source')
     *  - \b Line15RisingEdge (Display string: 'Counter Event Source')
     *  - \b mvTemperatureOutOfRange (Display string: 'Counter Event Source')
     *  - \b mvLogicGateOR1Output (Display string: 'Counter Event Source')
     *  - \b mvLogicGateOR2Output (Display string: 'Counter Event Source')
     *  - \b mvLogicGateOR3Output (Display string: 'Counter Event Source')
     *  - \b mvLogicGateOR4Output (Display string: 'Counter Event Source')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 counterEventSource;
    /// \brief An enumerated integer property. Selects the Activation mode Event Source signal.
    /**
     *  Selects the Activation mode Event Source signal.
     *
     *  The following string values might be valid for this feature:
     *  - \b RisingEdge (Display string: 'Rising Edge'): Counts on the Rising Edge of the signal.
     *  - \b FallingEdge (Display string: 'Falling Edge'): Counts on the Falling Edge of the signal.
     *  - \b AnyEdge (Display string: 'Any Edge'): Counts on the Falling or rising Edge of the selected signal.
     *  - \b LevelHigh (Display string: 'Counter Event Activation')
     *  - \b LevelLow (Display string: 'Counter Event Activation')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 counterEventActivation;
    /// \brief An enumerated integer property. Selects the signals that will be the source to reset the Counter.
    /**
     *  Selects the signals that will be the source to reset the Counter.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Disable the Counter Reset trigger.
     *  - \b CounterTrigger (Display string: 'Counter Trigger'): Resets with the reception of a trigger on the CounterTriggerSource.
     *  - \b AcquisitionTrigger (Display string: 'Acquisition Trigger'): Resets with the reception of the Acquisition Trigger.
     *  - \b AcquisitionStart (Display string: 'Acquisition Start'): Resets with the reception of the Acquisition Start.
     *  - \b AcquisitionEnd (Display string: 'Acquisition End'): Resets with the reception of the Acquisition End.
     *  - \b FrameTrigger (Display string: 'Frame Trigger'): Resets with the reception of the Frame Start Trigger.
     *  - \b FrameStart (Display string: 'Frame Start'): Resets with the reception of the Frame Start.
     *  - \b FrameEnd (Display string: 'Frame End'): Resets with the reception of the Frame End.
     *  - \b LineTrigger (Display string: 'Line Trigger'): Resets with the reception of the Line Start Trigger.
     *  - \b LineStart (Display string: 'Line Start'): Resets with the reception of the Line Start.
     *  - \b LineEnd (Display string: 'Line End'): Resets with the reception of the Line End.
     *  - \b ExposureStart (Display string: 'Exposure Start'): Resets with the reception of the Exposure Start.
     *  - \b ExposureEnd (Display string: 'Exposure End'): Resets with the reception of the Exposure End.
     *  - \b Line0 (Display string: 'Line 0'): Resets by the chosen I/O Line.
     *  - \b Line1 (Display string: 'Line 1'): Resets by the chosen I/O Line.
     *  - \b Line2 (Display string: 'Line 2'): Resets by the chosen I/O Line.
     *  - \b Line#3# (Display string: 'Line #3#'): Resets by the chosen I/O Line.
     *  - \b Counter0Start (Display string: 'Counter 0 Start'): Resets with the reception of the Counter Start.
     *  - \b Counter1Start (Display string: 'Counter 1 Start'): Resets with the reception of the Counter Start.
     *  - \b Counter2Start (Display string: 'Counter 2 Start'): Resets with the reception of the Counter Start.
     *  - \b Counter#3#Start (Display string: 'Counter #3# Start'): Resets with the reception of the Counter Start.
     *  - \b Counter0End (Display string: 'Counter 0 End'): Resets with the reception of the Counter End.
     *  - \b Counter1End (Display string: 'Counter 1 End'): Resets with the reception of the Counter End.
     *  - \b Counter2End (Display string: 'Counter 2 End'): Resets with the reception of the Counter End.
     *  - \b Counter#3#End (Display string: 'Counter #3# End'): Resets with the reception of the Counter End.
     *  - \b Timer0Start (Display string: 'Timer 0 Start'): Resets with the reception of the Timer Start.
     *  - \b Timer1Start (Display string: 'Timer 1 Start'): Resets with the reception of the Timer Start.
     *  - \b Timer2Start (Display string: 'Timer 2 Start'): Resets with the reception of the Timer Start.
     *  - \b Timer#3#Start (Display string: 'Timer #3# Start'): Resets with the reception of the Timer Start.
     *  - \b Timer0End (Display string: 'Timer 0 End'): Resets with the reception of the Timer End.
     *  - \b Timer1End (Display string: 'Timer 1 End'): Resets with the reception of the Timer End.
     *  - \b Timer2End (Display string: 'Timer 2 End'): Resets with the reception of the Timer End.
     *  - \b Timer#3#End (Display string: 'Timer #3# End'): Resets with the reception of the Timer End.
     *  - \b Encoder0 (Display string: 'Encoder 0'): Starts with the reception of the Encoder output signal.
     *  - \b Encoder1 (Display string: 'Encoder 1'): Starts with the reception of the Encoder output signal.
     *  - \b Encoder2 (Display string: 'Encoder 2'): Starts with the reception of the Encoder output signal.
     *  - \b Encoder#3# (Display string: 'Encoder #3#'): Starts with the reception of the Encoder output signal.
     *  - \b UserOutput0 (Display string: 'User Output 0'): Resets by the chosen User Output bit.
     *  - \b UserOutput1 (Display string: 'User Output 1'): Resets by the chosen User Output bit.
     *  - \b UserOutput2 (Display string: 'User Output 2'): Resets by the chosen User Output bit.
     *  - \b UserOutput#3# (Display string: 'User Output #3#'): Resets by the chosen User Output bit.
     *  - \b SoftwareSignal0 (Display string: 'Software Signal 0'): Resets on the reception of the Software Signal.
     *  - \b SoftwareSignal1 (Display string: 'Software Signal 1'): Resets on the reception of the Software Signal.
     *  - \b SoftwareSignal2 (Display string: 'Software Signal 2'): Resets on the reception of the Software Signal.
     *  - \b SoftwareSignal#3# (Display string: 'Software Signal #3#'): Resets on the reception of the Software Signal.
     *  - \b Action0 (Display string: 'Action 0'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action1 (Display string: 'Action 1'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action2 (Display string: 'Action 2'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action#3# (Display string: 'Action #3#'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b LinkTrigger0 (Display string: 'Link Trigger 0'): Resets on the reception of the chosen Link Trigger (received from the transport layer).
     *  - \b LinkTrigger1 (Display string: 'Link Trigger 1'): Resets on the reception of the chosen Link Trigger (received from the transport layer).
     *  - \b LinkTrigger2 (Display string: 'Link Trigger 2'): Resets on the reception of the chosen Link Trigger (received from the transport layer).
     *  - \b LinkTrigger#3# (Display string: 'Link Trigger #3#'): Resets on the reception of the chosen Link Trigger (received from the transport layer).
     *  - \b Line3 (Display string: 'Line 3'): Resets by the chosen I/O Line.
     *  - \b Line4 (Display string: 'Line 4'): Resets by the chosen I/O Line.
     *  - \b Line5 (Display string: 'Line 5'): Resets by the chosen I/O Line.
     *  - \b Line6 (Display string: 'Line 6'): Resets by the chosen I/O Line.
     *  - \b Line7 (Display string: 'Line 7'): Resets by the chosen I/O Line.
     *  - \b Line8 (Display string: 'Line 8'): Resets by the chosen I/O Line.
     *  - \b Line9 (Display string: 'Line 9'): Resets by the chosen I/O Line.
     *  - \b Line10 (Display string: 'Line 10'): Resets by the chosen I/O Line.
     *  - \b Line11 (Display string: 'Line 11'): Resets by the chosen I/O Line.
     *  - \b Line12 (Display string: 'Line 12'): Resets by the chosen I/O Line.
     *  - \b Line13 (Display string: 'Line 13'): Resets by the chosen I/O Line.
     *  - \b Line14 (Display string: 'Line 14'): Resets by the chosen I/O Line.
     *  - \b Line15 (Display string: 'Line 15'): Resets by the chosen I/O Line.
     *  - \b Counter3End (Display string: 'Counter 3 End'): Resets with the reception of the Counter End.
     *  - \b Counter4End (Display string: 'Counter 4 End'): Resets with the reception of the Counter End.
     *  - \b Counter5End (Display string: 'Counter 5 End'): Resets with the reception of the Counter End.
     *  - \b Counter6End (Display string: 'Counter 6 End'): Resets with the reception of the Counter End.
     *  - \b Counter7End (Display string: 'Counter 7 End'): Resets with the reception of the Counter End.
     *  - \b Counter8End (Display string: 'Counter 8 End'): Resets with the reception of the Counter End.
     *  - \b Counter9End (Display string: 'Counter 9 End'): Resets with the reception of the Counter End.
     *  - \b Counter10End (Display string: 'Counter 10 End'): Resets with the reception of the Counter End.
     *  - \b Counter11End (Display string: 'Counter 11 End'): Resets with the reception of the Counter End.
     *  - \b Counter12End (Display string: 'Counter 12 End'): Resets with the reception of the Counter End.
     *  - \b Counter13End (Display string: 'Counter 13 End'): Resets with the reception of the Counter End.
     *  - \b Counter14End (Display string: 'Counter 14 End'): Resets with the reception of the Counter End.
     *  - \b Counter15End (Display string: 'Counter 15 End'): Resets with the reception of the Counter End.
     *  - \b Counter16End (Display string: 'Counter Reset Source')
     *  - \b Timer3End (Display string: 'Timer 3 End'): Resets with the reception of the Timer End.
     *  - \b Timer4End (Display string: 'Timer 4 End'): Resets with the reception of the Timer End.
     *  - \b Timer5End (Display string: 'Timer 5 End'): Resets with the reception of the Timer End.
     *  - \b Timer6End (Display string: 'Timer 6 End'): Resets with the reception of the Timer End.
     *  - \b Timer7End (Display string: 'Timer 7 End'): Resets with the reception of the Timer End.
     *  - \b Timer8End (Display string: 'Timer 8 End'): Resets with the reception of the Timer End.
     *  - \b Timer9End (Display string: 'Timer 9 End'): Resets with the reception of the Timer End.
     *  - \b Timer10End (Display string: 'Timer 10 End'): Resets with the reception of the Timer End.
     *  - \b Timer11End (Display string: 'Timer 11 End'): Resets with the reception of the Timer End.
     *  - \b Timer12End (Display string: 'Timer 12 End'): Resets with the reception of the Timer End.
     *  - \b Timer13End (Display string: 'Timer 13 End'): Resets with the reception of the Timer End.
     *  - \b Timer14End (Display string: 'Timer 14 End'): Resets with the reception of the Timer End.
     *  - \b Timer15End (Display string: 'Timer 15 End'): Resets with the reception of the Timer End.
     *  - \b Timer16End (Display string: 'Counter Reset Source')
     *  - \b UserOutput3 (Display string: 'User Output 3'): Resets by the chosen User Output bit.
     *  - \b UserOutput4 (Display string: 'User Output 4'): Resets by the chosen User Output bit.
     *  - \b UserOutput5 (Display string: 'User Output 5'): Resets by the chosen User Output bit.
     *  - \b UserOutput6 (Display string: 'User Output 6'): Resets by the chosen User Output bit.
     *  - \b UserOutput7 (Display string: 'User Output 7'): Resets by the chosen User Output bit.
     *  - \b UserOutput8 (Display string: 'User Output 8'): Resets by the chosen User Output bit.
     *  - \b UserOutput9 (Display string: 'User Output 9'): Resets by the chosen User Output bit.
     *  - \b UserOutput10 (Display string: 'User Output 10'): Resets by the chosen User Output bit.
     *  - \b UserOutput11 (Display string: 'User Output 11'): Resets by the chosen User Output bit.
     *  - \b UserOutput12 (Display string: 'User Output 12'): Resets by the chosen User Output bit.
     *  - \b UserOutput13 (Display string: 'User Output 13'): Resets by the chosen User Output bit.
     *  - \b UserOutput14 (Display string: 'User Output 14'): Resets by the chosen User Output bit.
     *  - \b UserOutput15 (Display string: 'User Output 15'): Resets by the chosen User Output bit.
     *  - \b Action3 (Display string: 'Action 3'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action4 (Display string: 'Action 4'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action5 (Display string: 'Action 5'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action6 (Display string: 'Action 6'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action7 (Display string: 'Action 7'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action8 (Display string: 'Action 8'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action9 (Display string: 'Action 9'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action10 (Display string: 'Action 10'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action11 (Display string: 'Action 11'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action12 (Display string: 'Action 12'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action13 (Display string: 'Action 13'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action14 (Display string: 'Action 14'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action15 (Display string: 'Action 15'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action16 (Display string: 'Counter Reset Source')
     *  - \b mvTemperatureOutOfRange (Display string: 'Counter Reset Source')
     *  - \b mvLogicGateOR1Output (Display string: 'Counter Reset Source')
     *  - \b mvLogicGateOR2Output (Display string: 'Counter Reset Source')
     *  - \b mvLogicGateOR3Output (Display string: 'Counter Reset Source')
     *  - \b mvLogicGateOR4Output (Display string: 'Counter Reset Source')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 counterResetSource;
    /// \brief An enumerated integer property. Selects the Activation mode of the Counter Reset Source signal.
    /**
     *  Selects the Activation mode of the Counter Reset Source signal.
     *
     *  The following string values might be valid for this feature:
     *  - \b RisingEdge (Display string: 'Rising Edge'): Resets the counter on the Rising Edge of the signal.
     *  - \b FallingEdge (Display string: 'Falling Edge'): Resets the counter on the Falling Edge of the signal.
     *  - \b AnyEdge (Display string: 'Any Edge'): Resets the counter on the Falling or rising Edge of the selected signal.
     *  - \b LevelHigh (Display string: 'Level High'): Resets the counter as long as the selected signal level is High.
     *  - \b LevelLow (Display string: 'Level Low'): Resets the counter as long as the selected signal level is Low.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 counterResetActivation;
    /// \brief A method object. Does a software reset of the selected Counter and starts it.
    /**
     *  Does a software reset of the selected Counter and starts it. The counter starts counting events immediately after the reset unless a Counter trigger is active. CounterReset can be used to reset the Counter independently from the CounterResetSource. To disable the counter temporarily, set CounterEventSource to Off.
     */
    Method counterReset;
    /// \brief An integer property. Reads or writes the current value of the selected Counter.
    /**
     *  Reads or writes the current value of the selected Counter.
     */
    PropertyI64 counterValue;
    /// \brief An integer property. Reads the value of the selected Counter when it was reset by a trigger or by an explicit CounterReset command.
    /**
     *  Reads the value of the selected Counter when it was reset by a trigger or by an explicit CounterReset command.
     */
    PropertyI64 counterValueAtReset;
    /// \brief An integer property. Sets the duration (or number of events) before the CounterEnd event is generated.
    /**
     *  Sets the duration (or number of events) before the CounterEnd event is generated.
     */
    PropertyI64 counterDuration;
    /// \brief An enumerated integer property. Returns the current status of the Counter.
    /**
     *  Returns the current status of the Counter.
     *
     *  The following string values might be valid for this feature:
     *  - \b CounterIdle (Display string: 'Counter Idle'): The counter is idle.
     *  - \b CounterTriggerWait (Display string: 'Counter Trigger Wait'): The counter is waiting for a start trigger.
     *  - \b CounterActive (Display string: 'Counter Active'): The counter is counting for the specified duration.
     *  - \b CounterCompleted (Display string: 'Counter Completed'): The counter reached the CounterDuration count.
     *  - \b CounterOverflow (Display string: 'Counter Overflow'): The counter reached its maximum possible count.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 counterStatus;
    /// \brief An enumerated integer property. Selects the source to start the Counter.
    /**
     *  Selects the source to start the Counter.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Disables the Counter trigger.
     *  - \b AcquisitionTrigger (Display string: 'Acquisition Trigger'): Starts with the reception of the Acquisition Trigger.
     *  - \b AcquisitionStart (Display string: 'Acquisition Start'): Starts with the reception of the Acquisition Start.
     *  - \b AcquisitionEnd (Display string: 'Acquisition End'): Starts with the reception of the Acquisition End.
     *  - \b FrameTrigger (Display string: 'Frame Trigger'): Starts with the reception of the Frame Start Trigger.
     *  - \b FrameStart (Display string: 'Frame Start'): Starts with the reception of the Frame Start.
     *  - \b FrameEnd (Display string: 'Frame End'): Starts with the reception of the Frame End.
     *  - \b FrameBurstStart (Display string: 'Frame Burst Start'): Starts with the reception of the Frame Burst Start.
     *  - \b FrameBurstEnd (Display string: 'Frame Burst End'): Starts with the reception of the Frame Burst End.
     *  - \b LineTrigger (Display string: 'Line Trigger'): Starts with the reception of the Line Start Trigger.
     *  - \b LineStart (Display string: 'Line Start'): Starts with the reception of the Line Start.
     *  - \b LineEnd (Display string: 'Line End'): Starts with the reception of the Line End.
     *  - \b ExposureStart (Display string: 'Exposure Start'): Starts with the reception of the Exposure Start.
     *  - \b ExposureEnd (Display string: 'Exposure End'): Starts with the reception of the Exposure End.
     *  - \b Line0 (Display string: 'Line 0'): Starts when the specified CounterTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line1 (Display string: 'Line 1'): Starts when the specified CounterTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line2 (Display string: 'Line 2'): Starts when the specified CounterTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line#3# (Display string: 'Line #3#'): Starts when the specified CounterTriggerActivation condition is met on the chosen I/O Line.
     *  - \b UserOutput0 (Display string: 'User Output 0'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput1 (Display string: 'User Output 1'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput2 (Display string: 'User Output 2'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput#3# (Display string: 'User Output #3#'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b Counter0Start (Display string: 'Counter 0 Start'): Starts with the reception of the Counter Start.
     *  - \b Counter1Start (Display string: 'Counter 1 Start'): Starts with the reception of the Counter Start.
     *  - \b Counter2Start (Display string: 'Counter 2 Start'): Starts with the reception of the Counter Start.
     *  - \b Counter#3#Start (Display string: 'Counter #3# Start'): Starts with the reception of the Counter Start.
     *  - \b Counter0End (Display string: 'Counter 0 End'): Starts with the reception of the Counter End.
     *  - \b Counter1End (Display string: 'Counter 1 End'): Starts with the reception of the Counter End.
     *  - \b Counter2End (Display string: 'Counter 2 End'): Starts with the reception of the Counter End.
     *  - \b Counter#3#End (Display string: 'Counter #3# End'): Starts with the reception of the Counter End.
     *  - \b Timer0Start (Display string: 'Timer 0 Start'): Starts with the reception of the Timer Start.
     *  - \b Timer1Start (Display string: 'Timer 1 Start'): Starts with the reception of the Timer Start.
     *  - \b Timer2Start (Display string: 'Timer 2 Start'): Starts with the reception of the Timer Start.
     *  - \b Timer#3#Start (Display string: 'Timer #3# Start'): Starts with the reception of the Timer Start.
     *  - \b Timer0End (Display string: 'Timer 0 End'): Starts with the reception of the Timer End.
     *  - \b Timer1End (Display string: 'Timer 1 End'): Starts with the reception of the Timer End.
     *  - \b Timer2End (Display string: 'Timer 2 End'): Starts with the reception of the Timer End.
     *  - \b Timer#3#End (Display string: 'Timer #3# End'): Starts with the reception of the Timer End.
     *  - \b Encoder0 (Display string: 'Encoder 0'): Starts with the reception of the Encoder output signal.
     *  - \b Encoder1 (Display string: 'Encoder 1'): Starts with the reception of the Encoder output signal.
     *  - \b Encoder2 (Display string: 'Encoder 2'): Starts with the reception of the Encoder output signal.
     *  - \b Encoder#3# (Display string: 'Encoder #3#'): Starts with the reception of the Encoder output signal.
     *  - \b SoftwareSignal0 (Display string: 'Software Signal 0'): Starts on the reception of the Software Signal.
     *  - \b SoftwareSignal1 (Display string: 'Software Signal 1'): Starts on the reception of the Software Signal.
     *  - \b SoftwareSignal2 (Display string: 'Software Signal 2'): Starts on the reception of the Software Signal.
     *  - \b SoftwareSignal#3# (Display string: 'Software Signal #3#'): Starts on the reception of the Software Signal.
     *  - \b Action0 (Display string: 'Action 0'): Starts with the assertion of the chosen action signal.
     *  - \b Action1 (Display string: 'Action 1'): Starts with the assertion of the chosen action signal.
     *  - \b Action2 (Display string: 'Action 2'): Starts with the assertion of the chosen action signal.
     *  - \b Action#3# (Display string: 'Action #3#'): Starts with the assertion of the chosen action signal.
     *  - \b LinkTrigger0 (Display string: 'Link Trigger 0'): Starts with the reception of the chosen Link Trigger signal.
     *  - \b LinkTrigger1 (Display string: 'Link Trigger 1'): Starts with the reception of the chosen Link Trigger signal.
     *  - \b LinkTrigger2 (Display string: 'Link Trigger 2'): Starts with the reception of the chosen Link Trigger signal.
     *  - \b LinkTrigger#3# (Display string: 'Link Trigger #3#'): Starts with the reception of the chosen Link Trigger signal.
     *  - \b Line3 (Display string: 'Line 3'): Starts when the specified CounterTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line4 (Display string: 'Line 4'): Starts when the specified CounterTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line5 (Display string: 'Line 5'): Starts when the specified CounterTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line6 (Display string: 'Line 6'): Starts when the specified CounterTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line7 (Display string: 'Line 7'): Starts when the specified CounterTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line8 (Display string: 'Line 8'): Starts when the specified CounterTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line9 (Display string: 'Line 9'): Starts when the specified CounterTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line10 (Display string: 'Line 10'): Starts when the specified CounterTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line11 (Display string: 'Line 11'): Starts when the specified CounterTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line12 (Display string: 'Line 12'): Starts when the specified CounterTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line13 (Display string: 'Line 13'): Starts when the specified CounterTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line14 (Display string: 'Line 14'): Starts when the specified CounterTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line15 (Display string: 'Line 15'): Starts when the specified CounterTriggerActivation condition is met on the chosen I/O Line.
     *  - \b UserOutput3 (Display string: 'User Output 3'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput4 (Display string: 'User Output 4'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput5 (Display string: 'User Output 5'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput6 (Display string: 'User Output 6'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput7 (Display string: 'User Output 7'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput8 (Display string: 'User Output 8'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput9 (Display string: 'User Output 9'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput10 (Display string: 'User Output 10'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput11 (Display string: 'User Output 11'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput12 (Display string: 'User Output 12'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput13 (Display string: 'User Output 13'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput14 (Display string: 'User Output 14'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput15 (Display string: 'User Output 15'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b Counter3End (Display string: 'Counter 3 End'): Starts with the reception of the Counter End.
     *  - \b Counter4End (Display string: 'Counter 4 End'): Starts with the reception of the Counter End.
     *  - \b Counter5End (Display string: 'Counter 5 End'): Starts with the reception of the Counter End.
     *  - \b Counter6End (Display string: 'Counter 6 End'): Starts with the reception of the Counter End.
     *  - \b Counter7End (Display string: 'Counter 7 End'): Starts with the reception of the Counter End.
     *  - \b Counter8End (Display string: 'Counter 8 End'): Starts with the reception of the Counter End.
     *  - \b Counter9End (Display string: 'Counter 9 End'): Starts with the reception of the Counter End.
     *  - \b Counter10End (Display string: 'Counter 10 End'): Starts with the reception of the Counter End.
     *  - \b Counter11End (Display string: 'Counter 11 End'): Starts with the reception of the Counter End.
     *  - \b Counter12End (Display string: 'Counter 12 End'): Starts with the reception of the Counter End.
     *  - \b Counter13End (Display string: 'Counter 13 End'): Starts with the reception of the Counter End.
     *  - \b Counter14End (Display string: 'Counter 14 End'): Starts with the reception of the Counter End.
     *  - \b Counter15End (Display string: 'Counter 15 End'): Starts with the reception of the Counter End.
     *  - \b Counter16End (Display string: 'Counter Trigger Source')
     *  - \b Timer3End (Display string: 'Timer 3 End'): Starts with the reception of the Timer End.
     *  - \b Timer4End (Display string: 'Timer 4 End'): Starts with the reception of the Timer End.
     *  - \b Timer5End (Display string: 'Timer 5 End'): Starts with the reception of the Timer End.
     *  - \b Timer6End (Display string: 'Timer 6 End'): Starts with the reception of the Timer End.
     *  - \b Timer7End (Display string: 'Timer 7 End'): Starts with the reception of the Timer End.
     *  - \b Timer8End (Display string: 'Timer 8 End'): Starts with the reception of the Timer End.
     *  - \b Timer9End (Display string: 'Timer 9 End'): Starts with the reception of the Timer End.
     *  - \b Timer10End (Display string: 'Timer 10 End'): Starts with the reception of the Timer End.
     *  - \b Timer11End (Display string: 'Timer 11 End'): Starts with the reception of the Timer End.
     *  - \b Timer12End (Display string: 'Timer 12 End'): Starts with the reception of the Timer End.
     *  - \b Timer13End (Display string: 'Timer 13 End'): Starts with the reception of the Timer End.
     *  - \b Timer14End (Display string: 'Timer 14 End'): Starts with the reception of the Timer End.
     *  - \b Timer15End (Display string: 'Timer 15 End'): Starts with the reception of the Timer End.
     *  - \b Timer16End (Display string: 'Counter Trigger Source')
     *  - \b Action3 (Display string: 'Action 3'): Starts with the assertion of the chosen action signal.
     *  - \b Action4 (Display string: 'Action 4'): Starts with the assertion of the chosen action signal.
     *  - \b Action5 (Display string: 'Action 5'): Starts with the assertion of the chosen action signal.
     *  - \b Action6 (Display string: 'Action 6'): Starts with the assertion of the chosen action signal.
     *  - \b Action7 (Display string: 'Action 7'): Starts with the assertion of the chosen action signal.
     *  - \b Action8 (Display string: 'Action 8'): Starts with the assertion of the chosen action signal.
     *  - \b Action9 (Display string: 'Action 9'): Starts with the assertion of the chosen action signal.
     *  - \b Action10 (Display string: 'Action 10'): Starts with the assertion of the chosen action signal.
     *  - \b Action11 (Display string: 'Action 11'): Starts with the assertion of the chosen action signal.
     *  - \b Action12 (Display string: 'Action 12'): Starts with the assertion of the chosen action signal.
     *  - \b Action13 (Display string: 'Action 13'): Starts with the assertion of the chosen action signal.
     *  - \b Action14 (Display string: 'Action 14'): Starts with the assertion of the chosen action signal.
     *  - \b Action15 (Display string: 'Action 15'): Starts with the assertion of the chosen action signal.
     *  - \b Action16 (Display string: 'Counter Trigger Source')
     *  - \b mvLogicGateOR1Output (Display string: 'Counter Trigger Source')
     *  - \b mvLogicGateOR2Output (Display string: 'Counter Trigger Source')
     *  - \b mvLogicGateOR3Output (Display string: 'Counter Trigger Source')
     *  - \b mvLogicGateOR4Output (Display string: 'Counter Trigger Source')
     *  - \b mvReadOutActive (Display string: 'Counter Trigger Source')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 counterTriggerSource;
    /// \brief An enumerated integer property. Selects the activation mode of the trigger to start the Counter.
    /**
     *  Selects the activation mode of the trigger to start the Counter.
     *
     *  The following string values might be valid for this feature:
     *  - \b RisingEdge (Display string: 'Rising Edge'): Starts counting on the Rising Edge of the selected trigger signal.
     *  - \b FallingEdge (Display string: 'Falling Edge'): Starts counting on the Falling Edge of the selected trigger signal.
     *  - \b AnyEdge (Display string: 'Any Edge'): Starts counting on the Falling or rising Edge of the selected trigger signal.
     *  - \b LevelHigh (Display string: 'Level High'): Counts as long as the selected trigger signal level is High.
     *  - \b LevelLow (Display string: 'Level Low'): Counts as long as the selected trigger signal level is Low.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 counterTriggerActivation;
    /// \brief An enumerated integer property. Selects which Timer to configure.
    /**
     *  Selects which Timer to configure.
     *
     *  The following string values might be valid for this feature:
     *  - \b Timer0 (Display string: 'Timer 0'): Selects the Timer 0.
     *  - \b Timer1 (Display string: 'Timer 1'): Selects the Timer 1.
     *  - \b Timer2 (Display string: 'Timer 2'): Selects the Timer 2.
     *  - \b Timer#3# (Display string: 'Timer #3#'): Selects the Timer #3#.
     *  - \b Timer3 (Display string: 'Timer 3'): Selects the Timer 3.
     *  - \b Timer4 (Display string: 'Timer 4'): Selects the Timer 4.
     *  - \b Timer5 (Display string: 'Timer 5'): Selects the Timer 5.
     *  - \b Timer6 (Display string: 'Timer 6'): Selects the Timer 6.
     *  - \b Timer7 (Display string: 'Timer 7'): Selects the Timer 7.
     *  - \b Timer8 (Display string: 'Timer 8'): Selects the Timer 8.
     *  - \b Timer9 (Display string: 'Timer 9'): Selects the Timer 9.
     *  - \b Timer10 (Display string: 'Timer 10'): Selects the Timer 10.
     *  - \b Timer11 (Display string: 'Timer 11'): Selects the Timer 11.
     *  - \b Timer12 (Display string: 'Timer 12'): Selects the Timer 12.
     *  - \b Timer13 (Display string: 'Timer 13'): Selects the Timer 13.
     *  - \b Timer14 (Display string: 'Timer 14'): Selects the Timer 14.
     *  - \b Timer15 (Display string: 'Timer 15'): Selects the Timer 15.
     *  - \b Timer16 (Display string: 'Timer Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 timerSelector;
    /// \brief A floating point property. Sets the duration (in microseconds) of the Timer pulse.
    /**
     *  Sets the duration (in microseconds) of the Timer pulse.
     */
    PropertyF timerDuration;
    /// \brief An integer property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It sets the duration in device-specific unit of the Timer pulse.
     */
    PropertyI64 timerDurationRaw;
    /// \brief A floating point property. Sets the duration (in microseconds) of the delay to apply at the reception of a trigger before starting the Timer.
    /**
     *  Sets the duration (in microseconds) of the delay to apply at the reception of a trigger before starting the Timer.
     */
    PropertyF timerDelay;
    /// \brief An integer property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It sets the duration in device-specific unit of the delay to apply after the reception of a trigger before starting the Timer.
     */
    PropertyI64 timerDelayRaw;
    /// \brief A method object. Does a software reset of the selected timer and starts it.
    /**
     *  Does a software reset of the selected timer and starts it. The timer starts immediately after the reset unless a timer trigger is active.
     */
    Method timerReset;
    /// \brief A floating point property. Reads or writes the current value (in microseconds) of the selected Timer.
    /**
     *  Reads or writes the current value (in microseconds) of the selected Timer.
     */
    PropertyF timerValue;
    /// \brief An integer property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. This feature is used to read the current value in device-specific unit of the selected Timer.
     */
    PropertyI64 timerValueRaw;
    /// \brief An enumerated integer property. Returns the current status of the Timer.
    /**
     *  Returns the current status of the Timer.
     *
     *  The following string values might be valid for this feature:
     *  - \b TimerIdle (Display string: 'Timer Idle'): The Timer is idle.
     *  - \b TimerTriggerWait (Display string: 'Timer Trigger Wait'): The Timer is waiting for a start trigger.
     *  - \b TimerActive (Display string: 'Timer Active'): The Timer is counting for the specified duration.
     *  - \b TimerCompleted (Display string: 'Timer Completed'): The Timer reached the TimerDuration count.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 timerStatus;
    /// \brief An enumerated integer property. Selects the source of the trigger to start the Timer.
    /**
     *  Selects the source of the trigger to start the Timer.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Disables the Timer trigger.
     *  - \b AcquisitionTrigger (Display string: 'Acquisition Trigger'): Starts with the reception of the Acquisition Trigger.
     *  - \b AcquisitionStart (Display string: 'Acquisition Start'): Starts with the reception of the Acquisition Start.
     *  - \b AcquisitionEnd (Display string: 'Acquisition End'): Starts with the reception of the Acquisition End.
     *  - \b FrameTrigger (Display string: 'Frame Trigger'): Starts with the reception of the Frame Start Trigger.
     *  - \b FrameStart (Display string: 'Frame Start'): Starts with the reception of the Frame Start.
     *  - \b FrameEnd (Display string: 'Frame End'): Starts with the reception of the Frame End.
     *  - \b FrameBurstStart (Display string: 'Frame Burst Start'): Starts with the reception of the Frame Burst Start.
     *  - \b FrameBurstEnd (Display string: 'Frame Burst End'): Starts with the reception of the Frame Burst End.
     *  - \b LineTrigger (Display string: 'Line Trigger'): Starts with the reception of the Line Start Trigger.
     *  - \b LineStart (Display string: 'Line Start'): Starts with the reception of the Line Start.
     *  - \b LineEnd (Display string: 'Line End'): Starts with the reception of the Line End.
     *  - \b ExposureStart (Display string: 'Exposure Start'): Starts with the reception of the Exposure Start.
     *  - \b ExposureEnd (Display string: 'Exposure End'): Starts with the reception of the Exposure End.
     *  - \b Line0 (Display string: 'Line 0'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line1 (Display string: 'Line 1'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line2 (Display string: 'Line 2'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line#3# (Display string: 'Line #3#'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b UserOutput0 (Display string: 'User Output 0'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput1 (Display string: 'User Output 1'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput2 (Display string: 'User Output 2'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput#3# (Display string: 'User Output #3#'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b Counter0Start (Display string: 'Counter 0 Start'): Starts with the reception of the Counter Start.
     *  - \b Counter1Start (Display string: 'Counter 1 Start'): Starts with the reception of the Counter Start.
     *  - \b Counter2Start (Display string: 'Counter 2 Start'): Starts with the reception of the Counter Start.
     *  - \b Counter#3#Start (Display string: 'Counter #3# Start'): Starts with the reception of the Counter Start.
     *  - \b Counter0End (Display string: 'Counter 0 End'): Starts with the reception of the Counter End.
     *  - \b Counter1End (Display string: 'Counter 1 End'): Starts with the reception of the Counter End.
     *  - \b Counter2End (Display string: 'Counter 2 End'): Starts with the reception of the Counter End.
     *  - \b Counter#3#End (Display string: 'Counter #3# End'): Starts with the reception of the Counter End.
     *  - \b Timer0Start (Display string: 'Timer 0 Start'): Starts with the reception of the Timer Start.
     *  - \b Timer1Start (Display string: 'Timer 1 Start'): Starts with the reception of the Timer Start.
     *  - \b Timer2Start (Display string: 'Timer 2 Start'): Starts with the reception of the Timer Start.
     *  - \b Timer#3#Start (Display string: 'Timer #3# Start'): Starts with the reception of the Timer Start.
     *  - \b Timer0End (Display string: 'Timer 0 End'): Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
     *  - \b Timer1End (Display string: 'Timer 1 End'): Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
     *  - \b Timer2End (Display string: 'Timer 2 End'): Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
     *  - \b Timer#3#End (Display string: 'Timer #3# End'): Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
     *  - \b Encoder0 (Display string: 'Encoder 0'): Starts with the reception of the Encoder output signal.
     *  - \b Encoder1 (Display string: 'Encoder 1'): Starts with the reception of the Encoder output signal.
     *  - \b Encoder2 (Display string: 'Encoder 2'): Starts with the reception of the Encoder output signal.
     *  - \b Encoder#3# (Display string: 'Encoder #3#'): Starts with the reception of the Encoder output signal.
     *  - \b SoftwareSignal0 (Display string: 'Software Signal 0'): Starts on the reception of the Software Signal.
     *  - \b SoftwareSignal1 (Display string: 'Software Signal 1'): Starts on the reception of the Software Signal.
     *  - \b SoftwareSignal2 (Display string: 'Software Signal 2'): Starts on the reception of the Software Signal.
     *  - \b SoftwareSignal#3# (Display string: 'Software Signal #3#'): Starts on the reception of the Software Signal.
     *  - \b Action0 (Display string: 'Action 0'): Starts with the assertion of the chosen action signal.
     *  - \b Action1 (Display string: 'Action 1'): Starts with the assertion of the chosen action signal.
     *  - \b Action2 (Display string: 'Action 2'): Starts with the assertion of the chosen action signal.
     *  - \b Action#3# (Display string: 'Action #3#'): Starts with the assertion of the chosen action signal.
     *  - \b LinkTrigger0 (Display string: 'Link Trigger 0'): Starts with the reception of the chosen Link Trigger.
     *  - \b LinkTrigger1 (Display string: 'Link Trigger 1'): Starts with the reception of the chosen Link Trigger.
     *  - \b LinkTrigger2 (Display string: 'Link Trigger 2'): Starts with the reception of the chosen Link Trigger.
     *  - \b LinkTrigger#3# (Display string: 'Link Trigger #3#'): Starts with the reception of the chosen Link Trigger.
     *  - \b Line3 (Display string: 'Line 3'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line4 (Display string: 'Line 4'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line5 (Display string: 'Line 5'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line6 (Display string: 'Line 6'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line7 (Display string: 'Line 7'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line8 (Display string: 'Line 8'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line9 (Display string: 'Line 9'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line10 (Display string: 'Line 10'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line11 (Display string: 'Line 11'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line12 (Display string: 'Line 12'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line13 (Display string: 'Line 13'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line14 (Display string: 'Line 14'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line15 (Display string: 'Line 15'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b UserOutput3 (Display string: 'User Output 3'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput4 (Display string: 'User Output 4'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput5 (Display string: 'User Output 5'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput6 (Display string: 'User Output 6'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput7 (Display string: 'User Output 7'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b Counter3End (Display string: 'Counter 3 End'): Starts with the reception of the Counter End.
     *  - \b Counter4End (Display string: 'Counter 4 End'): Starts with the reception of the Counter End.
     *  - \b Counter5End (Display string: 'Counter 5 End'): Starts with the reception of the Counter End.
     *  - \b Counter6End (Display string: 'Counter 6 End'): Starts with the reception of the Counter End.
     *  - \b Counter7End (Display string: 'Counter 7 End'): Starts with the reception of the Counter End.
     *  - \b Counter8End (Display string: 'Counter 8 End'): Starts with the reception of the Counter End.
     *  - \b Counter9End (Display string: 'Counter 9 End'): Starts with the reception of the Counter End.
     *  - \b Counter10End (Display string: 'Counter 10 End'): Starts with the reception of the Counter End.
     *  - \b Counter11End (Display string: 'Counter 11 End'): Starts with the reception of the Counter End.
     *  - \b Counter12End (Display string: 'Counter 12 End'): Starts with the reception of the Counter End.
     *  - \b Counter13End (Display string: 'Counter 13 End'): Starts with the reception of the Counter End.
     *  - \b Counter14End (Display string: 'Counter 14 End'): Starts with the reception of the Counter End.
     *  - \b Counter15End (Display string: 'Counter 15 End'): Starts with the reception of the Counter End.
     *  - \b Counter16End (Display string: 'Timer Trigger Source')
     *  - \b Timer3End (Display string: 'Timer 3 End'): Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
     *  - \b Timer4End (Display string: 'Timer 4 End'): Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
     *  - \b Timer5End (Display string: 'Timer 5 End'): Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
     *  - \b Timer6End (Display string: 'Timer 6 End'): Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
     *  - \b Timer7End (Display string: 'Timer 7 End'): Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
     *  - \b Timer8End (Display string: 'Timer 8 End'): Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
     *  - \b Timer9End (Display string: 'Timer 9 End'): Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
     *  - \b Timer10End (Display string: 'Timer 10 End'): Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
     *  - \b Timer11End (Display string: 'Timer 11 End'): Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
     *  - \b Timer12End (Display string: 'Timer 12 End'): Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
     *  - \b Timer13End (Display string: 'Timer 13 End'): Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
     *  - \b Timer14End (Display string: 'Timer 14 End'): Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
     *  - \b Timer15End (Display string: 'Timer 15 End'): Starts with the reception of the Timer End. Note that a timer can retrigger itself to achieve a free running Timer.
     *  - \b Timer16End (Display string: 'Timer Trigger Source')
     *  - \b Action3 (Display string: 'Action 3'): Starts with the assertion of the chosen action signal.
     *  - \b Action4 (Display string: 'Action 4'): Starts with the assertion of the chosen action signal.
     *  - \b Action5 (Display string: 'Action 5'): Starts with the assertion of the chosen action signal.
     *  - \b Action6 (Display string: 'Action 6'): Starts with the assertion of the chosen action signal.
     *  - \b Action7 (Display string: 'Action 7'): Starts with the assertion of the chosen action signal.
     *  - \b Action8 (Display string: 'Action 8'): Starts with the assertion of the chosen action signal.
     *  - \b Action9 (Display string: 'Action 9'): Starts with the assertion of the chosen action signal.
     *  - \b Action10 (Display string: 'Action 10'): Starts with the assertion of the chosen action signal.
     *  - \b Action11 (Display string: 'Action 11'): Starts with the assertion of the chosen action signal.
     *  - \b Action12 (Display string: 'Action 12'): Starts with the assertion of the chosen action signal.
     *  - \b Action13 (Display string: 'Action 13'): Starts with the assertion of the chosen action signal.
     *  - \b Action14 (Display string: 'Action 14'): Starts with the assertion of the chosen action signal.
     *  - \b Action15 (Display string: 'Action 15'): Starts with the assertion of the chosen action signal.
     *  - \b Action16 (Display string: 'Timer Trigger Source')
     *  - \b mvLogicGateOR1Output (Display string: 'Timer Trigger Source')
     *  - \b mvLogicGateOR2Output (Display string: 'Timer Trigger Source')
     *  - \b mvLogicGateOR3Output (Display string: 'Timer Trigger Source')
     *  - \b mvLogicGateOR4Output (Display string: 'Timer Trigger Source')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 timerTriggerSource;
    /// \brief An enumerated integer property. Selects the activation mode of the trigger to start the Timer.
    /**
     *  Selects the activation mode of the trigger to start the Timer.
     *
     *  The following string values might be valid for this feature:
     *  - \b RisingEdge (Display string: 'Rising Edge'): Starts counting on the Rising Edge of the selected trigger signal.
     *  - \b FallingEdge (Display string: 'Falling Edge'): Starts counting on the Falling Edge of the selected trigger signal.
     *  - \b AnyEdge (Display string: 'Any Edge'): Starts counting on the Falling or Rising Edge of the selected trigger signal.
     *  - \b LevelHigh (Display string: 'Level High'): Counts as long as the selected trigger signal level is High.
     *  - \b LevelLow (Display string: 'Level Low'): Counts as long as the selected trigger signal level is Low.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 timerTriggerActivation;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains the quadrature Encoder Control features.
/**
 *  A category that contains the quadrature Encoder Control features.
 */
class EncoderControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::EncoderControl</b> object.
    explicit EncoderControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        encoderSelector(),
        encoderSourceA(),
        encoderSourceB(),
        encoderMode(),
        encoderDivider(),
        encoderOutputMode(),
        encoderStatus(),
        encoderTimeout(),
        encoderResetSource(),
        encoderResetActivation(),
        encoderReset(),
        encoderValue(),
        encoderValueAtReset()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( encoderSelector, "EncoderSelector" );
        locator.bindComponent( encoderSourceA, "EncoderSourceA" );
        locator.bindComponent( encoderSourceB, "EncoderSourceB" );
        locator.bindComponent( encoderMode, "EncoderMode" );
        locator.bindComponent( encoderDivider, "EncoderDivider" );
        locator.bindComponent( encoderOutputMode, "EncoderOutputMode" );
        locator.bindComponent( encoderStatus, "EncoderStatus" );
        locator.bindComponent( encoderTimeout, "EncoderTimeout" );
        locator.bindComponent( encoderResetSource, "EncoderResetSource" );
        locator.bindComponent( encoderResetActivation, "EncoderResetActivation" );
        locator.bindComponent( encoderReset, "EncoderReset@i" );
        locator.bindComponent( encoderValue, "EncoderValue" );
        locator.bindComponent( encoderValueAtReset, "EncoderValueAtReset" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Selects which Encoder to configure.
    /**
     *  Selects which Encoder to configure.
     *
     *  The following string values might be valid for this feature:
     *  - \b Encoder0 (Display string: 'Encoder 0'): Selects Encoder 0.
     *  - \b Encoder1 (Display string: 'Encoder 1'): Selects Encoder 1.
     *  - \b Encoder2 (Display string: 'Encoder 2'): Selects Encoder 2.
     *  - \b Encoder#3# (Display string: 'Encoder #3#'): Selects Encoder #3#.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 encoderSelector;
    /// \brief An enumerated integer property. Selects the signal which will be the source of the A input of the Encoder.
    /**
     *  Selects the signal which will be the source of the A input of the Encoder.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Counter is stopped.
     *  - \b Line0 (Display string: 'Line 0'): Encoder Forward input is taken from the chosen I/O Line.
     *  - \b Line1 (Display string: 'Line 1'): Encoder Forward input is taken from the chosen I/O Line.
     *  - \b Line2 (Display string: 'Line 2'): Encoder Forward input is taken from the chosen I/O Line.
     *  - \b Line#3# (Display string: 'Line #3#'): Encoder Forward input is taken from the chosen I/O Line.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 encoderSourceA;
    /// \brief An enumerated integer property. Selects the signal which will be the source of the B input of the Encoder.
    /**
     *  Selects the signal which will be the source of the B input of the Encoder.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Counter is stopped.
     *  - \b Line0 (Display string: 'Line 0'): Encoder Reverse input is taken from the chosen I/O Line..
     *  - \b Line1 (Display string: 'Line 1'): Encoder Reverse input is taken from the chosen I/O Line..
     *  - \b Line2 (Display string: 'Line 2'): Encoder Reverse input is taken from the chosen I/O Line..
     *  - \b Line#3# (Display string: 'Line #3#'): Encoder Reverse input is taken from the chosen I/O Line..
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 encoderSourceB;
    /// \brief An enumerated integer property. Selects if the count of encoder uses FourPhase mode with jitter filtering or the HighResolution mode without jitter filtering.
    /**
     *  Selects if the count of encoder uses FourPhase mode with jitter filtering or the HighResolution mode without jitter filtering.
     *
     *  The following string values might be valid for this feature:
     *  - \b FourPhase (Display string: 'Four Phase'): The counter increments or decrements 1 for every full quadrature cycle with jitter filtering.
     *  - \b HighResolution (Display string: 'High Resolution'): The counter increments or decrements every quadrature phase for high resolution counting, but without jitter filtering.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 encoderMode;
    /// \brief An integer property. Sets how many Encoder increment/decrements that are needed generate an Encoder output pulse signal.
    /**
     *  Sets how many Encoder increment/decrements that are needed generate an Encoder output pulse signal.
     */
    PropertyI64 encoderDivider;
    /// \brief An enumerated integer property. Selects the conditions for the Encoder interface to generate a valid Encoder output signal.
    /**
     *  Selects the conditions for the Encoder interface to generate a valid Encoder output signal.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): No output pulse are generated.
     *  - \b PositionUp (Display string: 'Position Up'): Output pulses are generated at all new positions in the positive direction. If the encoder reverses no output pulse are generated until it has again passed the position where the reversal started.
     *  - \b PositionDown (Display string: 'Position Down'): Output pulses are generated at all new positions in the negative direction. If the encoder reverses no output pulse are generated until it has again passed the position where the reversal started.
     *  - \b DirectionUp (Display string: 'Direction Up'): Output pulses are generated at all position increments in the positive direction while ignoring negative direction motion.
     *  - \b DirectionDown (Display string: 'Direction Down'): Output pulses are generated at all position increments in the negative direction while ignoring positive direction motion.
     *  - \b Motion (Display string: 'Motion'): Output pulses are generated at all motion increments in both directions.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 encoderOutputMode;
    /// \brief An enumerated integer property. Returns the motion status of the encoder.
    /**
     *  Returns the motion status of the encoder.
     *
     *  The following string values might be valid for this feature:
     *  - \b EncoderUp (Display string: 'Encoder Up'): The encoder counter last incremented.
     *  - \b EncoderDown (Display string: 'Encoder Down'): The encoder counter last decremented.
     *  - \b EncoderIdle (Display string: 'Encoder Idle'): The encoder is not active.
     *  - \b EncoderStatic (Display string: 'Encoder Static'): No motion within the EncoderTimeout time.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 encoderStatus;
    /// \brief A floating point property. Sets the maximum time interval between encoder counter increments before the status turns to static.
    /**
     *  Sets the maximum time interval between encoder counter increments before the status turns to static.
     */
    PropertyF encoderTimeout;
    /// \brief An enumerated integer property. Selects the signals that will be the source to reset the Encoder.
    /**
     *  Selects the signals that will be the source to reset the Encoder.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Disable the Encoder Reset trigger.
     *  - \b AcquisitionTrigger (Display string: 'Acquisition Trigger'): Resets with the reception of the Acquisition Trigger.
     *  - \b AcquisitionStart (Display string: 'Acquisition Start'): Resets with the reception of the Acquisition Start.
     *  - \b AcquisitionEnd (Display string: 'Acquisition End'): Resets with the reception of the Acquisition End.
     *  - \b FrameTrigger (Display string: 'Frame Trigger'): Resets with the reception of the Frame Start Trigger.
     *  - \b FrameStart (Display string: 'Frame Start'): Resets with the reception of the Frame Start.
     *  - \b FrameEnd (Display string: 'Frame End'): Resets with the reception of the Frame End.
     *  - \b ExposureStart (Display string: 'Exposure Start'): Resets with the reception of the Exposure Start.
     *  - \b ExposureEnd (Display string: 'Exposure End'): Resets with the reception of the Exposure End.
     *  - \b Line0 (Display string: 'Line 0'): Resets by the chosen I/O Line.
     *  - \b Line1 (Display string: 'Line 1'): Resets by the chosen I/O Line.
     *  - \b Line2 (Display string: 'Line 2'): Resets by the chosen I/O Line.
     *  - \b Line#3# (Display string: 'Line #3#'): Resets by the chosen I/O Line.
     *  - \b Counter0Start (Display string: 'Counter 0 Start'): Resets with the reception of the Counter Start.
     *  - \b Counter1Start (Display string: 'Counter 1 Start'): Resets with the reception of the Counter Start.
     *  - \b Counter2Start (Display string: 'Counter 2 Start'): Resets with the reception of the Counter Start.
     *  - \b Counter#3#Start (Display string: 'Counter #3# Start'): Resets with the reception of the Counter Start.
     *  - \b Counter0End (Display string: 'Counter 0 End'): Resets with the reception of the Counter End.
     *  - \b Counter1End (Display string: 'Counter 1 End'): Resets with the reception of the Counter End.
     *  - \b Counter2End (Display string: 'Counter 2 End'): Resets with the reception of the Counter End.
     *  - \b Counter#3#End (Display string: 'Counter #3# End'): Resets with the reception of the Counter End.
     *  - \b Timer0Start (Display string: 'Timer 0 Start'): Resets with the reception of the Timer Start.
     *  - \b Timer1Start (Display string: 'Timer 1 Start'): Resets with the reception of the Timer Start.
     *  - \b Timer2Start (Display string: 'Timer 2 Start'): Resets with the reception of the Timer Start.
     *  - \b Timer#3#Start (Display string: 'Timer #3# Start'): Resets with the reception of the Timer Start.
     *  - \b Timer0End (Display string: 'Timer 0 End'): Resets with the reception of the Timer End.
     *  - \b Timer1End (Display string: 'Timer 1 End'): Resets with the reception of the Timer End.
     *  - \b Timer2End (Display string: 'Timer 2 End'): Resets with the reception of the Timer End.
     *  - \b Timer#3#End (Display string: 'Timer #3# End'): Resets with the reception of the Timer End.
     *  - \b UserOutput0 (Display string: 'User Output 0'): Resets by the chosen User Output bit.
     *  - \b UserOutput1 (Display string: 'User Output 1'): Resets by the chosen User Output bit.
     *  - \b UserOutput2 (Display string: 'User Output 2'): Resets by the chosen User Output bit.
     *  - \b UserOutput#3# (Display string: 'User Output #3#'): Resets by the chosen User Output bit.
     *  - \b SoftwareSignal0 (Display string: 'Software Signal 0'): Resets on the reception of the Software Signal.
     *  - \b SoftwareSignal1 (Display string: 'Software Signal 1'): Resets on the reception of the Software Signal.
     *  - \b SoftwareSignal2 (Display string: 'Software Signal 2'): Resets on the reception of the Software Signal.
     *  - \b SoftwareSignal#3# (Display string: 'Software Signal #3#'): Resets on the reception of the Software Signal.
     *  - \b Action0 (Display string: 'Action 0'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action1 (Display string: 'Action 1'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action2 (Display string: 'Action 2'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b Action#3# (Display string: 'Action #3#'): Resets on assertions of the chosen action signal (Broadcasted signal on the transport layer).
     *  - \b LinkTrigger0 (Display string: 'Link Trigger 0'): Resets on the reception of the chosen Link Trigger (received from the transport layer).
     *  - \b LinkTrigger1 (Display string: 'Link Trigger 1'): Resets on the reception of the chosen Link Trigger (received from the transport layer).
     *  - \b LinkTrigger2 (Display string: 'Link Trigger 2'): Resets on the reception of the chosen Link Trigger (received from the transport layer).
     *  - \b LinkTrigger#3# (Display string: 'Link Trigger #3#'): Resets on the reception of the chosen Link Trigger (received from the transport layer).
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 encoderResetSource;
    /// \brief An enumerated integer property. Selects the Activation mode of the Encoder Reset Source signal.
    /**
     *  Selects the Activation mode of the Encoder Reset Source signal.
     *
     *  The following string values might be valid for this feature:
     *  - \b RisingEdge (Display string: 'Rising Edge'): Resets the Encoder on the Rising Edge of the signal.
     *  - \b FallingEdge (Display string: 'Falling Edge'): Resets the Encoder on the Falling Edge of the signal.
     *  - \b AnyEdge (Display string: 'Any Edge'): Resets the Encoder on the Falling or rising Edge of the selected signal.
     *  - \b LevelHigh (Display string: 'Level High'): Resets the Encoder as long as the selected signal level is High.
     *  - \b LevelLow (Display string: 'Level Low'): Resets the Encoder as long as the selected signal level is Low.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 encoderResetActivation;
    /// \brief A method object. Does a software reset of the selected Encoder and starts it.
    /**
     *  Does a software reset of the selected Encoder and starts it. The Encoder starts counting events immediately after the reset. EncoderReset can be used to reset the Encoder independently from the EncoderResetSource.
     */
    Method encoderReset;
    /// \brief An integer property. Reads or writes the current value of the position counter of the selected Encoder.
    /**
     *  Reads or writes the current value of the position counter of the selected Encoder.
     */
    PropertyI64 encoderValue;
    /// \brief An integer property. Reads the value of the of the position counter of the selected Encoder when it was reset by a signal or by an explicit EncoderReset command.
    /**
     *  Reads the value of the of the position counter of the selected Encoder when it was reset by a signal or by an explicit EncoderReset command.
     */
    PropertyI64 encoderValueAtReset;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains the Software Signal Control features.
/**
 *  A category that contains the Software Signal Control features.
 */
class SoftwareSignalControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::SoftwareSignalControl</b> object.
    explicit SoftwareSignalControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        softwareSignalSelector(),
        softwareSignalPulse()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( softwareSignalSelector, "SoftwareSignalSelector" );
        locator.bindComponent( softwareSignalPulse, "SoftwareSignalPulse@i" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Selects which Software Signal features to control.
    /**
     *  Selects which Software Signal features to control.
     *
     *  The following string values might be valid for this feature:
     *  - \b SoftwareSignal0 (Display string: 'Software Signal 0'): Selects the software generated signal to control.
     *  - \b SoftwareSignal1 (Display string: 'Software Signal 1'): Selects the software generated signal to control.
     *  - \b SoftwareSignal2 (Display string: 'Software Signal 2'): Selects the software generated signal to control.
     *  - \b SoftwareSignal#3# (Display string: 'Software Signal #3#'): Selects the software generated signal to control.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 softwareSignalSelector;
    /// \brief A method object. Generates a pulse signal that can be used as a software trigger.
    /**
     *  Generates a pulse signal that can be used as a software trigger. This command can be used to trigger other modules that accept a SoftwareSignal as trigger source.
     */
    Method softwareSignalPulse;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains the Action control features.
/**
 *  A category that contains the Action control features.
 */
class ActionControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::ActionControl</b> object.
    explicit ActionControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        actionUnconditionalMode(),
        actionDeviceKey(),
        actionQueueSize(),
        actionSelector(),
        actionGroupMask(),
        actionGroupKey()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( actionUnconditionalMode, "ActionUnconditionalMode" );
        locator.bindComponent( actionDeviceKey, "ActionDeviceKey" );
        locator.bindComponent( actionQueueSize, "ActionQueueSize" );
        locator.bindComponent( actionSelector, "ActionSelector" );
        locator.bindComponent( actionGroupMask, "ActionGroupMask" );
        locator.bindComponent( actionGroupKey, "ActionGroupKey" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Enables the unconditional action command mode where action commands are processed even when the primary control channel is closed.
    /**
     *  Enables the unconditional action command mode where action commands are processed even when the primary control channel is closed.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Unconditional mode is disabled.
     *  - \b On (Display string: 'On'): Unconditional mode is enabled.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 actionUnconditionalMode;
    /// \brief An integer property. Provides the device key that allows the device to check the validity of action commands.
    /**
     *  Provides the device key that allows the device to check the validity of action commands. The device internal assertion of an action signal is only authorized if the ActionDeviceKey and the action device key value in the protocol message are equal.
     */
    PropertyI64 actionDeviceKey;
    /// \brief An integer property. Indicates the size of the scheduled action commands queue.
    /**
     *  Indicates the size of the scheduled action commands queue. This number represents the maximum number of scheduled action commands that can be pending at a given point in time.
     */
    PropertyI64 actionQueueSize;
    /// \brief An integer property. Selects to which Action Signal further Action settings apply.
    /**
     *  Selects to which Action Signal further Action settings apply.
     */
    PropertyI64 actionSelector;
    /// \brief An integer property. Provides the mask that the device will use to validate the action on reception of the action protocol message.
    /**
     *  Provides the mask that the device will use to validate the action on reception of the action protocol message.
     */
    PropertyI64 actionGroupMask;
    /// \brief An integer property. Provides the key that the device will use to validate the action on reception of the action protocol message.
    /**
     *  Provides the key that the device will use to validate the action on reception of the action protocol message.
     */
    PropertyI64 actionGroupKey;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains Event control features.
/**
 *  A category that contains Event control features.
 */
class EventControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::EventControl</b> object.
    explicit EventControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        eventSelector(),
        eventNotification(),
        eventAcquisitionTrigger(),
        eventAcquisitionTriggerTimestamp(),
        eventAcquisitionTriggerFrameID(),
        eventAcquisitionStart(),
        eventAcquisitionStartTimestamp(),
        eventAcquisitionStartFrameID(),
        eventAcquisitionEnd(),
        eventAcquisitionEndTimestamp(),
        eventAcquisitionEndFrameID(),
        eventAcquisitionTransferStart(),
        eventAcquisitionTransferStartTimestamp(),
        eventAcquisitionTransferStartFrameID(),
        eventAcquisitionTransferEnd(),
        eventAcquisitionTransferEndTimestamp(),
        eventAcquisitionTransferEndFrameID(),
        eventAcquisitionError(),
        eventAcquisitionErrorTimestamp(),
        eventAcquisitionErrorFrameID(),
        eventFrameTrigger(),
        eventFrameTriggerTimestamp(),
        eventFrameTriggerFrameID(),
        eventFrameStart(),
        eventFrameStartTimestamp(),
        eventFrameStartFrameID(),
        eventFrameEnd(),
        eventFrameEndTimestamp(),
        eventFrameEndFrameID(),
        eventFrameBurstStart(),
        eventFrameBurstStartTimestamp(),
        eventFrameBurstStartFrameID(),
        eventFrameBurstEnd(),
        eventFrameBurstEndTimestamp(),
        eventFrameBurstEndFrameID(),
        eventFrameTransferStart(),
        eventFrameTransferStartTimestamp(),
        eventFrameTransferStartFrameID(),
        eventFrameTransferEnd(),
        eventFrameTransferEndTimestamp(),
        eventFrameTransferEndFrameID(),
        eventExposureStart(),
        eventExposureStartTimestamp(),
        eventExposureStartFrameID(),
        eventExposureEnd(),
        eventExposureEndTimestamp(),
        eventExposureEndFrameID(),
        eventCounter0Start(),
        eventCounter0StartTimestamp(),
        eventCounter0StartFrameID(),
        eventCounter1Start(),
        eventCounter1StartTimestamp(),
        eventCounter1StartFrameID(),
        eventCounter2Start(),
        eventCounter2StartTimestamp(),
        eventCounter2StartFrameID(),
        eventCounter3Start(),
        eventCounter3StartTimestamp(),
        eventCounter3StartFrameID(),
        eventCounter4Start(),
        eventCounter4StartTimestamp(),
        eventCounter4StartFrameID(),
        eventCounter5Start(),
        eventCounter5StartTimestamp(),
        eventCounter5StartFrameID(),
        eventCounter6Start(),
        eventCounter6StartTimestamp(),
        eventCounter6StartFrameID(),
        eventCounter7Start(),
        eventCounter7StartTimestamp(),
        eventCounter7StartFrameID(),
        eventCounter8Start(),
        eventCounter8StartTimestamp(),
        eventCounter8StartFrameID(),
        eventCounter9Start(),
        eventCounter9StartTimestamp(),
        eventCounter9StartFrameID(),
        eventCounter10Start(),
        eventCounter10StartTimestamp(),
        eventCounter10StartFrameID(),
        eventCounter11Start(),
        eventCounter11StartTimestamp(),
        eventCounter11StartFrameID(),
        eventCounter12Start(),
        eventCounter12StartTimestamp(),
        eventCounter12StartFrameID(),
        eventCounter13Start(),
        eventCounter13StartTimestamp(),
        eventCounter13StartFrameID(),
        eventCounter14Start(),
        eventCounter14StartTimestamp(),
        eventCounter14StartFrameID(),
        eventCounter0End(),
        eventCounter0EndTimestamp(),
        eventCounter0EndFrameID(),
        eventCounter1End(),
        eventCounter1EndTimestamp(),
        eventCounter1EndFrameID(),
        eventCounter2End(),
        eventCounter2EndTimestamp(),
        eventCounter2EndFrameID(),
        eventCounter3End(),
        eventCounter3EndTimestamp(),
        eventCounter3EndFrameID(),
        eventCounter4End(),
        eventCounter4EndTimestamp(),
        eventCounter4EndFrameID(),
        eventCounter5End(),
        eventCounter5EndTimestamp(),
        eventCounter5EndFrameID(),
        eventCounter6End(),
        eventCounter6EndTimestamp(),
        eventCounter6EndFrameID(),
        eventCounter7End(),
        eventCounter7EndTimestamp(),
        eventCounter7EndFrameID(),
        eventCounter8End(),
        eventCounter8EndTimestamp(),
        eventCounter8EndFrameID(),
        eventCounter9End(),
        eventCounter9EndTimestamp(),
        eventCounter9EndFrameID(),
        eventCounter10End(),
        eventCounter10EndTimestamp(),
        eventCounter10EndFrameID(),
        eventCounter11End(),
        eventCounter11EndTimestamp(),
        eventCounter11EndFrameID(),
        eventCounter12End(),
        eventCounter12EndTimestamp(),
        eventCounter12EndFrameID(),
        eventCounter13End(),
        eventCounter13EndTimestamp(),
        eventCounter13EndFrameID(),
        eventCounter14End(),
        eventCounter14EndTimestamp(),
        eventCounter14EndFrameID(),
        eventTimer0Start(),
        eventTimer0StartTimestamp(),
        eventTimer0StartFrameID(),
        eventTimer1Start(),
        eventTimer1StartTimestamp(),
        eventTimer1StartFrameID(),
        eventTimer2Start(),
        eventTimer2StartTimestamp(),
        eventTimer2StartFrameID(),
        eventTimer3Start(),
        eventTimer3StartTimestamp(),
        eventTimer3StartFrameID(),
        eventTimer4Start(),
        eventTimer4StartTimestamp(),
        eventTimer4StartFrameID(),
        eventTimer5Start(),
        eventTimer5StartTimestamp(),
        eventTimer5StartFrameID(),
        eventTimer6Start(),
        eventTimer6StartTimestamp(),
        eventTimer6StartFrameID(),
        eventTimer7Start(),
        eventTimer7StartTimestamp(),
        eventTimer7StartFrameID(),
        eventTimer8Start(),
        eventTimer8StartTimestamp(),
        eventTimer8StartFrameID(),
        eventTimer9Start(),
        eventTimer9StartTimestamp(),
        eventTimer9StartFrameID(),
        eventTimer10Start(),
        eventTimer10StartTimestamp(),
        eventTimer10StartFrameID(),
        eventTimer11Start(),
        eventTimer11StartTimestamp(),
        eventTimer11StartFrameID(),
        eventTimer12Start(),
        eventTimer12StartTimestamp(),
        eventTimer12StartFrameID(),
        eventTimer13Start(),
        eventTimer13StartTimestamp(),
        eventTimer13StartFrameID(),
        eventTimer14Start(),
        eventTimer14StartTimestamp(),
        eventTimer14StartFrameID(),
        eventTimer0End(),
        eventTimer0EndTimestamp(),
        eventTimer0EndFrameID(),
        eventTimer1End(),
        eventTimer1EndTimestamp(),
        eventTimer1EndFrameID(),
        eventTimer2End(),
        eventTimer2EndTimestamp(),
        eventTimer2EndFrameID(),
        eventTimer3End(),
        eventTimer3EndTimestamp(),
        eventTimer3EndFrameID(),
        eventTimer4End(),
        eventTimer4EndTimestamp(),
        eventTimer4EndFrameID(),
        eventTimer5End(),
        eventTimer5EndTimestamp(),
        eventTimer5EndFrameID(),
        eventTimer6End(),
        eventTimer6EndTimestamp(),
        eventTimer6EndFrameID(),
        eventTimer7End(),
        eventTimer7EndTimestamp(),
        eventTimer7EndFrameID(),
        eventTimer8End(),
        eventTimer8EndTimestamp(),
        eventTimer8EndFrameID(),
        eventTimer9End(),
        eventTimer9EndTimestamp(),
        eventTimer9EndFrameID(),
        eventTimer10End(),
        eventTimer10EndTimestamp(),
        eventTimer10EndFrameID(),
        eventTimer11End(),
        eventTimer11EndTimestamp(),
        eventTimer11EndFrameID(),
        eventTimer12End(),
        eventTimer12EndTimestamp(),
        eventTimer12EndFrameID(),
        eventTimer13End(),
        eventTimer13EndTimestamp(),
        eventTimer13EndFrameID(),
        eventTimer14End(),
        eventTimer14EndTimestamp(),
        eventTimer14EndFrameID(),
        eventLine0RisingEdge(),
        eventLine0RisingEdgeTimestamp(),
        eventLine0RisingEdgeFrameID(),
        eventLine1RisingEdge(),
        eventLine1RisingEdgeTimestamp(),
        eventLine1RisingEdgeFrameID(),
        eventLine2RisingEdge(),
        eventLine2RisingEdgeTimestamp(),
        eventLine2RisingEdgeFrameID(),
        eventLine3RisingEdge(),
        eventLine3RisingEdgeTimestamp(),
        eventLine3RisingEdgeFrameID(),
        eventLine4RisingEdge(),
        eventLine4RisingEdgeTimestamp(),
        eventLine4RisingEdgeFrameID(),
        eventLine5RisingEdge(),
        eventLine5RisingEdgeTimestamp(),
        eventLine5RisingEdgeFrameID(),
        eventLine6RisingEdge(),
        eventLine6RisingEdgeTimestamp(),
        eventLine6RisingEdgeFrameID(),
        eventLine7RisingEdge(),
        eventLine7RisingEdgeTimestamp(),
        eventLine7RisingEdgeFrameID(),
        eventLine8RisingEdge(),
        eventLine8RisingEdgeTimestamp(),
        eventLine8RisingEdgeFrameID(),
        eventLine9RisingEdge(),
        eventLine9RisingEdgeTimestamp(),
        eventLine9RisingEdgeFrameID(),
        eventLine10RisingEdge(),
        eventLine10RisingEdgeTimestamp(),
        eventLine10RisingEdgeFrameID(),
        eventLine11RisingEdge(),
        eventLine11RisingEdgeTimestamp(),
        eventLine11RisingEdgeFrameID(),
        eventLine12RisingEdge(),
        eventLine12RisingEdgeTimestamp(),
        eventLine12RisingEdgeFrameID(),
        eventLine13RisingEdge(),
        eventLine13RisingEdgeTimestamp(),
        eventLine13RisingEdgeFrameID(),
        eventLine14RisingEdge(),
        eventLine14RisingEdgeTimestamp(),
        eventLine14RisingEdgeFrameID(),
        eventLine0FallingEdge(),
        eventLine0FallingEdgeTimestamp(),
        eventLine0FallingEdgeFrameID(),
        eventLine1FallingEdge(),
        eventLine1FallingEdgeTimestamp(),
        eventLine1FallingEdgeFrameID(),
        eventLine2FallingEdge(),
        eventLine2FallingEdgeTimestamp(),
        eventLine2FallingEdgeFrameID(),
        eventLine3FallingEdge(),
        eventLine3FallingEdgeTimestamp(),
        eventLine3FallingEdgeFrameID(),
        eventLine4FallingEdge(),
        eventLine4FallingEdgeTimestamp(),
        eventLine4FallingEdgeFrameID(),
        eventLine5FallingEdge(),
        eventLine5FallingEdgeTimestamp(),
        eventLine5FallingEdgeFrameID(),
        eventLine6FallingEdge(),
        eventLine6FallingEdgeTimestamp(),
        eventLine6FallingEdgeFrameID(),
        eventLine7FallingEdge(),
        eventLine7FallingEdgeTimestamp(),
        eventLine7FallingEdgeFrameID(),
        eventLine8FallingEdge(),
        eventLine8FallingEdgeTimestamp(),
        eventLine8FallingEdgeFrameID(),
        eventLine9FallingEdge(),
        eventLine9FallingEdgeTimestamp(),
        eventLine9FallingEdgeFrameID(),
        eventLine10FallingEdge(),
        eventLine10FallingEdgeTimestamp(),
        eventLine10FallingEdgeFrameID(),
        eventLine11FallingEdge(),
        eventLine11FallingEdgeTimestamp(),
        eventLine11FallingEdgeFrameID(),
        eventLine12FallingEdge(),
        eventLine12FallingEdgeTimestamp(),
        eventLine12FallingEdgeFrameID(),
        eventLine13FallingEdge(),
        eventLine13FallingEdgeTimestamp(),
        eventLine13FallingEdgeFrameID(),
        eventLine14FallingEdge(),
        eventLine14FallingEdgeTimestamp(),
        eventLine14FallingEdgeFrameID(),
        eventLine0AnyEdge(),
        eventLine0AnyEdgeTimestamp(),
        eventLine0AnyEdgeFrameID(),
        eventLine1AnyEdge(),
        eventLine1AnyEdgeTimestamp(),
        eventLine1AnyEdgeFrameID(),
        eventLine2AnyEdge(),
        eventLine2AnyEdgeTimestamp(),
        eventLine2AnyEdgeFrameID(),
        eventLine3AnyEdge(),
        eventLine3AnyEdgeTimestamp(),
        eventLine3AnyEdgeFrameID(),
        eventLine4AnyEdge(),
        eventLine4AnyEdgeTimestamp(),
        eventLine4AnyEdgeFrameID(),
        eventLine5AnyEdge(),
        eventLine5AnyEdgeTimestamp(),
        eventLine5AnyEdgeFrameID(),
        eventLine6AnyEdge(),
        eventLine6AnyEdgeTimestamp(),
        eventLine6AnyEdgeFrameID(),
        eventLine7AnyEdge(),
        eventLine7AnyEdgeTimestamp(),
        eventLine7AnyEdgeFrameID(),
        eventLine8AnyEdge(),
        eventLine8AnyEdgeTimestamp(),
        eventLine8AnyEdgeFrameID(),
        eventLine9AnyEdge(),
        eventLine9AnyEdgeTimestamp(),
        eventLine9AnyEdgeFrameID(),
        eventLine10AnyEdge(),
        eventLine10AnyEdgeTimestamp(),
        eventLine10AnyEdgeFrameID(),
        eventLine11AnyEdge(),
        eventLine11AnyEdgeTimestamp(),
        eventLine11AnyEdgeFrameID(),
        eventLine12AnyEdge(),
        eventLine12AnyEdgeTimestamp(),
        eventLine12AnyEdgeFrameID(),
        eventLine13AnyEdge(),
        eventLine13AnyEdgeTimestamp(),
        eventLine13AnyEdgeFrameID(),
        eventLine14AnyEdge(),
        eventLine14AnyEdgeTimestamp(),
        eventLine14AnyEdgeFrameID(),
        eventError(),
        eventErrorTimestamp(),
        eventErrorFrameID(),
        eventErrorCode()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( eventSelector, "EventSelector" );
        locator.bindComponent( eventNotification, "EventNotification" );
        locator.bindComponent( eventAcquisitionTrigger, "EventAcquisitionTrigger" );
        locator.bindComponent( eventAcquisitionTriggerTimestamp, "EventAcquisitionTriggerTimestamp" );
        locator.bindComponent( eventAcquisitionTriggerFrameID, "EventAcquisitionTriggerFrameID" );
        locator.bindComponent( eventAcquisitionStart, "EventAcquisitionStart" );
        locator.bindComponent( eventAcquisitionStartTimestamp, "EventAcquisitionStartTimestamp" );
        locator.bindComponent( eventAcquisitionStartFrameID, "EventAcquisitionStartFrameID" );
        locator.bindComponent( eventAcquisitionEnd, "EventAcquisitionEnd" );
        locator.bindComponent( eventAcquisitionEndTimestamp, "EventAcquisitionEndTimestamp" );
        locator.bindComponent( eventAcquisitionEndFrameID, "EventAcquisitionEndFrameID" );
        locator.bindComponent( eventAcquisitionTransferStart, "EventAcquisitionTransferStart" );
        locator.bindComponent( eventAcquisitionTransferStartTimestamp, "EventAcquisitionTransferStartTimestamp" );
        locator.bindComponent( eventAcquisitionTransferStartFrameID, "EventAcquisitionTransferStartFrameID" );
        locator.bindComponent( eventAcquisitionTransferEnd, "EventAcquisitionTransferEnd" );
        locator.bindComponent( eventAcquisitionTransferEndTimestamp, "EventAcquisitionTransferEndTimestamp" );
        locator.bindComponent( eventAcquisitionTransferEndFrameID, "EventAcquisitionTransferEndFrameID" );
        locator.bindComponent( eventAcquisitionError, "EventAcquisitionError" );
        locator.bindComponent( eventAcquisitionErrorTimestamp, "EventAcquisitionErrorTimestamp" );
        locator.bindComponent( eventAcquisitionErrorFrameID, "EventAcquisitionErrorFrameID" );
        locator.bindComponent( eventFrameTrigger, "EventFrameTrigger" );
        locator.bindComponent( eventFrameTriggerTimestamp, "EventFrameTriggerTimestamp" );
        locator.bindComponent( eventFrameTriggerFrameID, "EventFrameTriggerFrameID" );
        locator.bindComponent( eventFrameStart, "EventFrameStart" );
        locator.bindComponent( eventFrameStartTimestamp, "EventFrameStartTimestamp" );
        locator.bindComponent( eventFrameStartFrameID, "EventFrameStartFrameID" );
        locator.bindComponent( eventFrameEnd, "EventFrameEnd" );
        locator.bindComponent( eventFrameEndTimestamp, "EventFrameEndTimestamp" );
        locator.bindComponent( eventFrameEndFrameID, "EventFrameEndFrameID" );
        locator.bindComponent( eventFrameBurstStart, "EventFrameBurstStart" );
        locator.bindComponent( eventFrameBurstStartTimestamp, "EventFrameBurstStartTimestamp" );
        locator.bindComponent( eventFrameBurstStartFrameID, "EventFrameBurstStartFrameID" );
        locator.bindComponent( eventFrameBurstEnd, "EventFrameBurstEnd" );
        locator.bindComponent( eventFrameBurstEndTimestamp, "EventFrameBurstEndTimestamp" );
        locator.bindComponent( eventFrameBurstEndFrameID, "EventFrameBurstEndFrameID" );
        locator.bindComponent( eventFrameTransferStart, "EventFrameTransferStart" );
        locator.bindComponent( eventFrameTransferStartTimestamp, "EventFrameTransferStartTimestamp" );
        locator.bindComponent( eventFrameTransferStartFrameID, "EventFrameTransferStartFrameID" );
        locator.bindComponent( eventFrameTransferEnd, "EventFrameTransferEnd" );
        locator.bindComponent( eventFrameTransferEndTimestamp, "EventFrameTransferEndTimestamp" );
        locator.bindComponent( eventFrameTransferEndFrameID, "EventFrameTransferEndFrameID" );
        locator.bindComponent( eventExposureStart, "EventExposureStart" );
        locator.bindComponent( eventExposureStartTimestamp, "EventExposureStartTimestamp" );
        locator.bindComponent( eventExposureStartFrameID, "EventExposureStartFrameID" );
        locator.bindComponent( eventExposureEnd, "EventExposureEnd" );
        locator.bindComponent( eventExposureEndTimestamp, "EventExposureEndTimestamp" );
        locator.bindComponent( eventExposureEndFrameID, "EventExposureEndFrameID" );
        locator.bindComponent( eventCounter0Start, "EventCounter0Start" );
        locator.bindComponent( eventCounter0StartTimestamp, "EventCounter0StartTimestamp" );
        locator.bindComponent( eventCounter0StartFrameID, "EventCounter0StartFrameID" );
        locator.bindComponent( eventCounter1Start, "EventCounter1Start" );
        locator.bindComponent( eventCounter1StartTimestamp, "EventCounter1StartTimestamp" );
        locator.bindComponent( eventCounter1StartFrameID, "EventCounter1StartFrameID" );
        locator.bindComponent( eventCounter2Start, "EventCounter2Start" );
        locator.bindComponent( eventCounter2StartTimestamp, "EventCounter2StartTimestamp" );
        locator.bindComponent( eventCounter2StartFrameID, "EventCounter2StartFrameID" );
        locator.bindComponent( eventCounter3Start, "EventCounter3Start" );
        locator.bindComponent( eventCounter3StartTimestamp, "EventCounter3StartTimestamp" );
        locator.bindComponent( eventCounter3StartFrameID, "EventCounter3StartFrameID" );
        locator.bindComponent( eventCounter4Start, "EventCounter4Start" );
        locator.bindComponent( eventCounter4StartTimestamp, "EventCounter4StartTimestamp" );
        locator.bindComponent( eventCounter4StartFrameID, "EventCounter4StartFrameID" );
        locator.bindComponent( eventCounter5Start, "EventCounter5Start" );
        locator.bindComponent( eventCounter5StartTimestamp, "EventCounter5StartTimestamp" );
        locator.bindComponent( eventCounter5StartFrameID, "EventCounter5StartFrameID" );
        locator.bindComponent( eventCounter6Start, "EventCounter6Start" );
        locator.bindComponent( eventCounter6StartTimestamp, "EventCounter6StartTimestamp" );
        locator.bindComponent( eventCounter6StartFrameID, "EventCounter6StartFrameID" );
        locator.bindComponent( eventCounter7Start, "EventCounter7Start" );
        locator.bindComponent( eventCounter7StartTimestamp, "EventCounter7StartTimestamp" );
        locator.bindComponent( eventCounter7StartFrameID, "EventCounter7StartFrameID" );
        locator.bindComponent( eventCounter8Start, "EventCounter8Start" );
        locator.bindComponent( eventCounter8StartTimestamp, "EventCounter8StartTimestamp" );
        locator.bindComponent( eventCounter8StartFrameID, "EventCounter8StartFrameID" );
        locator.bindComponent( eventCounter9Start, "EventCounter9Start" );
        locator.bindComponent( eventCounter9StartTimestamp, "EventCounter9StartTimestamp" );
        locator.bindComponent( eventCounter9StartFrameID, "EventCounter9StartFrameID" );
        locator.bindComponent( eventCounter10Start, "EventCounter10Start" );
        locator.bindComponent( eventCounter10StartTimestamp, "EventCounter10StartTimestamp" );
        locator.bindComponent( eventCounter10StartFrameID, "EventCounter10StartFrameID" );
        locator.bindComponent( eventCounter11Start, "EventCounter11Start" );
        locator.bindComponent( eventCounter11StartTimestamp, "EventCounter11StartTimestamp" );
        locator.bindComponent( eventCounter11StartFrameID, "EventCounter11StartFrameID" );
        locator.bindComponent( eventCounter12Start, "EventCounter12Start" );
        locator.bindComponent( eventCounter12StartTimestamp, "EventCounter12StartTimestamp" );
        locator.bindComponent( eventCounter12StartFrameID, "EventCounter12StartFrameID" );
        locator.bindComponent( eventCounter13Start, "EventCounter13Start" );
        locator.bindComponent( eventCounter13StartTimestamp, "EventCounter13StartTimestamp" );
        locator.bindComponent( eventCounter13StartFrameID, "EventCounter13StartFrameID" );
        locator.bindComponent( eventCounter14Start, "EventCounter14Start" );
        locator.bindComponent( eventCounter14StartTimestamp, "EventCounter14StartTimestamp" );
        locator.bindComponent( eventCounter14StartFrameID, "EventCounter14StartFrameID" );
        locator.bindComponent( eventCounter0End, "EventCounter0End" );
        locator.bindComponent( eventCounter0EndTimestamp, "EventCounter0EndTimestamp" );
        locator.bindComponent( eventCounter0EndFrameID, "EventCounter0EndFrameID" );
        locator.bindComponent( eventCounter1End, "EventCounter1End" );
        locator.bindComponent( eventCounter1EndTimestamp, "EventCounter1EndTimestamp" );
        locator.bindComponent( eventCounter1EndFrameID, "EventCounter1EndFrameID" );
        locator.bindComponent( eventCounter2End, "EventCounter2End" );
        locator.bindComponent( eventCounter2EndTimestamp, "EventCounter2EndTimestamp" );
        locator.bindComponent( eventCounter2EndFrameID, "EventCounter2EndFrameID" );
        locator.bindComponent( eventCounter3End, "EventCounter3End" );
        locator.bindComponent( eventCounter3EndTimestamp, "EventCounter3EndTimestamp" );
        locator.bindComponent( eventCounter3EndFrameID, "EventCounter3EndFrameID" );
        locator.bindComponent( eventCounter4End, "EventCounter4End" );
        locator.bindComponent( eventCounter4EndTimestamp, "EventCounter4EndTimestamp" );
        locator.bindComponent( eventCounter4EndFrameID, "EventCounter4EndFrameID" );
        locator.bindComponent( eventCounter5End, "EventCounter5End" );
        locator.bindComponent( eventCounter5EndTimestamp, "EventCounter5EndTimestamp" );
        locator.bindComponent( eventCounter5EndFrameID, "EventCounter5EndFrameID" );
        locator.bindComponent( eventCounter6End, "EventCounter6End" );
        locator.bindComponent( eventCounter6EndTimestamp, "EventCounter6EndTimestamp" );
        locator.bindComponent( eventCounter6EndFrameID, "EventCounter6EndFrameID" );
        locator.bindComponent( eventCounter7End, "EventCounter7End" );
        locator.bindComponent( eventCounter7EndTimestamp, "EventCounter7EndTimestamp" );
        locator.bindComponent( eventCounter7EndFrameID, "EventCounter7EndFrameID" );
        locator.bindComponent( eventCounter8End, "EventCounter8End" );
        locator.bindComponent( eventCounter8EndTimestamp, "EventCounter8EndTimestamp" );
        locator.bindComponent( eventCounter8EndFrameID, "EventCounter8EndFrameID" );
        locator.bindComponent( eventCounter9End, "EventCounter9End" );
        locator.bindComponent( eventCounter9EndTimestamp, "EventCounter9EndTimestamp" );
        locator.bindComponent( eventCounter9EndFrameID, "EventCounter9EndFrameID" );
        locator.bindComponent( eventCounter10End, "EventCounter10End" );
        locator.bindComponent( eventCounter10EndTimestamp, "EventCounter10EndTimestamp" );
        locator.bindComponent( eventCounter10EndFrameID, "EventCounter10EndFrameID" );
        locator.bindComponent( eventCounter11End, "EventCounter11End" );
        locator.bindComponent( eventCounter11EndTimestamp, "EventCounter11EndTimestamp" );
        locator.bindComponent( eventCounter11EndFrameID, "EventCounter11EndFrameID" );
        locator.bindComponent( eventCounter12End, "EventCounter12End" );
        locator.bindComponent( eventCounter12EndTimestamp, "EventCounter12EndTimestamp" );
        locator.bindComponent( eventCounter12EndFrameID, "EventCounter12EndFrameID" );
        locator.bindComponent( eventCounter13End, "EventCounter13End" );
        locator.bindComponent( eventCounter13EndTimestamp, "EventCounter13EndTimestamp" );
        locator.bindComponent( eventCounter13EndFrameID, "EventCounter13EndFrameID" );
        locator.bindComponent( eventCounter14End, "EventCounter14End" );
        locator.bindComponent( eventCounter14EndTimestamp, "EventCounter14EndTimestamp" );
        locator.bindComponent( eventCounter14EndFrameID, "EventCounter14EndFrameID" );
        locator.bindComponent( eventTimer0Start, "EventTimer0Start" );
        locator.bindComponent( eventTimer0StartTimestamp, "EventTimer0StartTimestamp" );
        locator.bindComponent( eventTimer0StartFrameID, "EventTimer0StartFrameID" );
        locator.bindComponent( eventTimer1Start, "EventTimer1Start" );
        locator.bindComponent( eventTimer1StartTimestamp, "EventTimer1StartTimestamp" );
        locator.bindComponent( eventTimer1StartFrameID, "EventTimer1StartFrameID" );
        locator.bindComponent( eventTimer2Start, "EventTimer2Start" );
        locator.bindComponent( eventTimer2StartTimestamp, "EventTimer2StartTimestamp" );
        locator.bindComponent( eventTimer2StartFrameID, "EventTimer2StartFrameID" );
        locator.bindComponent( eventTimer3Start, "EventTimer3Start" );
        locator.bindComponent( eventTimer3StartTimestamp, "EventTimer3StartTimestamp" );
        locator.bindComponent( eventTimer3StartFrameID, "EventTimer3StartFrameID" );
        locator.bindComponent( eventTimer4Start, "EventTimer4Start" );
        locator.bindComponent( eventTimer4StartTimestamp, "EventTimer4StartTimestamp" );
        locator.bindComponent( eventTimer4StartFrameID, "EventTimer4StartFrameID" );
        locator.bindComponent( eventTimer5Start, "EventTimer5Start" );
        locator.bindComponent( eventTimer5StartTimestamp, "EventTimer5StartTimestamp" );
        locator.bindComponent( eventTimer5StartFrameID, "EventTimer5StartFrameID" );
        locator.bindComponent( eventTimer6Start, "EventTimer6Start" );
        locator.bindComponent( eventTimer6StartTimestamp, "EventTimer6StartTimestamp" );
        locator.bindComponent( eventTimer6StartFrameID, "EventTimer6StartFrameID" );
        locator.bindComponent( eventTimer7Start, "EventTimer7Start" );
        locator.bindComponent( eventTimer7StartTimestamp, "EventTimer7StartTimestamp" );
        locator.bindComponent( eventTimer7StartFrameID, "EventTimer7StartFrameID" );
        locator.bindComponent( eventTimer8Start, "EventTimer8Start" );
        locator.bindComponent( eventTimer8StartTimestamp, "EventTimer8StartTimestamp" );
        locator.bindComponent( eventTimer8StartFrameID, "EventTimer8StartFrameID" );
        locator.bindComponent( eventTimer9Start, "EventTimer9Start" );
        locator.bindComponent( eventTimer9StartTimestamp, "EventTimer9StartTimestamp" );
        locator.bindComponent( eventTimer9StartFrameID, "EventTimer9StartFrameID" );
        locator.bindComponent( eventTimer10Start, "EventTimer10Start" );
        locator.bindComponent( eventTimer10StartTimestamp, "EventTimer10StartTimestamp" );
        locator.bindComponent( eventTimer10StartFrameID, "EventTimer10StartFrameID" );
        locator.bindComponent( eventTimer11Start, "EventTimer11Start" );
        locator.bindComponent( eventTimer11StartTimestamp, "EventTimer11StartTimestamp" );
        locator.bindComponent( eventTimer11StartFrameID, "EventTimer11StartFrameID" );
        locator.bindComponent( eventTimer12Start, "EventTimer12Start" );
        locator.bindComponent( eventTimer12StartTimestamp, "EventTimer12StartTimestamp" );
        locator.bindComponent( eventTimer12StartFrameID, "EventTimer12StartFrameID" );
        locator.bindComponent( eventTimer13Start, "EventTimer13Start" );
        locator.bindComponent( eventTimer13StartTimestamp, "EventTimer13StartTimestamp" );
        locator.bindComponent( eventTimer13StartFrameID, "EventTimer13StartFrameID" );
        locator.bindComponent( eventTimer14Start, "EventTimer14Start" );
        locator.bindComponent( eventTimer14StartTimestamp, "EventTimer14StartTimestamp" );
        locator.bindComponent( eventTimer14StartFrameID, "EventTimer14StartFrameID" );
        locator.bindComponent( eventTimer0End, "EventTimer0End" );
        locator.bindComponent( eventTimer0EndTimestamp, "EventTimer0EndTimestamp" );
        locator.bindComponent( eventTimer0EndFrameID, "EventTimer0EndFrameID" );
        locator.bindComponent( eventTimer1End, "EventTimer1End" );
        locator.bindComponent( eventTimer1EndTimestamp, "EventTimer1EndTimestamp" );
        locator.bindComponent( eventTimer1EndFrameID, "EventTimer1EndFrameID" );
        locator.bindComponent( eventTimer2End, "EventTimer2End" );
        locator.bindComponent( eventTimer2EndTimestamp, "EventTimer2EndTimestamp" );
        locator.bindComponent( eventTimer2EndFrameID, "EventTimer2EndFrameID" );
        locator.bindComponent( eventTimer3End, "EventTimer3End" );
        locator.bindComponent( eventTimer3EndTimestamp, "EventTimer3EndTimestamp" );
        locator.bindComponent( eventTimer3EndFrameID, "EventTimer3EndFrameID" );
        locator.bindComponent( eventTimer4End, "EventTimer4End" );
        locator.bindComponent( eventTimer4EndTimestamp, "EventTimer4EndTimestamp" );
        locator.bindComponent( eventTimer4EndFrameID, "EventTimer4EndFrameID" );
        locator.bindComponent( eventTimer5End, "EventTimer5End" );
        locator.bindComponent( eventTimer5EndTimestamp, "EventTimer5EndTimestamp" );
        locator.bindComponent( eventTimer5EndFrameID, "EventTimer5EndFrameID" );
        locator.bindComponent( eventTimer6End, "EventTimer6End" );
        locator.bindComponent( eventTimer6EndTimestamp, "EventTimer6EndTimestamp" );
        locator.bindComponent( eventTimer6EndFrameID, "EventTimer6EndFrameID" );
        locator.bindComponent( eventTimer7End, "EventTimer7End" );
        locator.bindComponent( eventTimer7EndTimestamp, "EventTimer7EndTimestamp" );
        locator.bindComponent( eventTimer7EndFrameID, "EventTimer7EndFrameID" );
        locator.bindComponent( eventTimer8End, "EventTimer8End" );
        locator.bindComponent( eventTimer8EndTimestamp, "EventTimer8EndTimestamp" );
        locator.bindComponent( eventTimer8EndFrameID, "EventTimer8EndFrameID" );
        locator.bindComponent( eventTimer9End, "EventTimer9End" );
        locator.bindComponent( eventTimer9EndTimestamp, "EventTimer9EndTimestamp" );
        locator.bindComponent( eventTimer9EndFrameID, "EventTimer9EndFrameID" );
        locator.bindComponent( eventTimer10End, "EventTimer10End" );
        locator.bindComponent( eventTimer10EndTimestamp, "EventTimer10EndTimestamp" );
        locator.bindComponent( eventTimer10EndFrameID, "EventTimer10EndFrameID" );
        locator.bindComponent( eventTimer11End, "EventTimer11End" );
        locator.bindComponent( eventTimer11EndTimestamp, "EventTimer11EndTimestamp" );
        locator.bindComponent( eventTimer11EndFrameID, "EventTimer11EndFrameID" );
        locator.bindComponent( eventTimer12End, "EventTimer12End" );
        locator.bindComponent( eventTimer12EndTimestamp, "EventTimer12EndTimestamp" );
        locator.bindComponent( eventTimer12EndFrameID, "EventTimer12EndFrameID" );
        locator.bindComponent( eventTimer13End, "EventTimer13End" );
        locator.bindComponent( eventTimer13EndTimestamp, "EventTimer13EndTimestamp" );
        locator.bindComponent( eventTimer13EndFrameID, "EventTimer13EndFrameID" );
        locator.bindComponent( eventTimer14End, "EventTimer14End" );
        locator.bindComponent( eventTimer14EndTimestamp, "EventTimer14EndTimestamp" );
        locator.bindComponent( eventTimer14EndFrameID, "EventTimer14EndFrameID" );
        locator.bindComponent( eventLine0RisingEdge, "EventLine0RisingEdge" );
        locator.bindComponent( eventLine0RisingEdgeTimestamp, "EventLine0RisingEdgeTimestamp" );
        locator.bindComponent( eventLine0RisingEdgeFrameID, "EventLine0RisingEdgeFrameID" );
        locator.bindComponent( eventLine1RisingEdge, "EventLine1RisingEdge" );
        locator.bindComponent( eventLine1RisingEdgeTimestamp, "EventLine1RisingEdgeTimestamp" );
        locator.bindComponent( eventLine1RisingEdgeFrameID, "EventLine1RisingEdgeFrameID" );
        locator.bindComponent( eventLine2RisingEdge, "EventLine2RisingEdge" );
        locator.bindComponent( eventLine2RisingEdgeTimestamp, "EventLine2RisingEdgeTimestamp" );
        locator.bindComponent( eventLine2RisingEdgeFrameID, "EventLine2RisingEdgeFrameID" );
        locator.bindComponent( eventLine3RisingEdge, "EventLine3RisingEdge" );
        locator.bindComponent( eventLine3RisingEdgeTimestamp, "EventLine3RisingEdgeTimestamp" );
        locator.bindComponent( eventLine3RisingEdgeFrameID, "EventLine3RisingEdgeFrameID" );
        locator.bindComponent( eventLine4RisingEdge, "EventLine4RisingEdge" );
        locator.bindComponent( eventLine4RisingEdgeTimestamp, "EventLine4RisingEdgeTimestamp" );
        locator.bindComponent( eventLine4RisingEdgeFrameID, "EventLine4RisingEdgeFrameID" );
        locator.bindComponent( eventLine5RisingEdge, "EventLine5RisingEdge" );
        locator.bindComponent( eventLine5RisingEdgeTimestamp, "EventLine5RisingEdgeTimestamp" );
        locator.bindComponent( eventLine5RisingEdgeFrameID, "EventLine5RisingEdgeFrameID" );
        locator.bindComponent( eventLine6RisingEdge, "EventLine6RisingEdge" );
        locator.bindComponent( eventLine6RisingEdgeTimestamp, "EventLine6RisingEdgeTimestamp" );
        locator.bindComponent( eventLine6RisingEdgeFrameID, "EventLine6RisingEdgeFrameID" );
        locator.bindComponent( eventLine7RisingEdge, "EventLine7RisingEdge" );
        locator.bindComponent( eventLine7RisingEdgeTimestamp, "EventLine7RisingEdgeTimestamp" );
        locator.bindComponent( eventLine7RisingEdgeFrameID, "EventLine7RisingEdgeFrameID" );
        locator.bindComponent( eventLine8RisingEdge, "EventLine8RisingEdge" );
        locator.bindComponent( eventLine8RisingEdgeTimestamp, "EventLine8RisingEdgeTimestamp" );
        locator.bindComponent( eventLine8RisingEdgeFrameID, "EventLine8RisingEdgeFrameID" );
        locator.bindComponent( eventLine9RisingEdge, "EventLine9RisingEdge" );
        locator.bindComponent( eventLine9RisingEdgeTimestamp, "EventLine9RisingEdgeTimestamp" );
        locator.bindComponent( eventLine9RisingEdgeFrameID, "EventLine9RisingEdgeFrameID" );
        locator.bindComponent( eventLine10RisingEdge, "EventLine10RisingEdge" );
        locator.bindComponent( eventLine10RisingEdgeTimestamp, "EventLine10RisingEdgeTimestamp" );
        locator.bindComponent( eventLine10RisingEdgeFrameID, "EventLine10RisingEdgeFrameID" );
        locator.bindComponent( eventLine11RisingEdge, "EventLine11RisingEdge" );
        locator.bindComponent( eventLine11RisingEdgeTimestamp, "EventLine11RisingEdgeTimestamp" );
        locator.bindComponent( eventLine11RisingEdgeFrameID, "EventLine11RisingEdgeFrameID" );
        locator.bindComponent( eventLine12RisingEdge, "EventLine12RisingEdge" );
        locator.bindComponent( eventLine12RisingEdgeTimestamp, "EventLine12RisingEdgeTimestamp" );
        locator.bindComponent( eventLine12RisingEdgeFrameID, "EventLine12RisingEdgeFrameID" );
        locator.bindComponent( eventLine13RisingEdge, "EventLine13RisingEdge" );
        locator.bindComponent( eventLine13RisingEdgeTimestamp, "EventLine13RisingEdgeTimestamp" );
        locator.bindComponent( eventLine13RisingEdgeFrameID, "EventLine13RisingEdgeFrameID" );
        locator.bindComponent( eventLine14RisingEdge, "EventLine14RisingEdge" );
        locator.bindComponent( eventLine14RisingEdgeTimestamp, "EventLine14RisingEdgeTimestamp" );
        locator.bindComponent( eventLine14RisingEdgeFrameID, "EventLine14RisingEdgeFrameID" );
        locator.bindComponent( eventLine0FallingEdge, "EventLine0FallingEdge" );
        locator.bindComponent( eventLine0FallingEdgeTimestamp, "EventLine0FallingEdgeTimestamp" );
        locator.bindComponent( eventLine0FallingEdgeFrameID, "EventLine0FallingEdgeFrameID" );
        locator.bindComponent( eventLine1FallingEdge, "EventLine1FallingEdge" );
        locator.bindComponent( eventLine1FallingEdgeTimestamp, "EventLine1FallingEdgeTimestamp" );
        locator.bindComponent( eventLine1FallingEdgeFrameID, "EventLine1FallingEdgeFrameID" );
        locator.bindComponent( eventLine2FallingEdge, "EventLine2FallingEdge" );
        locator.bindComponent( eventLine2FallingEdgeTimestamp, "EventLine2FallingEdgeTimestamp" );
        locator.bindComponent( eventLine2FallingEdgeFrameID, "EventLine2FallingEdgeFrameID" );
        locator.bindComponent( eventLine3FallingEdge, "EventLine3FallingEdge" );
        locator.bindComponent( eventLine3FallingEdgeTimestamp, "EventLine3FallingEdgeTimestamp" );
        locator.bindComponent( eventLine3FallingEdgeFrameID, "EventLine3FallingEdgeFrameID" );
        locator.bindComponent( eventLine4FallingEdge, "EventLine4FallingEdge" );
        locator.bindComponent( eventLine4FallingEdgeTimestamp, "EventLine4FallingEdgeTimestamp" );
        locator.bindComponent( eventLine4FallingEdgeFrameID, "EventLine4FallingEdgeFrameID" );
        locator.bindComponent( eventLine5FallingEdge, "EventLine5FallingEdge" );
        locator.bindComponent( eventLine5FallingEdgeTimestamp, "EventLine5FallingEdgeTimestamp" );
        locator.bindComponent( eventLine5FallingEdgeFrameID, "EventLine5FallingEdgeFrameID" );
        locator.bindComponent( eventLine6FallingEdge, "EventLine6FallingEdge" );
        locator.bindComponent( eventLine6FallingEdgeTimestamp, "EventLine6FallingEdgeTimestamp" );
        locator.bindComponent( eventLine6FallingEdgeFrameID, "EventLine6FallingEdgeFrameID" );
        locator.bindComponent( eventLine7FallingEdge, "EventLine7FallingEdge" );
        locator.bindComponent( eventLine7FallingEdgeTimestamp, "EventLine7FallingEdgeTimestamp" );
        locator.bindComponent( eventLine7FallingEdgeFrameID, "EventLine7FallingEdgeFrameID" );
        locator.bindComponent( eventLine8FallingEdge, "EventLine8FallingEdge" );
        locator.bindComponent( eventLine8FallingEdgeTimestamp, "EventLine8FallingEdgeTimestamp" );
        locator.bindComponent( eventLine8FallingEdgeFrameID, "EventLine8FallingEdgeFrameID" );
        locator.bindComponent( eventLine9FallingEdge, "EventLine9FallingEdge" );
        locator.bindComponent( eventLine9FallingEdgeTimestamp, "EventLine9FallingEdgeTimestamp" );
        locator.bindComponent( eventLine9FallingEdgeFrameID, "EventLine9FallingEdgeFrameID" );
        locator.bindComponent( eventLine10FallingEdge, "EventLine10FallingEdge" );
        locator.bindComponent( eventLine10FallingEdgeTimestamp, "EventLine10FallingEdgeTimestamp" );
        locator.bindComponent( eventLine10FallingEdgeFrameID, "EventLine10FallingEdgeFrameID" );
        locator.bindComponent( eventLine11FallingEdge, "EventLine11FallingEdge" );
        locator.bindComponent( eventLine11FallingEdgeTimestamp, "EventLine11FallingEdgeTimestamp" );
        locator.bindComponent( eventLine11FallingEdgeFrameID, "EventLine11FallingEdgeFrameID" );
        locator.bindComponent( eventLine12FallingEdge, "EventLine12FallingEdge" );
        locator.bindComponent( eventLine12FallingEdgeTimestamp, "EventLine12FallingEdgeTimestamp" );
        locator.bindComponent( eventLine12FallingEdgeFrameID, "EventLine12FallingEdgeFrameID" );
        locator.bindComponent( eventLine13FallingEdge, "EventLine13FallingEdge" );
        locator.bindComponent( eventLine13FallingEdgeTimestamp, "EventLine13FallingEdgeTimestamp" );
        locator.bindComponent( eventLine13FallingEdgeFrameID, "EventLine13FallingEdgeFrameID" );
        locator.bindComponent( eventLine14FallingEdge, "EventLine14FallingEdge" );
        locator.bindComponent( eventLine14FallingEdgeTimestamp, "EventLine14FallingEdgeTimestamp" );
        locator.bindComponent( eventLine14FallingEdgeFrameID, "EventLine14FallingEdgeFrameID" );
        locator.bindComponent( eventLine0AnyEdge, "EventLine0AnyEdge" );
        locator.bindComponent( eventLine0AnyEdgeTimestamp, "EventLine0AnyEdgeTimestamp" );
        locator.bindComponent( eventLine0AnyEdgeFrameID, "EventLine0AnyEdgeFrameID" );
        locator.bindComponent( eventLine1AnyEdge, "EventLine1AnyEdge" );
        locator.bindComponent( eventLine1AnyEdgeTimestamp, "EventLine1AnyEdgeTimestamp" );
        locator.bindComponent( eventLine1AnyEdgeFrameID, "EventLine1AnyEdgeFrameID" );
        locator.bindComponent( eventLine2AnyEdge, "EventLine2AnyEdge" );
        locator.bindComponent( eventLine2AnyEdgeTimestamp, "EventLine2AnyEdgeTimestamp" );
        locator.bindComponent( eventLine2AnyEdgeFrameID, "EventLine2AnyEdgeFrameID" );
        locator.bindComponent( eventLine3AnyEdge, "EventLine3AnyEdge" );
        locator.bindComponent( eventLine3AnyEdgeTimestamp, "EventLine3AnyEdgeTimestamp" );
        locator.bindComponent( eventLine3AnyEdgeFrameID, "EventLine3AnyEdgeFrameID" );
        locator.bindComponent( eventLine4AnyEdge, "EventLine4AnyEdge" );
        locator.bindComponent( eventLine4AnyEdgeTimestamp, "EventLine4AnyEdgeTimestamp" );
        locator.bindComponent( eventLine4AnyEdgeFrameID, "EventLine4AnyEdgeFrameID" );
        locator.bindComponent( eventLine5AnyEdge, "EventLine5AnyEdge" );
        locator.bindComponent( eventLine5AnyEdgeTimestamp, "EventLine5AnyEdgeTimestamp" );
        locator.bindComponent( eventLine5AnyEdgeFrameID, "EventLine5AnyEdgeFrameID" );
        locator.bindComponent( eventLine6AnyEdge, "EventLine6AnyEdge" );
        locator.bindComponent( eventLine6AnyEdgeTimestamp, "EventLine6AnyEdgeTimestamp" );
        locator.bindComponent( eventLine6AnyEdgeFrameID, "EventLine6AnyEdgeFrameID" );
        locator.bindComponent( eventLine7AnyEdge, "EventLine7AnyEdge" );
        locator.bindComponent( eventLine7AnyEdgeTimestamp, "EventLine7AnyEdgeTimestamp" );
        locator.bindComponent( eventLine7AnyEdgeFrameID, "EventLine7AnyEdgeFrameID" );
        locator.bindComponent( eventLine8AnyEdge, "EventLine8AnyEdge" );
        locator.bindComponent( eventLine8AnyEdgeTimestamp, "EventLine8AnyEdgeTimestamp" );
        locator.bindComponent( eventLine8AnyEdgeFrameID, "EventLine8AnyEdgeFrameID" );
        locator.bindComponent( eventLine9AnyEdge, "EventLine9AnyEdge" );
        locator.bindComponent( eventLine9AnyEdgeTimestamp, "EventLine9AnyEdgeTimestamp" );
        locator.bindComponent( eventLine9AnyEdgeFrameID, "EventLine9AnyEdgeFrameID" );
        locator.bindComponent( eventLine10AnyEdge, "EventLine10AnyEdge" );
        locator.bindComponent( eventLine10AnyEdgeTimestamp, "EventLine10AnyEdgeTimestamp" );
        locator.bindComponent( eventLine10AnyEdgeFrameID, "EventLine10AnyEdgeFrameID" );
        locator.bindComponent( eventLine11AnyEdge, "EventLine11AnyEdge" );
        locator.bindComponent( eventLine11AnyEdgeTimestamp, "EventLine11AnyEdgeTimestamp" );
        locator.bindComponent( eventLine11AnyEdgeFrameID, "EventLine11AnyEdgeFrameID" );
        locator.bindComponent( eventLine12AnyEdge, "EventLine12AnyEdge" );
        locator.bindComponent( eventLine12AnyEdgeTimestamp, "EventLine12AnyEdgeTimestamp" );
        locator.bindComponent( eventLine12AnyEdgeFrameID, "EventLine12AnyEdgeFrameID" );
        locator.bindComponent( eventLine13AnyEdge, "EventLine13AnyEdge" );
        locator.bindComponent( eventLine13AnyEdgeTimestamp, "EventLine13AnyEdgeTimestamp" );
        locator.bindComponent( eventLine13AnyEdgeFrameID, "EventLine13AnyEdgeFrameID" );
        locator.bindComponent( eventLine14AnyEdge, "EventLine14AnyEdge" );
        locator.bindComponent( eventLine14AnyEdgeTimestamp, "EventLine14AnyEdgeTimestamp" );
        locator.bindComponent( eventLine14AnyEdgeFrameID, "EventLine14AnyEdgeFrameID" );
        locator.bindComponent( eventError, "EventError" );
        locator.bindComponent( eventErrorTimestamp, "EventErrorTimestamp" );
        locator.bindComponent( eventErrorFrameID, "EventErrorFrameID" );
        locator.bindComponent( eventErrorCode, "EventErrorCode" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Selects which Event to signal to the host application.
    /**
     *  Selects which Event to signal to the host application.
     *
     *  The following string values might be valid for this feature:
     *  - \b AcquisitionTrigger (Display string: 'Acquisition Trigger'): Device just received a trigger for the Acquisition of one or many Frames.
     *  - \b AcquisitionStart (Display string: 'Acquisition Start'): Device just started the Acquisition of one or many Frames.
     *  - \b AcquisitionEnd (Display string: 'Acquisition End'): Device just completed the Acquisition of one or many Frames.
     *  - \b AcquisitionTransferStart (Display string: 'Acquisition Transfer Start'): Device just started the transfer of one or many Frames.
     *  - \b AcquisitionTransferEnd (Display string: 'Acquisition Transfer End'): Device just completed the transfer of one or many Frames.
     *  - \b AcquisitionError (Display string: 'Acquisition Error'): Device just detected an error during the active Acquisition.
     *  - \b FrameTrigger (Display string: 'Frame Trigger'): Device just received a trigger to start the capture of one Frame.
     *  - \b FrameStart (Display string: 'Frame Start'): Device just started the capture of one Frame.
     *  - \b FrameEnd (Display string: 'Frame End'): Device just completed the capture of one Frame.
     *  - \b FrameBurstStart (Display string: 'Frame Burst Start'): Device just started the capture of a burst of Frames.
     *  - \b FrameBurstEnd (Display string: 'Frame Burst End'): Device just completed the capture of a burst of Frames.
     *  - \b FrameTransferStart (Display string: 'Frame Transfer Start'): Device just started the transfer of one Frame.
     *  - \b FrameTransferEnd (Display string: 'Frame Transfer End'): Device just completed the transfer of one Frame.
     *  - \b ExposureStart (Display string: 'Exposure Start'): Device just started the exposure of one Frame (or Line).
     *  - \b ExposureEnd (Display string: 'Exposure End'): Device just completed the exposure of one Frame (or Line).
     *  - \b Stream0TransferStart (Display string: 'Stream 0 Transfer Start'): Device just started the transfer of one or many Blocks.
     *  - \b Stream0TransferEnd (Display string: 'Stream 0 Transfer End'): Device just completed the transfer of one or many Blocks.
     *  - \b Stream0TransferPause (Display string: 'Stream 0 Transfer Pause'): Device just paused the transfer.
     *  - \b Stream0TransferResume (Display string: 'Stream 0 Transfer Resume'): Device just resumed the transfer.
     *  - \b Stream0TransferBlockStart (Display string: 'Stream 0 Transfer Block Start'): Device just started the transfer of one Block.
     *  - \b Stream0TransferBlockEnd (Display string: 'Stream 0 Transfer Block End'): Device just completed the transfer of one Block.
     *  - \b Stream0TransferBlockTrigger (Display string: 'Stream 0 Transfer Block Trigger'): Device just received a trigger to start the transfer of one Block.
     *  - \b Stream0TransferBurstStart (Display string: 'Stream 0 Transfer Burst Start'): Device just started the transfer of a burst of Blocks.
     *  - \b Stream0TransferBurstEnd (Display string: 'Stream 0 Transfer Burst End'): Device just completed the transfer of a burst of Blocks.
     *  - \b Stream0TransferOverflow (Display string: 'Stream 0 Transfer Overflow'): Device transfer queue overflowed.
     *  - \b SequencerSetChange (Display string: 'Sequencer Set Change'): Device sequencer set has changed.
     *  - \b Counter0Start (Display string: 'Counter 0 Start'): The event will be generated when counter 0 starts counting.
     *  - \b Counter1Start (Display string: 'Counter 1 Start'): The event will be generated when counter 1 starts counting.
     *  - \b Counter#2#Start (Display string: 'Counter #2# Start'): The event will be generated when counter #2# starts counting.
     *  - \b Counter0End (Display string: 'Counter 0 End'): The event will be generated when counter 0 ends counting.
     *  - \b Counter1End (Display string: 'Counter 1 End'): The event will be generated when counter 1 ends counting.
     *  - \b Counter#2#End (Display string: 'Counter #2# End'): The event will be generated when counter #2# ends counting.
     *  - \b Timer0Start (Display string: 'Timer 0 Start'): The event will be generated when Timer 0 starts counting.
     *  - \b Timer1Start (Display string: 'Timer 1 Start'): The event will be generated when Timer 1 starts counting.
     *  - \b Timer#2#Start (Display string: 'Timer #2# Start'): The event will be generated when Timer #2# starts counting.
     *  - \b Timer0End (Display string: 'Timer 0 End'): The event will be generated when Timer 0 ends counting.
     *  - \b Timer1End (Display string: 'Timer 1 End'): The event will be generated when Timer 1 ends counting.
     *  - \b Timer#2#End (Display string: 'Timer #2# End'): The event will be generated when Timer #2# ends counting.
     *  - \b Encoder0Stopped (Display string: 'Encoder 0 Stopped'): The event will be generated when the Encoder 0 stops for longer than EncoderTimeout.
     *  - \b Encoder1Stopped (Display string: 'Encoder 1 Stopped'): The event will be generated when the Encoder 1 stops for longer than EncoderTimeout.
     *  - \b Encoder#2#Stopped (Display string: 'Encoder #2# Stopped'): The event will be generated when the Encoder #2# stops for longer than EncoderTimeout.
     *  - \b Encoder0Restarted (Display string: 'Encoder 0 Restarted'): The event will be generated when the Encoder 0 restarts moving.
     *  - \b Encoder1Restarted (Display string: 'Encoder 1 Restarted'): The event will be generated when the Encoder 1 restarts moving.
     *  - \b Encoder#2#Restarted (Display string: 'Encoder #2# Restarted'): The event will be generated when the Encoder #2# restarts moving.
     *  - \b Line0RisingEdge (Display string: 'Line 0 Rising Edge'): The event will be generated when a Rising Edge is detected on the Line 0.
     *  - \b Line1RisingEdge (Display string: 'Line 1 Rising Edge'): The event will be generated when a Rising Edge is detected on the Line 1.
     *  - \b Line#2#RisingEdge (Display string: 'Line #2# Rising Edge'): The event will be generated when a Rising Edge is detected on the Line #2#.
     *  - \b Line0FallingEdge (Display string: 'Line 0 Falling Edge'): The event will be generated when a Falling Edge is detected on the Line 0.
     *  - \b Line1FallingEdge (Display string: 'Line 1 Falling Edge'): The event will be generated when a Falling Edge is detected on the Line 1.
     *  - \b Line#2#FallingEdge (Display string: 'Line #2# Falling Edge'): The event will be generated when a Falling Edge is detected on the Line #2#.
     *  - \b Line0AnyEdge (Display string: 'Line 0 Any Edge'): The event will be generated when a Falling or Rising Edge is detected on the Line 0.
     *  - \b Line1AnyEdge (Display string: 'Line 1 Any Edge'): The event will be generated when a Falling or Rising Edge is detected on the Line 1.
     *  - \b Line#2#AnyEdge (Display string: 'Line #2# Any Edge'): The event will be generated when a Falling or Rising Edge is detected on the Line #2#.
     *  - \b LinkTrigger0 (Display string: 'Link Trigger 0'): The event will be generated when a Rising Edge is detected on the LinkTrigger 0.
     *  - \b LinkTrigger1 (Display string: 'Link Trigger 1'): The event will be generated when a Rising Edge is detected on the LinkTrigger 1.
     *  - \b LinkTrigger#2# (Display string: 'Link Trigger #2#'): The event will be generated when a Rising Edge is detected on the LinkTrigger #2#.
     *  - \b ActionLate (Display string: 'Action Late'): Then event will be generated when a valid scheduled action command is received and is scheduled to be executed at a time that is already past.
     *  - \b LinkSpeedChange (Display string: 'Link Speed Change'): Then event will be generated when the link speed has changed.
     *  - \b Error (Display string: 'Error'): Device just detected an error during the active Acquisition.
     *  - \b Test (Display string: 'Test'): The test event will be generated when the device receives the TestEventGenerate command(EventNotification for the Test event is always On).
     *  - \b PrimaryApplicationSwitch (Display string: 'Primary Application Switch'): Then event will be generated when a primary application switchover has been granted.
     *  - \b Counter2Start (Display string: 'Counter 2 Start'): The event will be generated when counter 2 starts counting.
     *  - \b Counter3Start (Display string: 'Counter 3 Start'): The event will be generated when counter 3 starts counting.
     *  - \b Counter4Start (Display string: 'Counter 4 Start'): The event will be generated when counter 4 starts counting.
     *  - \b Counter5Start (Display string: 'Counter 5 Start'): The event will be generated when counter 5 starts counting.
     *  - \b Counter6Start (Display string: 'Counter 6 Start'): The event will be generated when counter 6 starts counting.
     *  - \b Counter7Start (Display string: 'Counter 7 Start'): The event will be generated when counter 7 starts counting.
     *  - \b Counter8Start (Display string: 'Counter 8 Start'): The event will be generated when counter 8 starts counting.
     *  - \b Counter9Start (Display string: 'Counter 9 Start'): The event will be generated when counter 9 starts counting.
     *  - \b Counter10Start (Display string: 'Counter 10 Start'): The event will be generated when counter 10 starts counting.
     *  - \b Counter11Start (Display string: 'Counter 11 Start'): The event will be generated when counter 11 starts counting.
     *  - \b Counter12Start (Display string: 'Counter 12 Start'): The event will be generated when counter 12 starts counting.
     *  - \b Counter13Start (Display string: 'Counter 13 Start'): The event will be generated when counter 13 starts counting.
     *  - \b Counter14Start (Display string: 'Counter 14 Start'): The event will be generated when counter 14 starts counting.
     *  - \b Counter15Start (Display string: 'Counter 15 Start'): The event will be generated when counter 15 starts counting.
     *  - \b Counter2End (Display string: 'Counter 2 End'): The event will be generated when counter 2 ends counting.
     *  - \b Counter3End (Display string: 'Counter 3 End'): The event will be generated when counter 3 ends counting.
     *  - \b Counter4End (Display string: 'Counter 4 End'): The event will be generated when counter 4 ends counting.
     *  - \b Counter5End (Display string: 'Counter 5 End'): The event will be generated when counter 5 ends counting.
     *  - \b Counter6End (Display string: 'Counter 6 End'): The event will be generated when counter 6 ends counting.
     *  - \b Counter7End (Display string: 'Counter 7 End'): The event will be generated when counter 7 ends counting.
     *  - \b Counter8End (Display string: 'Counter 8 End'): The event will be generated when counter 8 ends counting.
     *  - \b Counter9End (Display string: 'Counter 9 End'): The event will be generated when counter 9 ends counting.
     *  - \b Counter10End (Display string: 'Counter 10 End'): The event will be generated when counter 10 ends counting.
     *  - \b Counter11End (Display string: 'Counter 11 End'): The event will be generated when counter 11 ends counting.
     *  - \b Counter12End (Display string: 'Counter 12 End'): The event will be generated when counter 12 ends counting.
     *  - \b Counter13End (Display string: 'Counter 13 End'): The event will be generated when counter 13 ends counting.
     *  - \b Counter14End (Display string: 'Counter 14 End'): The event will be generated when counter 14 ends counting.
     *  - \b Counter15End (Display string: 'Counter 15 End'): The event will be generated when counter 15 ends counting.
     *  - \b Timer2Start (Display string: 'Timer 2 Start'): The event will be generated when Timer 2 starts counting.
     *  - \b Timer3Start (Display string: 'Timer 3 Start'): The event will be generated when Timer 3 starts counting.
     *  - \b Timer4Start (Display string: 'Timer 4 Start'): The event will be generated when Timer 4 starts counting.
     *  - \b Timer5Start (Display string: 'Timer 5 Start'): The event will be generated when Timer 5 starts counting.
     *  - \b Timer6Start (Display string: 'Timer 6 Start'): The event will be generated when Timer 6 starts counting.
     *  - \b Timer7Start (Display string: 'Timer 7 Start'): The event will be generated when Timer 7 starts counting.
     *  - \b Timer8Start (Display string: 'Timer 8 Start'): The event will be generated when Timer 8 starts counting.
     *  - \b Timer9Start (Display string: 'Timer 9 Start'): The event will be generated when Timer 9 starts counting.
     *  - \b Timer10Start (Display string: 'Timer 10 Start'): The event will be generated when Timer 10 starts counting.
     *  - \b Timer11Start (Display string: 'Timer 11 Start'): The event will be generated when Timer 11 starts counting.
     *  - \b Timer12Start (Display string: 'Timer 12 Start'): The event will be generated when Timer 12 starts counting.
     *  - \b Timer13Start (Display string: 'Timer 13 Start'): The event will be generated when Timer 13 starts counting.
     *  - \b Timer14Start (Display string: 'Timer 14 Start'): The event will be generated when Timer 14 starts counting.
     *  - \b Timer15Start (Display string: 'Timer 15 Start'): The event will be generated when Timer 15 starts counting.
     *  - \b Timer2End (Display string: 'Timer 2 End'): The event will be generated when Timer 2 ends counting.
     *  - \b Timer3End (Display string: 'Timer 3 End'): The event will be generated when Timer 3 ends counting.
     *  - \b Timer4End (Display string: 'Timer 4 End'): The event will be generated when Timer 4 ends counting.
     *  - \b Timer5End (Display string: 'Timer 5 End'): The event will be generated when Timer 5 ends counting.
     *  - \b Timer6End (Display string: 'Timer 6 End'): The event will be generated when Timer 6 ends counting.
     *  - \b Timer7End (Display string: 'Timer 7 End'): The event will be generated when Timer 7 ends counting.
     *  - \b Timer8End (Display string: 'Timer 8 End'): The event will be generated when Timer 8 ends counting.
     *  - \b Timer9End (Display string: 'Timer 9 End'): The event will be generated when Timer 9 ends counting.
     *  - \b Timer10End (Display string: 'Timer 10 End'): The event will be generated when Timer 10 ends counting.
     *  - \b Timer11End (Display string: 'Timer 11 End'): The event will be generated when Timer 11 ends counting.
     *  - \b Timer12End (Display string: 'Timer 12 End'): The event will be generated when Timer 12 ends counting.
     *  - \b Timer13End (Display string: 'Timer 13 End'): The event will be generated when Timer 13 ends counting.
     *  - \b Timer14End (Display string: 'Timer 14 End'): The event will be generated when Timer 14 ends counting.
     *  - \b Timer15End (Display string: 'Timer 15 End'): The event will be generated when Timer 15 ends counting.
     *  - \b Line2RisingEdge (Display string: 'Line 2 Rising Edge'): The event will be generated when a Rising Edge is detected on the Line 2.
     *  - \b Line3RisingEdge (Display string: 'Line 3 Rising Edge'): The event will be generated when a Rising Edge is detected on the Line 3.
     *  - \b Line4RisingEdge (Display string: 'Line 4 Rising Edge'): The event will be generated when a Rising Edge is detected on the Line 4.
     *  - \b Line5RisingEdge (Display string: 'Line 5 Rising Edge'): The event will be generated when a Rising Edge is detected on the Line 5.
     *  - \b Line6RisingEdge (Display string: 'Line 6 Rising Edge'): The event will be generated when a Rising Edge is detected on the Line 6.
     *  - \b Line7RisingEdge (Display string: 'Line 7 Rising Edge'): The event will be generated when a Rising Edge is detected on the Line 7.
     *  - \b Line8RisingEdge (Display string: 'Line 8 Rising Edge'): The event will be generated when a Rising Edge is detected on the Line 8.
     *  - \b Line9RisingEdge (Display string: 'Line 9 Rising Edge'): The event will be generated when a Rising Edge is detected on the Line 9.
     *  - \b Line10RisingEdge (Display string: 'Line 10 Rising Edge'): The event will be generated when a Rising Edge is detected on the Line 10.
     *  - \b Line11RisingEdge (Display string: 'Line 11 Rising Edge'): The event will be generated when a Rising Edge is detected on the Line 11.
     *  - \b Line12RisingEdge (Display string: 'Line 12 Rising Edge'): The event will be generated when a Rising Edge is detected on the Line 12.
     *  - \b Line13RisingEdge (Display string: 'Line 13 Rising Edge'): The event will be generated when a Rising Edge is detected on the Line 13.
     *  - \b Line14RisingEdge (Display string: 'Line 14 Rising Edge'): The event will be generated when a Rising Edge is detected on the Line 14.
     *  - \b Line15RisingEdge (Display string: 'Line 15 Rising Edge'): The event will be generated when a Rising Edge is detected on the Line 15.
     *  - \b Line2FallingEdge (Display string: 'Line 2 Falling Edge'): The event will be generated when a Falling Edge is detected on the Line 2.
     *  - \b Line3FallingEdge (Display string: 'Line 3 Falling Edge'): The event will be generated when a Falling Edge is detected on the Line 3.
     *  - \b Line4FallingEdge (Display string: 'Line 4 Falling Edge'): The event will be generated when a Falling Edge is detected on the Line 4.
     *  - \b Line5FallingEdge (Display string: 'Line 5 Falling Edge'): The event will be generated when a Falling Edge is detected on the Line 5.
     *  - \b Line6FallingEdge (Display string: 'Line 6 Falling Edge'): The event will be generated when a Falling Edge is detected on the Line 6.
     *  - \b Line7FallingEdge (Display string: 'Line 7 Falling Edge'): The event will be generated when a Falling Edge is detected on the Line 7.
     *  - \b Line8FallingEdge (Display string: 'Line 8 Falling Edge'): The event will be generated when a Falling Edge is detected on the Line 8.
     *  - \b Line9FallingEdge (Display string: 'Line 9 Falling Edge'): The event will be generated when a Falling Edge is detected on the Line 9.
     *  - \b Line10FallingEdge (Display string: 'Line 10 Falling Edge'): The event will be generated when a Falling Edge is detected on the Line 10.
     *  - \b Line11FallingEdge (Display string: 'Line 11 Falling Edge'): The event will be generated when a Falling Edge is detected on the Line 11.
     *  - \b Line12FallingEdge (Display string: 'Line 12 Falling Edge'): The event will be generated when a Falling Edge is detected on the Line 12.
     *  - \b Line13FallingEdge (Display string: 'Line 13 Falling Edge'): The event will be generated when a Falling Edge is detected on the Line 13.
     *  - \b Line14FallingEdge (Display string: 'Line 14 Falling Edge'): The event will be generated when a Falling Edge is detected on the Line 14.
     *  - \b Line15FallingEdge (Display string: 'Line 15 Falling Edge'): The event will be generated when a Falling Edge is detected on the Line 15.
     *  - \b Line2AnyEdge (Display string: 'Line 2 Any Edge'): The event will be generated when a Falling or Rising Edge is detected on the Line 2.
     *  - \b Line3AnyEdge (Display string: 'Line 3 Any Edge'): The event will be generated when a Falling or Rising Edge is detected on the Line 3.
     *  - \b Line4AnyEdge (Display string: 'Line 4 Any Edge'): The event will be generated when a Falling or Rising Edge is detected on the Line 4.
     *  - \b Line5AnyEdge (Display string: 'Line 5 Any Edge'): The event will be generated when a Falling or Rising Edge is detected on the Line 5.
     *  - \b Line6AnyEdge (Display string: 'Line 6 Any Edge'): The event will be generated when a Falling or Rising Edge is detected on the Line 6.
     *  - \b Line7AnyEdge (Display string: 'Line 7 Any Edge'): The event will be generated when a Falling or Rising Edge is detected on the Line 7.
     *  - \b Line8AnyEdge (Display string: 'Line 8 Any Edge'): The event will be generated when a Falling or Rising Edge is detected on the Line 8.
     *  - \b Line9AnyEdge (Display string: 'Line 9 Any Edge'): The event will be generated when a Falling or Rising Edge is detected on the Line 9.
     *  - \b Line10AnyEdge (Display string: 'Line 10 Any Edge'): The event will be generated when a Falling or Rising Edge is detected on the Line 10.
     *  - \b Line11AnyEdge (Display string: 'Line 11 Any Edge'): The event will be generated when a Falling or Rising Edge is detected on the Line 11.
     *  - \b Line12AnyEdge (Display string: 'Line 12 Any Edge'): The event will be generated when a Falling or Rising Edge is detected on the Line 12.
     *  - \b Line13AnyEdge (Display string: 'Line 13 Any Edge'): The event will be generated when a Falling or Rising Edge is detected on the Line 13.
     *  - \b Line14AnyEdge (Display string: 'Line 14 Any Edge'): The event will be generated when a Falling or Rising Edge is detected on the Line 14.
     *  - \b Line15AnyEdge (Display string: 'Line 15 Any Edge'): The event will be generated when a Falling or Rising Edge is detected on the Line 15.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 eventSelector;
    /// \brief An enumerated integer property. Activate or deactivate the notification to the host application of the occurrence of the selected Event.
    /**
     *  Activate or deactivate the notification to the host application of the occurrence of the selected Event.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): The selected Event notification is disabled.
     *  - \b On (Display string: 'On'): The selected Event notification is enabled.
     *  - \b GigEVisionEvent (Display string: 'Event Notification')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 eventNotification;
    /// \brief An integer property. Returns the unique Identifier of the Acquisition Trigger type of Event.
    /**
     *  Returns the unique Identifier of the Acquisition Trigger type of Event.
     */
    PropertyI64 eventAcquisitionTrigger;
    /// \brief An integer property. Returns the Timestamp of the Acquisition Trigger Event.
    /**
     *  Returns the Timestamp of the Acquisition Trigger Event.
     */
    PropertyI64 eventAcquisitionTriggerTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Acquisition Trigger Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Acquisition Trigger Event.
     */
    PropertyI64 eventAcquisitionTriggerFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Acquisition Start type of Event.
    /**
     *  Returns the unique Identifier of the Acquisition Start type of Event.
     */
    PropertyI64 eventAcquisitionStart;
    /// \brief An integer property. Returns the Timestamp of the Acquisition Start Event.
    /**
     *  Returns the Timestamp of the Acquisition Start Event.
     */
    PropertyI64 eventAcquisitionStartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Acquisition Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Acquisition Start Event.
     */
    PropertyI64 eventAcquisitionStartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Acquisition End type of Event.
    /**
     *  Returns the unique Identifier of the Acquisition End type of Event.
     */
    PropertyI64 eventAcquisitionEnd;
    /// \brief An integer property. Returns the Timestamp of the Acquisition End Event.
    /**
     *  Returns the Timestamp of the Acquisition End Event.
     */
    PropertyI64 eventAcquisitionEndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Acquisition End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Acquisition End Event.
     */
    PropertyI64 eventAcquisitionEndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Acquisition Transfer Start type of Event.
    /**
     *  Returns the unique Identifier of the Acquisition Transfer Start type of Event.
     */
    PropertyI64 eventAcquisitionTransferStart;
    /// \brief An integer property. Returns the Timestamp of the Acquisition Transfer Start Event.
    /**
     *  Returns the Timestamp of the Acquisition Transfer Start Event.
     */
    PropertyI64 eventAcquisitionTransferStartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Acquisition Transfer Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Acquisition Transfer Start Event.
     */
    PropertyI64 eventAcquisitionTransferStartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Acquisition Transfer End type of Event.
    /**
     *  Returns the unique Identifier of the Acquisition Transfer End type of Event.
     */
    PropertyI64 eventAcquisitionTransferEnd;
    /// \brief An integer property. Returns the Timestamp of the Acquisition Transfer End Event.
    /**
     *  Returns the Timestamp of the Acquisition Transfer End Event.
     */
    PropertyI64 eventAcquisitionTransferEndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Acquisition Transfer End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Acquisition Transfer End Event.
     */
    PropertyI64 eventAcquisitionTransferEndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Acquisition Error type of Event.
    /**
     *  Returns the unique Identifier of the Acquisition Error type of Event.
     */
    PropertyI64 eventAcquisitionError;
    /// \brief An integer property. Returns the Timestamp of the Acquisition Error Event.
    /**
     *  Returns the Timestamp of the Acquisition Error Event.
     */
    PropertyI64 eventAcquisitionErrorTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Acquisition Error Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Acquisition Error Event.
     */
    PropertyI64 eventAcquisitionErrorFrameID;
    /// \brief An integer property. Returns the unique Identifier of the FrameTrigger type of Event.
    /**
     *  Returns the unique Identifier of the FrameTrigger type of Event. It can be used to register a callback function to be notified of the event occurrence. Its value uniquely identifies the type event received.
     */
    PropertyI64 eventFrameTrigger;
    /// \brief An integer property. Returns the Timestamp of the FrameTrigger Event.
    /**
     *  Returns the Timestamp of the FrameTrigger Event. It can be used to determine precisely when the event occurred.
     */
    PropertyI64 eventFrameTriggerTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the FrameTrigger Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the FrameTrigger Event.
     */
    PropertyI64 eventFrameTriggerFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Frame Start type of Event.
    /**
     *  Returns the unique Identifier of the Frame Start type of Event.
     */
    PropertyI64 eventFrameStart;
    /// \brief An integer property. Returns the Timestamp of the Frame Start Event.
    /**
     *  Returns the Timestamp of the Frame Start Event.
     */
    PropertyI64 eventFrameStartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Frame Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Frame Start Event.
     */
    PropertyI64 eventFrameStartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Frame End type of Event.
    /**
     *  Returns the unique Identifier of the Frame End type of Event.
     */
    PropertyI64 eventFrameEnd;
    /// \brief An integer property. Returns the Timestamp of the Frame End Event.
    /**
     *  Returns the Timestamp of the Frame End Event.
     */
    PropertyI64 eventFrameEndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Frame End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Frame End Event.
     */
    PropertyI64 eventFrameEndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Frame Burst Start type of Event.
    /**
     *  Returns the unique Identifier of the Frame Burst Start type of Event.
     */
    PropertyI64 eventFrameBurstStart;
    /// \brief An integer property. Returns the Timestamp of the Frame Burst Start Event.
    /**
     *  Returns the Timestamp of the Frame Burst Start Event.
     */
    PropertyI64 eventFrameBurstStartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Frame Burst Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Frame Burst Start Event.
     */
    PropertyI64 eventFrameBurstStartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Frame Burst End type of Event.
    /**
     *  Returns the unique Identifier of the Frame Burst End type of Event.
     */
    PropertyI64 eventFrameBurstEnd;
    /// \brief An integer property. Returns the Timestamp of the Frame Burst End Event.
    /**
     *  Returns the Timestamp of the Frame Burst End Event.
     */
    PropertyI64 eventFrameBurstEndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Frame Burst End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Frame Burst End Event.
     */
    PropertyI64 eventFrameBurstEndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Frame Transfer Start type of Event.
    /**
     *  Returns the unique Identifier of the Frame Transfer Start type of Event.
     */
    PropertyI64 eventFrameTransferStart;
    /// \brief An integer property. Returns the Timestamp of the Frame Transfer Start Event.
    /**
     *  Returns the Timestamp of the Frame Transfer Start Event.
     */
    PropertyI64 eventFrameTransferStartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Frame Transfer Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Frame Transfer Start Event.
     */
    PropertyI64 eventFrameTransferStartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Frame Transfer End type of Event.
    /**
     *  Returns the unique Identifier of the Frame Transfer End type of Event.
     */
    PropertyI64 eventFrameTransferEnd;
    /// \brief An integer property. Returns the Timestamp of the Frame Transfer End Event.
    /**
     *  Returns the Timestamp of the Frame Transfer End Event.
     */
    PropertyI64 eventFrameTransferEndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Frame Transfer End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Frame Transfer End Event.
     */
    PropertyI64 eventFrameTransferEndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Exposure Start type of Event.
    /**
     *  Returns the unique Identifier of the Exposure Start type of Event.
     */
    PropertyI64 eventExposureStart;
    /// \brief An integer property. Returns the Timestamp of the Exposure Start Event.
    /**
     *  Returns the Timestamp of the Exposure Start Event.
     */
    PropertyI64 eventExposureStartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Exposure Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Exposure Start Event.
     */
    PropertyI64 eventExposureStartFrameID;
    /// \brief An integer property. Returns the unique identifier of the ExposureEnd type of Event.
    /**
     *  Returns the unique identifier of the ExposureEnd type of Event. This feature can be used to register a callback function to be notified of the event occurrence. Its value uniquely identifies the type of event that will be received.
     */
    PropertyI64 eventExposureEnd;
    /// \brief An integer property. Returns the Timestamp of the ExposureEnd Event.
    /**
     *  Returns the Timestamp of the ExposureEnd Event. It can be used to determine precisely when the event occurred.
     */
    PropertyI64 eventExposureEndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the ExposureEnd Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the ExposureEnd Event.
     */
    PropertyI64 eventExposureEndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 0 Start type of Event.
    /**
     *  Returns the unique Identifier of the Counter 0 Start type of Event.
     */
    PropertyI64 eventCounter0Start;
    /// \brief An integer property. Returns the Timestamp of the Counter 0 Start Event.
    /**
     *  Returns the Timestamp of the Counter 0 Start Event.
     */
    PropertyI64 eventCounter0StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 0 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 0 Start Event.
     */
    PropertyI64 eventCounter0StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 1 Start type of Event.
    /**
     *  Returns the unique Identifier of the Counter 1 Start type of Event.
     */
    PropertyI64 eventCounter1Start;
    /// \brief An integer property. Returns the Timestamp of the Counter 1 Start Event.
    /**
     *  Returns the Timestamp of the Counter 1 Start Event.
     */
    PropertyI64 eventCounter1StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 1 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 1 Start Event.
     */
    PropertyI64 eventCounter1StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 2 Start type of Event.
    /**
     *  Returns the unique Identifier of the Counter 2 Start type of Event.
     */
    PropertyI64 eventCounter2Start;
    /// \brief An integer property. Returns the Timestamp of the Counter 2 Start Event.
    /**
     *  Returns the Timestamp of the Counter 2 Start Event.
     */
    PropertyI64 eventCounter2StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 2 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 2 Start Event.
     */
    PropertyI64 eventCounter2StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 3 Start type of Event.
    /**
     *  Returns the unique Identifier of the Counter 3 Start type of Event.
     */
    PropertyI64 eventCounter3Start;
    /// \brief An integer property. Returns the Timestamp of the Counter 3 Start Event.
    /**
     *  Returns the Timestamp of the Counter 3 Start Event.
     */
    PropertyI64 eventCounter3StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 3 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 3 Start Event.
     */
    PropertyI64 eventCounter3StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 4 Start type of Event.
    /**
     *  Returns the unique Identifier of the Counter 4 Start type of Event.
     */
    PropertyI64 eventCounter4Start;
    /// \brief An integer property. Returns the Timestamp of the Counter 4 Start Event.
    /**
     *  Returns the Timestamp of the Counter 4 Start Event.
     */
    PropertyI64 eventCounter4StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 4 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 4 Start Event.
     */
    PropertyI64 eventCounter4StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 5 Start type of Event.
    /**
     *  Returns the unique Identifier of the Counter 5 Start type of Event.
     */
    PropertyI64 eventCounter5Start;
    /// \brief An integer property. Returns the Timestamp of the Counter 5 Start Event.
    /**
     *  Returns the Timestamp of the Counter 5 Start Event.
     */
    PropertyI64 eventCounter5StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 5 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 5 Start Event.
     */
    PropertyI64 eventCounter5StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 6 Start type of Event.
    /**
     *  Returns the unique Identifier of the Counter 6 Start type of Event.
     */
    PropertyI64 eventCounter6Start;
    /// \brief An integer property. Returns the Timestamp of the Counter 6 Start Event.
    /**
     *  Returns the Timestamp of the Counter 6 Start Event.
     */
    PropertyI64 eventCounter6StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 6 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 6 Start Event.
     */
    PropertyI64 eventCounter6StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 7 Start type of Event.
    /**
     *  Returns the unique Identifier of the Counter 7 Start type of Event.
     */
    PropertyI64 eventCounter7Start;
    /// \brief An integer property. Returns the Timestamp of the Counter 7 Start Event.
    /**
     *  Returns the Timestamp of the Counter 7 Start Event.
     */
    PropertyI64 eventCounter7StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 7 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 7 Start Event.
     */
    PropertyI64 eventCounter7StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 8 Start type of Event.
    /**
     *  Returns the unique Identifier of the Counter 8 Start type of Event.
     */
    PropertyI64 eventCounter8Start;
    /// \brief An integer property. Returns the Timestamp of the Counter 8 Start Event.
    /**
     *  Returns the Timestamp of the Counter 8 Start Event.
     */
    PropertyI64 eventCounter8StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 8 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 8 Start Event.
     */
    PropertyI64 eventCounter8StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 9 Start type of Event.
    /**
     *  Returns the unique Identifier of the Counter 9 Start type of Event.
     */
    PropertyI64 eventCounter9Start;
    /// \brief An integer property. Returns the Timestamp of the Counter 9 Start Event.
    /**
     *  Returns the Timestamp of the Counter 9 Start Event.
     */
    PropertyI64 eventCounter9StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 9 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 9 Start Event.
     */
    PropertyI64 eventCounter9StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 10 Start type of Event.
    /**
     *  Returns the unique Identifier of the Counter 10 Start type of Event.
     */
    PropertyI64 eventCounter10Start;
    /// \brief An integer property. Returns the Timestamp of the Counter 10 Start Event.
    /**
     *  Returns the Timestamp of the Counter 10 Start Event.
     */
    PropertyI64 eventCounter10StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 10 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 10 Start Event.
     */
    PropertyI64 eventCounter10StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 11 Start type of Event.
    /**
     *  Returns the unique Identifier of the Counter 11 Start type of Event.
     */
    PropertyI64 eventCounter11Start;
    /// \brief An integer property. Returns the Timestamp of the Counter 11 Start Event.
    /**
     *  Returns the Timestamp of the Counter 11 Start Event.
     */
    PropertyI64 eventCounter11StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 11 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 11 Start Event.
     */
    PropertyI64 eventCounter11StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 12 Start type of Event.
    /**
     *  Returns the unique Identifier of the Counter 12 Start type of Event.
     */
    PropertyI64 eventCounter12Start;
    /// \brief An integer property. Returns the Timestamp of the Counter 12 Start Event.
    /**
     *  Returns the Timestamp of the Counter 12 Start Event.
     */
    PropertyI64 eventCounter12StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 12 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 12 Start Event.
     */
    PropertyI64 eventCounter12StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 13 Start type of Event.
    /**
     *  Returns the unique Identifier of the Counter 13 Start type of Event.
     */
    PropertyI64 eventCounter13Start;
    /// \brief An integer property. Returns the Timestamp of the Counter 13 Start Event.
    /**
     *  Returns the Timestamp of the Counter 13 Start Event.
     */
    PropertyI64 eventCounter13StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 13 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 13 Start Event.
     */
    PropertyI64 eventCounter13StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 14 Start type of Event.
    /**
     *  Returns the unique Identifier of the Counter 14 Start type of Event.
     */
    PropertyI64 eventCounter14Start;
    /// \brief An integer property. Returns the Timestamp of the Counter 14 Start Event.
    /**
     *  Returns the Timestamp of the Counter 14 Start Event.
     */
    PropertyI64 eventCounter14StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 14 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 14 Start Event.
     */
    PropertyI64 eventCounter14StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 0 End type of Event.
    /**
     *  Returns the unique Identifier of the Counter 0 End type of Event.
     */
    PropertyI64 eventCounter0End;
    /// \brief An integer property. Returns the Timestamp of the Counter 0 End Event.
    /**
     *  Returns the Timestamp of the Counter 0 End Event.
     */
    PropertyI64 eventCounter0EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 0 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 0 End Event.
     */
    PropertyI64 eventCounter0EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 1 End type of Event.
    /**
     *  Returns the unique Identifier of the Counter 1 End type of Event.
     */
    PropertyI64 eventCounter1End;
    /// \brief An integer property. Returns the Timestamp of the Counter 1 End Event.
    /**
     *  Returns the Timestamp of the Counter 1 End Event.
     */
    PropertyI64 eventCounter1EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 1 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 1 End Event.
     */
    PropertyI64 eventCounter1EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 2 End type of Event.
    /**
     *  Returns the unique Identifier of the Counter 2 End type of Event.
     */
    PropertyI64 eventCounter2End;
    /// \brief An integer property. Returns the Timestamp of the Counter 2 End Event.
    /**
     *  Returns the Timestamp of the Counter 2 End Event.
     */
    PropertyI64 eventCounter2EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 2 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 2 End Event.
     */
    PropertyI64 eventCounter2EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 3 End type of Event.
    /**
     *  Returns the unique Identifier of the Counter 3 End type of Event.
     */
    PropertyI64 eventCounter3End;
    /// \brief An integer property. Returns the Timestamp of the Counter 3 End Event.
    /**
     *  Returns the Timestamp of the Counter 3 End Event.
     */
    PropertyI64 eventCounter3EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 3 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 3 End Event.
     */
    PropertyI64 eventCounter3EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 4 End type of Event.
    /**
     *  Returns the unique Identifier of the Counter 4 End type of Event.
     */
    PropertyI64 eventCounter4End;
    /// \brief An integer property. Returns the Timestamp of the Counter 4 End Event.
    /**
     *  Returns the Timestamp of the Counter 4 End Event.
     */
    PropertyI64 eventCounter4EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 4 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 4 End Event.
     */
    PropertyI64 eventCounter4EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 5 End type of Event.
    /**
     *  Returns the unique Identifier of the Counter 5 End type of Event.
     */
    PropertyI64 eventCounter5End;
    /// \brief An integer property. Returns the Timestamp of the Counter 5 End Event.
    /**
     *  Returns the Timestamp of the Counter 5 End Event.
     */
    PropertyI64 eventCounter5EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 5 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 5 End Event.
     */
    PropertyI64 eventCounter5EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 6 End type of Event.
    /**
     *  Returns the unique Identifier of the Counter 6 End type of Event.
     */
    PropertyI64 eventCounter6End;
    /// \brief An integer property. Returns the Timestamp of the Counter 6 End Event.
    /**
     *  Returns the Timestamp of the Counter 6 End Event.
     */
    PropertyI64 eventCounter6EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 6 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 6 End Event.
     */
    PropertyI64 eventCounter6EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 7 End type of Event.
    /**
     *  Returns the unique Identifier of the Counter 7 End type of Event.
     */
    PropertyI64 eventCounter7End;
    /// \brief An integer property. Returns the Timestamp of the Counter 7 End Event.
    /**
     *  Returns the Timestamp of the Counter 7 End Event.
     */
    PropertyI64 eventCounter7EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 7 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 7 End Event.
     */
    PropertyI64 eventCounter7EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 8 End type of Event.
    /**
     *  Returns the unique Identifier of the Counter 8 End type of Event.
     */
    PropertyI64 eventCounter8End;
    /// \brief An integer property. Returns the Timestamp of the Counter 8 End Event.
    /**
     *  Returns the Timestamp of the Counter 8 End Event.
     */
    PropertyI64 eventCounter8EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 8 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 8 End Event.
     */
    PropertyI64 eventCounter8EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 9 End type of Event.
    /**
     *  Returns the unique Identifier of the Counter 9 End type of Event.
     */
    PropertyI64 eventCounter9End;
    /// \brief An integer property. Returns the Timestamp of the Counter 9 End Event.
    /**
     *  Returns the Timestamp of the Counter 9 End Event.
     */
    PropertyI64 eventCounter9EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 9 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 9 End Event.
     */
    PropertyI64 eventCounter9EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 10 End type of Event.
    /**
     *  Returns the unique Identifier of the Counter 10 End type of Event.
     */
    PropertyI64 eventCounter10End;
    /// \brief An integer property. Returns the Timestamp of the Counter 10 End Event.
    /**
     *  Returns the Timestamp of the Counter 10 End Event.
     */
    PropertyI64 eventCounter10EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 10 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 10 End Event.
     */
    PropertyI64 eventCounter10EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 11 End type of Event.
    /**
     *  Returns the unique Identifier of the Counter 11 End type of Event.
     */
    PropertyI64 eventCounter11End;
    /// \brief An integer property. Returns the Timestamp of the Counter 11 End Event.
    /**
     *  Returns the Timestamp of the Counter 11 End Event.
     */
    PropertyI64 eventCounter11EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 11 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 11 End Event.
     */
    PropertyI64 eventCounter11EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 12 End type of Event.
    /**
     *  Returns the unique Identifier of the Counter 12 End type of Event.
     */
    PropertyI64 eventCounter12End;
    /// \brief An integer property. Returns the Timestamp of the Counter 12 End Event.
    /**
     *  Returns the Timestamp of the Counter 12 End Event.
     */
    PropertyI64 eventCounter12EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 12 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 12 End Event.
     */
    PropertyI64 eventCounter12EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 13 End type of Event.
    /**
     *  Returns the unique Identifier of the Counter 13 End type of Event.
     */
    PropertyI64 eventCounter13End;
    /// \brief An integer property. Returns the Timestamp of the Counter 13 End Event.
    /**
     *  Returns the Timestamp of the Counter 13 End Event.
     */
    PropertyI64 eventCounter13EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 13 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 13 End Event.
     */
    PropertyI64 eventCounter13EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Counter 14 End type of Event.
    /**
     *  Returns the unique Identifier of the Counter 14 End type of Event.
     */
    PropertyI64 eventCounter14End;
    /// \brief An integer property. Returns the Timestamp of the Counter 14 End Event.
    /**
     *  Returns the Timestamp of the Counter 14 End Event.
     */
    PropertyI64 eventCounter14EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Counter 14 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 14 End Event.
     */
    PropertyI64 eventCounter14EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 0 Start type of Event.
    /**
     *  Returns the unique Identifier of the Timer 0 Start type of Event.
     */
    PropertyI64 eventTimer0Start;
    /// \brief An integer property. Returns the Timestamp of the Timer 0 Start Event.
    /**
     *  Returns the Timestamp of the Timer 0 Start Event.
     */
    PropertyI64 eventTimer0StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 0 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 0 Start Event.
     */
    PropertyI64 eventTimer0StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 1 Start type of Event.
    /**
     *  Returns the unique Identifier of the Timer 1 Start type of Event.
     */
    PropertyI64 eventTimer1Start;
    /// \brief An integer property. Returns the Timestamp of the Timer 1 Start Event.
    /**
     *  Returns the Timestamp of the Timer 1 Start Event.
     */
    PropertyI64 eventTimer1StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 1 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 1 Start Event.
     */
    PropertyI64 eventTimer1StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 2 Start type of Event.
    /**
     *  Returns the unique Identifier of the Timer 2 Start type of Event.
     */
    PropertyI64 eventTimer2Start;
    /// \brief An integer property. Returns the Timestamp of the Timer 2 Start Event.
    /**
     *  Returns the Timestamp of the Timer 2 Start Event.
     */
    PropertyI64 eventTimer2StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 2 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 2 Start Event.
     */
    PropertyI64 eventTimer2StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 3 Start type of Event.
    /**
     *  Returns the unique Identifier of the Timer 3 Start type of Event.
     */
    PropertyI64 eventTimer3Start;
    /// \brief An integer property. Returns the Timestamp of the Timer 3 Start Event.
    /**
     *  Returns the Timestamp of the Timer 3 Start Event.
     */
    PropertyI64 eventTimer3StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 3 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 3 Start Event.
     */
    PropertyI64 eventTimer3StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 4 Start type of Event.
    /**
     *  Returns the unique Identifier of the Timer 4 Start type of Event.
     */
    PropertyI64 eventTimer4Start;
    /// \brief An integer property. Returns the Timestamp of the Timer 4 Start Event.
    /**
     *  Returns the Timestamp of the Timer 4 Start Event.
     */
    PropertyI64 eventTimer4StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 4 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 4 Start Event.
     */
    PropertyI64 eventTimer4StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 5 Start type of Event.
    /**
     *  Returns the unique Identifier of the Timer 5 Start type of Event.
     */
    PropertyI64 eventTimer5Start;
    /// \brief An integer property. Returns the Timestamp of the Timer 5 Start Event.
    /**
     *  Returns the Timestamp of the Timer 5 Start Event.
     */
    PropertyI64 eventTimer5StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 5 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 5 Start Event.
     */
    PropertyI64 eventTimer5StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 6 Start type of Event.
    /**
     *  Returns the unique Identifier of the Timer 6 Start type of Event.
     */
    PropertyI64 eventTimer6Start;
    /// \brief An integer property. Returns the Timestamp of the Timer 6 Start Event.
    /**
     *  Returns the Timestamp of the Timer 6 Start Event.
     */
    PropertyI64 eventTimer6StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 6 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 6 Start Event.
     */
    PropertyI64 eventTimer6StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 7 Start type of Event.
    /**
     *  Returns the unique Identifier of the Timer 7 Start type of Event.
     */
    PropertyI64 eventTimer7Start;
    /// \brief An integer property. Returns the Timestamp of the Timer 7 Start Event.
    /**
     *  Returns the Timestamp of the Timer 7 Start Event.
     */
    PropertyI64 eventTimer7StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 7 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 7 Start Event.
     */
    PropertyI64 eventTimer7StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 8 Start type of Event.
    /**
     *  Returns the unique Identifier of the Timer 8 Start type of Event.
     */
    PropertyI64 eventTimer8Start;
    /// \brief An integer property. Returns the Timestamp of the Timer 8 Start Event.
    /**
     *  Returns the Timestamp of the Timer 8 Start Event.
     */
    PropertyI64 eventTimer8StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 8 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 8 Start Event.
     */
    PropertyI64 eventTimer8StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 9 Start type of Event.
    /**
     *  Returns the unique Identifier of the Timer 9 Start type of Event.
     */
    PropertyI64 eventTimer9Start;
    /// \brief An integer property. Returns the Timestamp of the Timer 9 Start Event.
    /**
     *  Returns the Timestamp of the Timer 9 Start Event.
     */
    PropertyI64 eventTimer9StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 9 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 9 Start Event.
     */
    PropertyI64 eventTimer9StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 10 Start type of Event.
    /**
     *  Returns the unique Identifier of the Timer 10 Start type of Event.
     */
    PropertyI64 eventTimer10Start;
    /// \brief An integer property. Returns the Timestamp of the Timer 10 Start Event.
    /**
     *  Returns the Timestamp of the Timer 10 Start Event.
     */
    PropertyI64 eventTimer10StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 10 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 10 Start Event.
     */
    PropertyI64 eventTimer10StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 11 Start type of Event.
    /**
     *  Returns the unique Identifier of the Timer 11 Start type of Event.
     */
    PropertyI64 eventTimer11Start;
    /// \brief An integer property. Returns the Timestamp of the Timer 11 Start Event.
    /**
     *  Returns the Timestamp of the Timer 11 Start Event.
     */
    PropertyI64 eventTimer11StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 11 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 11 Start Event.
     */
    PropertyI64 eventTimer11StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 12 Start type of Event.
    /**
     *  Returns the unique Identifier of the Timer 12 Start type of Event.
     */
    PropertyI64 eventTimer12Start;
    /// \brief An integer property. Returns the Timestamp of the Timer 12 Start Event.
    /**
     *  Returns the Timestamp of the Timer 12 Start Event.
     */
    PropertyI64 eventTimer12StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 12 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 12 Start Event.
     */
    PropertyI64 eventTimer12StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 13 Start type of Event.
    /**
     *  Returns the unique Identifier of the Timer 13 Start type of Event.
     */
    PropertyI64 eventTimer13Start;
    /// \brief An integer property. Returns the Timestamp of the Timer 13 Start Event.
    /**
     *  Returns the Timestamp of the Timer 13 Start Event.
     */
    PropertyI64 eventTimer13StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 13 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 13 Start Event.
     */
    PropertyI64 eventTimer13StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 14 Start type of Event.
    /**
     *  Returns the unique Identifier of the Timer 14 Start type of Event.
     */
    PropertyI64 eventTimer14Start;
    /// \brief An integer property. Returns the Timestamp of the Timer 14 Start Event.
    /**
     *  Returns the Timestamp of the Timer 14 Start Event.
     */
    PropertyI64 eventTimer14StartTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 14 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 14 Start Event.
     */
    PropertyI64 eventTimer14StartFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 0 End type of Event.
    /**
     *  Returns the unique Identifier of the Timer 0 End type of Event.
     */
    PropertyI64 eventTimer0End;
    /// \brief An integer property. Returns the Timestamp of the Timer 0 End Event.
    /**
     *  Returns the Timestamp of the Timer 0 End Event.
     */
    PropertyI64 eventTimer0EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 0 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 0 End Event.
     */
    PropertyI64 eventTimer0EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 1 End type of Event.
    /**
     *  Returns the unique Identifier of the Timer 1 End type of Event.
     */
    PropertyI64 eventTimer1End;
    /// \brief An integer property. Returns the Timestamp of the Timer 1 End Event.
    /**
     *  Returns the Timestamp of the Timer 1 End Event.
     */
    PropertyI64 eventTimer1EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 1 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 1 End Event.
     */
    PropertyI64 eventTimer1EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 2 End type of Event.
    /**
     *  Returns the unique Identifier of the Timer 2 End type of Event.
     */
    PropertyI64 eventTimer2End;
    /// \brief An integer property. Returns the Timestamp of the Timer 2 End Event.
    /**
     *  Returns the Timestamp of the Timer 2 End Event.
     */
    PropertyI64 eventTimer2EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 2 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 2 End Event.
     */
    PropertyI64 eventTimer2EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 3 End type of Event.
    /**
     *  Returns the unique Identifier of the Timer 3 End type of Event.
     */
    PropertyI64 eventTimer3End;
    /// \brief An integer property. Returns the Timestamp of the Timer 3 End Event.
    /**
     *  Returns the Timestamp of the Timer 3 End Event.
     */
    PropertyI64 eventTimer3EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 3 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 3 End Event.
     */
    PropertyI64 eventTimer3EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 4 End type of Event.
    /**
     *  Returns the unique Identifier of the Timer 4 End type of Event.
     */
    PropertyI64 eventTimer4End;
    /// \brief An integer property. Returns the Timestamp of the Timer 4 End Event.
    /**
     *  Returns the Timestamp of the Timer 4 End Event.
     */
    PropertyI64 eventTimer4EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 4 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 4 End Event.
     */
    PropertyI64 eventTimer4EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 5 End type of Event.
    /**
     *  Returns the unique Identifier of the Timer 5 End type of Event.
     */
    PropertyI64 eventTimer5End;
    /// \brief An integer property. Returns the Timestamp of the Timer 5 End Event.
    /**
     *  Returns the Timestamp of the Timer 5 End Event.
     */
    PropertyI64 eventTimer5EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 5 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 5 End Event.
     */
    PropertyI64 eventTimer5EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 6 End type of Event.
    /**
     *  Returns the unique Identifier of the Timer 6 End type of Event.
     */
    PropertyI64 eventTimer6End;
    /// \brief An integer property. Returns the Timestamp of the Timer 6 End Event.
    /**
     *  Returns the Timestamp of the Timer 6 End Event.
     */
    PropertyI64 eventTimer6EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 6 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 6 End Event.
     */
    PropertyI64 eventTimer6EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 7 End type of Event.
    /**
     *  Returns the unique Identifier of the Timer 7 End type of Event.
     */
    PropertyI64 eventTimer7End;
    /// \brief An integer property. Returns the Timestamp of the Timer 7 End Event.
    /**
     *  Returns the Timestamp of the Timer 7 End Event.
     */
    PropertyI64 eventTimer7EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 7 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 7 End Event.
     */
    PropertyI64 eventTimer7EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 8 End type of Event.
    /**
     *  Returns the unique Identifier of the Timer 8 End type of Event.
     */
    PropertyI64 eventTimer8End;
    /// \brief An integer property. Returns the Timestamp of the Timer 8 End Event.
    /**
     *  Returns the Timestamp of the Timer 8 End Event.
     */
    PropertyI64 eventTimer8EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 8 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 8 End Event.
     */
    PropertyI64 eventTimer8EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 9 End type of Event.
    /**
     *  Returns the unique Identifier of the Timer 9 End type of Event.
     */
    PropertyI64 eventTimer9End;
    /// \brief An integer property. Returns the Timestamp of the Timer 9 End Event.
    /**
     *  Returns the Timestamp of the Timer 9 End Event.
     */
    PropertyI64 eventTimer9EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 9 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 9 End Event.
     */
    PropertyI64 eventTimer9EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 10 End type of Event.
    /**
     *  Returns the unique Identifier of the Timer 10 End type of Event.
     */
    PropertyI64 eventTimer10End;
    /// \brief An integer property. Returns the Timestamp of the Timer 10 End Event.
    /**
     *  Returns the Timestamp of the Timer 10 End Event.
     */
    PropertyI64 eventTimer10EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 10 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 10 End Event.
     */
    PropertyI64 eventTimer10EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 11 End type of Event.
    /**
     *  Returns the unique Identifier of the Timer 11 End type of Event.
     */
    PropertyI64 eventTimer11End;
    /// \brief An integer property. Returns the Timestamp of the Timer 11 End Event.
    /**
     *  Returns the Timestamp of the Timer 11 End Event.
     */
    PropertyI64 eventTimer11EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 11 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 11 End Event.
     */
    PropertyI64 eventTimer11EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 12 End type of Event.
    /**
     *  Returns the unique Identifier of the Timer 12 End type of Event.
     */
    PropertyI64 eventTimer12End;
    /// \brief An integer property. Returns the Timestamp of the Timer 12 End Event.
    /**
     *  Returns the Timestamp of the Timer 12 End Event.
     */
    PropertyI64 eventTimer12EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 12 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 12 End Event.
     */
    PropertyI64 eventTimer12EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 13 End type of Event.
    /**
     *  Returns the unique Identifier of the Timer 13 End type of Event.
     */
    PropertyI64 eventTimer13End;
    /// \brief An integer property. Returns the Timestamp of the Timer 13 End Event.
    /**
     *  Returns the Timestamp of the Timer 13 End Event.
     */
    PropertyI64 eventTimer13EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 13 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 13 End Event.
     */
    PropertyI64 eventTimer13EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Timer 14 End type of Event.
    /**
     *  Returns the unique Identifier of the Timer 14 End type of Event.
     */
    PropertyI64 eventTimer14End;
    /// \brief An integer property. Returns the Timestamp of the Timer 14 End Event.
    /**
     *  Returns the Timestamp of the Timer 14 End Event.
     */
    PropertyI64 eventTimer14EndTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Timer 14 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 14 End Event.
     */
    PropertyI64 eventTimer14EndFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 0 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 0 Rising Edge type of Event.
     */
    PropertyI64 eventLine0RisingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 0 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 0 Rising Edge Event.
     */
    PropertyI64 eventLine0RisingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 0 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 0 Rising Edge Event.
     */
    PropertyI64 eventLine0RisingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 1 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 1 Rising Edge type of Event.
     */
    PropertyI64 eventLine1RisingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 1 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 1 Rising Edge Event.
     */
    PropertyI64 eventLine1RisingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 1 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 1 Rising Edge Event.
     */
    PropertyI64 eventLine1RisingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 2 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 2 Rising Edge type of Event.
     */
    PropertyI64 eventLine2RisingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 2 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 2 Rising Edge Event.
     */
    PropertyI64 eventLine2RisingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 2 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 2 Rising Edge Event.
     */
    PropertyI64 eventLine2RisingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 3 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 3 Rising Edge type of Event.
     */
    PropertyI64 eventLine3RisingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 3 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 3 Rising Edge Event.
     */
    PropertyI64 eventLine3RisingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 3 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 3 Rising Edge Event.
     */
    PropertyI64 eventLine3RisingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 4 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 4 Rising Edge type of Event.
     */
    PropertyI64 eventLine4RisingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 4 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 4 Rising Edge Event.
     */
    PropertyI64 eventLine4RisingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 4 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 4 Rising Edge Event.
     */
    PropertyI64 eventLine4RisingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 5 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 5 Rising Edge type of Event.
     */
    PropertyI64 eventLine5RisingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 5 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 5 Rising Edge Event.
     */
    PropertyI64 eventLine5RisingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 5 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 5 Rising Edge Event.
     */
    PropertyI64 eventLine5RisingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 6 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 6 Rising Edge type of Event.
     */
    PropertyI64 eventLine6RisingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 6 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 6 Rising Edge Event.
     */
    PropertyI64 eventLine6RisingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 6 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 6 Rising Edge Event.
     */
    PropertyI64 eventLine6RisingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 7 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 7 Rising Edge type of Event.
     */
    PropertyI64 eventLine7RisingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 7 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 7 Rising Edge Event.
     */
    PropertyI64 eventLine7RisingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 7 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 7 Rising Edge Event.
     */
    PropertyI64 eventLine7RisingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 8 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 8 Rising Edge type of Event.
     */
    PropertyI64 eventLine8RisingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 8 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 8 Rising Edge Event.
     */
    PropertyI64 eventLine8RisingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 8 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 8 Rising Edge Event.
     */
    PropertyI64 eventLine8RisingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 9 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 9 Rising Edge type of Event.
     */
    PropertyI64 eventLine9RisingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 9 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 9 Rising Edge Event.
     */
    PropertyI64 eventLine9RisingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 9 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 9 Rising Edge Event.
     */
    PropertyI64 eventLine9RisingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 10 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 10 Rising Edge type of Event.
     */
    PropertyI64 eventLine10RisingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 10 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 10 Rising Edge Event.
     */
    PropertyI64 eventLine10RisingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 10 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 10 Rising Edge Event.
     */
    PropertyI64 eventLine10RisingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 11 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 11 Rising Edge type of Event.
     */
    PropertyI64 eventLine11RisingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 11 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 11 Rising Edge Event.
     */
    PropertyI64 eventLine11RisingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 11 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 11 Rising Edge Event.
     */
    PropertyI64 eventLine11RisingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 12 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 12 Rising Edge type of Event.
     */
    PropertyI64 eventLine12RisingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 12 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 12 Rising Edge Event.
     */
    PropertyI64 eventLine12RisingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 12 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 12 Rising Edge Event.
     */
    PropertyI64 eventLine12RisingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 13 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 13 Rising Edge type of Event.
     */
    PropertyI64 eventLine13RisingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 13 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 13 Rising Edge Event.
     */
    PropertyI64 eventLine13RisingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 13 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 13 Rising Edge Event.
     */
    PropertyI64 eventLine13RisingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 14 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 14 Rising Edge type of Event.
     */
    PropertyI64 eventLine14RisingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 14 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 14 Rising Edge Event.
     */
    PropertyI64 eventLine14RisingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 14 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 14 Rising Edge Event.
     */
    PropertyI64 eventLine14RisingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 0 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 0 Falling Edge type of Event.
     */
    PropertyI64 eventLine0FallingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 0 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 0 Falling Edge Event.
     */
    PropertyI64 eventLine0FallingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 0 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 0 Falling Edge Event.
     */
    PropertyI64 eventLine0FallingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 1 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 1 Falling Edge type of Event.
     */
    PropertyI64 eventLine1FallingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 1 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 1 Falling Edge Event.
     */
    PropertyI64 eventLine1FallingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 1 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 1 Falling Edge Event.
     */
    PropertyI64 eventLine1FallingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 2 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 2 Falling Edge type of Event.
     */
    PropertyI64 eventLine2FallingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 2 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 2 Falling Edge Event.
     */
    PropertyI64 eventLine2FallingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 2 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 2 Falling Edge Event.
     */
    PropertyI64 eventLine2FallingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 3 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 3 Falling Edge type of Event.
     */
    PropertyI64 eventLine3FallingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 3 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 3 Falling Edge Event.
     */
    PropertyI64 eventLine3FallingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 3 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 3 Falling Edge Event.
     */
    PropertyI64 eventLine3FallingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 4 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 4 Falling Edge type of Event.
     */
    PropertyI64 eventLine4FallingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 4 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 4 Falling Edge Event.
     */
    PropertyI64 eventLine4FallingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 4 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 4 Falling Edge Event.
     */
    PropertyI64 eventLine4FallingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 5 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 5 Falling Edge type of Event.
     */
    PropertyI64 eventLine5FallingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 5 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 5 Falling Edge Event.
     */
    PropertyI64 eventLine5FallingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 5 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 5 Falling Edge Event.
     */
    PropertyI64 eventLine5FallingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 6 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 6 Falling Edge type of Event.
     */
    PropertyI64 eventLine6FallingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 6 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 6 Falling Edge Event.
     */
    PropertyI64 eventLine6FallingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 6 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 6 Falling Edge Event.
     */
    PropertyI64 eventLine6FallingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 7 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 7 Falling Edge type of Event.
     */
    PropertyI64 eventLine7FallingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 7 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 7 Falling Edge Event.
     */
    PropertyI64 eventLine7FallingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 7 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 7 Falling Edge Event.
     */
    PropertyI64 eventLine7FallingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 8 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 8 Falling Edge type of Event.
     */
    PropertyI64 eventLine8FallingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 8 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 8 Falling Edge Event.
     */
    PropertyI64 eventLine8FallingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 8 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 8 Falling Edge Event.
     */
    PropertyI64 eventLine8FallingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 9 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 9 Falling Edge type of Event.
     */
    PropertyI64 eventLine9FallingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 9 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 9 Falling Edge Event.
     */
    PropertyI64 eventLine9FallingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 9 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 9 Falling Edge Event.
     */
    PropertyI64 eventLine9FallingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 10 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 10 Falling Edge type of Event.
     */
    PropertyI64 eventLine10FallingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 10 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 10 Falling Edge Event.
     */
    PropertyI64 eventLine10FallingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 10 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 10 Falling Edge Event.
     */
    PropertyI64 eventLine10FallingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 11 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 11 Falling Edge type of Event.
     */
    PropertyI64 eventLine11FallingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 11 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 11 Falling Edge Event.
     */
    PropertyI64 eventLine11FallingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 11 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 11 Falling Edge Event.
     */
    PropertyI64 eventLine11FallingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 12 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 12 Falling Edge type of Event.
     */
    PropertyI64 eventLine12FallingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 12 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 12 Falling Edge Event.
     */
    PropertyI64 eventLine12FallingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 12 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 12 Falling Edge Event.
     */
    PropertyI64 eventLine12FallingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 13 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 13 Falling Edge type of Event.
     */
    PropertyI64 eventLine13FallingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 13 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 13 Falling Edge Event.
     */
    PropertyI64 eventLine13FallingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 13 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 13 Falling Edge Event.
     */
    PropertyI64 eventLine13FallingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 14 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 14 Falling Edge type of Event.
     */
    PropertyI64 eventLine14FallingEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 14 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 14 Falling Edge Event.
     */
    PropertyI64 eventLine14FallingEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 14 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 14 Falling Edge Event.
     */
    PropertyI64 eventLine14FallingEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 0 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 0 Any Edge type of Event.
     */
    PropertyI64 eventLine0AnyEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 0 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 0 Any Edge Event.
     */
    PropertyI64 eventLine0AnyEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 0 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 0 Any Edge Event.
     */
    PropertyI64 eventLine0AnyEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 1 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 1 Any Edge type of Event.
     */
    PropertyI64 eventLine1AnyEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 1 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 1 Any Edge Event.
     */
    PropertyI64 eventLine1AnyEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 1 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 1 Any Edge Event.
     */
    PropertyI64 eventLine1AnyEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 2 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 2 Any Edge type of Event.
     */
    PropertyI64 eventLine2AnyEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 2 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 2 Any Edge Event.
     */
    PropertyI64 eventLine2AnyEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 2 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 2 Any Edge Event.
     */
    PropertyI64 eventLine2AnyEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 3 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 3 Any Edge type of Event.
     */
    PropertyI64 eventLine3AnyEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 3 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 3 Any Edge Event.
     */
    PropertyI64 eventLine3AnyEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 3 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 3 Any Edge Event.
     */
    PropertyI64 eventLine3AnyEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 4 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 4 Any Edge type of Event.
     */
    PropertyI64 eventLine4AnyEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 4 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 4 Any Edge Event.
     */
    PropertyI64 eventLine4AnyEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 4 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 4 Any Edge Event.
     */
    PropertyI64 eventLine4AnyEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 5 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 5 Any Edge type of Event.
     */
    PropertyI64 eventLine5AnyEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 5 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 5 Any Edge Event.
     */
    PropertyI64 eventLine5AnyEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 5 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 5 Any Edge Event.
     */
    PropertyI64 eventLine5AnyEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 6 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 6 Any Edge type of Event.
     */
    PropertyI64 eventLine6AnyEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 6 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 6 Any Edge Event.
     */
    PropertyI64 eventLine6AnyEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 6 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 6 Any Edge Event.
     */
    PropertyI64 eventLine6AnyEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 7 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 7 Any Edge type of Event.
     */
    PropertyI64 eventLine7AnyEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 7 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 7 Any Edge Event.
     */
    PropertyI64 eventLine7AnyEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 7 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 7 Any Edge Event.
     */
    PropertyI64 eventLine7AnyEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 8 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 8 Any Edge type of Event.
     */
    PropertyI64 eventLine8AnyEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 8 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 8 Any Edge Event.
     */
    PropertyI64 eventLine8AnyEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 8 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 8 Any Edge Event.
     */
    PropertyI64 eventLine8AnyEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 9 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 9 Any Edge type of Event.
     */
    PropertyI64 eventLine9AnyEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 9 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 9 Any Edge Event.
     */
    PropertyI64 eventLine9AnyEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 9 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 9 Any Edge Event.
     */
    PropertyI64 eventLine9AnyEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 10 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 10 Any Edge type of Event.
     */
    PropertyI64 eventLine10AnyEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 10 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 10 Any Edge Event.
     */
    PropertyI64 eventLine10AnyEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 10 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 10 Any Edge Event.
     */
    PropertyI64 eventLine10AnyEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 11 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 11 Any Edge type of Event.
     */
    PropertyI64 eventLine11AnyEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 11 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 11 Any Edge Event.
     */
    PropertyI64 eventLine11AnyEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 11 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 11 Any Edge Event.
     */
    PropertyI64 eventLine11AnyEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 12 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 12 Any Edge type of Event.
     */
    PropertyI64 eventLine12AnyEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 12 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 12 Any Edge Event.
     */
    PropertyI64 eventLine12AnyEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 12 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 12 Any Edge Event.
     */
    PropertyI64 eventLine12AnyEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 13 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 13 Any Edge type of Event.
     */
    PropertyI64 eventLine13AnyEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 13 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 13 Any Edge Event.
     */
    PropertyI64 eventLine13AnyEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 13 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 13 Any Edge Event.
     */
    PropertyI64 eventLine13AnyEdgeFrameID;
    /// \brief An integer property. Returns the unique Identifier of the Line 14 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 14 Any Edge type of Event.
     */
    PropertyI64 eventLine14AnyEdge;
    /// \brief An integer property. Returns the Timestamp of the Line 14 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 14 Any Edge Event.
     */
    PropertyI64 eventLine14AnyEdgeTimestamp;
    /// \brief An integer property. Returns the unique Identifier of the Frame (or image) that generated the Line 14 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 14 Any Edge Event.
     */
    PropertyI64 eventLine14AnyEdgeFrameID;
    /// \brief An integer property. Returns the unique identifier of the Error type of Event.
    /**
     *  Returns the unique identifier of the Error type of Event. It can be used to register a callback function to be notified of the Error event occurrence. Its value uniquely identifies that the event received was an Error.
     */
    PropertyI64 eventError;
    /// \brief An integer property. Returns the Timestamp of the Error Event.
    /**
     *  Returns the Timestamp of the Error Event. It can be used to determine when the event occurred.
     */
    PropertyI64 eventErrorTimestamp;
    /// \brief An integer property. If applicable, returns the unique Identifier of the Frame (or image) that generated the Error Event.
    /**
     *  If applicable, returns the unique Identifier of the Frame (or image) that generated the Error Event.
     */
    PropertyI64 eventErrorFrameID;
    /// \brief An integer property. Returns an error code for the error(s) that happened.
    /**
     *  Returns an error code for the error(s) that happened.
     */
    PropertyI64 eventErrorCode;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains the User Set control features.
/**
 *  A category that contains the User Set control features.
 */
class UserSetControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::UserSetControl</b> object.
    explicit UserSetControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        userSetSelector(),
        userSetLoad(),
        userSetSave(),
        userSetDefault(),
        userSetDefaultSelector(),
        userSetFeatureSelector(),
        userSetFeatureEnable(),
        mvUserData()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( userSetSelector, "UserSetSelector" );
        locator.bindComponent( userSetLoad, "UserSetLoad@i" );
        locator.bindComponent( userSetSave, "UserSetSave@i" );
        locator.bindComponent( userSetDefault, "UserSetDefault" );
        locator.bindComponent( userSetDefaultSelector, "UserSetDefaultSelector" );
        locator.bindComponent( userSetFeatureSelector, "UserSetFeatureSelector" );
        locator.bindComponent( userSetFeatureEnable, "UserSetFeatureEnable" );
        locator.bindComponent( mvUserData, "mvUserData" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Selects the feature User Set to load, save or configure.
    /**
     *  Selects the feature User Set to load, save or configure.
     *
     *  The following string values might be valid for this feature:
     *  - \b Default (Display string: 'Default'): Selects the factory setting user set.
     *  - \b UserSet0 (Display string: 'User Set 0'): Selects the user set 0.
     *  - \b UserSet1 (Display string: 'User Set 1'): Selects the user set 1.
     *  - \b UserSet#2# (Display string: 'User Set #2#'): Selects the user set #2#.
     *  - \b UserSet2 (Display string: 'User Set 2'): Selects the user set 2.
     *  - \b UserSet3 (Display string: 'User Set 3'): Selects the user set 3.
     *  - \b UserSet4 (Display string: 'User Set 4'): Selects the user set 4.
     *  - \b UserSet5 (Display string: 'User Set 5'): Selects the user set 5.
     *  - \b UserSet6 (Display string: 'User Set 6'): Selects the user set 6.
     *  - \b UserSet7 (Display string: 'User Set 7'): Selects the user set 7.
     *  - \b UserSet8 (Display string: 'User Set 8'): Selects the user set 8.
     *  - \b UserSet9 (Display string: 'User Set 9'): Selects the user set 9.
     *  - \b UserSet10 (Display string: 'User Set 10'): Selects the user set 10.
     *  - \b UserSet11 (Display string: 'User Set 11'): Selects the user set 11.
     *  - \b UserSet12 (Display string: 'User Set 12'): Selects the user set 12.
     *  - \b UserSet13 (Display string: 'User Set 13'): Selects the user set 13.
     *  - \b UserSet14 (Display string: 'User Set 14'): Selects the user set 14.
     *  - \b UserSet15 (Display string: 'User Set 15'): Selects the user set 15.
     *  - \b UserSet16 (Display string: 'User Set Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 userSetSelector;
    /// \brief A method object. Loads the User Set specified by UserSetSelector to the device and makes it active.
    /**
     *  Loads the User Set specified by UserSetSelector to the device and makes it active.
     */
    Method userSetLoad;
    /// \brief A method object. Save the User Set specified by UserSetSelector to the non-volatile memory of the device.
    /**
     *  Save the User Set specified by UserSetSelector to the non-volatile memory of the device.
     */
    Method userSetSave;
    /// \brief An enumerated integer property. Selects the feature User Set to load and make active by default when the device is reset.
    /**
     *  Selects the feature User Set to load and make active by default when the device is reset.
     *
     *  The following string values might be valid for this feature:
     *  - \b Default (Display string: 'Default'): Select the factory setting user set.
     *  - \b UserSet0 (Display string: 'User Set 0'): Select the user set 0.
     *  - \b UserSet1 (Display string: 'User Set 1'): Select the user set 1.
     *  - \b UserSet#2# (Display string: 'User Set #2#'): Select the user set #2#.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 userSetDefault;
    /// \brief An enumerated integer property. This feature is deprecated (See UserSetDefault).
    /**
     *  \deprecated
     *  This feature is deprecated (See UserSetDefault). Selects the feature User Set to load and make active when the device is reset.
     *
     *  The following string values might be valid for this feature:
     *  - \b Default (Display string: 'Default'): Select the factory setting user set.
     *  - \b UserSet0 (Display string: 'User Set 0'): Select the user set 0.
     *  - \b UserSet1 (Display string: 'User Set 1'): Select the user set 1.
     *  - \b UserSet#2# (Display string: 'User Set #2#'): Select the user set #2#.
     *  - \b UserSet2 (Display string: 'User Set 2'): Select the user set 2.
     *  - \b UserSet3 (Display string: 'User Set 3'): Select the user set 3.
     *  - \b UserSet4 (Display string: 'User Set 4'): Select the user set 4.
     *  - \b UserSet5 (Display string: 'User Set 5'): Select the user set 5.
     *  - \b UserSet6 (Display string: 'User Set 6'): Select the user set 6.
     *  - \b UserSet7 (Display string: 'User Set 7'): Select the user set 7.
     *  - \b UserSet8 (Display string: 'User Set 8'): Select the user set 8.
     *  - \b UserSet9 (Display string: 'User Set 9'): Select the user set 9.
     *  - \b UserSet10 (Display string: 'User Set 10'): Select the user set 10.
     *  - \b UserSet11 (Display string: 'User Set 11'): Select the user set 11.
     *  - \b UserSet12 (Display string: 'User Set 12'): Select the user set 12.
     *  - \b UserSet13 (Display string: 'User Set 13'): Select the user set 13.
     *  - \b UserSet14 (Display string: 'User Set 14'): Select the user set 14.
     *  - \b UserSet15 (Display string: 'User Set 15'): Select the user set 15.
     *  - \b UserSet16 (Display string: 'User Set Default Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 userSetDefaultSelector;
    /// \brief An enumerated integer property. Selects which individual UserSet feature to control.
    /**
     *  Selects which individual UserSet feature to control.
     *
     *  The following string values might be valid for this feature:
     *  - \b Device-Specific (Display string: 'Device - Specific'): Device - Specific
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 userSetFeatureSelector;
    /// \brief A boolean property. Enables the selected feature and make it active in all the UserSets.
    /**
     *  Enables the selected feature and make it active in all the UserSets.
     */
    PropertyIBoolean userSetFeatureEnable;
    /// \brief A string property. A register to store arbitrary user data into the devices non-volatile memory.
    /**
     *  A register to store arbitrary user data into the devices non-volatile memory
     */
    PropertyS mvUserData;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category for the Sequencer Control features.
/**
 *  A category for the Sequencer Control features.
 */
class SequencerControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::SequencerControl</b> object.
    explicit SequencerControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        sequencerMode(),
        sequencerConfigurationMode(),
        sequencerFeatureSelector(),
        sequencerFeatureEnable(),
        sequencerSetSelector(),
        sequencerSetSave(),
        sequencerSetLoad(),
        sequencerSetActive(),
        sequencerSetStart(),
        sequencerPathSelector(),
        sequencerSetNext(),
        sequencerTriggerSource(),
        sequencerTriggerActivation()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( sequencerMode, "SequencerMode" );
        locator.bindComponent( sequencerConfigurationMode, "SequencerConfigurationMode" );
        locator.bindComponent( sequencerFeatureSelector, "SequencerFeatureSelector" );
        locator.bindComponent( sequencerFeatureEnable, "SequencerFeatureEnable" );
        locator.bindComponent( sequencerSetSelector, "SequencerSetSelector" );
        locator.bindComponent( sequencerSetSave, "SequencerSetSave@i" );
        locator.bindComponent( sequencerSetLoad, "SequencerSetLoad@i" );
        locator.bindComponent( sequencerSetActive, "SequencerSetActive" );
        locator.bindComponent( sequencerSetStart, "SequencerSetStart" );
        locator.bindComponent( sequencerPathSelector, "SequencerPathSelector" );
        locator.bindComponent( sequencerSetNext, "SequencerSetNext" );
        locator.bindComponent( sequencerTriggerSource, "SequencerTriggerSource" );
        locator.bindComponent( sequencerTriggerActivation, "SequencerTriggerActivation" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Controls if the sequencer mechanism is active.
    /**
     *  Controls if the sequencer mechanism is active.
     *
     *  The following string values might be valid for this feature:
     *  - \b On (Display string: 'On'): Enables the sequencer.
     *  - \b Off (Display string: 'Off'): Disables the sequencer.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 sequencerMode;
    /// \brief An enumerated integer property. Controls if the sequencer configuration mode is active.
    /**
     *  Controls if the sequencer configuration mode is active.
     *
     *  The following string values might be valid for this feature:
     *  - \b On (Display string: 'On'): Enables the sequencer configuration mode.
     *  - \b Off (Display string: 'Off'): Disables the sequencer configuration mode.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 sequencerConfigurationMode;
    /// \brief An enumerated integer property. Selects which sequencer features to control.
    /**
     *  Selects which sequencer features to control.
     *
     *  The following string values might be valid for this feature:
     *  - \b Device-Specific (Display string: 'Device - Specific'): Device - Specific
     *  - \b ExposureTime (Display string: 'Sequencer Feature Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 sequencerFeatureSelector;
    /// \brief A boolean property. Enables the selected feature and make it active in all the sequencer sets.
    /**
     *  Enables the selected feature and make it active in all the sequencer sets.
     */
    PropertyIBoolean sequencerFeatureEnable;
    /// \brief An integer property. Selects the sequencer set to which further feature settings applies.
    /**
     *  Selects the sequencer set to which further feature settings applies.
     */
    PropertyI64 sequencerSetSelector;
    /// \brief A method object. Saves the current device state to the sequencer set selected by the SequencerSetSelector.
    /**
     *  Saves the current device state to the sequencer set selected by the SequencerSetSelector.
     */
    Method sequencerSetSave;
    /// \brief A method object. Loads the sequencer set selected by SequencerSetSelector in the device.
    /**
     *  Loads the sequencer set selected by SequencerSetSelector in the device. Even if SequencerMode is off, this will change the device state to the configuration of the selected set.
     */
    Method sequencerSetLoad;
    /// \brief An integer property. Contains the currently active sequencer set.
    /**
     *  Contains the currently active sequencer set.
     */
    PropertyI64 sequencerSetActive;
    /// \brief An integer property. Sets the initial/start sequencer set, which is the first set used within a sequencer.
    /**
     *  Sets the initial/start sequencer set, which is the first set used within a sequencer.
     */
    PropertyI64 sequencerSetStart;
    /// \brief An integer property. Selects to which branching path further path settings applies.
    /**
     *  Selects to which branching path further path settings applies.
     */
    PropertyI64 sequencerPathSelector;
    /// \brief An integer property. Specifies the next sequencer set.
    /**
     *  Specifies the next sequencer set.
     */
    PropertyI64 sequencerSetNext;
    /// \brief An enumerated integer property. Specifies the internal signal or physical input line to use as the sequencer trigger source.
    /**
     *  Specifies the internal signal or physical input line to use as the sequencer trigger source.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Disables the sequencer trigger.
     *  - \b AcquisitionTrigger (Display string: 'Acquisition Trigger'): Starts with the reception of the Acquisition Trigger.
     *  - \b AcquisitionStart (Display string: 'Acquisition Start'): Starts with the reception of the Acquisition Start.
     *  - \b AcquisitionEnd (Display string: 'Acquisition End'): Starts with the reception of the Acquisition End.
     *  - \b FrameTrigger (Display string: 'Frame Trigger'): Starts with the reception of the Frame Start Trigger.
     *  - \b FrameStart (Display string: 'Frame Start'): Starts with the reception of the Frame Start.
     *  - \b FrameEnd (Display string: 'Frame End'): Starts with the reception of the Frame End.
     *  - \b FrameBurstStart (Display string: 'Frame Burst Start'): Starts with the reception of the Frame Burst Start.
     *  - \b FrameBurstEnd (Display string: 'Frame Burst End'): Starts with the reception of the Frame Burst End.
     *  - \b ExposureStart (Display string: 'Exposure Start'): Starts with the reception of the Exposure Start.
     *  - \b ExposureEnd (Display string: 'Exposure End'): Starts with the reception of the Exposure End.
     *  - \b Line0 (Display string: 'Line 0'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line1 (Display string: 'Line 1'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line2 (Display string: 'Line 2'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b Line#3# (Display string: 'Line #3#'): Starts when the specified TimerTriggerActivation condition is met on the chosen I/O Line.
     *  - \b UserOutput0 (Display string: 'User Output 0'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput1 (Display string: 'User Output 1'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput2 (Display string: 'User Output 2'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b UserOutput#3# (Display string: 'User Output #3#'): Specifies which User Output bit signal to use as internal source for the trigger.
     *  - \b Counter0Start (Display string: 'Counter 0 Start'): Starts with the reception of the Counter Start.
     *  - \b Counter1Start (Display string: 'Counter 1 Start'): Starts with the reception of the Counter Start.
     *  - \b Counter2Start (Display string: 'Counter 2 Start'): Starts with the reception of the Counter Start.
     *  - \b Counter#3#Start (Display string: 'Counter #3# Start'): Starts with the reception of the Counter Start.
     *  - \b Counter0End (Display string: 'Counter 0 End'): Starts with the reception of the Counter End.
     *  - \b Counter1End (Display string: 'Counter 1 End'): Starts with the reception of the Counter End.
     *  - \b Counter2End (Display string: 'Counter 2 End'): Starts with the reception of the Counter End.
     *  - \b Counter#3#End (Display string: 'Counter #3# End'): Starts with the reception of the Counter End.
     *  - \b Timer0Start (Display string: 'Timer 0 Start'): Starts with the reception of the Timer Start.
     *  - \b Timer1Start (Display string: 'Timer 1 Start'): Starts with the reception of the Timer Start.
     *  - \b Timer2Start (Display string: 'Timer 2 Start'): Starts with the reception of the Timer Start.
     *  - \b Timer#3#Start (Display string: 'Timer #3# Start'): Starts with the reception of the Timer Start.
     *  - \b Timer0End (Display string: 'Timer 0 End'): Starts with the reception of the Timer End.
     *  - \b Timer1End (Display string: 'Timer 1 End'): Starts with the reception of the Timer End.
     *  - \b Timer2End (Display string: 'Timer 2 End'): Starts with the reception of the Timer End.
     *  - \b Timer#3#End (Display string: 'Timer #3# End'): Starts with the reception of the Timer End.
     *  - \b Encoder0 (Display string: 'Encoder 0'): Starts with the reception of the Encoder output signal.
     *  - \b Encoder1 (Display string: 'Encoder 1'): Starts with the reception of the Encoder output signal.
     *  - \b Encoder2 (Display string: 'Encoder 2'): Starts with the reception of the Encoder output signal.
     *  - \b Encoder#3# (Display string: 'Encoder #3#'): Starts with the reception of the Encoder output signal.
     *  - \b SoftwareSignal0 (Display string: 'Software Signal 0'): Starts on the reception of the Software Signal.
     *  - \b SoftwareSignal1 (Display string: 'Software Signal 1'): Starts on the reception of the Software Signal.
     *  - \b SoftwareSignal2 (Display string: 'Software Signal 2'): Starts on the reception of the Software Signal.
     *  - \b SoftwareSignal#3# (Display string: 'Software Signal #3#'): Starts on the reception of the Software Signal.
     *  - \b Action0 (Display string: 'Action 0'): Starts with the assertion of the chosen action signal.
     *  - \b Action1 (Display string: 'Action 1'): Starts with the assertion of the chosen action signal.
     *  - \b Action2 (Display string: 'Action 2'): Starts with the assertion of the chosen action signal.
     *  - \b Action#3# (Display string: 'Action #3#'): Starts with the assertion of the chosen action signal.
     *  - \b LinkTrigger0 (Display string: 'Link Trigger 0'): Starts with the reception of the chosen Link Trigger.
     *  - \b LinkTrigger1 (Display string: 'Link Trigger 1'): Starts with the reception of the chosen Link Trigger.
     *  - \b LinkTrigger2 (Display string: 'Link Trigger 2'): Starts with the reception of the chosen Link Trigger.
     *  - \b LinkTrigger#3# (Display string: 'Link Trigger #3#'): Starts with the reception of the chosen Link Trigger.
     *  - \b CC1 (Display string: 'CC 1'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b CC2 (Display string: 'CC 2'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b CC3 (Display string: 'CC 3'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *  - \b CC4 (Display string: 'CC 4'): Index of the Camera Link physical line and associated I/O control block to use. This ensures a direct mapping between the lines on the frame grabber and on the camera. Applicable to CameraLink products only.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 sequencerTriggerSource;
    /// \brief An enumerated integer property. Specifies the activation mode of the sequencer trigger.
    /**
     *  Specifies the activation mode of the sequencer trigger.
     *
     *  The following string values might be valid for this feature:
     *  - \b RisingEdge (Display string: 'Rising Edge'): Specifies that the trigger is considered valid on the rising edge of the source signal.
     *  - \b FallingEdge (Display string: 'Falling Edge'): Specifies that the trigger is considered valid on the falling edge of the source signal.
     *  - \b AnyEdge (Display string: 'Any Edge'): Specifies that the trigger is considered valid on the falling or rising edge of the source signal.
     *  - \b LevelHigh (Display string: 'Level High'): Specifies that the trigger is considered valid as long as the level of the source signal is high.
     *  - \b LevelLow (Display string: 'Level Low'): Specifies that the trigger is considered valid as long as the level of the source signal is low.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 sequencerTriggerActivation;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains the File Access control features.
/**
 *  A category that contains the File Access control features.
 */
class FileAccessControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::FileAccessControl</b> object.
    explicit FileAccessControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        fileSelector(),
        fileOperationSelector(),
        fileOperationExecute(),
        fileOpenMode(),
        fileAccessBuffer(),
        fileAccessOffset(),
        fileAccessLength(),
        fileOperationStatus(),
        fileOperationResult(),
        fileSize()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( fileSelector, "FileSelector" );
        locator.bindComponent( fileOperationSelector, "FileOperationSelector" );
        locator.bindComponent( fileOperationExecute, "FileOperationExecute@i" );
        locator.bindComponent( fileOpenMode, "FileOpenMode" );
        locator.bindComponent( fileAccessBuffer, "FileAccessBuffer" );
        locator.bindComponent( fileAccessOffset, "FileAccessOffset" );
        locator.bindComponent( fileAccessLength, "FileAccessLength" );
        locator.bindComponent( fileOperationStatus, "FileOperationStatus" );
        locator.bindComponent( fileOperationResult, "FileOperationResult" );
        locator.bindComponent( fileSize, "FileSize" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Selects the target file in the device.
    /**
     *  Selects the target file in the device.
     *
     *  The following string values might be valid for this feature:
     *  - \b UserSetDefault (Display string: 'User Set Default'): The default user set of the device.
     *  - \b UserSet1 (Display string: 'User Set 1'): The first user set of the device.
     *  - \b UserSet2 (Display string: 'User Set 2'): The second user set of the device.
     *  - \b UserSet3 (Display string: 'User Set 3'): The third user set of the device.
     *  - \b UserSet#4# (Display string: 'User Set #4#'): The third user set of the device.
     *  - \b LUTLuminance (Display string: 'LUT Luminance'): The Luminance LUT of the camera.
     *  - \b LUTRed (Display string: 'LUT Red'): The Red LUT of the camera.
     *  - \b LUTGreen (Display string: 'LUT Green'): The Green LUT of the camera.
     *  - \b LUTBlue (Display string: 'LUT Blue'): The Blue LUT of the camera.
     *  - \b DeviceFirmware (Display string: 'File Selector')
     *  - \b UserFile (Display string: 'File Selector')
     *  - \b mvFFCImage (Display string: 'File Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 fileSelector;
    /// \brief An enumerated integer property. Selects the target operation for the selected file in the device.
    /**
     *  Selects the target operation for the selected file in the device. This Operation is executed when the FileOperationExecute feature is called.
     *
     *  The following string values might be valid for this feature:
     *  - \b Open (Display string: 'Open'): Opens the file selected by FileSelector in the device. The access mode in which the file is opened is selected by FileOpenMode.
     *  - \b Close (Display string: 'Close'): Closes the file selected by FileSelector in the device.
     *  - \b Read (Display string: 'Read'): Reads FileAccessLength bytes from the device storage at the file relative offset FileAccessOffset into FileAccessBuffer.
     *  - \b Write (Display string: 'Write'): Writes FileAccessLength bytes taken from the FileAccessBuffer into the device storage at the file relative offset FileAccessOffset.
     *  - \b Delete (Display string: 'Delete'): Deletes the file selected by FileSelector in the device. Note that deleting a device file should not remove the associated FileSelector entry to allow future operation on this file.
     *  - \b MvFlashWrite (Display string: 'File Operation Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 fileOperationSelector;
    /// \brief A method object. Executes the operation selected by FileOperationSelector on the selected file.
    /**
     *  Executes the operation selected by FileOperationSelector on the selected file.
     */
    Method fileOperationExecute;
    /// \brief An enumerated integer property. Selects the access mode in which a file is opened in the device.
    /**
     *  Selects the access mode in which a file is opened in the device.
     *
     *  The following string values might be valid for this feature:
     *  - \b Read (Display string: 'Read'): This mode selects read-only open mode.
     *  - \b Write (Display string: 'Write'): This mode selects write-only open mode.
     *  - \b ReadWrite (Display string: 'Read Write'): This mode selects read and write open mode.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 fileOpenMode;
    /// \brief A string property. Defines the intermediate access buffer that allows the exchange of data between the device file storage and the application.
    /**
     *  Defines the intermediate access buffer that allows the exchange of data between the device file storage and the application.
     */
    PropertyS fileAccessBuffer;
    /// \brief An integer property. Controls the Offset of the mapping between the device file storage and the FileAccessBuffer.
    /**
     *  Controls the Offset of the mapping between the device file storage and the FileAccessBuffer.
     */
    PropertyI64 fileAccessOffset;
    /// \brief An integer property. Controls the Length of the mapping between the device file storage and the FileAccessBuffer.
    /**
     *  Controls the Length of the mapping between the device file storage and the FileAccessBuffer.
     */
    PropertyI64 fileAccessLength;
    /// \brief An enumerated integer property. Represents the file operation execution status.
    /**
     *  Represents the file operation execution status.
     *
     *  The following string values might be valid for this feature:
     *  - \b Success (Display string: 'Success'): File Operation was sucessful.
     *  - \b Failure (Display string: 'Failure'): File Operation failed.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 fileOperationStatus;
    /// \brief An integer property. Represents the file operation result.
    /**
     *  Represents the file operation result. For Read or Write operations, the number of successfully read/written bytes is returned.
     */
    PropertyI64 fileOperationResult;
    /// \brief An integer property. Represents the size of the selected file in bytes.
    /**
     *  Represents the size of the selected file in bytes.
     */
    PropertyI64 fileSize;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains the source control features.
/**
 *  A category that contains the source control features.
 */
class SourceControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::SourceControl</b> object.
    explicit SourceControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        sourceCount(),
        sourceSelector()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( sourceCount, "SourceCount" );
        locator.bindComponent( sourceSelector, "SourceSelector" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An integer property. Controls or returns the number of sources supported by the device.
    /**
     *  Controls or returns the number of sources supported by the device.
     */
    PropertyI64 sourceCount;
    /// \brief An enumerated integer property. Selects the source to control.
    /**
     *  Selects the source to control.
     *
     *  The following string values might be valid for this feature:
     *  - \b Source0 (Display string: 'Source 0'): Selects the data source 0.
     *  - \b Source1 (Display string: 'Source 1'): Selects the data source 1.
     *  - \b Source2 (Display string: 'Source 2'): Selects the data source 2.
     *  - \b Source#3# (Display string: 'Source #3#'): Selects the data source #3#.
     *  - \b All (Display string: 'All'): Selects all the data sources.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 sourceSelector;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category for the data Transfer Control features.
/**
 *  A category for the data Transfer Control features.
 */
class TransferControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::TransferControl</b> object.
    explicit TransferControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        transferSelector(),
        transferControlMode(),
        transferOperationMode(),
        transferBlockCount(),
        transferBurstCount(),
        transferQueueMaxBlockCount(),
        transferQueueCurrentBlockCount(),
        transferQueueMode(),
        transferStart(),
        transferStop(),
        transferAbort(),
        transferPause(),
        transferResume(),
        transferTriggerSelector(),
        transferTriggerMode(),
        transferTriggerSource(),
        transferTriggerActivation(),
        transferStatusSelector(),
        transferStatus(),
        transferComponentSelector(),
        transferStreamChannel()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( transferSelector, "TransferSelector" );
        locator.bindComponent( transferControlMode, "TransferControlMode" );
        locator.bindComponent( transferOperationMode, "TransferOperationMode" );
        locator.bindComponent( transferBlockCount, "TransferBlockCount" );
        locator.bindComponent( transferBurstCount, "TransferBurstCount" );
        locator.bindComponent( transferQueueMaxBlockCount, "TransferQueueMaxBlockCount" );
        locator.bindComponent( transferQueueCurrentBlockCount, "TransferQueueCurrentBlockCount" );
        locator.bindComponent( transferQueueMode, "TransferQueueMode" );
        locator.bindComponent( transferStart, "TransferStart@i" );
        locator.bindComponent( transferStop, "TransferStop@i" );
        locator.bindComponent( transferAbort, "TransferAbort@i" );
        locator.bindComponent( transferPause, "TransferPause@i" );
        locator.bindComponent( transferResume, "TransferResume@i" );
        locator.bindComponent( transferTriggerSelector, "TransferTriggerSelector" );
        locator.bindComponent( transferTriggerMode, "TransferTriggerMode" );
        locator.bindComponent( transferTriggerSource, "TransferTriggerSource" );
        locator.bindComponent( transferTriggerActivation, "TransferTriggerActivation" );
        locator.bindComponent( transferStatusSelector, "TransferStatusSelector" );
        locator.bindComponent( transferStatus, "TransferStatus" );
        locator.bindComponent( transferComponentSelector, "TransferComponentSelector" );
        locator.bindComponent( transferStreamChannel, "TransferStreamChannel" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Selects which stream transfers are currently controlled by the selected Transfer features.
    /**
     *  Selects which stream transfers are currently controlled by the selected Transfer features.
     *
     *  The following string values might be valid for this feature:
     *  - \b Stream0 (Display string: 'Stream 0'): The transfer features control the data stream 0.
     *  - \b Stream1 (Display string: 'Stream 1'): The transfer features control the data stream 1.
     *  - \b Stream2 (Display string: 'Stream 2'): The transfer features control the data stream 2.
     *  - \b Stream#3# (Display string: 'Stream #3#'): The transfer features control the data stream #3#.
     *  - \b All (Display string: 'All'): The transfer features control all the data streams simulateneously.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 transferSelector;
    /// \brief An enumerated integer property. Selects the control method for the transfers.
    /**
     *  Selects the control method for the transfers.
     *
     *  The following string values might be valid for this feature:
     *  - \b Basic (Display string: 'Basic'): Basic
     *  - \b Automatic (Display string: 'Automatic'): Automatic
     *  - \b UserControlled (Display string: 'User Controlled'): User Controlled
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 transferControlMode;
    /// \brief An enumerated integer property. Selects the operation mode of the transfer.
    /**
     *  Selects the operation mode of the transfer.
     *
     *  The following string values might be valid for this feature:
     *  - \b Continuous (Display string: 'Continuous'): Continuous
     *  - \b MultiBlock (Display string: 'Multi Block'): Multi Block
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 transferOperationMode;
    /// \brief An integer property. Specifies the number of data Blocks that the device should stream before stopping.
    /**
     *  Specifies the number of data Blocks that the device should stream before stopping. This feature is only active if the TransferOperationMode is set to MultiBlock.
     */
    PropertyI64 transferBlockCount;
    /// \brief An integer property. Number of Block(s) to transfer for each TransferBurstStart trigger.
    /**
     *  Number of Block(s) to transfer for each TransferBurstStart trigger.
     */
    PropertyI64 transferBurstCount;
    /// \brief An integer property. Controls the maximum number of data blocks that can be stored in the block queue of the selected stream.
    /**
     *  Controls the maximum number of data blocks that can be stored in the block queue of the selected stream.
     */
    PropertyI64 transferQueueMaxBlockCount;
    /// \brief An integer property. Returns the number of Block(s) currently in the transfer queue.
    /**
     *  Returns the number of Block(s) currently in the transfer queue.
     */
    PropertyI64 transferQueueCurrentBlockCount;
    /// \brief An enumerated integer property. Specifies the operation mode of the transfer queue.
    /**
     *  Specifies the operation mode of the transfer queue.
     *
     *  The following string values might be valid for this feature:
     *  - \b FirstInFirstOut (Display string: 'First In First Out'): Blocks first In are transferred Out first.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 transferQueueMode;
    /// \brief A method object. Starts the streaming of data blocks out of the device.
    /**
     *  Starts the streaming of data blocks out of the device. This feature must be available when the TransferControlMode is set to 'UserControled'. If the TransferStart feature is not writable (locked), the application should not start the transfer and should avoid using the feature until it becomes writable again.
     */
    Method transferStart;
    /// \brief A method object. Stops the streaming of data Block(s).
    /**
     *  Stops the streaming of data Block(s). The current block transmission will be completed. This feature must be available when the TransferControlMode is set to 'UserControlled'.
     */
    Method transferStop;
    /// \brief A method object. Aborts immediately the streaming of data block(s).
    /**
     *  Aborts immediately the streaming of data block(s). Aborting the transfer will result in the lost of the data that is present or currently entering in the block queue. However, the next new block received will be stored in the queue and transferred to the host when the streaming is restarted. If implemented, this feature should be available when the TransferControlMode is set to 'UserControlled'.
     */
    Method transferAbort;
    /// \brief A method object. Pauses the streaming of data Block(s).
    /**
     *  Pauses the streaming of data Block(s). Pausing the streaming will immediately suspend the ongoing data transfer even if a block is partially transferred. The device will resume its transmission at the reception of a TransferResume command.
     */
    Method transferPause;
    /// \brief A method object. Resumes a data Blocks streaming that was previously paused by a TransferPause command.
    /**
     *  Resumes a data Blocks streaming that was previously paused by a TransferPause command.
     */
    Method transferResume;
    /// \brief An enumerated integer property. Selects the type of transfer trigger to configure.
    /**
     *  Selects the type of transfer trigger to configure.
     *
     *  The following string values might be valid for this feature:
     *  - \b TransferStart (Display string: 'Transfer Start'): Selects a trigger to start the transfers.
     *  - \b TransferStop (Display string: 'Transfer Stop'): Selects a trigger to stop the transfers.
     *  - \b TransferAbort (Display string: 'Transfer Abort'): Selects a trigger to abort the transfers.
     *  - \b TransferPause (Display string: 'Transfer Pause'): Selects a trigger to pause the transfers.
     *  - \b TransferResume (Display string: 'Transfer Resume'): Selects a trigger to Resume the transfers.
     *  - \b TransferActive (Display string: 'Transfer Active'): Selects a trigger to Activate the transfers. This trigger type is used when TriggerActivation is set LevelHigh or levelLow.
     *  - \b TransferBurstStart (Display string: 'Transfer Burst Start'): Selects a trigger to start the transfer of a burst of frames specified by TransferBurstCount.
     *  - \b TransferBurstStop (Display string: 'Transfer Burst Stop'): Selects a trigger to end the transfer of a burst of frames.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 transferTriggerSelector;
    /// \brief An enumerated integer property. Controls if the selected trigger is active.
    /**
     *  Controls if the selected trigger is active.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Disables the selected trigger.
     *  - \b On (Display string: 'On'): Enable the selected trigger.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 transferTriggerMode;
    /// \brief An enumerated integer property. Specifies the signal to use as the trigger source for transfers.
    /**
     *  Specifies the signal to use as the trigger source for transfers.
     *
     *  The following string values might be valid for this feature:
     *  - \b Line0 (Display string: 'Line 0'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the transfer control trigger signal.
     *  - \b Line1 (Display string: 'Line 1'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the transfer control trigger signal.
     *  - \b Line2 (Display string: 'Line 2'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the transfer control trigger signal.
     *  - \b Line#3# (Display string: 'Line #3#'): Specifies which physical line (or pin) and associated I/O control block to use as external source for the transfer control trigger signal.
     *  - \b Counter0Start (Display string: 'Counter 0 Start'): Specifies which of the Counter signal to use as internal source for the transfer control trigger signal.
     *  - \b Counter1Start (Display string: 'Counter 1 Start'): Specifies which of the Counter signal to use as internal source for the transfer control trigger signal.
     *  - \b Counter2Start (Display string: 'Counter 2 Start'): Specifies which of the Counter signal to use as internal source for the transfer control trigger signal.
     *  - \b Counter#3#Start (Display string: 'Counter #3# Start'): Specifies which of the Counter signal to use as internal source for the transfer control trigger signal.
     *  - \b Counter0End (Display string: 'Counter 0 End'): Specifies which of the Counter signal to use as internal source for the transfer control trigger signal.
     *  - \b Counter1End (Display string: 'Counter 1 End'): Specifies which of the Counter signal to use as internal source for the transfer control trigger signal.
     *  - \b Counter2End (Display string: 'Counter 2 End'): Specifies which of the Counter signal to use as internal source for the transfer control trigger signal.
     *  - \b Counter#3#End (Display string: 'Counter #3# End'): Specifies which of the Counter signal to use as internal source for the transfer control trigger signal.
     *  - \b Timer0Start (Display string: 'Timer 0 Start'): Specifies which Timer signal to use as internal source for the transfer control trigger signal.
     *  - \b Timer1Start (Display string: 'Timer 1 Start'): Specifies which Timer signal to use as internal source for the transfer control trigger signal.
     *  - \b Timer2Start (Display string: 'Timer 2 Start'): Specifies which Timer signal to use as internal source for the transfer control trigger signal.
     *  - \b Timer#3#Start (Display string: 'Timer #3# Start'): Specifies which Timer signal to use as internal source for the transfer control trigger signal.
     *  - \b Timer0End (Display string: 'Timer 0 End'): Specifies which Timer signal to use as internal source for the transfer control trigger signal.
     *  - \b Timer1End (Display string: 'Timer 1 End'): Specifies which Timer signal to use as internal source for the transfer control trigger signal.
     *  - \b Timer2End (Display string: 'Timer 2 End'): Specifies which Timer signal to use as internal source for the transfer control trigger signal.
     *  - \b Timer#3#End (Display string: 'Timer #3# End'): Specifies which Timer signal to use as internal source for the transfer control trigger signal.
     *  - \b SoftwareSignal0 (Display string: 'Software Signal 0'): Specifies which Software Signal to use as internal source for the transfer control trigger signal.
     *  - \b SoftwareSignal1 (Display string: 'Software Signal 1'): Specifies which Software Signal to use as internal source for the transfer control trigger signal.
     *  - \b SoftwareSignal2 (Display string: 'Software Signal 2'): Specifies which Software Signal to use as internal source for the transfer control trigger signal.
     *  - \b SoftwareSignal#3# (Display string: 'Software Signal #3#'): Specifies which Software Signal to use as internal source for the transfer control trigger signal.
     *  - \b Action0 (Display string: 'Action 0'): Specifies which Action command to use as internal source for the transfer control trigger signal.
     *  - \b Action1 (Display string: 'Action 1'): Specifies which Action command to use as internal source for the transfer control trigger signal.
     *  - \b Action2 (Display string: 'Action 2'): Specifies which Action command to use as internal source for the transfer control trigger signal.
     *  - \b Action#3# (Display string: 'Action #3#'): Specifies which Action command to use as internal source for the transfer control trigger signal.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 transferTriggerSource;
    /// \brief An enumerated integer property. Specifies the activation mode of the transfer control trigger.
    /**
     *  Specifies the activation mode of the transfer control trigger.
     *
     *  The following string values might be valid for this feature:
     *  - \b RisingEdge (Display string: 'Rising Edge'): Specifies that the trigger is considered valid on the rising edge of the source signal.
     *  - \b FallingEdge (Display string: 'Falling Edge'): Specifies that the trigger is considered valid on the falling edge of the source signal.
     *  - \b AnyEdge (Display string: 'Any Edge'): Specifies that the trigger is considered valid on the falling or rising edge of the source signal.
     *  - \b LevelHigh (Display string: 'Level High'): Specifies that the trigger is considered valid as long as the level of the source signal is high. This can apply to TransferActive and TransferPause trigger.
     *  - \b LevelLow (Display string: 'Level Low'): Specifies that the trigger is considered valid as long as the level of the source signal is low. This can apply to TransferActive and TransferPause trigger.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 transferTriggerActivation;
    /// \brief An enumerated integer property. Selects which status of the transfer module to read.
    /**
     *  Selects which status of the transfer module to read.
     *
     *  The following string values might be valid for this feature:
     *  - \b Streaming (Display string: 'Streaming'): Data blocks are transmitted when enough data is available.
     *  - \b Paused (Display string: 'Paused'): Data blocks transmission is suspended immediately.
     *  - \b Stopping (Display string: 'Stopping'): Data blocks transmission is stopping. The current block transmission will be completed and the transfer state will stop.
     *  - \b Stopped (Display string: 'Stopped'): Data blocks transmission is stopped.
     *  - \b QueueOverflow (Display string: 'Queue Overflow'): Data blocks queue is in overflow state.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 transferStatusSelector;
    /// \brief A boolean property. Reads the status of the Transfer module signal selected by TransferStatusSelector.
    /**
     *  Reads the status of the Transfer module signal selected by TransferStatusSelector.
     */
    PropertyIBoolean transferStatus;
    /// \brief An enumerated integer property. Selects the color component for the control of the TransferStreamChannel feature.
    /**
     *  Selects the color component for the control of the TransferStreamChannel feature.
     *
     *  The following string values might be valid for this feature:
     *  - \b Red (Display string: 'Red'): The TransferStreamChannel feature controls the index of the stream channel for the streaming of the red plane of the planar pixel formats.
     *  - \b Green (Display string: 'Green'): The TransferStreamChannel feature controls the index of the stream channel for the streaming of the green plane of the planar pixel formats.
     *  - \b Blue (Display string: 'Blue'): The TransferStreamChannel feature controls the index of the stream channel for the streaming of blue plane of the planar pixel formats.
     *  - \b All (Display string: 'All'): The TransferStreamChannel feature controls the index of the stream channel for the streaming of all the planes of the planar pixel formats simultaneously or non planar pixel formats.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 transferComponentSelector;
    /// \brief An integer property. Selects the streaming channel that will be used to transfer the selected stream of data.
    /**
     *  Selects the streaming channel that will be used to transfer the selected stream of data. In general, this feature can be omitted and the default streaming channel will be used.
     */
    PropertyI64 transferStreamChannel;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category for control of 3D camera specific features.
/**
 *  A category for control of 3D camera specific features.
 */
class Scan3dControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::Scan3dControl</b> object.
    explicit Scan3dControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        scan3dDistanceUnit(),
        scan3dCoordinateSystem(),
        scan3dOutputMode(),
        scan3dCoordinateSystemReference(),
        scan3dCoordinateSelector(),
        scan3dCoordinateScale(),
        scan3dCoordinateOffset(),
        scan3dInvalidDataFlag(),
        scan3dInvalidDataValue(),
        scan3dAxisMin(),
        scan3dAxisMax(),
        scan3dCoordinateTransformSelector(),
        scan3dTransformValue(),
        scan3dCoordinateReferenceSelector(),
        scan3dCoordinateReferenceValue()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( scan3dDistanceUnit, "Scan3dDistanceUnit" );
        locator.bindComponent( scan3dCoordinateSystem, "Scan3dCoordinateSystem" );
        locator.bindComponent( scan3dOutputMode, "Scan3dOutputMode" );
        locator.bindComponent( scan3dCoordinateSystemReference, "Scan3dCoordinateSystemReference" );
        locator.bindComponent( scan3dCoordinateSelector, "Scan3dCoordinateSelector" );
        locator.bindComponent( scan3dCoordinateScale, "Scan3dCoordinateScale" );
        locator.bindComponent( scan3dCoordinateOffset, "Scan3dCoordinateOffset" );
        locator.bindComponent( scan3dInvalidDataFlag, "Scan3dInvalidDataFlag" );
        locator.bindComponent( scan3dInvalidDataValue, "Scan3dInvalidDataValue" );
        locator.bindComponent( scan3dAxisMin, "Scan3dAxisMin" );
        locator.bindComponent( scan3dAxisMax, "Scan3dAxisMax" );
        locator.bindComponent( scan3dCoordinateTransformSelector, "Scan3dCoordinateTransformSelector" );
        locator.bindComponent( scan3dTransformValue, "Scan3dTransformValue" );
        locator.bindComponent( scan3dCoordinateReferenceSelector, "Scan3dCoordinateReferenceSelector" );
        locator.bindComponent( scan3dCoordinateReferenceValue, "Scan3dCoordinateReferenceValue" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Specifies the unit used when delivering calibrated distance data.
    /**
     *  Specifies the unit used when delivering calibrated distance data.
     *
     *  The following string values might be valid for this feature:
     *  - \b Millimeter (Display string: 'Millimeter'): Distance values are in millimeter units (default).
     *  - \b Inch (Display string: 'Inch'): Distance values are in inch units.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 scan3dDistanceUnit;
    /// \brief An enumerated integer property. Specifies the Coordinate system to use for the device.
    /**
     *  Specifies the Coordinate system to use for the device.
     *
     *  The following string values might be valid for this feature:
     *  - \b Cartesian (Display string: 'Cartesian'): Default value. 3-axis orthogonal, right-hand X-Y-Z.
     *  - \b Spherical (Display string: 'Spherical'): A Theta-Phi-Rho coordinate system.
     *  - \b Cylindrical (Display string: 'Cylindrical'): A Theta-Y-Rho coordinate system.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 scan3dCoordinateSystem;
    /// \brief An enumerated integer property. Controls the Calibration and data organization of the device, naming the coordinates transmitted.
    /**
     *  Controls the Calibration and data organization of the device, naming the coordinates transmitted.
     *
     *  The following string values might be valid for this feature:
     *  - \b UncalibratedC (Display string: 'Uncalibrated C'): Uncalibrated 2.5D Depth map. The distance data does not represent a physical unit and may be non-linear. The data is a 2.5D range map only.
     *  - \b CalibratedABC_Grid (Display string: 'Calibrated ABC Grid'): 3 Coordinates in grid organization. The full 3 coordinate data with the grid array organization from the sensor kept.
     *  - \b CalibratedABC_PointCloud (Display string: 'Calibrated ABC Point Cloud'): 3 Coordinates without organization. The full 3 coordinate data without any organization of data points. Typically only valid points transmitted giving varying image size.
     *  - \b CalibratedAC (Display string: 'Calibrated AC'): 2 Coordinates with fixed B sampling. The data is sent as a A and C coordinates (X,Z or Theta,Rho). The B (Y) axis uses the scale and offset parameters for the B axis.
     *  - \b CalibratedAC_Linescan (Display string: 'Calibrated AC Linescan'): 2 Coordinates with varying sampling. The data is sent as a A and C coordinates (X,Z or Theta,Rho). The B (Y) axis comes from the encoder chunk value.
     *  - \b CalibratedC (Display string: 'Calibrated C'): Calibrated 2.5D Depth map. The distance data is expressed in the chosen distance unit. The data is a 2.5D range map. No information on X-Y axes available.
     *  - \b CalibratedC_Linescan (Display string: 'Calibrated C Linescan'): Depth Map with varying B sampling. The distance data is expressed in the chosen distance unit. The data is a 2.5D range map. The B (Y) axis comes from the encoder chunk value.
     *  - \b RectifiedC (Display string: 'Rectified C'): Rectified 2.5D Depth map. The distance data has been rectified to a uniform sampling pattern in the X and Y direction. The data is a 2.5D range map only. If a complete 3D point cloud is rectified but transmitted as explicit coordinates it should be transmitted as one of the 'CalibratedABC' formats.
     *  - \b RectifiedC_Linescan (Display string: 'Rectified C Linescan'): Rectified 2.5D Depth map with varying B sampling. The data is sent as rectified 1D profiles using Coord3D_C pixels. The B (Y) axis comes from the encoder chunk value.
     *  - \b DisparityC (Display string: 'Disparity C'): Disparity 2.5D Depth map. The distance is inversely proportional to the pixel (disparity) value.
     *  - \b DisparityC_Linescan (Display string: 'Disparity C Linescan'): Disparity 2.5D Depth map with varying B sampling. The distance is inversely proportional to the pixel (disparity) value. The B (Y) axis comes from the encoder chunk value.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 scan3dOutputMode;
    /// \brief An enumerated integer property. Defines coordinate system reference location.
    /**
     *  Defines coordinate system reference location.
     *
     *  The following string values might be valid for this feature:
     *  - \b Anchor (Display string: 'Anchor'): Default value. Original fixed reference. The coordinate system fixed relative the camera reference point marker is used.
     *  - \b Transformed (Display string: 'Transformed'): Transformed reference system. The transformed coordinate system is used according to the definition in the rotation and translation matrices.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 scan3dCoordinateSystemReference;
    /// \brief An enumerated integer property. Selects the individual coordinates in the vectors for 3D information/transformation.
    /**
     *  Selects the individual coordinates in the vectors for 3D information/transformation.
     *
     *  The following string values might be valid for this feature:
     *  - \b CoordinateA (Display string: 'Coordinate A'): The first (X or Theta) coordinate
     *  - \b CoordinateB (Display string: 'Coordinate B'): The second (Y or Phi) coordinate
     *  - \b CoordinateC (Display string: 'Coordinate C'): The third (Z or Rho) coordinate.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 scan3dCoordinateSelector;
    /// \brief A floating point property. Scale factor when transforming a pixel from relative coordinates to world coordinates.
    /**
     *  Scale factor when transforming a pixel from relative coordinates to world coordinates.
     */
    PropertyF scan3dCoordinateScale;
    /// \brief A floating point property. Offset when transforming a pixel from relative coordinates to world coordinates.
    /**
     *  Offset when transforming a pixel from relative coordinates to world coordinates.
     */
    PropertyF scan3dCoordinateOffset;
    /// \brief A boolean property. Enables the definition of a non-valid flag value in the data stream.
    /**
     *  Enables the definition of a non-valid flag value in the data stream. Note that the confidence output is an alternate recommended way to identify non-valid pixels. Using an Scan3dInvalidDataValue may give processing penalties due to special handling.
     */
    PropertyIBoolean scan3dInvalidDataFlag;
    /// \brief A floating point property. Value which identifies a non-valid pixel if Scan3dInvalidDataFlag is enabled.
    /**
     *  Value which identifies a non-valid pixel if Scan3dInvalidDataFlag is enabled.
     */
    PropertyF scan3dInvalidDataValue;
    /// \brief A floating point property. Minimum valid transmitted coordinate value of the selected Axis.
    /**
     *  Minimum valid transmitted coordinate value of the selected Axis.
     */
    PropertyF scan3dAxisMin;
    /// \brief A floating point property. Maximum valid transmitted coordinate value of the selected Axis.
    /**
     *  Maximum valid transmitted coordinate value of the selected Axis.
     */
    PropertyF scan3dAxisMax;
    /// \brief An enumerated integer property. Sets the index to read/write a coordinate transform value.
    /**
     *  Sets the index to read/write a coordinate transform value.
     *
     *  The following string values might be valid for this feature:
     *  - \b RotationX (Display string: 'Rotation X'): Rotation around X axis.
     *  - \b RotationY (Display string: 'Rotation Y'): Rotation around Y axis.
     *  - \b RotationZ (Display string: 'Rotation Z'): Rotation around Z axis.
     *  - \b TranslationX (Display string: 'Translation X'): Translation along X axis.
     *  - \b TranslationY (Display string: 'Translation Y'): Translation along Y axis.
     *  - \b TranslationZ (Display string: 'Translation Z'): Translation along Z axis.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 scan3dCoordinateTransformSelector;
    /// \brief A floating point property. Specifies the transform value selected.
    /**
     *  Specifies the transform value selected. For translations (Scan3dCoordinateTransformSelector = TranslationX/Y/Z) it is expressed in the distance unit of the system, for rotations (Scan3dCoordinateTransformSelector =RotationX/Y/Z) in degrees.
     */
    PropertyF scan3dTransformValue;
    /// \brief An enumerated integer property. Sets the index to read a coordinate system reference value defining the transform of a point from the current (Anchor or Transformed) system to the reference system.
    /**
     *  Sets the index to read a coordinate system reference value defining the transform of a point from the current (Anchor or Transformed) system to the reference system.
     *
     *  The following string values might be valid for this feature:
     *  - \b RotationX (Display string: 'Rotation X'): Rotation around X axis.
     *  - \b RotationY (Display string: 'Rotation Y'): Rotation around Y axis.
     *  - \b RotationZ (Display string: 'Rotation Z'): Rotation around Z axis.
     *  - \b TranslationX (Display string: 'Translation X'): X axis translation.
     *  - \b TranslationY (Display string: 'Translation Y'): Y axis translation.
     *  - \b TranslationZ (Display string: 'Translation Z'): Z axis translation.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 scan3dCoordinateReferenceSelector;
    /// \brief A floating point property. Returns the reference value selected.
    /**
     *  Returns the reference value selected. Reads the value of a rotation or translation value for the current (Anchor or Transformed) coordinate system transformation to the Reference system.
     */
    PropertyF scan3dCoordinateReferenceValue;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains the Chunk Data control features.
/**
 *  A category that contains the Chunk Data control features.
 */
class ChunkDataControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::ChunkDataControl</b> object.
    explicit ChunkDataControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        chunkModeActive(),
        chunkSelector(),
        chunkEnable(),
        chunkPartSelector(),
        chunkImageComponent(),
        chunkImage(),
        chunkOffsetX(),
        chunkOffsetY(),
        chunkWidth(),
        chunkHeight(),
        chunkPixelFormat(),
        chunkPixelDynamicRangeMin(),
        chunkPixelDynamicRangeMax(),
        chunkTimestamp(),
        chunkTimestampLatchValue(),
        chunkLineStatusAll(),
        chunkCounterSelector(),
        chunkCounterValue(),
        chunkTimerSelector(),
        chunkEncoderSelector(),
        chunkScanLineSelector(),
        chunkEncoderValue(),
        chunkEncoderStatus(),
        chunkExposureTimeSelector(),
        chunkTimerValue(),
        chunkExposureTime(),
        chunkGainSelector(),
        chunkGain(),
        chunkBlackLevelSelector(),
        chunkBlackLevel(),
        chunkLinePitch(),
        chunkFrameID(),
        chunkSourceID(),
        chunkRegionID(),
        chunkTransferBlockID(),
        chunkTransferStreamID(),
        chunkTransferQueueCurrentBlockCount(),
        chunkStreamChannelID(),
        chunkSequencerSetActive(),
        chunkScan3dDistanceUnit(),
        chunkScan3dOutputMode(),
        chunkScan3dCoordinateSystem(),
        chunkScan3dCoordinateSystemReference(),
        chunkScan3dCoordinateSelector(),
        chunkScan3dCoordinateScale(),
        chunkScan3dCoordinateOffset(),
        chunkScan3dInvalidDataFlag(),
        chunkScan3dInvalidDataValue(),
        chunkScan3dAxisMin(),
        chunkScan3dAxisMax(),
        chunkScan3dCoordinateTransformSelector(),
        chunkScan3dTransformValue(),
        chunkScan3dCoordinateReferenceSelector(),
        chunkScan3dCoordinateReferenceValue(),
        mvChunkJPEG()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( chunkModeActive, "ChunkModeActive" );
        locator.bindComponent( chunkSelector, "ChunkSelector" );
        locator.bindComponent( chunkEnable, "ChunkEnable" );
        locator.bindComponent( chunkPartSelector, "ChunkPartSelector" );
        locator.bindComponent( chunkImageComponent, "ChunkImageComponent" );
        locator.bindComponent( chunkImage, "ChunkImage" );
        locator.bindComponent( chunkOffsetX, "ChunkOffsetX" );
        locator.bindComponent( chunkOffsetY, "ChunkOffsetY" );
        locator.bindComponent( chunkWidth, "ChunkWidth" );
        locator.bindComponent( chunkHeight, "ChunkHeight" );
        locator.bindComponent( chunkPixelFormat, "ChunkPixelFormat" );
        locator.bindComponent( chunkPixelDynamicRangeMin, "ChunkPixelDynamicRangeMin" );
        if( !chunkPixelDynamicRangeMin.isValid() )
        {
            locator.bindComponent( chunkPixelDynamicRangeMin, "ChunkDynamicRangeMin" );
        }
        locator.bindComponent( chunkPixelDynamicRangeMax, "ChunkPixelDynamicRangeMax" );
        if( !chunkPixelDynamicRangeMax.isValid() )
        {
            locator.bindComponent( chunkPixelDynamicRangeMax, "ChunkDynamicRangeMax" );
        }
        locator.bindComponent( chunkTimestamp, "ChunkTimestamp" );
        locator.bindComponent( chunkTimestampLatchValue, "ChunkTimestampLatchValue" );
        locator.bindComponent( chunkLineStatusAll, "ChunkLineStatusAll" );
        locator.bindComponent( chunkCounterSelector, "ChunkCounterSelector" );
        locator.bindComponent( chunkCounterValue, "ChunkCounterValue" );
        if( !chunkCounterValue.isValid() )
        {
            locator.bindComponent( chunkCounterValue, "ChunkCounter" );
        }
        locator.bindComponent( chunkTimerSelector, "ChunkTimerSelector" );
        locator.bindComponent( chunkEncoderSelector, "ChunkEncoderSelector" );
        locator.bindComponent( chunkScanLineSelector, "ChunkScanLineSelector" );
        locator.bindComponent( chunkEncoderValue, "ChunkEncoderValue" );
        locator.bindComponent( chunkEncoderStatus, "ChunkEncoderStatus" );
        locator.bindComponent( chunkExposureTimeSelector, "ChunkExposureTimeSelector" );
        locator.bindComponent( chunkTimerValue, "ChunkTimerValue" );
        if( !chunkTimerValue.isValid() )
        {
            locator.bindComponent( chunkTimerValue, "ChunkTimer" );
        }
        locator.bindComponent( chunkExposureTime, "ChunkExposureTime" );
        locator.bindComponent( chunkGainSelector, "ChunkGainSelector" );
        locator.bindComponent( chunkGain, "ChunkGain" );
        locator.bindComponent( chunkBlackLevelSelector, "ChunkBlackLevelSelector" );
        locator.bindComponent( chunkBlackLevel, "ChunkBlackLevel" );
        locator.bindComponent( chunkLinePitch, "ChunkLinePitch" );
        locator.bindComponent( chunkFrameID, "ChunkFrameID" );
        locator.bindComponent( chunkSourceID, "ChunkSourceID" );
        locator.bindComponent( chunkRegionID, "ChunkRegionID" );
        locator.bindComponent( chunkTransferBlockID, "ChunkTransferBlockID" );
        locator.bindComponent( chunkTransferStreamID, "ChunkTransferStreamID" );
        locator.bindComponent( chunkTransferQueueCurrentBlockCount, "ChunkTransferQueueCurrentBlockCount" );
        locator.bindComponent( chunkStreamChannelID, "ChunkStreamChannelID" );
        locator.bindComponent( chunkSequencerSetActive, "ChunkSequencerSetActive" );
        locator.bindComponent( chunkScan3dDistanceUnit, "ChunkScan3dDistanceUnit" );
        locator.bindComponent( chunkScan3dOutputMode, "ChunkScan3dOutputMode" );
        locator.bindComponent( chunkScan3dCoordinateSystem, "ChunkScan3dCoordinateSystem" );
        locator.bindComponent( chunkScan3dCoordinateSystemReference, "ChunkScan3dCoordinateSystemReference" );
        locator.bindComponent( chunkScan3dCoordinateSelector, "ChunkScan3dCoordinateSelector" );
        locator.bindComponent( chunkScan3dCoordinateScale, "ChunkScan3dCoordinateScale" );
        locator.bindComponent( chunkScan3dCoordinateOffset, "ChunkScan3dCoordinateOffset" );
        locator.bindComponent( chunkScan3dInvalidDataFlag, "ChunkScan3dInvalidDataFlag" );
        locator.bindComponent( chunkScan3dInvalidDataValue, "ChunkScan3dInvalidDataValue" );
        locator.bindComponent( chunkScan3dAxisMin, "ChunkScan3dAxisMin" );
        locator.bindComponent( chunkScan3dAxisMax, "ChunkScan3dAxisMax" );
        locator.bindComponent( chunkScan3dCoordinateTransformSelector, "ChunkScan3dCoordinateTransformSelector" );
        locator.bindComponent( chunkScan3dTransformValue, "ChunkScan3dTransformValue" );
        locator.bindComponent( chunkScan3dCoordinateReferenceSelector, "ChunkScan3dCoordinateReferenceSelector" );
        locator.bindComponent( chunkScan3dCoordinateReferenceValue, "ChunkScan3dCoordinateReferenceValue" );
        locator.bindComponent( mvChunkJPEG, "mvChunkJPEG" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief A boolean property. Activates the inclusion of Chunk data in the payload of the image.
    /**
     *  Activates the inclusion of Chunk data in the payload of the image.
     */
    PropertyIBoolean chunkModeActive;
    /// \brief An enumerated integer property. Selects which Chunk to enable or control.
    /**
     *  Selects which Chunk to enable or control.
     *
     *  The following string values might be valid for this feature:
     *  - \b ImageComponent (Display string: 'Image Component'): Image Component
     *  - \b Image (Display string: 'Image'): Image
     *  - \b OffsetX (Display string: 'Offset X'): Offset X
     *  - \b OffsetY (Display string: 'Offset Y'): Offset Y
     *  - \b Width (Display string: 'Width'): Width
     *  - \b Height (Display string: 'Height'): Height
     *  - \b PixelFormat (Display string: 'Pixel Format'): Pixel Format
     *  - \b PixelDynamicRangeMax (Display string: 'Pixel Dynamic Range Max'): Pixel Dynamic Range Max
     *  - \b PixelDynamicRangeMin (Display string: 'Pixel Dynamic Range Min'): Pixel Dynamic Range Min
     *  - \b Timestamp (Display string: 'Timestamp'): Timestamp
     *  - \b LineStatusAll (Display string: 'Line Status All'): Line Status All
     *  - \b CounterValue (Display string: 'Counter Value'): Counter Value
     *  - \b TimerValue (Display string: 'Timer Value'): Timer Value
     *  - \b EncoderValue (Display string: 'Encoder Value'): Encoder Value
     *  - \b ExposureTime (Display string: 'Exposure Time'): Exposure Time
     *  - \b Gain (Display string: 'Gain'): Gain
     *  - \b BlackLevel (Display string: 'Black Level'): Black Level
     *  - \b LinePitch (Display string: 'Line Pitch'): Line Pitch
     *  - \b FrameID (Display string: 'Frame ID'): Frame ID
     *  - \b SourceID (Display string: 'Source ID'): Source ID
     *  - \b RegionID (Display string: 'Region ID'): Region ID
     *  - \b TransferBlockID (Display string: 'Transfer Block ID'): Transfer Block ID
     *  - \b TransferStreamID (Display string: 'Transfer Stream ID'): Transfer Stream ID
     *  - \b TransferQueue (Display string: 'Transfer Queue'): Transfer Queue
     *  - \b CurrentBlockCount (Display string: 'Current Block Count'): Current Block Count
     *  - \b StreamChannelID (Display string: 'Stream Channel ID'): Stream Channel ID
     *  - \b Scan3dDistanceUnit (Display string: 'Scan 3d Distance Unit'): Scan 3d Distance Unit
     *  - \b Scan3dOutputMode (Display string: 'Scan 3d Output Mode'): Scan 3d Output Mode
     *  - \b Scan3dCoordinateSystem (Display string: 'Scan 3d Coordinate System'): Scan 3d Coordinate System
     *  - \b Scan3dCoordinateSystemReference (Display string: 'Scan 3d Coordinate System Reference'): Scan 3d Coordinate System Reference
     *  - \b Scan3dCoordinateScale (Display string: 'Scan 3d Coordinate Scale'): Scan 3d Coordinate Scale
     *  - \b Scan3dCoordinateOffset (Display string: 'Scan 3d Coordinate Offset'): Scan 3d Coordinate Offset
     *  - \b Scan3dInvalidDataFlag (Display string: 'Scan 3d Invalid Data Flag'): Scan 3d Invalid Data Flag
     *  - \b Scan3dInvalidDataValue (Display string: 'Scan 3d Invalid Data Value'): Scan 3d Invalid Data Value
     *  - \b Scan3dAxisMin (Display string: 'Scan 3d Axis Min'): Scan 3d Axis Min
     *  - \b Scan3dAxisMax (Display string: 'Scan 3d Axis Max'): Scan 3d Axis Max
     *  - \b Scan3dCoordinateTransformValueScan3dCoordinateReferenceValue (Display string: 'Scan 3d Coordinate Transform Value Scan 3d Coordinate Reference Value'): Scan 3d Coordinate Transform Value Scan 3d Coordinate Reference Value
     *  - \b PixelDynamicRangeMinTimestamp (Display string: 'Chunk Selector')
     *  - \b AdditionalInfo (Display string: 'Chunk Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkSelector;
    /// \brief A boolean property. Enables the inclusion of the selected Chunk data in the payload of the image.
    /**
     *  Enables the inclusion of the selected Chunk data in the payload of the image.
     */
    PropertyIBoolean chunkEnable;
    /// \brief An integer property. Selects the part to access in chunk data in a multipart transmission.
    /**
     *  Selects the part to access in chunk data in a multipart transmission.
     */
    PropertyI64 chunkPartSelector;
    /// \brief An enumerated integer property. Returns the component of the payload image.
    /**
     *  Returns the component of the payload image. This can be used to identify the image component of a generic part in a multipart transfer.
     *
     *  The following string values might be valid for this feature:
     *  - \b Intensity (Display string: 'Intensity'): The image data is the intensity component.
     *  - \b Color (Display string: 'Color'): The image data is color component.
     *  - \b Infrared (Display string: 'Infrared'): The image data is infrared component.
     *  - \b Ultraviolet (Display string: 'Ultraviolet'): The image data is the ultraviolet component.
     *  - \b Range (Display string: 'Range'): The image data is the range (distance) component.
     *  - \b Disparity (Display string: 'Disparity'): The image data is the disparity component.
     *  - \b Confidence (Display string: 'Confidence'): The image data is the confidence map component.
     *  - \b Scatter (Display string: 'Scatter'): The image data is the scatter component.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkImageComponent;
    /// \brief A string property. Returns the entire image data included in the payload.
    /**
     *  Returns the entire image data included in the payload.
     */
    PropertyS chunkImage;
    /// \brief An integer property. Returns the OffsetX of the image included in the payload.
    /**
     *  Returns the OffsetX of the image included in the payload.
     */
    PropertyI64 chunkOffsetX;
    /// \brief An integer property. Returns the OffsetY of the image included in the payload.
    /**
     *  Returns the OffsetY of the image included in the payload.
     */
    PropertyI64 chunkOffsetY;
    /// \brief An integer property. Returns the Width of the image included in the payload.
    /**
     *  Returns the Width of the image included in the payload.
     */
    PropertyI64 chunkWidth;
    /// \brief An integer property. Returns the Height of the image included in the payload.
    /**
     *  Returns the Height of the image included in the payload.
     */
    PropertyI64 chunkHeight;
    /// \brief An enumerated integer property. Returns the PixelFormat of the image included in the payload.
    /**
     *  Returns the PixelFormat of the image included in the payload.
     *
     *  The following string values might be valid for this feature:
     *  - \b Mono1p (Display string: 'Mono1p'): Mono 1 bit packed.
     *  - \b Mono2p (Display string: 'Mono2p'): Mono 2 bit packed.
     *  - \b Mono4p (Display string: 'Mono4p'): Mono 4 bit packed.
     *  - \b Mono8 (Display string: 'Mono8'): Mono 8 bit packed.
     *  - \b Mono8s (Display string: 'Mono8s'): Mono 1 bit signed.
     *  - \b Mono10 (Display string: 'Mono10'): Mono 10 bit.
     *  - \b Mono10c3a64 (Display string: 'Mono10c3a64'): Mono 10 bit in 64 bit.
     *  - \b Mono10c3p32 (Display string: 'Mono10c3p32'): Mono 10 bit in 32bit.
     *  - \b Mono10g12 (Display string: 'Mono10g12'): Mono 10 bit grouped in 12 bit.
     *  - \b Mono10msb (Display string: 'Mono10msb'): Mono 10 bit packed aligned on Msb.
     *  - \b Mono10p (Display string: 'Mono10p'): Mono 10 bit packed.
     *  - \b Mono10pmsb (Display string: 'Mono10pmsb'): Mono 10 bit packed aligned on Msb.
     *  - \b Mono10s (Display string: 'Mono10s'): Mono 10 bit signed.
     *  - \b Mono12 (Display string: 'Mono12'): Mono 12 bit packed.
     *  - \b Mono12g (Display string: 'Mono12g'): Mono 12 bit grouped.
     *  - \b Mono12msb (Display string: 'Mono12msb'): Mono 12 bit aligned on Msb.
     *  - \b Mono14 (Display string: 'Mono14'): Mono 14 bit.
     *  - \b Mono16 (Display string: 'Mono16'): Mono 16 bit.
     *  - \b R8 (Display string: 'R8'): Red 8 bit.
     *  - \b G8 (Display string: 'G8'): Green 8 bit.
     *  - \b B8 (Display string: 'B8'): Blue 8 bit.
     *  - \b RGB8 (Display string: 'RGB8'): Red, Green, Blue 8 bit
     *  - \b RGB8_Planar (Display string: 'RGB8_Planar'): Red, Green, Blue 8 bit planar.
     *  - \b RGB8a32 (Display string: 'RGB8a32'): Red, Green, Blue 8 bit aligned in 32 bit pixel
     *  - \b RGBa8 (Display string: 'RGBa8'): Red, Green, Blue 8 bit aligned on 8 bit
     *  - \b RGB10 (Display string: 'RGB10'): Red, Green, Blue 10 bit.
     *  - \b RGB10_Planar (Display string: 'RGB10_Planar'): Red, Green, Blue 10 bit planar.
     *  - \b RGB10g32 (Display string: 'RGB10g32'): Red, Green, Blue 8 bit grouped in 32 bit pixel.
     *  - \b RGB10g32msb (Display string: 'RGB10g32msb'): Red, Green, Blue 10 bit grouped in 32 bit pixel aligned on Msb.
     *  - \b RGB10p32 (Display string: 'RGB10p32'): Red, Green, Blue 10 bit packed in 32 bit pixel.
     *  - \b RGB10p32msb (Display string: 'RGB10p32msb'): Red, Green, Blue 10 bit packed in 32 bit pixel.
     *  - \b RGB12 (Display string: 'RGB12'): Red, Green, Blue 12 bit.
     *  - \b RGB12_Planar (Display string: 'RGB12_Planar'): Red, Green, Blue 12 bit planar.
     *  - \b RGB16 (Display string: 'RGB16'): Red, Green, Blue 16 bit.
     *  - \b RGB16_Planar (Display string: 'RGB16_Planar'): Red, Green, Blue 16 bit planar.
     *  - \b RGB565p (Display string: 'RGB565p'): Red, Green, Blue 16 bit packet in 5, 6, 5 bits.
     *  - \b BGR10 (Display string: 'BGR10'): Blue, Green, Red 10 bit.
     *  - \b BGR12 (Display string: 'BGR12'): Blue, Green, Red 12 bit.
     *  - \b BGR16 (Display string: 'BGR16'): Blue, Green, Red 16 bit.
     *  - \b BGR565p (Display string: 'BGR565p'): Blue, Green, Red 16 bit packet in 5, 6, 5 bits.
     *  - \b BGR8 (Display string: 'BGR8'): Blue, Green, Red 8 bit.
     *  - \b BGRa8 (Display string: 'BGRa8'): Blue, Green, Red, Alpha 8 bit.
     *  - \b YUV411_8 (Display string: 'YUV411_8'): YUV 411, 8 bit.
     *  - \b YUV422_8 (Display string: 'YUV422_8'): YUV 422 8 bit.
     *  - \b YUV8 (Display string: 'YUV8'): YUV 8 bit.
     *  - \b YCbCr411_8 (Display string: 'YCbCr411_8'): YCrCb 411 8 bit.
     *  - \b YCbCr422_8 (Display string: 'YCbCr422_8'): YCrCb 422 8 bit.
     *  - \b YCbCr601_411_8 (Display string: 'YCbCr601_411_8'): YCrCb 601 411 8 bit.
     *  - \b YCbCr601_422_8 (Display string: 'YCbCr601_422_8'): YCrCb 601 422 8 bit.
     *  - \b YCbCr601_8 (Display string: 'YCbCr601_8'): YCrCb 601 8 bit.
     *  - \b YCbCr709_411_8 (Display string: 'YCbCr709_411_8'): YCrCb 709 411 8 bit.
     *  - \b YCbCr709_422_8 (Display string: 'YCbCr709_422_8'): YCrCb 709 422 8 bit.
     *  - \b YCbCr709_8 (Display string: 'YCbCr709_8'): YCrCb 709 8 bit.
     *  - \b YCbCr8 (Display string: 'YCbCr8'): YCbCr 8 bit.
     *  - \b BayerBG8 (Display string: 'BayerBG8'): Bayer Blue Green 8 bit.
     *  - \b BayerGB8 (Display string: 'BayerGB8'): Bayer Green Blue 8 bit.
     *  - \b BayerGR8 (Display string: 'BayerGR8'): Bayer Green Red 8 bit.
     *  - \b BayerRG8 (Display string: 'BayerRG8'): Bayer Red Green 8 bit.
     *  - \b BayerBG10 (Display string: 'BayerBG10'): Bayer Blue Green 10 bit.
     *  - \b BayerBG10g12 (Display string: 'BayerBG10g12'): Bayer Blue Green 8 bit grouped on 12 bit.
     *  - \b BayerGB10 (Display string: 'BayerGB10'): Bayer Green Blue 10 bit.
     *  - \b BayerGB10g12 (Display string: 'BayerGB10g12'): Bayer Green Blue 10 bit grouped on 12 bit.
     *  - \b BayerGR10 (Display string: 'BayerGR10'): Bayer Green Red 10 bit.
     *  - \b BayerGR10g12 (Display string: 'BayerGR10g12'): Bayer Green Red 10 bit grouped on 12 bit.
     *  - \b BayerRG10 (Display string: 'BayerRG10'): Bayer Red Green 10 bit.
     *  - \b BayerRG10g12 (Display string: 'BayerRG10g12'): Bayer Red Green 10 bit grouped on 12 bit.
     *  - \b BayerBG12 (Display string: 'BayerBG12'): Bayer Blue Green 12 bit
     *  - \b BayerBG12g (Display string: 'BayerBG12g'): Bayer Blue Green 12 bit grouped.
     *  - \b BayerGB12 (Display string: 'BayerGB12'): Bayer Green Blue 12 bit
     *  - \b BayerGB12g (Display string: 'BayerGB12g'): Bayer Green Blue 12 bit grouped on 12 bit.
     *  - \b BayerGR12 (Display string: 'BayerGR12'): Bayer Green Red 12 bit.
     *  - \b BayerGR12g (Display string: 'BayerGR12g'): Bayer Green Red 12 bit grouped on 12 bit.
     *  - \b BayerRG12 (Display string: 'BayerRG12'): Bayer Red Green 12 bit.
     *  - \b BayerRG12g (Display string: 'BayerRG12g'): Bayer Red Green 12 bit grouped on 12 bit.
     *  - \b BayerBG16 (Display string: 'BayerBG16'): Bayer Blue Green 16 bit.
     *  - \b BayerGB16 (Display string: 'BayerGB16'): Bayer Green Blue 16 bit.
     *  - \b BayerGR16 (Display string: 'BayerGR16'): Bayer Green Red 16 bit.
     *  - \b BayerRG16 (Display string: 'BayerRG16'): Bayer Red Green 16 bit.
     *  - \b Coord3D_A8 (Display string: 'Coord3D_A8'): 3D coordinate, first component 8 bit.
     *  - \b Coord3D_B8 (Display string: 'Coord3D_B8'): 3D coordinate, second component 8 bit.
     *  - \b Coord3D_C8 (Display string: 'Coord3D_C8'): 3D coordinate, third component 8 bit.
     *  - \b Coord3D_ABC8 (Display string: 'Coord3D_ABC8'): 3D coordinates, 3 components 8 bit.
     *  - \b Coord3D_ABC8_Planar (Display string: 'Coord3D_ABC8_Planar'): 3D coordinates, 3 components 8 bit planar.
     *  - \b Coord3D_A16 (Display string: 'Coord3D_A16'): 3D coordinate, first component 16 bit.
     *  - \b Coord3D_B16 (Display string: 'Coord3D_B16'): 3D coordinate, second component 16 bit.
     *  - \b Coord3D_C16 (Display string: 'Coord3D_C16'): 3D coordinate, third component 16 bit.
     *  - \b Coord3D_ABC16 (Display string: 'Coord3D_ABC16'): 3D coordinates, 3 components 16 bit.
     *  - \b Coord3D_ABC16_Planar (Display string: 'Coord3D_ABC16_Planar'): 3D coordinates, 3 components 16 bit planar.
     *  - \b Coord3D_A32f (Display string: 'Coord3D_A32f'): 3D coordinate, first component 32 bit float.
     *  - \b Coord3D_B32f (Display string: 'Coord3D_B32f'): 3D coordinate, second component 32 bit float.
     *  - \b Coord3D_C32f (Display string: 'Coord3D_C32f'): 3D coordinate, third component 32 bit float.
     *  - \b Coord3D_ABC32f (Display string: 'Coord3D_ABC32f'): 3D coordinates, 3 components 32 bit float.
     *  - \b Coord3D_ABC32f_Planar (Display string: 'Coord3D_ABC32f_Planar'): 3D coordinates, 3 components 32 bit float planar.
     *  - \b Confidence1 (Display string: 'Confidence1'): Confidence data 1 bit.
     *  - \b Confidence1p (Display string: 'Confidence1p'): Confidence data 1 bit packed.
     *  - \b Confidence8 (Display string: 'Confidence8'): Confidence data 8 bit.
     *  - \b Confidence16 (Display string: 'Confidence16'): Confidence data 16 bit.
     *  - \b Confidence32f (Display string: 'Confidence32f'): Confidence data 32 bit float.
     *  - \b Raw8 (Display string: 'Raw8'): Raw 8 bit.
     *  - \b Raw16 (Display string: 'Raw16'): Raw 16 bit.
     *  - \b Mono12Packed (Display string: 'Mono12Packed'): Mono 12 bit packed (GigE Vision Specific).
     *  - \b BayerGR10Packed (Display string: 'BayerGR10Packed'): Bayer GR 10 bit packed (GigE Vision Specific).
     *  - \b BayerRG10Packed (Display string: 'BayerRG10Packed'): Bayer RG 10 bit packed (GigE Vision Specific).
     *  - \b BayerGB10Packed (Display string: 'BayerGB10Packed'): Bayer GB 10 bit packed (GigE Vision Specific).
     *  - \b BayerBG10Packed (Display string: 'BayerBG10Packed'): Bayer BG 10 bit packed (GigE Vision Specific).
     *  - \b BayerGR12Packed (Display string: 'BayerGR12Packed'): Bayer GR 12 bit packed (GigE Vision Specific).
     *  - \b BayerRG12Packed (Display string: 'BayerRG12Packed'): Bayer RG 12 bit packed (GigE Vision Specific).
     *  - \b BayerGB12Packed (Display string: 'BayerGB12Packed'): Bayer GB 12 bit packed (GigE Vision Specific).
     *  - \b BayerBG12Packed (Display string: 'BayerBG12Packed'): Bayer BG 12 bit packed (GigE Vision Specific).
     *  - \b RGB10V1Packed (Display string: 'RGB10V1Packed'): RGB 10 bit packed (GigE Vision Specific).
     *  - \b BGR10V1Packed (Display string: 'BGR10V1Packed'): BGR 10 bit packed (GigE Vision Specific).
     *  - \b RGB12V1Packed (Display string: 'RGB12V1Packed'): RGB 12 bit packed (GigE Vision Specific).
     *  - \b Mono8Signed (Display string: 'Chunk Pixel Format')
     *  - \b Mono10Packed (Display string: 'Chunk Pixel Format')
     *  - \b RGB8Packed (Display string: 'Chunk Pixel Format')
     *  - \b BGR8Packed (Display string: 'Chunk Pixel Format')
     *  - \b RGBA8Packed (Display string: 'Chunk Pixel Format')
     *  - \b BGRA8Packed (Display string: 'Chunk Pixel Format')
     *  - \b RGB10Packed (Display string: 'Chunk Pixel Format')
     *  - \b BGR10Packed (Display string: 'Chunk Pixel Format')
     *  - \b RGB12Packed (Display string: 'Chunk Pixel Format')
     *  - \b BGR12Packed (Display string: 'Chunk Pixel Format')
     *  - \b RGB16Packed (Display string: 'Chunk Pixel Format')
     *  - \b RGB10V2Packed (Display string: 'Chunk Pixel Format')
     *  - \b RGB565Packed (Display string: 'Chunk Pixel Format')
     *  - \b BGR565Packed (Display string: 'Chunk Pixel Format')
     *  - \b YUV411Packed (Display string: 'Chunk Pixel Format')
     *  - \b YUV422Packed (Display string: 'Chunk Pixel Format')
     *  - \b YUV444Packed (Display string: 'Chunk Pixel Format')
     *  - \b YUYVPacked (Display string: 'Chunk Pixel Format')
     *  - \b RGB8Planar (Display string: 'Chunk Pixel Format')
     *  - \b RGB10Planar (Display string: 'Chunk Pixel Format')
     *  - \b RGB12Planar (Display string: 'Chunk Pixel Format')
     *  - \b RGB16Planar (Display string: 'Chunk Pixel Format')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkPixelFormat;
    /// \brief An integer property. Returns the minimum value of dynamic range of the image included in the payload.
    /**
     *  Returns the minimum value of dynamic range of the image included in the payload.
     */
    PropertyI64 chunkPixelDynamicRangeMin;
    /// \brief An integer property. Returns the maximum value of dynamic range of the image included in the payload.
    /**
     *  Returns the maximum value of dynamic range of the image included in the payload.
     */
    PropertyI64 chunkPixelDynamicRangeMax;
    /// \brief An integer property. Returns the Timestamp of the image included in the payload at the time of the FrameStart internal event.
    /**
     *  Returns the Timestamp of the image included in the payload at the time of the FrameStart internal event.
     */
    PropertyI64 chunkTimestamp;
    /// \brief An integer property. Returns the last Timestamp latched with the TimestampLatch command.
    /**
     *  Returns the last Timestamp latched with the TimestampLatch command.
     */
    PropertyI64 chunkTimestampLatchValue;
    /// \brief An integer property. Returns the status of all the I/O lines at the time of the FrameStart internal event.
    /**
     *  Returns the status of all the I/O lines at the time of the FrameStart internal event.
     */
    PropertyI64 chunkLineStatusAll;
    /// \brief An enumerated integer property. Selects which counter to retrieve data from.
    /**
     *  Selects which counter to retrieve data from.
     *
     *  The following string values might be valid for this feature:
     *  - \b Counter0 (Display string: 'Counter 0'): Selects the counter 0.
     *  - \b Counter1 (Display string: 'Counter 1'): Selects the counter 1.
     *  - \b Counter2 (Display string: 'Counter 2'): Selects the counter 2.
     *  - \b Counter#3# (Display string: 'Counter #3#'): Selects the counter #3#.
     *  - \b Counter3 (Display string: 'Counter 3'): Selects the counter 3.
     *  - \b Counter4 (Display string: 'Counter 4'): Selects the counter 4.
     *  - \b Counter5 (Display string: 'Counter 5'): Selects the counter 5.
     *  - \b Counter6 (Display string: 'Counter 6'): Selects the counter 6.
     *  - \b Counter7 (Display string: 'Counter 7'): Selects the counter 7.
     *  - \b Counter8 (Display string: 'Counter 8'): Selects the counter 8.
     *  - \b Counter9 (Display string: 'Counter 9'): Selects the counter 9.
     *  - \b Counter10 (Display string: 'Counter 10'): Selects the counter 10.
     *  - \b Counter11 (Display string: 'Counter 11'): Selects the counter 11.
     *  - \b Counter12 (Display string: 'Counter 12'): Selects the counter 12.
     *  - \b Counter13 (Display string: 'Counter 13'): Selects the counter 13.
     *  - \b Counter14 (Display string: 'Counter 14'): Selects the counter 14.
     *  - \b Counter15 (Display string: 'Counter 15'): Selects the counter 15.
     *  - \b Counter16 (Display string: 'Chunk Counter Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkCounterSelector;
    /// \brief An integer property. Returns the value of the selected Chunk counter at the time of the FrameStart event.
    /**
     *  Returns the value of the selected Chunk counter at the time of the FrameStart event.
     */
    PropertyI64 chunkCounterValue;
    /// \brief An enumerated integer property. Selects which Timer to retrieve data from.
    /**
     *  Selects which Timer to retrieve data from.
     *
     *  The following string values might be valid for this feature:
     *  - \b Timer0 (Display string: 'Timer 0'): Selects the first Timer.
     *  - \b Timer1 (Display string: 'Timer 1'): Selects the first Timer.
     *  - \b Timer2 (Display string: 'Timer 2'): Selects the second Timer.
     *  - \b Timer#3# (Display string: 'Timer #3#'): Selects the second Timer.
     *  - \b Timer3 (Display string: 'Timer 3'): Selects the second Timer.
     *  - \b Timer4 (Display string: 'Timer 4'): Selects the second Timer.
     *  - \b Timer5 (Display string: 'Timer 5'): Selects the second Timer.
     *  - \b Timer6 (Display string: 'Timer 6'): Selects the second Timer.
     *  - \b Timer7 (Display string: 'Timer 7'): Selects the second Timer.
     *  - \b Timer8 (Display string: 'Timer 8'): Selects the second Timer.
     *  - \b Timer9 (Display string: 'Timer 9'): Selects the second Timer.
     *  - \b Timer10 (Display string: 'Timer 10'): Selects the second Timer.
     *  - \b Timer11 (Display string: 'Timer 11'): Selects the second Timer.
     *  - \b Timer12 (Display string: 'Timer 12'): Selects the second Timer.
     *  - \b Timer13 (Display string: 'Timer 13'): Selects the second Timer.
     *  - \b Timer14 (Display string: 'Timer 14'): Selects the second Timer.
     *  - \b Timer15 (Display string: 'Timer 15'): Selects the second Timer.
     *  - \b Timer16 (Display string: 'Chunk Timer Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkTimerSelector;
    /// \brief An enumerated integer property. Selects which Encoder to retrieve data from.
    /**
     *  Selects which Encoder to retrieve data from.
     *
     *  The following string values might be valid for this feature:
     *  - \b Encoder0 (Display string: 'Encoder 0'): Selects the first Encoder.
     *  - \b Encoder1 (Display string: 'Encoder 1'): Selects the first Encoder.
     *  - \b Encoder2 (Display string: 'Encoder 2'): Selects the second Encoder.
     *  - \b Encoder#3# (Display string: 'Encoder #3#'): Selects the second Encoder.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkEncoderSelector;
    /// \brief An integer property. Index for vector representation of one chunk value per line in an image.
    /**
     *  Index for vector representation of one chunk value per line in an image.
     */
    PropertyI64 chunkScanLineSelector;
    /// \brief An integer property. Returns the counter's value of the selected Encoder at the time of the FrameStart in area scan mode or the counter's value at the time of the LineStart selected by ChunkScanLineSelector in LineScan mode.
    /**
     *  Returns the counter's value of the selected Encoder at the time of the FrameStart in area scan mode or the counter's value at the time of the LineStart selected by ChunkScanLineSelector in LineScan mode.
     */
    PropertyI64 chunkEncoderValue;
    /// \brief An enumerated integer property. Returns the motion status of the selected encoder.
    /**
     *  Returns the motion status of the selected encoder.
     *
     *  The following string values might be valid for this feature:
     *  - \b EncoderUp (Display string: 'Encoder Up'): The encoder counter last incremented.
     *  - \b EncoderDown (Display string: 'Encoder Down'): The encoder counter last decremented.
     *  - \b EncoderIdle (Display string: 'Encoder Idle'): The encoder is not active.
     *  - \b EncoderStatic (Display string: 'Encoder Static'): No motion within the EncoderTimeout time.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkEncoderStatus;
    /// \brief An enumerated integer property. Selects which exposure time is read by the ChunkExposureTime feature.
    /**
     *  Selects which exposure time is read by the ChunkExposureTime feature.
     *
     *  The following string values might be valid for this feature:
     *  - \b Common (Display string: 'Common'): Selects the common ExposureTime.
     *  - \b Red (Display string: 'Red'): Selects the red common ExposureTime.
     *  - \b Green (Display string: 'Green'): Selects the green ExposureTime.
     *  - \b Blue (Display string: 'Blue'): Selects the blue ExposureTime.
     *  - \b Cyan (Display string: 'Cyan'): Selects the cyan common ExposureTime..
     *  - \b Magenta (Display string: 'Magenta'): Selects the magenta ExposureTime..
     *  - \b Yellow (Display string: 'Yellow'): Selects the yellow ExposureTime..
     *  - \b Infrared (Display string: 'Infrared'): Selects the infrared ExposureTime.
     *  - \b Ultraviolet (Display string: 'Ultraviolet'): Selects the ultraviolet ExposureTime.
     *  - \b Stage1 (Display string: 'Stage 1'): Selects the first stage ExposureTime.
     *  - \b Stage2 (Display string: 'Stage 2'): Selects the second stage ExposureTime.
     *  - \b Stage#3# (Display string: 'Stage #3#'): Selects the second stage ExposureTime.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkExposureTimeSelector;
    /// \brief A floating point property. Returns the value of the selected Timer at the time of the FrameStart internal event.
    /**
     *  Returns the value of the selected Timer at the time of the FrameStart internal event.
     */
    PropertyF chunkTimerValue;
    /// \brief A floating point property. Returns the exposure time used to capture the image.
    /**
     *  Returns the exposure time used to capture the image.
     */
    PropertyF chunkExposureTime;
    /// \brief An enumerated integer property. Selects which Gain to return.
    /**
     *  Selects which Gain to return.
     *
     *  The following string values might be valid for this feature:
     *  - \b All (Display string: 'All'): Gain will be applied to all channels or taps.
     *  - \b Red (Display string: 'Red'): Gain will be applied to the red channel.
     *  - \b Green (Display string: 'Green'): Gain will be applied to the green channel.
     *  - \b Blue (Display string: 'Blue'): Gain will be applied to the blue channel.
     *  - \b Y (Display string: 'Y'): Gain will be applied to Y channel.
     *  - \b U (Display string: 'U'): Gain will be applied to U channel.
     *  - \b V (Display string: 'V'): Gain will be applied to V channel.
     *  - \b Tap1 (Display string: 'Tap 1'): Gain will be applied to Tap 1.
     *  - \b Tap2 (Display string: 'Tap 2'): Gain will be applied to Tap 2.
     *  - \b Tap#3# (Display string: 'Tap #3#'): Gain will be applied to Tap #3#.
     *  - \b AnalogAll (Display string: 'Analog All'): Gain will be applied to all analog channels or taps.
     *  - \b AnalogRed (Display string: 'Analog Red'): Gain will be applied to the red analog channel.
     *  - \b AnalogGreen (Display string: 'Analog Green'): Gain will be applied to the green analog channel.
     *  - \b AnalogBlue (Display string: 'Analog Blue'): Gain will be applied to the blue analog channel.
     *  - \b AnalogY (Display string: 'Analog Y'): Gain will be applied to Y analog channel.
     *  - \b AnalogU (Display string: 'Analog U'): Gain will be applied to U analog channel.
     *  - \b AnalogV (Display string: 'Analog V'): Gain will be applied to V analog channel.
     *  - \b AnalogTap1 (Display string: 'Analog Tap 1'): Analog gain will be applied to Tap 1.
     *  - \b AnalogTap2 (Display string: 'Analog Tap 2'): Analog gain will be applied to Tap 2.
     *  - \b AnalogTap#3# (Display string: 'Analog Tap #3#'): Analog gain will be applied to Tap #3#.
     *  - \b DigitalAll (Display string: 'Digital All'): Gain will be applied to all digital channels or taps.
     *  - \b DigitalRed (Display string: 'Digital Red'): Gain will be applied to the red digital channel.
     *  - \b DigitalGreen (Display string: 'Digital Green'): Gain will be applied to the green digital channel.
     *  - \b DigitalBlue (Display string: 'Digital Blue'): Gain will be applied to the blue digital channel.
     *  - \b DigitalY (Display string: 'Digital Y'): Gain will be applied to Y digital channel.
     *  - \b DigitalU (Display string: 'Digital U'): Gain will be applied to U digital channel.
     *  - \b DigitalV (Display string: 'Digital V'): Gain will be applied to V digital channel.
     *  - \b DigitalTap1 (Display string: 'Digital Tap 1'): Digital gain will be applied to Tap 1.
     *  - \b DigitalTap2 (Display string: 'Digital Tap 2'): Digital gain will be applied to Tap 2.
     *  - \b DigitalTap#3# (Display string: 'Digital Tap #3#'): Digital gain will be applied to Tap #3#.
     *  - \b Tap3 (Display string: 'Tap 3'): Gain will be applied to Tap 3.
     *  - \b Tap4 (Display string: 'Tap 4'): Gain will be applied to Tap 4.
     *  - \b Tap5 (Display string: 'Tap 5'): Gain will be applied to Tap 5.
     *  - \b Tap6 (Display string: 'Tap 6'): Gain will be applied to Tap 6.
     *  - \b Tap7 (Display string: 'Tap 7'): Gain will be applied to Tap 7.
     *  - \b Tap8 (Display string: 'Tap 8'): Gain will be applied to Tap 8.
     *  - \b Tap9 (Display string: 'Tap 9'): Gain will be applied to Tap 9.
     *  - \b Tap10 (Display string: 'Tap 10'): Gain will be applied to Tap 10.
     *  - \b Tap11 (Display string: 'Tap 11'): Gain will be applied to Tap 11.
     *  - \b Tap12 (Display string: 'Tap 12'): Gain will be applied to Tap 12.
     *  - \b Tap13 (Display string: 'Tap 13'): Gain will be applied to Tap 13.
     *  - \b Tap14 (Display string: 'Tap 14'): Gain will be applied to Tap 14.
     *  - \b Tap15 (Display string: 'Tap 15'): Gain will be applied to Tap 15.
     *  - \b Tap16 (Display string: 'Chunk Gain Selector')
     *  - \b AnalogTap3 (Display string: 'Analog Tap 3'): Analog gain will be applied to Tap 3.
     *  - \b AnalogTap4 (Display string: 'Analog Tap 4'): Analog gain will be applied to Tap 4.
     *  - \b AnalogTap5 (Display string: 'Analog Tap 5'): Analog gain will be applied to Tap 5.
     *  - \b AnalogTap6 (Display string: 'Analog Tap 6'): Analog gain will be applied to Tap 6.
     *  - \b AnalogTap7 (Display string: 'Analog Tap 7'): Analog gain will be applied to Tap 7.
     *  - \b AnalogTap8 (Display string: 'Analog Tap 8'): Analog gain will be applied to Tap 8.
     *  - \b AnalogTap9 (Display string: 'Analog Tap 9'): Analog gain will be applied to Tap 9.
     *  - \b AnalogTap10 (Display string: 'Analog Tap 10'): Analog gain will be applied to Tap 10.
     *  - \b AnalogTap11 (Display string: 'Analog Tap 11'): Analog gain will be applied to Tap 11.
     *  - \b AnalogTap12 (Display string: 'Analog Tap 12'): Analog gain will be applied to Tap 12.
     *  - \b AnalogTap13 (Display string: 'Analog Tap 13'): Analog gain will be applied to Tap 13.
     *  - \b AnalogTap14 (Display string: 'Analog Tap 14'): Analog gain will be applied to Tap 14.
     *  - \b AnalogTap15 (Display string: 'Analog Tap 15'): Analog gain will be applied to Tap 15.
     *  - \b AnalogTap16 (Display string: 'Chunk Gain Selector')
     *  - \b DigitalTap3 (Display string: 'Digital Tap 3'): Digital gain will be applied to Tap 3.
     *  - \b DigitalTap4 (Display string: 'Digital Tap 4'): Digital gain will be applied to Tap 4.
     *  - \b DigitalTap5 (Display string: 'Digital Tap 5'): Digital gain will be applied to Tap 5.
     *  - \b DigitalTap6 (Display string: 'Digital Tap 6'): Digital gain will be applied to Tap 6.
     *  - \b DigitalTap7 (Display string: 'Digital Tap 7'): Digital gain will be applied to Tap 7.
     *  - \b DigitalTap8 (Display string: 'Digital Tap 8'): Digital gain will be applied to Tap 8.
     *  - \b DigitalTap9 (Display string: 'Digital Tap 9'): Digital gain will be applied to Tap 9.
     *  - \b DigitalTap10 (Display string: 'Digital Tap 10'): Digital gain will be applied to Tap 10.
     *  - \b DigitalTap11 (Display string: 'Digital Tap 11'): Digital gain will be applied to Tap 11.
     *  - \b DigitalTap12 (Display string: 'Digital Tap 12'): Digital gain will be applied to Tap 12.
     *  - \b DigitalTap13 (Display string: 'Digital Tap 13'): Digital gain will be applied to Tap 13.
     *  - \b DigitalTap14 (Display string: 'Digital Tap 14'): Digital gain will be applied to Tap 14.
     *  - \b DigitalTap15 (Display string: 'Digital Tap 15'): Digital gain will be applied to Tap 15.
     *  - \b DigitalTap16 (Display string: 'Chunk Gain Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkGainSelector;
    /// \brief A floating point property. Returns the gain used to capture the image.
    /**
     *  Returns the gain used to capture the image.
     */
    PropertyF chunkGain;
    /// \brief An enumerated integer property. Selects which Black Level to return.
    /**
     *  Selects which Black Level to return. Possible values are:
     *
     *  The following string values might be valid for this feature:
     *  - \b All (Display string: 'All'): Black Level will be applied to all channels or taps.
     *  - \b Red (Display string: 'Red'): Black Level will be applied to the red channel.
     *  - \b Green (Display string: 'Green'): Black Level will be applied to the green channel.
     *  - \b Blue (Display string: 'Blue'): Black Level will be applied to the blue channel.
     *  - \b Y (Display string: 'Y'): Black Level will be applied to Y channel.
     *  - \b U (Display string: 'U'): Black Level will be applied to U channel.
     *  - \b V (Display string: 'V'): Black Level will be applied to V channel.
     *  - \b Tap1 (Display string: 'Tap 1'): Black Level will be applied to Tap 1.
     *  - \b Tap2 (Display string: 'Tap 2'): Black Level will be applied to Tap 2.
     *  - \b Tap#3# (Display string: 'Tap #3#'): Black Level will be applied to Tap #3#.
     *  - \b Tap3 (Display string: 'Tap 3'): Black Level will be applied to Tap 3.
     *  - \b Tap4 (Display string: 'Tap 4'): Black Level will be applied to Tap 4.
     *  - \b Tap5 (Display string: 'Tap 5'): Black Level will be applied to Tap 5.
     *  - \b Tap6 (Display string: 'Tap 6'): Black Level will be applied to Tap 6.
     *  - \b Tap7 (Display string: 'Tap 7'): Black Level will be applied to Tap 7.
     *  - \b Tap8 (Display string: 'Tap 8'): Black Level will be applied to Tap 8.
     *  - \b Tap9 (Display string: 'Tap 9'): Black Level will be applied to Tap 9.
     *  - \b Tap10 (Display string: 'Tap 10'): Black Level will be applied to Tap 10.
     *  - \b Tap11 (Display string: 'Tap 11'): Black Level will be applied to Tap 11.
     *  - \b Tap12 (Display string: 'Tap 12'): Black Level will be applied to Tap 12.
     *  - \b Tap13 (Display string: 'Tap 13'): Black Level will be applied to Tap 13.
     *  - \b Tap14 (Display string: 'Tap 14'): Black Level will be applied to Tap 14.
     *  - \b Tap15 (Display string: 'Tap 15'): Black Level will be applied to Tap 15.
     *  - \b Tap16 (Display string: 'Chunk Black Level Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkBlackLevelSelector;
    /// \brief A floating point property. Returns the black level used to capture the image included in the payload.
    /**
     *  Returns the black level used to capture the image included in the payload.
     */
    PropertyF chunkBlackLevel;
    /// \brief An integer property. Returns the LinePitch of the image included in the payload.
    /**
     *  Returns the LinePitch of the image included in the payload.
     */
    PropertyI64 chunkLinePitch;
    /// \brief An integer property. Returns the unique Identifier of the frame (or image) included in the payload.
    /**
     *  Returns the unique Identifier of the frame (or image) included in the payload.
     */
    PropertyI64 chunkFrameID;
    /// \brief An enumerated integer property. Returns the identifier of Source that the image comes from.
    /**
     *  Returns the identifier of Source that the image comes from.
     *
     *  The following string values might be valid for this feature:
     *  - \b Source0 (Display string: 'Source 0'): Image comes from the Source 0.
     *  - \b Source1 (Display string: 'Source 1'): Image comes from the Source 1.
     *  - \b Source2 (Display string: 'Source 2'): Image comes from the Source 2.
     *  - \b Source#3# (Display string: 'Source #3#'): Image comes from the Source #3#.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkSourceID;
    /// \brief An enumerated integer property. Returns the identifier of Region that the image comes from.
    /**
     *  Returns the identifier of Region that the image comes from.
     *
     *  The following string values might be valid for this feature:
     *  - \b Region0 (Display string: 'Region 0'): Image comes from the Region 0.
     *  - \b Region1 (Display string: 'Region 1'): Image comes from the Region 1.
     *  - \b Region2 (Display string: 'Region 2'): Image comes from the Region 2.
     *  - \b Region#3# (Display string: 'Region #3#'): Image comes from the Region #3#.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkRegionID;
    /// \brief An integer property. Returns the unique identifier of the transfer block used to transport the payload.
    /**
     *  Returns the unique identifier of the transfer block used to transport the payload.
     */
    PropertyI64 chunkTransferBlockID;
    /// \brief An enumerated integer property. Returns identifier of the stream that generated this block.
    /**
     *  Returns identifier of the stream that generated this block.
     *
     *  The following string values might be valid for this feature:
     *  - \b Stream0 (Display string: 'Stream 0'): Data comes from Stream0.
     *  - \b Stream1 (Display string: 'Stream 1'): Data comes from Stream1.
     *  - \b Stream2 (Display string: 'Stream 2'): Data comes from Stream2.
     *  - \b Stream3 (Display string: 'Stream 3'): Data comes from Stream3.
     *  - \b Stream#4# (Display string: 'Stream #4#'): Data comes from Stream#4#.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkTransferStreamID;
    /// \brief An integer property. Returns the current number of blocks in the transfer queue.
    /**
     *  Returns the current number of blocks in the transfer queue.
     */
    PropertyI64 chunkTransferQueueCurrentBlockCount;
    /// \brief An integer property. Returns identifier of the stream channel used to carry the block.
    /**
     *  Returns identifier of the stream channel used to carry the block.
     */
    PropertyI64 chunkStreamChannelID;
    /// \brief An integer property. Return the index of the active set of the running sequencer included in the payload.
    /**
     *  Return the index of the active set of the running sequencer included in the payload.
     */
    PropertyI64 chunkSequencerSetActive;
    /// \brief An enumerated integer property. Returns the Distance Unit of the payload image.
    /**
     *  Returns the Distance Unit of the payload image.
     *
     *  The following string values might be valid for this feature:
     *  - \b Millimeter (Display string: 'Millimeter'): Default value. Distance values are in millimeter units.
     *  - \b Inch (Display string: 'Inch'): Distance values are in inch units.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkScan3dDistanceUnit;
    /// \brief An enumerated integer property. Returns the Calibrated Mode of the payload image.
    /**
     *  Returns the Calibrated Mode of the payload image.
     *
     *  The following string values might be valid for this feature:
     *  - \b UncalibratedC (Display string: 'Uncalibrated C'): Uncalibrated 2.5D Depth map. The distance data does not represent a physical unit and may be non-linear. The data is a 2.5D range map only.
     *  - \b CalibratedABC_Grid (Display string: 'Calibrated ABC Grid'): 3 Coordinates in grid organization. The full 3 coordinate data with the grid array organization from the sensor kept.
     *  - \b CalibratedABC_PointCloud (Display string: 'Calibrated ABC Point Cloud'): 3 Coordinates without organization. The full 3 coordinate data without any organization of data points. Typically only valid points transmitted giving varying image size.
     *  - \b CalibratedAC (Display string: 'Calibrated AC'): 2 Coordinates with fixed B sampling. The data is sent as a A and C coordinates (X,Z or Theta,Rho). The B (Y) axis uses the scale and offset parameters for the B axis.
     *  - \b CalibratedAC_Linescan (Display string: 'Calibrated AC Linescan'): 2 Coordinates with varying sampling. The data is sent as a A and C coordinates (X,Z or Theta,Rho). The B (Y) axis comes from the encoder chunk value.
     *  - \b CalibratedC (Display string: 'Calibrated C'): Calibrated 2.5D Depth map. The distance data is expressed in the chosen distance unit. The data is a 2.5D range map. No information on X-Y axes available.
     *  - \b CalibratedC_Linescan (Display string: 'Calibrated C Linescan'): Depth Map with varying B sampling. The distance data is expressed in the chosen distance unit. The data is a 2.5D range map. The B (Y) axis comes from the encoder chunk value.
     *  - \b RectifiedC (Display string: 'Rectified C'): Rectified 2.5D Depth map. The distance data has been rectified to a uniform sampling pattern in the X and Y direction. The data is a 2.5D range map only. If a complete 3D point cloud is rectified but transmitted as explicit coordinates it should be transmitted as one of the 'CalibratedABC' formats.
     *  - \b RectifiedC_Linescan (Display string: 'Rectified C Linescan'): Rectified 2.5D Depth map with varying B sampling. The data is sent as rectified 1D profiles using Coord3D_C pixels. The B (Y) axis comes from the encoder chunk value.
     *  - \b DisparityC (Display string: 'Disparity C'): Disparity 2.5D Depth map. The distance is inversely proportional to the pixel (disparity) value.
     *  - \b DisparityC_Linescan (Display string: 'Disparity C Linescan'): Disparity 2.5D Depth map with varying B sampling. The distance is inversely proportional to the pixel (disparity) value. The B (Y) axis comes from the encoder chunk value.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkScan3dOutputMode;
    /// \brief An enumerated integer property. Returns the Coordinate System of the image included in the payload.
    /**
     *  Returns the Coordinate System of the image included in the payload.
     *
     *  The following string values might be valid for this feature:
     *  - \b Cartesian (Display string: 'Cartesian'): Default value. 3-axis orthogonal, right-hand X-Y-Z.
     *  - \b Spherical (Display string: 'Spherical'): A Theta-Phi-Rho coordinate system.
     *  - \b Cylindrical (Display string: 'Cylindrical'): A Theta-Y-Rho coordinate system.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkScan3dCoordinateSystem;
    /// \brief An enumerated integer property. Returns the Coordinate System Position of the image included in the payload.
    /**
     *  Returns the Coordinate System Position of the image included in the payload.
     *
     *  The following string values might be valid for this feature:
     *  - \b Anchor (Display string: 'Anchor'): Default value. Original fixed reference. The coordinate system fixed relative the camera reference point marker is used.
     *  - \b Transformed (Display string: 'Transformed'): Transformed reference system. The transformed coordinate system is used according to the definition in the rotation and translation matrices.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkScan3dCoordinateSystemReference;
    /// \brief An enumerated integer property. Selects which Coordinate to retrieve data from.
    /**
     *  Selects which Coordinate to retrieve data from.
     *
     *  The following string values might be valid for this feature:
     *  - \b CoordinateA (Display string: 'Coordinate A'): The first (X or Theta) coordinate
     *  - \b CoordinateB (Display string: 'Coordinate B'): The second (Y or Phi) coordinate
     *  - \b CoordinateC (Display string: 'Coordinate C'): The third (Z or Rho) coordinate.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkScan3dCoordinateSelector;
    /// \brief A floating point property. Returns the Scale for the selected coordinate axis of the image included in the payload.
    /**
     *  Returns the Scale for the selected coordinate axis of the image included in the payload.
     */
    PropertyF chunkScan3dCoordinateScale;
    /// \brief A floating point property. Returns the Offset for the selected coordinate axis of the image included in the payload.
    /**
     *  Returns the Offset for the selected coordinate axis of the image included in the payload.
     */
    PropertyF chunkScan3dCoordinateOffset;
    /// \brief A boolean property. Returns if a specific non-valid data flag is used in the data stream.
    /**
     *  Returns if a specific non-valid data flag is used in the data stream.
     */
    PropertyIBoolean chunkScan3dInvalidDataFlag;
    /// \brief A floating point property. Returns the Invalid Data Value used for the image included in the payload.
    /**
     *  Returns the Invalid Data Value used for the image included in the payload.
     */
    PropertyF chunkScan3dInvalidDataValue;
    /// \brief A floating point property. Returns the Minimum Axis value for the selected coordinate axis of the image included in the payload.
    /**
     *  Returns the Minimum Axis value for the selected coordinate axis of the image included in the payload.
     */
    PropertyF chunkScan3dAxisMin;
    /// \brief A floating point property. Returns the Maximum Axis value for the selected coordinate axis of the image included in the payload.
    /**
     *  Returns the Maximum Axis value for the selected coordinate axis of the image included in the payload.
     */
    PropertyF chunkScan3dAxisMax;
    /// \brief An enumerated integer property. Selector for transform values.
    /**
     *  Selector for transform values.
     *
     *  The following string values might be valid for this feature:
     *  - \b RotationX (Display string: 'Rotation X'): Rotation around X axis.
     *  - \b RotationY (Display string: 'Rotation Y'): Rotation around Y axis.
     *  - \b RotationZ (Display string: 'Rotation Z'): Rotation around Z axis.
     *  - \b TranslationX (Display string: 'Translation X'): Translation along X axis.
     *  - \b TranslationY (Display string: 'Translation Y'): Translation along Y axis.
     *  - \b TranslationZ (Display string: 'Translation Z'): Translation along Z axis.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkScan3dCoordinateTransformSelector;
    /// \brief A floating point property. Returns the transform value.
    /**
     *  Returns the transform value.
     */
    PropertyF chunkScan3dTransformValue;
    /// \brief An enumerated integer property. Selector to read a coordinate system reference value defining the transform of a point from one system to the other.
    /**
     *  Selector to read a coordinate system reference value defining the transform of a point from one system to the other.
     *
     *  The following string values might be valid for this feature:
     *  - \b RotationX (Display string: 'Rotation X'): Rotation around X axis.
     *  - \b RotationY (Display string: 'Rotation Y'): Rotation around Y axis.
     *  - \b RotationZ (Display string: 'Rotation Z'): Rotation around Z axis.
     *  - \b TranslationX (Display string: 'Translation X'): X axis translation.
     *  - \b TranslationY (Display string: 'Translation Y'): Y axis translation.
     *  - \b TranslationZ (Display string: 'Translation Z'): Z axis translation.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 chunkScan3dCoordinateReferenceSelector;
    /// \brief A floating point property. Reads the value of a position or pose coordinate for the anchor or transformed coordinate systems relative to the reference point.
    /**
     *  Reads the value of a position or pose coordinate for the anchor or transformed coordinate systems relative to the reference point.
     */
    PropertyF chunkScan3dCoordinateReferenceValue;
    /// \brief A string property. Allows to access a JPEG image transmitted as part of the chunk data.
    /**
     *  Allows to access a JPEG image transmitted as part of the chunk data.
     */
    PropertyS mvChunkJPEG;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category for Test Control features.
/**
 *  A category for Test Control features.
 */
class TestControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::TestControl</b> object.
    explicit TestControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        testPendingAck(),
        testEventGenerate()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( testPendingAck, "TestPendingAck" );
        locator.bindComponent( testEventGenerate, "TestEventGenerate@i" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An integer property. Tests the device's pending acknowledge feature.
    /**
     *  Tests the device's pending acknowledge feature. When this feature is written, the device waits a time period corresponding to the value of TestPendingAck before acknowledging the write.
     */
    PropertyI64 testPendingAck;
    /// \brief A method object. Generates a Test Event.
    /**
     *  Generates a Test Event.
     */
    Method testEventGenerate;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains the transport Layer control features.
/**
 *  A category that contains the transport Layer control features.
 */
class TransportLayerControl
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::TransportLayerControl</b> object.
    explicit TransportLayerControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        payloadSize(),
        deviceTapGeometry(),
        gevVersionMajor(),
        gevVersionMinor(),
        gevDeviceModeIsBigEndian(),
        gevDeviceClass(),
        gevDeviceModeCharacterSet(),
        gevPhysicalLinkConfiguration(),
        gevCurrentPhysicalLinkConfiguration(),
        gevActiveLinkCount(),
        gevInterfaceSelector(),
        gevLinkSpeed(),
        gevMACAddress(),
        gevSupportedOptionSelector(),
        gevSupportedOption(),
        gevSupportedIPConfigurationLLA(),
        gevSupportedIPConfigurationDHCP(),
        gevSupportedIPConfigurationPersistentIP(),
        gevPAUSEFrameReception(),
        gevPAUSEFrameTransmission(),
        gevCurrentIPConfiguration(),
        gevCurrentIPConfigurationLLA(),
        gevCurrentIPConfigurationDHCP(),
        gevCurrentIPConfigurationPersistentIP(),
        gevCurrentIPAddress(),
        gevCurrentSubnetMask(),
        gevCurrentDefaultGateway(),
        gevIPConfigurationStatus(),
        gevFirstURL(),
        gevSecondURL(),
        gevNumberOfInterfaces(),
        gevPersistentIPAddress(),
        gevPersistentSubnetMask(),
        gevPersistentDefaultGateway(),
        gevMessageChannelCount(),
        gevStreamChannelCount(),
        gevSupportedOptionalCommandsUserDefinedName(),
        gevSupportedOptionalCommandsSerialNumber(),
        gevSupportedOptionalCommandsEVENTDATA(),
        gevSupportedOptionalCommandsEVENT(),
        gevSupportedOptionalCommandsPACKETRESEND(),
        gevSupportedOptionalCommandsWRITEMEM(),
        gevSupportedOptionalCommandsConcatenation(),
        gevHeartbeatTimeout(),
        gevTimestampTickFrequency(),
        gevTimestampControlLatch(),
        gevTimestampControlReset(),
        gevTimestampValue(),
        gevDiscoveryAckDelay(),
        gevIEEE1588(),
        gevIEEE1588ClockAccuracy(),
        gevIEEE1588Status(),
        gevGVCPExtendedStatusCodesSelector(),
        gevGVCPExtendedStatusCodes(),
        gevGVCPPendingAck(),
        gevGVCPHeartbeatDisable(),
        gevGVCPPendingTimeout(),
        gevPrimaryApplicationSwitchoverKey(),
        gevGVSPExtendedIDMode(),
        gevCCP(),
        gevPrimaryApplicationSocket(),
        gevPrimaryApplicationIPAddress(),
        gevMCPHostPort(),
        gevMCDA(),
        gevMCTT(),
        gevMCRC(),
        gevMCSP(),
        gevStreamChannelSelector(),
        gevSCCFGPacketResendDestination(),
        gevSCCFGAllInTransmission(),
        gevSCCFGUnconditionalStreaming(),
        gevSCCFGExtendedChunkData(),
        gevSCPDirection(),
        gevSCPInterfaceIndex(),
        gevSCPHostPort(),
        gevSCPSFireTestPacket(),
        gevSCPSDoNotFragment(),
        gevSCPSBigEndian(),
        gevSCPSPacketSize(),
        gevSCPD(),
        gevSCDA(),
        gevSCSP(),
        gevSCZoneCount(),
        gevSCZoneDirectionAll(),
        gevSCZoneConfigurationLock(),
        gevManifestEntrySelector(),
        gevManifestXMLMajorVersion(),
        gevManifestXMLMinorVersion(),
        gevManifestXMLSubMinorVersion(),
        gevManifestSchemaMajorVersion(),
        gevManifestSchemaMinorVersion(),
        gevManifestPrimaryURL(),
        gevManifestSecondaryURL(),
        aPAUSEMACCtrlFramesTransmitted(),
        aPAUSEMACCtrlFramesReceived(),
        clConfiguration(),
        clTimeSlotsCount(),
        cxpLinkConfigurationStatus(),
        cxpLinkConfigurationPreferred(),
        cxpLinkConfiguration(),
        cxpConnectionSelector(),
        cxpConnectionTestMode(),
        cxpConnectionTestErrorCount(),
        cxpConnectionTestPacketCount(),
        cxpPoCxpAuto(),
        cxpPoCxpTurnOff(),
        cxpPoCxpTripReset(),
        cxpPoCxpStatus(),
        mvGevSCBWControl(),
        mvGevSCBW()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( payloadSize, "PayloadSize" );
        locator.bindComponent( deviceTapGeometry, "DeviceTapGeometry" );
        locator.bindComponent( gevVersionMajor, "GevVersionMajor" );
        locator.bindComponent( gevVersionMinor, "GevVersionMinor" );
        locator.bindComponent( gevDeviceModeIsBigEndian, "GevDeviceModeIsBigEndian" );
        locator.bindComponent( gevDeviceClass, "GevDeviceClass" );
        locator.bindComponent( gevDeviceModeCharacterSet, "GevDeviceModeCharacterSet" );
        locator.bindComponent( gevPhysicalLinkConfiguration, "GevPhysicalLinkConfiguration" );
        locator.bindComponent( gevCurrentPhysicalLinkConfiguration, "GevCurrentPhysicalLinkConfiguration" );
        locator.bindComponent( gevActiveLinkCount, "GevActiveLinkCount" );
        locator.bindComponent( gevInterfaceSelector, "GevInterfaceSelector" );
        locator.bindComponent( gevLinkSpeed, "GevLinkSpeed" );
        locator.bindComponent( gevMACAddress, "GevMACAddress" );
        locator.bindComponent( gevSupportedOptionSelector, "GevSupportedOptionSelector" );
        locator.bindComponent( gevSupportedOption, "GevSupportedOption" );
        locator.bindComponent( gevSupportedIPConfigurationLLA, "GevSupportedIPConfigurationLLA" );
        locator.bindComponent( gevSupportedIPConfigurationDHCP, "GevSupportedIPConfigurationDHCP" );
        locator.bindComponent( gevSupportedIPConfigurationPersistentIP, "GevSupportedIPConfigurationPersistentIP" );
        locator.bindComponent( gevPAUSEFrameReception, "GevPAUSEFrameReception" );
        locator.bindComponent( gevPAUSEFrameTransmission, "GevPAUSEFrameTransmission" );
        locator.bindComponent( gevCurrentIPConfiguration, "GevCurrentIPConfiguration" );
        locator.bindComponent( gevCurrentIPConfigurationLLA, "GevCurrentIPConfigurationLLA" );
        locator.bindComponent( gevCurrentIPConfigurationDHCP, "GevCurrentIPConfigurationDHCP" );
        locator.bindComponent( gevCurrentIPConfigurationPersistentIP, "GevCurrentIPConfigurationPersistentIP" );
        locator.bindComponent( gevCurrentIPAddress, "GevCurrentIPAddress" );
        locator.bindComponent( gevCurrentSubnetMask, "GevCurrentSubnetMask" );
        locator.bindComponent( gevCurrentDefaultGateway, "GevCurrentDefaultGateway" );
        locator.bindComponent( gevIPConfigurationStatus, "GevIPConfigurationStatus" );
        locator.bindComponent( gevFirstURL, "GevFirstURL" );
        locator.bindComponent( gevSecondURL, "GevSecondURL" );
        locator.bindComponent( gevNumberOfInterfaces, "GevNumberOfInterfaces" );
        locator.bindComponent( gevPersistentIPAddress, "GevPersistentIPAddress" );
        locator.bindComponent( gevPersistentSubnetMask, "GevPersistentSubnetMask" );
        locator.bindComponent( gevPersistentDefaultGateway, "GevPersistentDefaultGateway" );
        locator.bindComponent( gevMessageChannelCount, "GevMessageChannelCount" );
        locator.bindComponent( gevStreamChannelCount, "GevStreamChannelCount" );
        locator.bindComponent( gevSupportedOptionalCommandsUserDefinedName, "GevSupportedOptionalCommandsUserDefinedName" );
        locator.bindComponent( gevSupportedOptionalCommandsSerialNumber, "GevSupportedOptionalCommandsSerialNumber" );
        locator.bindComponent( gevSupportedOptionalCommandsEVENTDATA, "GevSupportedOptionalCommandsEVENTDATA" );
        locator.bindComponent( gevSupportedOptionalCommandsEVENT, "GevSupportedOptionalCommandsEVENT" );
        locator.bindComponent( gevSupportedOptionalCommandsPACKETRESEND, "GevSupportedOptionalCommandsPACKETRESEND" );
        locator.bindComponent( gevSupportedOptionalCommandsWRITEMEM, "GevSupportedOptionalCommandsWRITEMEM" );
        locator.bindComponent( gevSupportedOptionalCommandsConcatenation, "GevSupportedOptionalCommandsConcatenation" );
        locator.bindComponent( gevHeartbeatTimeout, "GevHeartbeatTimeout" );
        locator.bindComponent( gevTimestampTickFrequency, "GevTimestampTickFrequency" );
        locator.bindComponent( gevTimestampControlLatch, "GevTimestampControlLatch@i" );
        locator.bindComponent( gevTimestampControlReset, "GevTimestampControlReset@i" );
        locator.bindComponent( gevTimestampValue, "GevTimestampValue" );
        locator.bindComponent( gevDiscoveryAckDelay, "GevDiscoveryAckDelay" );
        locator.bindComponent( gevIEEE1588, "GevIEEE1588" );
        locator.bindComponent( gevIEEE1588ClockAccuracy, "GevIEEE1588ClockAccuracy" );
        locator.bindComponent( gevIEEE1588Status, "GevIEEE1588Status" );
        locator.bindComponent( gevGVCPExtendedStatusCodesSelector, "GevGVCPExtendedStatusCodesSelector" );
        locator.bindComponent( gevGVCPExtendedStatusCodes, "GevGVCPExtendedStatusCodes" );
        locator.bindComponent( gevGVCPPendingAck, "GevGVCPPendingAck" );
        locator.bindComponent( gevGVCPHeartbeatDisable, "GevGVCPHeartbeatDisable" );
        locator.bindComponent( gevGVCPPendingTimeout, "GevGVCPPendingTimeout" );
        locator.bindComponent( gevPrimaryApplicationSwitchoverKey, "GevPrimaryApplicationSwitchoverKey" );
        locator.bindComponent( gevGVSPExtendedIDMode, "GevGVSPExtendedIDMode" );
        locator.bindComponent( gevCCP, "GevCCP" );
        locator.bindComponent( gevPrimaryApplicationSocket, "GevPrimaryApplicationSocket" );
        locator.bindComponent( gevPrimaryApplicationIPAddress, "GevPrimaryApplicationIPAddress" );
        locator.bindComponent( gevMCPHostPort, "GevMCPHostPort" );
        locator.bindComponent( gevMCDA, "GevMCDA" );
        locator.bindComponent( gevMCTT, "GevMCTT" );
        locator.bindComponent( gevMCRC, "GevMCRC" );
        locator.bindComponent( gevMCSP, "GevMCSP" );
        locator.bindComponent( gevStreamChannelSelector, "GevStreamChannelSelector" );
        locator.bindComponent( gevSCCFGPacketResendDestination, "GevSCCFGPacketResendDestination" );
        locator.bindComponent( gevSCCFGAllInTransmission, "GevSCCFGAllInTransmission" );
        locator.bindComponent( gevSCCFGUnconditionalStreaming, "GevSCCFGUnconditionalStreaming" );
        locator.bindComponent( gevSCCFGExtendedChunkData, "GevSCCFGExtendedChunkData" );
        locator.bindComponent( gevSCPDirection, "GevSCPDirection" );
        locator.bindComponent( gevSCPInterfaceIndex, "GevSCPInterfaceIndex" );
        locator.bindComponent( gevSCPHostPort, "GevSCPHostPort" );
        locator.bindComponent( gevSCPSFireTestPacket, "GevSCPSFireTestPacket" );
        locator.bindComponent( gevSCPSDoNotFragment, "GevSCPSDoNotFragment" );
        locator.bindComponent( gevSCPSBigEndian, "GevSCPSBigEndian" );
        locator.bindComponent( gevSCPSPacketSize, "GevSCPSPacketSize" );
        locator.bindComponent( gevSCPD, "GevSCPD" );
        locator.bindComponent( gevSCDA, "GevSCDA" );
        locator.bindComponent( gevSCSP, "GevSCSP" );
        locator.bindComponent( gevSCZoneCount, "GevSCZoneCount" );
        locator.bindComponent( gevSCZoneDirectionAll, "GevSCZoneDirectionAll" );
        locator.bindComponent( gevSCZoneConfigurationLock, "GevSCZoneConfigurationLock" );
        locator.bindComponent( gevManifestEntrySelector, "GevManifestEntrySelector" );
        locator.bindComponent( gevManifestXMLMajorVersion, "GevManifestXMLMajorVersion" );
        locator.bindComponent( gevManifestXMLMinorVersion, "GevManifestXMLMinorVersion" );
        locator.bindComponent( gevManifestXMLSubMinorVersion, "GevManifestXMLSubMinorVersion" );
        locator.bindComponent( gevManifestSchemaMajorVersion, "GevManifestSchemaMajorVersion" );
        locator.bindComponent( gevManifestSchemaMinorVersion, "GevManifestSchemaMinorVersion" );
        locator.bindComponent( gevManifestPrimaryURL, "GevManifestPrimaryURL" );
        locator.bindComponent( gevManifestSecondaryURL, "GevManifestSecondaryURL" );
        locator.bindComponent( aPAUSEMACCtrlFramesTransmitted, "aPAUSEMACCtrlFramesTransmitted" );
        locator.bindComponent( aPAUSEMACCtrlFramesReceived, "aPAUSEMACCtrlFramesReceived" );
        locator.bindComponent( clConfiguration, "ClConfiguration" );
        locator.bindComponent( clTimeSlotsCount, "ClTimeSlotsCount" );
        locator.bindComponent( cxpLinkConfigurationStatus, "CxpLinkConfigurationStatus" );
        locator.bindComponent( cxpLinkConfigurationPreferred, "CxpLinkConfigurationPreferred" );
        locator.bindComponent( cxpLinkConfiguration, "CxpLinkConfiguration" );
        locator.bindComponent( cxpConnectionSelector, "CxpConnectionSelector" );
        locator.bindComponent( cxpConnectionTestMode, "CxpConnectionTestMode" );
        locator.bindComponent( cxpConnectionTestErrorCount, "CxpConnectionTestErrorCount" );
        locator.bindComponent( cxpConnectionTestPacketCount, "CxpConnectionTestPacketCount" );
        locator.bindComponent( cxpPoCxpAuto, "CxpPoCxpAuto@i" );
        locator.bindComponent( cxpPoCxpTurnOff, "CxpPoCxpTurnOff@i" );
        locator.bindComponent( cxpPoCxpTripReset, "CxpPoCxpTripReset@i" );
        locator.bindComponent( cxpPoCxpStatus, "CxpPoCxpStatus" );
        locator.bindComponent( mvGevSCBWControl, "mvGevSCBWControl" );
        locator.bindComponent( mvGevSCBW, "mvGevSCBW" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An integer property. Provides the number of bytes transferred for each image or chunk on the stream channel.
    /**
     *  Provides the number of bytes transferred for each image or chunk on the stream channel. This includes any end-of-line, end-of-frame statistics or other stamp data. This is the total size of data payload for a data block.
     */
    PropertyI64 payloadSize;
    /// \brief An enumerated integer property. This device tap geometry feature describes the geometrical properties characterizing the taps of a camera as presented at the output of the device.
    /**
     *  This device tap geometry feature describes the geometrical properties characterizing the taps of a camera as presented at the output of the device.
     *
     *  The following string values might be valid for this feature:
     *  - \b Geometry_1X_1Y (Display string: 'Geometry_1X_1Y'): Geometry_1X_1Y
     *  - \b Geometry_1X2_1Y (Display string: 'Geometry_1X2_1Y'): Geometry_1X2_1Y
     *  - \b Geometry_1X2_1Y2 (Display string: 'Geometry_1X2_1Y2'): Geometry_1X2_1Y2
     *  - \b Geometry_2X_1Y (Display string: 'Geometry_2X_1Y'): Geometry_2X_1Y
     *  - \b Geometry_2X_1Y2Geometry_2XE_1Y (Display string: 'Geometry_2X_1Y2Geometry_2XE_1Y'): Geometry_2X_1Y2Geometry_2XE_1Y
     *  - \b Geometry_2XE_1Y2 (Display string: 'Geometry_2XE_1Y2'): Geometry_2XE_1Y2
     *  - \b Geometry_2XM_1Y (Display string: 'Geometry_2XM_1Y'): Geometry_2XM_1Y
     *  - \b Geometry_2XM_1Y2 (Display string: 'Geometry_2XM_1Y2'): Geometry_2XM_1Y2
     *  - \b Geometry_1X_1Y2 (Display string: 'Geometry_1X_1Y2'): Geometry_1X_1Y2
     *  - \b Geometry_1X_2YE (Display string: 'Geometry_1X_2YE'): Geometry_1X_2YE
     *  - \b Geometry_1X3_1Y (Display string: 'Geometry_1X3_1Y'): Geometry_1X3_1Y
     *  - \b Geometry_3X_1Y (Display string: 'Geometry_3X_1Y'): Geometry_3X_1Y
     *  - \b Geometry_1X (Display string: 'Geometry_1X'): Geometry_1X
     *  - \b Geometry_1X2 (Display string: 'Geometry_1X2'): Geometry_1X2
     *  - \b Geometry_2X (Display string: 'Geometry_2X'): Geometry_2X
     *  - \b Geometry_2XE (Display string: 'Geometry_2XE'): Geometry_2XE
     *  - \b Geometry_2XM (Display string: 'Geometry_2XM'): Geometry_2XM
     *  - \b Geometry_1X3 (Display string: 'Geometry_1X3'): Geometry_1X3
     *  - \b Geometry_3X (Display string: 'Geometry_3X'): Geometry_3X
     *  - \b Geometry_1X4_1Y (Display string: 'Geometry_1X4_1Y'): Geometry_1X4_1Y
     *  - \b Geometry_4X_1Y (Display string: 'Geometry_4X_1Y'): Geometry_4X_1Y
     *  - \b Geometry_2X2_1Y (Display string: 'Geometry_2X2_1Y'): Geometry_2X2_1Y
     *  - \b Geometry_2X2E_1YGeometry_2X2M_1Y (Display string: 'Geometry_2X2E_1YGeometry_2X2M_1Y'): Geometry_2X2E_1YGeometry_2X2M_1Y
     *  - \b Geometry_1X2_2YE (Display string: 'Geometry_1X2_2YE'): Geometry_1X2_2YE
     *  - \b Geometry_2X_2YE (Display string: 'Geometry_2X_2YE'): Geometry_2X_2YE
     *  - \b Geometry_2XE_2YE (Display string: 'Geometry_2XE_2YE'): Geometry_2XE_2YE
     *  - \b Geometry_2XM_2YE (Display string: 'Geometry_2XM_2YE'): Geometry_2XM_2YE
     *  - \b Geometry_1X4 (Display string: 'Geometry_1X4'): Geometry_1X4
     *  - \b Geometry_4X (Display string: 'Geometry_4X'): Geometry_4X
     *  - \b Geometry_2X2 (Display string: 'Geometry_2X2'): Geometry_2X2
     *  - \b Geometry_2X2E (Display string: 'Geometry_2X2E'): Geometry_2X2E
     *  - \b Geometry_2X2M (Display string: 'Geometry_2X2M'): Geometry_2X2M
     *  - \b Geometry_1X8_1Y (Display string: 'Geometry_1X8_1Y'): Geometry_1X8_1Y
     *  - \b Geometry_8X_1Y (Display string: 'Geometry_8X_1Y'): Geometry_8X_1Y
     *  - \b Geometry_4X2_1Y (Display string: 'Geometry_4X2_1Y'): Geometry_4X2_1Y
     *  - \b Geometry_2X2E_2YE (Display string: 'Geometry_2X2E_2YE'): Geometry_2X2E_2YE
     *  - \b Geometry_1X8 (Display string: 'Geometry_1X8'): Geometry_1X8
     *  - \b Geometry_8X (Display string: 'Geometry_8X'): Geometry_8X
     *  - \b Geometry_4X2 (Display string: 'Geometry_4X2'): Geometry_4X2
     *  - \b Geometry_4X2E (Display string: 'Geometry_4X2E'): Geometry_4X2E
     *  - \b Geometry_4X2E_1Y (Display string: 'Geometry_4X2E_1Y'): Geometry_4X2E_1Y
     *  - \b Geometry_1X10_1Y (Display string: 'Geometry_1X10_1Y'): Geometry_1X10_1Y
     *  - \b Geometry_10X_1Y (Display string: 'Geometry_10X_1Y'): Geometry_10X_1Y
     *  - \b Geometry_1X10 (Display string: 'Geometry_1X10'): Geometry_1X10
     *  - \b Geometry_10X (Display string: 'Geometry_10X'): Geometry_10X
     *  - \b Geometry_2X2E_1Y (Display string: 'Device Tap Geometry')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceTapGeometry;
    /// \brief An integer property. Major version of the specification.
    /**
     *  Major version of the specification.
     */
    PropertyI64 gevVersionMajor;
    /// \brief An integer property. Minor version of the specification.
    /**
     *  Minor version of the specification.
     */
    PropertyI64 gevVersionMinor;
    /// \brief A boolean property. Endianess of the device registers.
    /**
     *  Endianess of the device registers.
     */
    PropertyIBoolean gevDeviceModeIsBigEndian;
    /// \brief An enumerated integer property. Returns the class of the device.
    /**
     *  Returns the class of the device.
     *
     *  The following string values might be valid for this feature:
     *  - \b Transmitter (Display string: 'Transmitter'): Transmitter
     *  - \b Receiver (Display string: 'Receiver'): Receiver
     *  - \b Transceiver (Display string: 'Transceiver'): Transceiver
     *  - \b Peripheral (Display string: 'Peripheral'): Peripheral
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 gevDeviceClass;
    /// \brief An enumerated integer property. Character set used by all the strings of the bootstrap registers.
    /**
     *  Character set used by all the strings of the bootstrap registers.
     *
     *  The following string values might be valid for this feature:
     *  - \b UTF8 (Display string: 'UTF 8'): UTF 8
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 gevDeviceModeCharacterSet;
    /// \brief An enumerated integer property. Controls the principal physical link configuration to use on next restart/power-up of the device.
    /**
     *  Controls the principal physical link configuration to use on next restart/power-up of the device.
     *
     *  The following string values might be valid for this feature:
     *  - \b SingleLink (Display string: 'Single Link'): Single Link
     *  - \b MultiLink (Display string: 'Multi Link'): Multi Link
     *  - \b StaticLAG (Display string: 'Static LAG'): Static LAG
     *  - \b DynamicLAG (Display string: 'Dynamic LAG'): Dynamic LAG
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 gevPhysicalLinkConfiguration;
    /// \brief An enumerated integer property. Indicates the current physical link configuration of the device.
    /**
     *  Indicates the current physical link configuration of the device.
     *
     *  The following string values might be valid for this feature:
     *  - \b SingleLink (Display string: 'Single Link'): Single Link
     *  - \b MultiLink (Display string: 'Multi Link'): Multi Link
     *  - \b StaticLAG (Display string: 'Static LAG'): Static LAG
     *  - \b DynamicLAG (Display string: 'Dynamic LAG'): Dynamic LAG
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 gevCurrentPhysicalLinkConfiguration;
    /// \brief An integer property. Indicates the current number of active logical links.
    /**
     *  Indicates the current number of active logical links.
     */
    PropertyI64 gevActiveLinkCount;
    /// \brief An integer property. Selects which logical link to control.
    /**
     *  Selects which logical link to control.
     */
    PropertyI64 gevInterfaceSelector;
    /// \brief An integer property. Indicates the speed of transmission negotiated by the given logical link.
    /**
     *  Indicates the speed of transmission negotiated by the given logical link.
     */
    PropertyI64 gevLinkSpeed;
    /// \brief An integer property. MAC address of the logical link.
    /**
     *  MAC address of the logical link.
     */
    PropertyI64 gevMACAddress;
    /// \brief An enumerated integer property. Selects the GEV option to interrogate for existing support.
    /**
     *  Selects the GEV option to interrogate for existing support.
     *
     *  The following string values might be valid for this feature:
     *  - \b SingleLink (Display string: 'Single Link'): Single Link
     *  - \b MultiLink (Display string: 'Multi Link'): Multi Link
     *  - \b StaticLAG (Display string: 'Static LAG'): Static LAG
     *  - \b DynamicLAG (Display string: 'Dynamic LAG'): Dynamic LAG
     *  - \b PAUSEFrameReception (Display string: 'PAUSE Frame Reception'): PAUSE Frame Reception
     *  - \b PAUSEFrameGeneration (Display string: 'PAUSE Frame Generation'): PAUSE Frame Generation
     *  - \b IPConfigurationLLA (Display string: 'IP Configuration LLA'): IP Configuration LLA
     *  - \b IPConfigurationDHCP (Display string: 'IP Configuration DHCP'): IP Configuration DHCP
     *  - \b IPConfigurationPersistentIP (Display string: 'IP Configuration Persistent IP'): IP Configuration Persistent IP
     *  - \b StreamChannelSourceSocket (Display string: 'Stream Channel Source Socket'): Stream Channel Source Socket
     *  - \b StandardIDMode (Display string: 'Standard ID Mode'): Standard ID Mode
     *  - \b MessageChannelSourceSocket (Display string: 'Message Channel Source Socket'): Message Channel Source Socket
     *  - \b CommandsConcatenation (Display string: 'Commands Concatenation'): Commands Concatenation
     *  - \b WriteMem (Display string: 'Write Mem'): Write Mem
     *  - \b PacketResend (Display string: 'Packet Resend'): Packet Resend
     *  - \b Event (Display string: 'Event'): Event
     *  - \b EventData (Display string: 'Event Data'): Event Data
     *  - \b PendingAck (Display string: 'Pending Ack'): Pending Ack
     *  - \b IEEE1588 (Display string: 'IEEE 1588'): IEEE 1588
     *  - \b Action (Display string: 'Action'): Action
     *  - \b UnconditionalAction (Display string: 'Unconditional Action'): Unconditional Action
     *  - \b ScheduledAction (Display string: 'Scheduled Action'): Scheduled Action
     *  - \b PrimaryApplicationSwitchover (Display string: 'Primary Application Switchover'): Primary Application Switchover
     *  - \b ExtendedStatusCodes (Display string: 'Extended Status Codes'): Extended Status Codes
     *  - \b ExtendedStatusCodesVersion2_0 (Display string: 'Extended Status Codes Version 2 0'): Extended Status Codes Version 2 0
     *  - \b DiscoveryAckDelay (Display string: 'Discovery Ack Delay'): Discovery Ack Delay
     *  - \b DiscoveryAckDelayWritable (Display string: 'Discovery Ack Delay Writable'): Discovery Ack Delay Writable
     *  - \b TestData (Display string: 'Test Data'): Test Data
     *  - \b ManifestTable (Display string: 'Manifest Table'): Manifest Table
     *  - \b CCPApplicationSocket (Display string: 'CCP Application Socket'): CCP Application Socket
     *  - \b LinkSpeed (Display string: 'Link Speed'): Link Speed
     *  - \b HeartbeatDisable (Display string: 'Heartbeat Disable'): Heartbeat Disable
     *  - \b SerialNumber (Display string: 'Serial Number'): Serial Number
     *  - \b UserDefinedName (Display string: 'User Defined Name'): User Defined Name
     *  - \b StreamChannel0BigAndLittleEndian (Display string: 'Stream Channel 0 Big And Little Endian'): Stream Channel 0 Big And Little Endian
     *  - \b StreamChannel0IPReassembly (Display string: 'Stream Channel 0 IP Reassembly'): Stream Channel 0 IP Reassembly
     *  - \b StreamChannel0MultiZone (Display string: 'Stream Channel 0 Multi Zone'): Stream Channel 0 Multi Zone
     *  - \b StreamChannel0PacketResendDestination (Display string: 'Stream Channel 0 Packet Resend Destination'): Stream Channel 0 Packet Resend Destination
     *  - \b StreamChannel0AllInTransmission (Display string: 'Stream Channel 0 All In Transmission'): Stream Channel 0 All In Transmission
     *  - \b StreamChannel0UnconditionalStreaming (Display string: 'Stream Channel 0 Unconditional Streaming'): Stream Channel 0 Unconditional Streaming
     *  - \b StreamChannel0ExtendedChunkData (Display string: 'Stream Channel 0 Extended Chunk Data'): Stream Channel 0 Extended Chunk Data
     *  - \b StreamChannel1BigAndLittleEndian (Display string: 'Stream Channel 1 Big And Little Endian'): Stream Channel 1 Big And Little Endian
     *  - \b StreamChannel1IPReassembly (Display string: 'Stream Channel 1 IP Reassembly'): Stream Channel 1 IP Reassembly
     *  - \b StreamChannel1MultiZone (Display string: 'Stream Channel 1 Multi Zone'): Stream Channel 1 Multi Zone
     *  - \b StreamChannel1PacketResendDestination (Display string: 'Stream Channel 1 Packet Resend Destination'): Stream Channel 1 Packet Resend Destination
     *  - \b StreamChannel1AllInTransmission (Display string: 'Stream Channel 1 All In Transmission'): Stream Channel 1 All In Transmission
     *  - \b StreamChannel1UnconditionalStreaming (Display string: 'Stream Channel 1 Unconditional Streaming'): Stream Channel 1 Unconditional Streaming
     *  - \b StreamChannel1ExtendedChunkData (Display string: 'Stream Channel 1 Extended Chunk Data'): Stream Channel 1 Extended Chunk Data
     *  - \b StreamChannel2BigAndLittleEndian (Display string: 'Stream Channel 2 Big And Little Endian'): Stream Channel 2 Big And Little Endian
     *  - \b StreamChannel2IPReassembly (Display string: 'Stream Channel 2 IP Reassembly'): Stream Channel 2 IP Reassembly
     *  - \b StreamChannel2MultiZone (Display string: 'Stream Channel 2 Multi Zone'): Stream Channel 2 Multi Zone
     *  - \b StreamChannel2PacketResendDestination (Display string: 'Stream Channel 2 Packet Resend Destination'): Stream Channel 2 Packet Resend Destination
     *  - \b StreamChannel2AllInTransmission (Display string: 'Stream Channel 2 All In Transmission'): Stream Channel 2 All In Transmission
     *  - \b StreamChannel2UnconditionalStreaming (Display string: 'Stream Channel 2 Unconditional Streaming'): Stream Channel 2 Unconditional Streaming
     *  - \b StreamChannel2ExtendedChunkData (Display string: 'Stream Channel 2 Extended Chunk Data'): Stream Channel 2 Extended Chunk Data
     *  - \b StreamChannel#3#ExtendedChunkData (Display string: 'Stream Channel #3# Extended Chunk Data'): Stream Channel #3# Extended Chunk Data
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 gevSupportedOptionSelector;
    /// \brief A boolean property. Returns if the selected GEV option is supported.
    /**
     *  Returns if the selected GEV option is supported.
     */
    PropertyIBoolean gevSupportedOption;
    /// \brief A boolean property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if Link Local Address IP configuration scheme is supported by the given network interface.
     */
    PropertyIBoolean gevSupportedIPConfigurationLLA;
    /// \brief A boolean property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if DHCP IP configuration scheme is supported by the given network interface.
     */
    PropertyIBoolean gevSupportedIPConfigurationDHCP;
    /// \brief A boolean property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if PersistentIP configuration scheme is supported by the given network interface.
     */
    PropertyIBoolean gevSupportedIPConfigurationPersistentIP;
    /// \brief A boolean property. Controls whether incoming PAUSE Frames are handled on the given logical link.
    /**
     *  Controls whether incoming PAUSE Frames are handled on the given logical link.
     */
    PropertyIBoolean gevPAUSEFrameReception;
    /// \brief A boolean property. Controls whether PAUSE Frames can be generated on the given logical link.
    /**
     *  Controls whether PAUSE Frames can be generated on the given logical link.
     */
    PropertyIBoolean gevPAUSEFrameTransmission;
    /// \brief An enumerated integer property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It reports the current IP Configuration scheme. Note that this feature doesn't provision more that one simultaneous IP configuration and should not be used.
     *
     *  The following string values might be valid for this feature:
     *  - \b PersistentIP (Display string: 'Persistent IP')
     *  - \b DHCP (Display string: 'DHCP')
     *  - \b LLA (Display string: 'LLA')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 gevCurrentIPConfiguration;
    /// \brief A boolean property. Controls whether the Link Local Address IP configuration scheme is activated on the given logical link.
    /**
     *  Controls whether the Link Local Address IP configuration scheme is activated on the given logical link.
     */
    PropertyIBoolean gevCurrentIPConfigurationLLA;
    /// \brief A boolean property. Controls whether the DHCP IP configuration scheme is activated on the given logical link.
    /**
     *  Controls whether the DHCP IP configuration scheme is activated on the given logical link.
     */
    PropertyIBoolean gevCurrentIPConfigurationDHCP;
    /// \brief A boolean property. Controls whether the PersistentIP configuration scheme is activated on the given logical link.
    /**
     *  Controls whether the PersistentIP configuration scheme is activated on the given logical link.
     */
    PropertyIBoolean gevCurrentIPConfigurationPersistentIP;
    /// \brief An integer property. Reports the IP address for the given logical link.
    /**
     *  Reports the IP address for the given logical link.
     */
    PropertyI64 gevCurrentIPAddress;
    /// \brief An integer property. Reports the subnet mask of the given logical link.
    /**
     *  Reports the subnet mask of the given logical link.
     */
    PropertyI64 gevCurrentSubnetMask;
    /// \brief An integer property. Reports the default gateway IP address to be used on the given logical link.
    /**
     *  Reports the default gateway IP address to be used on the given logical link.
     */
    PropertyI64 gevCurrentDefaultGateway;
    /// \brief An enumerated integer property. Reports the current IP configuration status.
    /**
     *  Reports the current IP configuration status.
     *
     *  The following string values might be valid for this feature:
     *  - \b None (Display string: 'None'): None
     *  - \b PersistentIP (Display string: 'Persistent IP'): Persistent IP
     *  - \b DHCP (Display string: 'DHCP'): DHCP
     *  - \b LLA (Display string: 'LLA'): LLA
     *  - \b ForceIP (Display string: 'Force IP'): Force IP
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 gevIPConfigurationStatus;
    /// \brief A string property. Indicates the first URL to the GenICam XML device description file.
    /**
     *  Indicates the first URL to the GenICam XML device description file. The First URL is used as the first choice by the application to retrieve the GenICam XML device description file.
     */
    PropertyS gevFirstURL;
    /// \brief A string property. Indicates the second URL to the GenICam XML device description file.
    /**
     *  Indicates the second URL to the GenICam XML device description file. This URL is an alternative if the application was unsuccessful to retrieve the device description file using the first URL.
     */
    PropertyS gevSecondURL;
    /// \brief An integer property. Indicates the number of logical links supported by this device.
    /**
     *  Indicates the number of logical links supported by this device.
     */
    PropertyI64 gevNumberOfInterfaces;
    /// \brief An integer property. Controls the Persistent IP address for this logical link.
    /**
     *  Controls the Persistent IP address for this logical link. It is only used when the device boots with the Persistent IP configuration scheme.
     */
    PropertyI64 gevPersistentIPAddress;
    /// \brief An integer property. Controls the Persistent subnet mask associated with the Persistent IP address on this logical link.
    /**
     *  Controls the Persistent subnet mask associated with the Persistent IP address on this logical link. It is only used when the device boots with the Persistent IP configuration scheme.
     */
    PropertyI64 gevPersistentSubnetMask;
    /// \brief An integer property. Controls the persistent default gateway for this logical link.
    /**
     *  Controls the persistent default gateway for this logical link. It is only used when the device boots with the Persistent IP configuration scheme.Visibility
     */
    PropertyI64 gevPersistentDefaultGateway;
    /// \brief An integer property. Indicates the number of message channels supported by this device.
    /**
     *  Indicates the number of message channels supported by this device.
     */
    PropertyI64 gevMessageChannelCount;
    /// \brief An integer property. Indicates the number of stream channels supported by this device.
    /**
     *  Indicates the number of stream channels supported by this device.
     */
    PropertyI64 gevStreamChannelCount;
    /// \brief A boolean property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if the User-defined name register is supported.
     */
    PropertyIBoolean gevSupportedOptionalCommandsUserDefinedName;
    /// \brief A boolean property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if the Serial number register is supported.
     */
    PropertyIBoolean gevSupportedOptionalCommandsSerialNumber;
    /// \brief A boolean property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if the EVENTDATA_CMD and EVENTDATA_ACK are supported.
     */
    PropertyIBoolean gevSupportedOptionalCommandsEVENTDATA;
    /// \brief A boolean property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if the EVENT_CMD and EVENT_ACK are supported.
     */
    PropertyIBoolean gevSupportedOptionalCommandsEVENT;
    /// \brief A boolean property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if the PACKETRESEND_CMD is supported.
     */
    PropertyIBoolean gevSupportedOptionalCommandsPACKETRESEND;
    /// \brief A boolean property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if the WRITEMEM_CMD and WRITEMEM_ACK are supported.
     */
    PropertyIBoolean gevSupportedOptionalCommandsWRITEMEM;
    /// \brief A boolean property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if the Multiple operations in a single message are supported.
     */
    PropertyIBoolean gevSupportedOptionalCommandsConcatenation;
    /// \brief An integer property. Controls the current heartbeat timeout in milliseconds.
    /**
     *  Controls the current heartbeat timeout in milliseconds.
     */
    PropertyI64 gevHeartbeatTimeout;
    /// \brief An integer property. Indicates the number of timestamp ticks in 1 second (frequency in Hz).
    /**
     *  Indicates the number of timestamp ticks in 1 second (frequency in Hz). If IEEE 1588 is used, this feature must return 1,000,000,000 (1 GHz).
     */
    PropertyI64 gevTimestampTickFrequency;
    /// \brief A method object. Latches the current timestamp counter into GevTimestampValue.
    /**
     *  Latches the current timestamp counter into GevTimestampValue.
     */
    Method gevTimestampControlLatch;
    /// \brief A method object. Resets the timestamp counter to 0.
    /**
     *  Resets the timestamp counter to 0. This feature is not available or as no effect when IEEE 1588 is used.
     */
    Method gevTimestampControlReset;
    /// \brief An integer property. Returns the latched 64-bit value of the timestamp counter.
    /**
     *  Returns the latched 64-bit value of the timestamp counter.
     */
    PropertyI64 gevTimestampValue;
    /// \brief An integer property. Indicates the maximum randomized delay the device will wait to acknowledge a discovery command.
    /**
     *  Indicates the maximum randomized delay the device will wait to acknowledge a discovery command.
     */
    PropertyI64 gevDiscoveryAckDelay;
    /// \brief A boolean property. Enables the IEEE 1588 Precision Time Protocol to control the timestamp register.
    /**
     *  Enables the IEEE 1588 Precision Time Protocol to control the timestamp register.
     */
    PropertyIBoolean gevIEEE1588;
    /// \brief An enumerated integer property. Indicates the expected accuracy of the device clock when it is the grandmaster, or in the event it becomes the grandmaster.
    /**
     *  Indicates the expected accuracy of the device clock when it is the grandmaster, or in the event it becomes the grandmaster.
     *
     *  The following string values might be valid for this feature:
     *  - \b Within25ns (Display string: 'Within 25ns'): Within 25ns
     *  - \b Within100ns (Display string: 'Within 100ns'): Within 100ns
     *  - \b Within250ns (Display string: 'Within 250ns'): Within 250ns
     *  - \b Within1us (Display string: 'Within 1us'): Within 1us
     *  - \b Within2p5u (Display string: 'Within 2p 5u'): Within 2p 5u
     *  - \b Within10us (Display string: 'Within 10us'): Within 10us
     *  - \b Within25us (Display string: 'Within 25us'): Within 25us
     *  - \b Within100us (Display string: 'Within 100us'): Within 100us
     *  - \b Within250us (Display string: 'Within 250us'): Within 250us
     *  - \b Within1ms (Display string: 'Within 1ms'): Within 1ms
     *  - \b Within2p5ms (Display string: 'Within 2p 5ms'): Within 2p 5ms
     *  - \b Within10ms (Display string: 'Within 10ms'): Within 10ms
     *  - \b Within25ms (Display string: 'Within 25ms'): Within 25ms
     *  - \b Within100ms (Display string: 'Within 100ms'): Within 100ms
     *  - \b Within250ms (Display string: 'Within 250ms'): Within 250ms
     *  - \b Within1s (Display string: 'Within 1s'): Within 1s
     *  - \b Within10s (Display string: 'Within 10s'): Within 10s
     *  - \b GreaterThan10s (Display string: 'Greater Than 10s'): Greater Than 10s
     *  - \b AlternatePTPProfile (Display string: 'Alternate PTP Profile'): Alternate PTP Profile
     *  - \b Unknown (Display string: 'Unknown'): Unknown
     *  - \b Reserved (Display string: 'Reserved'): Reserved
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 gevIEEE1588ClockAccuracy;
    /// \brief An enumerated integer property. Provides the status of the IEEE 1588 clock.
    /**
     *  Provides the status of the IEEE 1588 clock.
     *
     *  The following string values might be valid for this feature:
     *  - \b Initializing (Display string: 'Initializing'): Initializing
     *  - \b Faulty (Display string: 'Faulty'): Faulty
     *  - \b Disabled (Display string: 'Disabled'): Disabled
     *  - \b Listening (Display string: 'Listening'): Listening
     *  - \b PreMaster (Display string: 'Pre Master'): Pre Master
     *  - \b Master (Display string: 'Master'): Master
     *  - \b Passive (Display string: 'Passive'): Passive
     *  - \b Uncalibrated (Display string: 'Uncalibrated'): Uncalibrated
     *  - \b Slave (Display string: 'Slave'): Slave
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 gevIEEE1588Status;
    /// \brief A boolean property. Selects the GigE Vision version to control extended status codes for.
    /**
     *  Selects the GigE Vision version to control extended status codes for.
     *
     *  The following string values might be valid for this feature:
     *  - \b Version1_1 (Display string: 'Version 1 1'): Version 1 1
     *  - \b Version2_0 (Display string: 'Version 2 0'): Version 2 0
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyIBoolean gevGVCPExtendedStatusCodesSelector;
    /// \brief A boolean property. Enables the generation of extended status codes.
    /**
     *  Enables the generation of extended status codes.
     */
    PropertyIBoolean gevGVCPExtendedStatusCodes;
    /// \brief A boolean property. Enables the generation of PENDING_ACK.
    /**
     *  Enables the generation of PENDING_ACK.
     */
    PropertyIBoolean gevGVCPPendingAck;
    /// \brief A boolean property. Disables the GVCP heartbeat.
    /**
     *  Disables the GVCP heartbeat.
     */
    PropertyIBoolean gevGVCPHeartbeatDisable;
    /// \brief An integer property. Indicates the longest GVCP command execution time before a device returns a PENDING_ACK.
    /**
     *  Indicates the longest GVCP command execution time before a device returns a PENDING_ACK.
     */
    PropertyI64 gevGVCPPendingTimeout;
    /// \brief An integer property. Controls the key to use to authenticate primary application switchover requests.
    /**
     *  Controls the key to use to authenticate primary application switchover requests.
     */
    PropertyI64 gevPrimaryApplicationSwitchoverKey;
    /// \brief An enumerated integer property. Enables the extended IDs mode.
    /**
     *  Enables the extended IDs mode.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Off
     *  - \b On (Display string: 'On'): On
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 gevGVSPExtendedIDMode;
    /// \brief An enumerated integer property. Controls the device access privilege of an application.
    /**
     *  Controls the device access privilege of an application.
     *
     *  The following string values might be valid for this feature:
     *  - \b OpenAccess (Display string: 'Open Access'): Open Access
     *  - \b ExclusiveAccess (Display string: 'Exclusive Access'): Exclusive Access
     *  - \b ControlAccess (Display string: 'Control Access'): Control Access
     *  - \b ControlAccessSwitchoverActive (Display string: 'Control Access Switchover Active'): Control Access Switchover Active
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 gevCCP;
    /// \brief An integer property. Returns the UDP source port of the primary application.
    /**
     *  Returns the UDP source port of the primary application.
     */
    PropertyI64 gevPrimaryApplicationSocket;
    /// \brief An integer property. Returns the address of the primary application.
    /**
     *  Returns the address of the primary application.
     */
    PropertyI64 gevPrimaryApplicationIPAddress;
    /// \brief An integer property. Controls the port to which the device must send messages.
    /**
     *  Controls the port to which the device must send messages. Setting this value to 0 closes the message channel.
     */
    PropertyI64 gevMCPHostPort;
    /// \brief An integer property. Controls the destination IP address for the message channel.
    /**
     *  Controls the destination IP address for the message channel.
     */
    PropertyI64 gevMCDA;
    /// \brief An integer property. Provides the transmission timeout value in milliseconds.
    /**
     *  Provides the transmission timeout value in milliseconds.
     */
    PropertyI64 gevMCTT;
    /// \brief An integer property. Controls the number of retransmissions allowed when a message channel message times out.
    /**
     *  Controls the number of retransmissions allowed when a message channel message times out.
     */
    PropertyI64 gevMCRC;
    /// \brief An integer property. This feature indicates the source port for the message channel.
    /**
     *  This feature indicates the source port for the message channel.
     */
    PropertyI64 gevMCSP;
    /// \brief An integer property. Selects the stream channel to control.
    /**
     *  Selects the stream channel to control.
     */
    PropertyI64 gevStreamChannelSelector;
    /// \brief A boolean property. Enables the alternate IP destination for stream packets resent due to a packet resend request.
    /**
     *  Enables the alternate IP destination for stream packets resent due to a packet resend request. When True, the source IP address provided in the packet resend command packet is used. When False, the value set in the GevSCDA[GevStreamChannelSelector] feature is used.
     */
    PropertyIBoolean gevSCCFGPacketResendDestination;
    /// \brief A boolean property. Enables the selected GVSP transmitter to use the single packet per data block All-in Transmission mode.
    /**
     *  Enables the selected GVSP transmitter to use the single packet per data block All-in Transmission mode.
     */
    PropertyIBoolean gevSCCFGAllInTransmission;
    /// \brief A boolean property. Enables the camera to continue to stream, for this stream channel, if its control channel is closed or regardless of the reception of any ICMP messages (such as destination unreachable messages).
    /**
     *  Enables the camera to continue to stream, for this stream channel, if its control channel is closed or regardless of the reception of any ICMP messages (such as destination unreachable messages).
     */
    PropertyIBoolean gevSCCFGUnconditionalStreaming;
    /// \brief A boolean property. Enables cameras to use the extended chunk data payload type for this stream channel.
    /**
     *  Enables cameras to use the extended chunk data payload type for this stream channel.
     */
    PropertyIBoolean gevSCCFGExtendedChunkData;
    /// \brief An enumerated integer property. Reports the direction of the stream channel.
    /**
     *  Reports the direction of the stream channel.
     *
     *  The following string values might be valid for this feature:
     *  - \b Transmitter (Display string: 'Transmitter'): Transmitter
     *  - \b Receiver (Display string: 'Receiver'): Receiver
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 gevSCPDirection;
    /// \brief An integer property. Index of the logical link to use.
    /**
     *  Index of the logical link to use.
     */
    PropertyI64 gevSCPInterfaceIndex;
    /// \brief An integer property. Controls the port of the selected channel to which a GVSP transmitter must send data stream or the port from which a GVSP receiver may receive data stream.
    /**
     *  Controls the port of the selected channel to which a GVSP transmitter must send data stream or the port from which a GVSP receiver may receive data stream. Setting this value to 0 closes the stream channel.
     */
    PropertyI64 gevSCPHostPort;
    /// \brief A boolean property. Sends a test packet.
    /**
     *  Sends a test packet. When this feature is set, the device will fire one test packet.
     */
    PropertyIBoolean gevSCPSFireTestPacket;
    /// \brief A boolean property. The state of this feature is copied into the 'do not fragment' bit of IP header of each stream packet.
    /**
     *  The state of this feature is copied into the 'do not fragment' bit of IP header of each stream packet. It can be used by the application to prevent IP fragmentation of packets on the stream channel.
     */
    PropertyIBoolean gevSCPSDoNotFragment;
    /// \brief A boolean property. Endianess of multi-byte pixel data for this stream.
    /**
     *  Endianess of multi-byte pixel data for this stream.
     */
    PropertyIBoolean gevSCPSBigEndian;
    /// \brief An integer property. Specifies the stream packet size, in bytes, to send on the selected channel for a GVSP transmitter or specifies the maximum packet size supported by a GVSP receiver.
    /**
     *  Specifies the stream packet size, in bytes, to send on the selected channel for a GVSP transmitter or specifies the maximum packet size supported by a GVSP receiver.
     */
    PropertyI64 gevSCPSPacketSize;
    /// \brief An integer property. Controls the delay (in timestamp counter unit) to insert between each packet for this stream channel.
    /**
     *  Controls the delay (in timestamp counter unit) to insert between each packet for this stream channel. This can be used as a crude flow-control mechanism if the application or the network infrastructure cannot keep up with the packets coming from the device.
     */
    PropertyI64 gevSCPD;
    /// \brief An integer property. Controls the destination IP address of the selected stream channel to which a GVSP transmitter must send data stream or the destination IP address from which a GVSP receiver may receive data stream.
    /**
     *  Controls the destination IP address of the selected stream channel to which a GVSP transmitter must send data stream or the destination IP address from which a GVSP receiver may receive data stream.
     */
    PropertyI64 gevSCDA;
    /// \brief An integer property. Indicates the source port of the stream channel.
    /**
     *  Indicates the source port of the stream channel.
     */
    PropertyI64 gevSCSP;
    /// \brief An integer property. Reports the number of zones per block transmitted on the selected stream channel.
    /**
     *  Reports the number of zones per block transmitted on the selected stream channel.
     */
    PropertyI64 gevSCZoneCount;
    /// \brief An integer property. Reports the transmission direction of each zone transmitted on the selected stream channel.
    /**
     *  Reports the transmission direction of each zone transmitted on the selected stream channel.
     */
    PropertyI64 gevSCZoneDirectionAll;
    /// \brief A boolean property. Controls whether the selected stream channel multi-zone configuration is locked.
    /**
     *  Controls whether the selected stream channel multi-zone configuration is locked. When locked, the GVSP transmitter is not allowed to change the number of zones and their direction during block acquisition and transmission.
     */
    PropertyIBoolean gevSCZoneConfigurationLock;
    /// \brief An integer property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. See the Device Control section for an equivalent. Selects the manifest entry to reference.
     */
    PropertyI64 gevManifestEntrySelector;
    /// \brief An integer property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. See the Device Control section for an equivalent. Indicates the major version number of the XML file of the selected manifest entry.
     */
    PropertyI64 gevManifestXMLMajorVersion;
    /// \brief An integer property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. See the Device Control section for an equivalent. Indicates the minor version number of the XML file of the selected manifest entry.
     */
    PropertyI64 gevManifestXMLMinorVersion;
    /// \brief An integer property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. See the Device Control section for an equivalent. Indicates the subminor version number of the XML file of the selected manifest entry.
     */
    PropertyI64 gevManifestXMLSubMinorVersion;
    /// \brief An integer property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. See the Device Control section for an equivalent. Indicates the major version number of the schema file of the selected manifest entry.
     */
    PropertyI64 gevManifestSchemaMajorVersion;
    /// \brief An integer property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. See the Device Control section for an equivalent.. Indicates the minor version number of the schema file of the selected manifest entry.
     */
    PropertyI64 gevManifestSchemaMinorVersion;
    /// \brief A string property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. See the Device Control section for an equivalent. Indicates the first URL to the XML device description file of the selected manifest entry.
     */
    PropertyS gevManifestPrimaryURL;
    /// \brief A string property. This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. See the Device Control section for an equivalent. Indicates the second URL to the XML device description file of the selected manifest entry.
     */
    PropertyS gevManifestSecondaryURL;
    /// \brief An integer property. Reports the number of transmitted PAUSE frames.
    /**
     *  Reports the number of transmitted PAUSE frames.
     */
    PropertyI64 aPAUSEMACCtrlFramesTransmitted;
    /// \brief An integer property. Reports the number of received PAUSE frames.
    /**
     *  Reports the number of received PAUSE frames.
     */
    PropertyI64 aPAUSEMACCtrlFramesReceived;
    /// \brief An enumerated integer property. This Camera Link specific feature describes the configuration used by the camera.
    /**
     *  This Camera Link specific feature describes the configuration used by the camera. It helps especially when a camera is capable of operation in a non-standard configuration, and when the features PixelSize, SensorDigitizationTaps, and DeviceTapGeometry do not provide enough information for interpretation of the image data provided by the camera.
     *
     *  The following string values might be valid for this feature:
     *  - \b Base (Display string: 'Base'): Standard base configuration described by the Camera Link standard.
     *  - \b Medium (Display string: 'Medium'): Standard medium configuration described by the Camera Link standard.
     *  - \b Full (Display string: 'Full'): Standard full configuration described by the Camera Link standard.
     *  - \b DualBase (Display string: 'Dual Base'): The camera streams the data from multiple taps (that do not fit in the standard base configuration) through two Camera Link base ports. It is responsibility of the application or frame grabber to reconstruct the full image. Only one of the ports (fixed) serves as the 'master' for serial communication and triggering.
     *  - \b EightyBit (Display string: 'Eighty Bit'): Standard 80-bit configuration with 10 taps of 8 bits or 8 taps of 10 bits, as described by the Camera Link standard.
     *  - \b Deca (Display string: 'Deca'): This enumeration entry is deprecated. It was used for Deca configuration with 10 taps of 8-bit. Use EightyBit instead.
     *  - \b Deca (Display string: 'Deca'): This enumeration entry is deprecated. It was used for Deca configuration with 10 taps of 8-bit. Use EightyBit instead.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 clConfiguration;
    /// \brief An enumerated integer property. This Camera Link specific feature describes the time multiplexing of the camera link connection to transfer more than the configuration allows, in one single clock.
    /**
     *  This Camera Link specific feature describes the time multiplexing of the camera link connection to transfer more than the configuration allows, in one single clock.
     *
     *  The following string values might be valid for this feature:
     *  - \b One (Display string: 'One'): One
     *  - \b Two (Display string: 'Two'): Two
     *  - \b Three (Display string: 'Three'): Three
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 clTimeSlotsCount;
    /// \brief An enumerated integer property. This feature indicates the current and active Link configuration used by the Device.
    /**
     *  This feature indicates the current and active Link configuration used by the Device.
     *
     *  The following string values might be valid for this feature:
     *  - \b None (Display string: 'None'): The Link configuration of the Device is unknown. Either the configuration operation has failed or there is nothing connected.
     *  - \b Pending (Display string: 'Pending'): The Device is in the process of configuring the Link. The Link cannot be used yet.
     *  - \b CXP1_X1 (Display string: 'CXP 1 X 1'): 1 Connection operating at CXP-1 speed (1.25 Gbps).
     *  - \b CXP2_X1 (Display string: 'CXP 2 X 1'): 1 Connection operating at CXP-2 speed (2.50 Gbps).
     *  - \b CXP3_X1 (Display string: 'CXP 3 X 1'): 1 Connection operating at CXP-3 speed (3.125 Gbps).
     *  - \b CXP5_X1 (Display string: 'CXP 5 X 1'): 1 Connection operating at CXP-5 speed (5.00 Gbps).
     *  - \b CXP6_X1 (Display string: 'CXP 6 X 1'): 1 Connection operating at CXP-6 speed (6.25 Gbps).
     *  - \b CXP1_X2 (Display string: 'CXP 1 X 2'): 2 Connections operating at CXP-1 speed (1.25 Gbps).
     *  - \b CXP2_X2 (Display string: 'CXP 2 X 2'): 2 Connections operating at CXP-2 speed (2.50 Gbps).
     *  - \b CXP3_X2 (Display string: 'CXP 3 X 2'): 2 Connections operating at CXP-3 speed (3.125 Gbps).
     *  - \b CXP5_X2 (Display string: 'CXP 5 X 2'): 2 Connections operating at CXP-4 speed (5.00 Gbps).
     *  - \b CXP6_X2 (Display string: 'CXP 6 X 2'): 3 Connections operating at CXP-5 speed (6.25 Gbps).
     *  - \b CXP1_X3 (Display string: 'CXP 1 X 3'): 3 Connections operating at CXP-1 speed (1.25 Gbps).
     *  - \b CXP2_X3 (Display string: 'CXP 2 X 3'): 3 Connections operating at CXP-2 speed (2.50 Gbps).
     *  - \b CXP3_X3 (Display string: 'CXP 3 X 3'): 3 Connections operating at CXP-3 speed (3.125 Gbps).
     *  - \b CXP5_X3 (Display string: 'CXP 5 X 3'): 3 Connections operating at CXP-5 speed (5.00 Gbps).
     *  - \b CXP6_X3 (Display string: 'CXP 6 X 3'): 3 Connections operating at CXP-6 speed (6.25 Gbps).
     *  - \b CXP1_X4 (Display string: 'CXP 1 X 4'): 4 Connections operating at CXP-1 speed (1.25 Gbps).
     *  - \b CXP2_X4 (Display string: 'CXP 2 X 4'): 4 Connections operating at CXP-2 speed (2.50 Gbps).
     *  - \b CXP3_X4 (Display string: 'CXP 3 X 4'): 4 Connections operating at CXP-3 speed (3.125 Gbps).
     *  - \b CXP5_X4 (Display string: 'CXP 5 X 4'): 4 Connections operating at CXP-5 speed (5.00 Gbps).
     *  - \b CXP6_X4 (Display string: 'CXP 6 X 4'): 4 Connections operating at CXP-6 speed (6.25 Gbps).
     *  - \b CXP1_X5 (Display string: 'CXP 1 X 5'): 5 Connections operating at CXP-1 speed (1.25 Gbps).
     *  - \b CXP2_X5 (Display string: 'CXP 2 X 5'): 5 Connections operating at CXP-2 speed (2.50 Gbps).
     *  - \b CXP3_X5 (Display string: 'CXP 3 X 5'): 5 Connections operating at CXP-3 speed (3.125 Gbps).
     *  - \b CXP5_X5 (Display string: 'CXP 5 X 5'): 5 Connections operating at CXP-5 speed (5.00 Gbps).
     *  - \b CXP6_X5 (Display string: 'CXP 6 X 5'): 5 Connections operating at CXP-6 speed (6.25 Gbps).
     *  - \b CXP1_X6 (Display string: 'CXP 1 X 6'): 6 Connections operating at CXP-1 speed (1.25 Gbps).
     *  - \b CXP2_X6 (Display string: 'CXP 2 X 6'): 6 Connections operating at CXP-2 speed (2.50 Gbps).
     *  - \b CXP3_X6 (Display string: 'CXP 3 X 6'): 6 Connections operating at CXP-3 speed (3.125 Gbps).
     *  - \b CXP5_X6 (Display string: 'CXP 5 X 6'): 6 Connections operating at CXP-5 speed (5.00 Gbps).
     *  - \b CXP6_X6 (Display string: 'CXP 6 X 6'): 6 Connections operating at CXP-6 speed (6.25 Gbps).
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 cxpLinkConfigurationStatus;
    /// \brief An enumerated integer property. Provides the Link configuration that allows the Transmitter Device to operate in its default mode.
    /**
     *  Provides the Link configuration that allows the Transmitter Device to operate in its default mode.
     *
     *  The following string values might be valid for this feature:
     *  - \b CXP1_X1 (Display string: 'CXP 1 X 1'): 1 Connection operating at CXP-1 speed (1.25 Gbps).
     *  - \b CXP2_X1 (Display string: 'CXP 2 X 1'): 1 Connection operating at CXP-2 speed (2.50 Gbps).
     *  - \b CXP3_X1 (Display string: 'CXP 3 X 1'): 1 Connection operating at CXP-3 speed (3.125 Gbps).
     *  - \b CXP5_X1 (Display string: 'CXP 5 X 1'): 1 Connection operating at CXP-5 speed (5.00 Gbps).
     *  - \b CXP6_X1 (Display string: 'CXP 6 X 1'): 1 Connection operating at CXP-6 speed (6.25 Gbps).
     *  - \b CXP1_X2 (Display string: 'CXP 1 X 2'): 2 Connections operating at CXP-1 speed (1.25 Gbps).
     *  - \b CXP2_X2 (Display string: 'CXP 2 X 2'): 2 Connections operating at CXP-2 speed (2.50 Gbps).
     *  - \b CXP3_X2 (Display string: 'CXP 3 X 2'): 2 Connections operating at CXP-3 speed (3.125 Gbps).
     *  - \b CXP5_X2 (Display string: 'CXP 5 X 2'): 2 Connections operating at CXP-4 speed (5.00 Gbps).
     *  - \b CXP6_X2 (Display string: 'CXP 6 X 2'): 3 Connections operating at CXP-5 speed (6.25 Gbps).
     *  - \b CXP1_X3 (Display string: 'CXP 1 X 3'): 3 Connections operating at CXP-1 speed (1.25 Gbps).
     *  - \b CXP2_X3 (Display string: 'CXP 2 X 3'): 3 Connections operating at CXP-2 speed (2.50 Gbps).
     *  - \b CXP3_X3 (Display string: 'CXP 3 X 3'): 3 Connections operating at CXP-3 speed (3.125 Gbps).
     *  - \b CXP5_X3 (Display string: 'CXP 5 X 3'): 3 Connections operating at CXP-5 speed (5.00 Gbps).
     *  - \b CXP6_X3 (Display string: 'CXP 6 X 3'): 3 Connections operating at CXP-6 speed (6.25 Gbps).
     *  - \b CXP1_X4 (Display string: 'CXP 1 X 4'): 4 Connections operating at CXP-1 speed (1.25 Gbps).
     *  - \b CXP2_X4 (Display string: 'CXP 2 X 4'): 4 Connections operating at CXP-2 speed (2.50 Gbps).
     *  - \b CXP3_X4 (Display string: 'CXP 3 X 4'): 4 Connections operating at CXP-3 speed (3.125 Gbps).
     *  - \b CXP5_X4 (Display string: 'CXP 5 X 4'): 4 Connections operating at CXP-5 speed (5.00 Gbps).
     *  - \b CXP6_X4 (Display string: 'CXP 6 X 4'): 4 Connections operating at CXP-6 speed (6.25 Gbps).
     *  - \b CXP1_X5 (Display string: 'CXP 1 X 5'): 5 Connections operating at CXP-1 speed (1.25 Gbps).
     *  - \b CXP2_X5 (Display string: 'CXP 2 X 5'): 5 Connections operating at CXP-2 speed (2.50 Gbps).
     *  - \b CXP3_X5 (Display string: 'CXP 3 X 5'): 5 Connections operating at CXP-3 speed (3.125 Gbps).
     *  - \b CXP5_X5 (Display string: 'CXP 5 X 5'): 5 Connections operating at CXP-5 speed (5.00 Gbps).
     *  - \b CXP6_X5 (Display string: 'CXP 6 X 5'): 5 Connections operating at CXP-6 speed (6.25 Gbps).
     *  - \b CXP1_X6 (Display string: 'CXP 1 X 6'): 6 Connections operating at CXP-1 speed (1.25 Gbps).
     *  - \b CXP2_X6 (Display string: 'CXP 2 X 6'): 6 Connections operating at CXP-2 speed (2.50 Gbps).
     *  - \b CXP3_X6 (Display string: 'CXP 3 X 6'): 6 Connections operating at CXP-3 speed (3.125 Gbps).
     *  - \b CXP5_X6 (Display string: 'CXP 5 X 6'): 6 Connections operating at CXP-5 speed (5.00 Gbps).
     *  - \b CXP6_X6 (Display string: 'CXP 6 X 6'): 6 Connections operating at CXP-6 speed (6.25 Gbps).
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 cxpLinkConfigurationPreferred;
    /// \brief An enumerated integer property. This feature allows specifying the Link configuration for the communication between the Receiver and Transmitter Device.
    /**
     *  This feature allows specifying the Link configuration for the communication between the Receiver and Transmitter Device. In most cases this feature does not need to be written because automatic discovery will set configuration correctly to the value returned by CxpLinkConfigurationPreferred. Note that the currently active configuration of the Link can be read using CxpLinkConfigurationStatus.
     *
     *  The following string values might be valid for this feature:
     *  - \b Auto (Display string: 'Auto'): Sets Automatic discovery for the Link Configuration.
     *  - \b CXP1_X1 (Display string: 'CXP 1 X 1'): Force the Link to 1 Connection operating at CXP-1 speed (1.25 Gbps).
     *  - \b CXP2_X1 (Display string: 'CXP 2 X 1'): Force the Link to 1 Connection operating at CXP-2 speed (2.50 Gbps).
     *  - \b CXP3_X1 (Display string: 'CXP 3 X 1'): Force the Link to 1 Connection operating at CXP-3 speed (3.125 Gbps).
     *  - \b CXP5_X1 (Display string: 'CXP 5 X 1'): Force the Link to 1 Connection operating at CXP-5 speed (5.00 Gbps).
     *  - \b CXP6_X1 (Display string: 'CXP 6 X 1'): Force the Link to 1 Connection operating at CXP-6 speed (6.25 Gbps).
     *  - \b CXP1_X2 (Display string: 'CXP 1 X 2'): Force the Link to 2 Connections operating at CXP-1 speed (1.25 Gbps).
     *  - \b CXP2_X2 (Display string: 'CXP 2 X 2'): Force the Link to 2 Connections operating at CXP-2 speed (2.50 Gbps).
     *  - \b CXP3_X2 (Display string: 'CXP 3 X 2'): Force the Link to 2 Connections operating at CXP-3 speed (3.125 Gbps).
     *  - \b CXP5_X2 (Display string: 'CXP 5 X 2'): Force the Link to 2 Connections operating at CXP-5 speed (5.00 Gbps).
     *  - \b CXP6_X2 (Display string: 'CXP 6 X 2'): Force the Link to 3 Connections operating at CXP-6 speed (6.25 Gbps).
     *  - \b CXP1_X3 (Display string: 'CXP 1 X 3'): Force the Link to 3 Connections operating at CXP-1 speed (1.25 Gbps).
     *  - \b CXP2_X3 (Display string: 'CXP 2 X 3'): Force the Link to 3 Connections operating at CXP-2 speed (2.50 Gbps).
     *  - \b CXP3_X3 (Display string: 'CXP 3 X 3'): Force the Link to 3 Connections operating at CXP-3 speed (3.125 Gbps).
     *  - \b CXP5_X3 (Display string: 'CXP 5 X 3'): Force the Link to 3 Connections operating at CXP-5 speed (5.00 Gbps).
     *  - \b CXP6_X3 (Display string: 'CXP 6 X 3'): Force the Link to 3 Connections operating at CXP-6 speed (6.25 Gbps).
     *  - \b CXP1_X4 (Display string: 'CXP 1 X 4'): Force the Link to 4 Connections operating at CXP-1 speed (1.25 Gbps).
     *  - \b CXP2_X4 (Display string: 'CXP 2 X 4'): Force the Link to 4 Connections operating at CXP-2 speed (2.50 Gbps).
     *  - \b CXP3_X4 (Display string: 'CXP 3 X 4'): Force the Link to 4 Connections operating at CXP-3 speed (3.125 Gbps).
     *  - \b CXP5_X4 (Display string: 'CXP 5 X 4'): Force the Link to 4 Connections operating at CXP-5 speed (5.00 Gbps).
     *  - \b CXP6_X4 (Display string: 'CXP 6 X 4'): Force the Link to 4 Connections operating at CXP-6 speed (6.25 Gbps).
     *  - \b CXP1_X5 (Display string: 'CXP 1 X 5'): Force the Link to 5 Connections operating at CXP-1 speed (1.25 Gbps).
     *  - \b CXP2_X5 (Display string: 'CXP 2 X 5'): Force the Link to 5 Connections operating at CXP-2 speed (2.50 Gbps).
     *  - \b CXP3_X5 (Display string: 'CXP 3 X 5'): Force the Link to 5 Connections operating at CXP-3 speed (3.125 Gbps).
     *  - \b CXP5_X5 (Display string: 'CXP 5 X 5'): Force the Link to 5 Connections operating at CXP-5 speed (5.00 Gbps).
     *  - \b CXP6_X5 (Display string: 'CXP 6 X 5'): Force the Link to 5 Connections operating at CXP-6 speed (6.25 Gbps).
     *  - \b CXP1_X6 (Display string: 'CXP 1 X 6'): Force the Link to 6 Connections operating at CXP-1 speed (1.25 Gbps).
     *  - \b CXP2_X6 (Display string: 'CXP 2 X 6'): Force the Link to 6 Connections operating at CXP-2 speed (2.50 Gbps).
     *  - \b CXP3_X6 (Display string: 'CXP 3 X 6'): Force the Link to 6 Connections operating at CXP-3 speed (3.125 Gbps).
     *  - \b CXP5_X6 (Display string: 'CXP 5 X 6'): Force the Link to 6 Connections operating at CXP-5 speed (5.00 Gbps).
     *  - \b CXP6_X6 (Display string: 'CXP 6 X 6'): Force the Link to 6 Connections operating at CXP-6 speed (6.25 Gbps).
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 cxpLinkConfiguration;
    /// \brief An integer property. Selects the CoaXPress physical connection to control.
    /**
     *  Selects the CoaXPress physical connection to control.
     */
    PropertyI64 cxpConnectionSelector;
    /// \brief An enumerated integer property. Enables the test mode for an individual physical connection of the Device.
    /**
     *  Enables the test mode for an individual physical connection of the Device.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'Off'): Off
     *  - \b Mode1 (Display string: 'Mode 1'): Mode 1
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 cxpConnectionTestMode;
    /// \brief An integer property. Reports the current connection error count for test packets recieved by the device on the connection selected by CxpConnectionSelector.
    /**
     *  Reports the current connection error count for test packets recieved by the device on the connection selected by CxpConnectionSelector.
     */
    PropertyI64 cxpConnectionTestErrorCount;
    /// \brief An integer property. Reports the current count for test packets recieved by the device on the connection selected by CxpConnectionSelector.
    /**
     *  Reports the current count for test packets recieved by the device on the connection selected by CxpConnectionSelector.
     */
    PropertyI64 cxpConnectionTestPacketCount;
    /// \brief A method object. Activate automatic control of the Power over CoaXPress (PoCXP) for the Link.
    /**
     *  Activate automatic control of the Power over CoaXPress (PoCXP) for the Link.
     */
    Method cxpPoCxpAuto;
    /// \brief A method object. Disable Power over CoaXPress (PoCXP) for the Link.
    /**
     *  Disable Power over CoaXPress (PoCXP) for the Link.
     */
    Method cxpPoCxpTurnOff;
    /// \brief A method object. Reset the Power over CoaXPress (PoCXP) Link after an over-current trip on the Device connection(s).
    /**
     *  Reset the Power over CoaXPress (PoCXP) Link after an over-current trip on the Device connection(s).
     */
    Method cxpPoCxpTripReset;
    /// \brief An enumerated integer property. Returns the Power over CoaXPress (PoCXP) status of the Device.
    /**
     *  Returns the Power over CoaXPress (PoCXP) status of the Device.
     *
     *  The following string values might be valid for this feature:
     *  - \b Auto (Display string: 'Auto'): Normal automatic PoCXP operation.
     *  - \b Off (Display string: 'Off'): PoCXP is forced off.
     *  - \b Tripped (Display string: 'Tripped'): The Link has shut down because of an over-current trip.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 cxpPoCxpStatus;
    /// \brief An enumerated integer property. Selects the bandwidth control for the selected stream channel.
    /**
     *  This enumeration selects the bandwidth control for the selected stream channel.
     *
     *  The following string values might be valid for this feature:
     *  - \b GevSCPD (Display string: 'mv Gev SCBW Control')
     *  - \b mvGevSCBW (Display string: 'mv Gev SCBW Control')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvGevSCBWControl;
    /// \brief An integer property. Sets the stream channels max. bandwidth in KBps
    /**
     *  This value sets the stream channels max. bandwidth in KBps.
     */
    PropertyI64 mvGevSCBW;
    PYTHON_ONLY( %mutable; )
    /// \brief Calculates the effective number of payload packets (not including leader and trailer) per block of data (e.g. an image) for a GigE Vision data stream when transferring the payload type \a image.
    /**
     *  This will include all overhead introduced by the network protocol. The value will be correct for payload type image only, thus e.g. when
     *  transferring chunk data the result will not be 100 per cent accurate as then some packets will use a slightly different layout. However
     *  these differences are negligible when working in modes, where individual images are not smaller than roughly 64 by 64 pixels.
     *  \return The effective number of payload packets (not including leader and trailer) per block of data (e.g. an image) transferred by a GigE Vision device with the current parameters.
     */
    static int64_type gevGetEffectivePayloadPacketsPerImage(
        /// [in] The current or desired gevSCPSPacketSizeValue. This value depends e.g. on the MTU of the NIC the stream has been created on. See network configuration chapters for details.
        const int64_type gevSCPSPacketSizeValue,
        /// [in] The current value of the \a payloadSize property.
        const int64_type payloadSizeValue,
        /// [in] Indicates whether the bandwidth shall be calculated for the extended ID mode (introduced in GigE Vision 2.0) or not.
        /// With \a boExtendedID the protocol overhead will increase slightly.
        const bool boExtendedID = false )
    {
        const int64_type PacketSizeWithoutEthernet = boExtendedID ? 48LL : 36LL; // 20 (IP Header) + 8 (UDP Header) + boExtendedID ? 20 : 8 (GVSP Header)
        const int64_type gevSCPSPacketSizeValue_effective = gevSCPSPacketSizeValue - PacketSizeWithoutEthernet; // The ethernet header is not taken into account here!
        return ( payloadSizeValue + gevSCPSPacketSizeValue_effective - 1LL ) / gevSCPSPacketSizeValue_effective;
    }
    /**
     *  This will include all overhead introduced by the network protocol. The value will be correct for payload type image only, thus e.g. when
     *  transferring chunk data the result will not be 100 per cent accurate as then some packets will use a slightly different layout. However
     *  these differences are negligible when working in modes, where individual images are not smaller than roughly 64 by 64 pixels.
     *  \return The effective number of payload packets (not including leader and trailer) per block of data (e.g. an image) transferred by a GigE Vision device with the current parameters.
     */
    int64_type gevGetEffectivePayloadPacketsPerImage(
        /// [in] The current or desired gevSCPSPacketSizeValue. This value depends e.g. on the MTU of the NIC the stream has been created on. See network configuration chapters for details.
        const int64_type gevSCPSPacketSizeValue,
        /// [in] Indicates whether the bandwidth shall be calculated for the extended ID mode (introduced in GigE Vision 2.0) or not.
        /// With \a boExtendedID the protocol overhead will increase slightly.
        const bool boExtendedID = false ) const
    {
        return gevGetEffectivePayloadPacketsPerImage( gevSCPSPacketSizeValue, payloadSize.read(), boExtendedID );
    }
    /// \brief Calculates the effective bytes per block of data (e.g. an image) for a GigE Vision data stream when transferring the payload type \a image.
    /**
     *  This will include all overhead introduced by the network protocol. The value will be correct for payload type image only, thus e.g. when
     *  transferring chunk data the result will not be 100 per cent accurate as then some packets will use a slightly different layout. However
     *  these differences are negligible when working in modes, where individual images are not smaller than roughly 64 by 64 pixels.
     *  \return The effective bytes per block of data (e.g. an image) transferred by a GigE Vision device with the current parameters.
     */
    static int64_type gevGetEffectiveBytesPerImage(
        /// [in] The current or desired gevSCPSPacketSizeValue. This value depends e.g. on the MTU of the NIC the stream has been created on. See network configuration chapters for details.
        const int64_type gevSCPSPacketSizeValue,
        /// [in] The current value of the \a payloadSize property.
        const int64_type payloadSizeValue,
        /// [in] Indicates whether the bandwidth shall be calculated for the extended ID mode (introduced in GigE Vision 2.0) or not.
        /// With \a boExtendedID the protocol overhead will increase slightly.
        const bool boExtendedID = false )
    {
        const int64_type PacketSizeWithoutEthernet = boExtendedID ? 48LL : 36LL; // 20 (IP Header) + 8 (UDP Header) + boExtendedID ? 20 : 8 (GVSP Header)
        const int64_type GVSPHeaderSize = PacketSizeWithoutEthernet + 14LL; // 14 (Ethernet Header)
        const int64_type GVSPImageLeaderSize = GVSPHeaderSize + 36LL;
        const int64_type GVSPImageTrailerSize = GVSPHeaderSize + 8LL;
        const int64_type protocolOverhead = GVSPImageLeaderSize + ( gevGetEffectivePayloadPacketsPerImage( gevSCPSPacketSizeValue, payloadSizeValue, boExtendedID ) * GVSPHeaderSize ) + GVSPImageTrailerSize;
        return protocolOverhead + payloadSizeValue;
    }
    /// \brief Calculates the effective bytes per block of data (e.g. an image) for a GigE Vision data stream when transferring the payload type \a image.
    /**
     *  This will include all overhead introduced by the network protocol. The value will be correct for payload type image only, thus e.g. when
     *  transferring chunk data the result will not be 100 per cent accurate as then some packets will use a slightly different layout. However
     *  these differences are negligible when working in modes, where individual images are not smaller than roughly 64 by 64 pixels.
     *  \return The effective bytes per block of data (e.g. an image) transferred by a GigE Vision device with the current parameters.
     */
    int64_type gevGetEffectiveBytesPerImage(
        /// [in] The current or desired gevSCPSPacketSizeValue. This value depends e.g. on the MTU of the NIC the stream has been created on. See network configuration chapters for details.
        const int64_type gevSCPSPacketSizeValue,
        /// [in] Indicates whether the bandwidth shall be calculated for the extended ID mode (introduced in GigE Vision 2.0) or not.
        /// With \a boExtendedID the protocol overhead will increase slightly.
        const bool boExtendedID = false ) const
    {
        return gevGetEffectiveBytesPerImage( gevSCPSPacketSizeValue, payloadSize.read(), boExtendedID );
    }
    /// \brief Calculates the overall resulting bandwidth (in bytes) needed for GigE Vision data streams when transferring the payload type \a image.
    /**
     *  This will include all overhead introduced by the network protocol. The value will be correct for payload type image only, thus e.g. when
     *  transferring chunk data the result will not be 100 per cent precise as then some packets will use a slightly different layout. However
     *  these differences are negligible when working in modes, where individual images are not smaller than roughly 64 by 64 pixels.
     *  \return The overall resulting bandwidth (in bytes) needed for GigE Vision data streams when transferring the payload type \a image.
     */
    static int64_type gevGetResultingBandwidth(
        /// [in] The overall current or desired frame rate.
        const double acquisitionFrameRateValue,
        /// [in] The current or desired gevSCPSPacketSizeValue. This value depends e.g. on the MTU of the NIC the stream has been created on. See network configuration chapters for details.
        const int64_type gevSCPSPacketSizeValue,
        /// [in] The current value of the \a payloadSize property.
        const int64_type payloadSizeValue,
        /// [in] Indicates whether the bandwidth shall be calculated for the extended ID mode (introduced in GigE Vision 2.0) or not.
        /// With \a boExtendedID the protocol overhead will increase slightly.
        const bool boExtendedID = false )
    {
        return static_cast<int64_type>( static_cast<double>( gevGetEffectiveBytesPerImage( gevSCPSPacketSizeValue, payloadSizeValue, boExtendedID ) ) * acquisitionFrameRateValue );
    }
    /// \brief Calculates the overall resulting bandwidth (in bytes) needed for GigE Vision data streams when transferring the payload type \a image.
    /**
     *  This will include all overhead introduced by the network protocol. The value will be correct for payload type image only, thus e.g. when
     *  transferring chunk data the result will not be 100 per cent precise as then some packets will use a slightly different layout. However
     *  these differences are negligible when working in modes, where individual images are not smaller than roughly 64 by 64 pixels.
     *  \return The overall resulting bandwidth (in bytes) needed for GigE Vision data streams when transferring the payload type \a image.
     */
    int64_type gevGetResultingBandwidth(
        /// [in] The overall current or desired frame rate.
        const double acquisitionFrameRateValue,
        /// [in] The current or desired gevSCPSPacketSizeValue. This value depends e.g. on the MTU of the NIC the stream has been created on. See network configuration chapters for details.
        const int64_type gevSCPSPacketSizeValue,
        /// [in] Indicates whether the bandwidth shall be calculated for the extended ID mode (introduced in GigE Vision 2.0) or not.
        /// With \a boExtendedID the protocol overhead will increase slightly.
        const bool boExtendedID = false ) const
    {
        return static_cast<int64_type>( static_cast<double>( gevGetEffectiveBytesPerImage( gevSCPSPacketSizeValue, boExtendedID ) ) * acquisitionFrameRateValue );
    }
    /// \brief Calculates the inter-packet delay needed to achieve a uniform packet and thus payload distribution for for GigE Vision data streams when transferring the payload type \a image.
    /**
     *  This will include all overhead introduced by the network protocol. The value will be correct for payload type image only, thus e.g. when
     *  transferring chunk data the result will not be 100 per cent accurate as then some packets will use a slightly different layout. However
     *  these differences are negligible when working in modes, where individual images are not smaller than roughly 64 by 64 pixels.
     *
     *  The result of this function should be written to the property <b>mvIMPACT::acquire::TransportLayerControl::gevSCPD</b> if supported by the device.
     *  \return The \a GevSCPD value for the given input parameters. If this value is negative, this indicates that the overall bandwidth resulting
     *  from the given input parameters is higher than stated by \a bandwidthAvailable. In such a case the inter-packet delay must be set to 0 and
     *  it should be noted that the desired framerate cannot be reached in this configuration.
     */
    static int64_type gevGetResultingPacketDelay(
        /// [in] The overall current or desired frame rate.
        const double acquisitionFrameRateValue,
        /// [in] The current or desired gevSCPSPacketSizeValue. This value depends e.g. on the MTU of the NIC the stream has been created on. See network configuration chapters for details.
        const int64_type gevSCPSPacketSizeValue,
        /// [in] The current value of the \a payloadSize property.
        const int64_type payloadSizeValue,
        /// [in] The timestamp tick frequency of the GEV remote device.
        const int64_type gevTimestampTickFrequencyValue,
        /// [in] The overall bandwidth in bytes that is available on the given link.
        const int64_type bandwidthAvailable,
        /// [in] Indicates whether the bandwidth shall be calculated for the extended ID mode (introduced in GigE Vision 2.0) or not.
        /// With \a boExtendedID the protocol overhead will increase slightly.
        const bool boExtendedID = false )
    {
        const int64_type bandwidthNeeded = gevGetResultingBandwidth( acquisitionFrameRateValue, gevSCPSPacketSizeValue, payloadSizeValue, boExtendedID );
        const int64_type packetsPerImage = gevGetEffectivePayloadPacketsPerImage( gevSCPSPacketSizeValue, payloadSizeValue, boExtendedID ) + 2; // one leader, one trailer
        const double totalDelayTime = 1. - static_cast<double>( bandwidthNeeded ) / static_cast<double>( bandwidthAvailable );
        const double interPacketDelayTime = totalDelayTime / ( static_cast<double>( packetsPerImage ) * acquisitionFrameRateValue );
        return static_cast<int64_type>( interPacketDelayTime * gevTimestampTickFrequencyValue );
    }
    /// \brief Calculates the inter-packet delay needed to achieve a uniform packet and thus payload distribution for for GigE Vision data streams when transferring the payload type \a image.
    /**
     *  This will include all overhead introduced by the network protocol. The value will be correct for payload type image only, thus e.g. when
     *  transferring chunk data the result will not be 100 per cent accurate as then some packets will use a slightly different layout. However
     *  these differences are negligible when working in modes, where individual images are not smaller than roughly 64 by 64 pixels.
     *
     *  The result of this function should be written to the property <b>mvIMPACT::acquire::TransportLayerControl::gevSCPD</b> if supported by the device.
     *  \return The \a GevSCPD value for the given input parameters. If this value is negative, this indicates that the overall bandwidth resulting
     *  from the given input parameters is higher than stated by \a bandwidthAvailable. In such a case the inter-packet delay must be set to 0 and
     *  it should be noted that the desired framerate cannot be reached in this configuration.
     */
    int64_type gevGetResultingPacketDelay(
        /// [in] The overall current or desired frame rate.
        const double acquisitionFrameRateValue,
        /// [in] The current or desired gevSCPSPacketSizeValue. This value depends e.g. on the MTU of the NIC the stream has been created on. See network configuration chapters for details.
        const int64_type gevSCPSPacketSizeValue,
        /// [in] The timestamp tick frequency of the GEV remote device.
        const int64_type gevTimestampTickFrequencyValue,
        /// [in] The overall bandwidth in bytes that is available on the given link.
        const int64_type bandwidthAvailable,
        /// [in] Indicates whether the bandwidth shall be calculated for the extended ID mode (introduced in GigE Vision 2.0) or not.
        /// With \a boExtendedID the protocol overhead will increase slightly.
        const bool boExtendedID = false ) const
    {
        return gevGetResultingPacketDelay( acquisitionFrameRateValue, gevSCPSPacketSizeValue, payloadSize.read(), gevTimestampTickFrequencyValue, bandwidthAvailable, boExtendedID );
    }
};

//-----------------------------------------------------------------------------
/// \brief Custom area.
/**
 *  Custom area.
 */
class mvCustomData
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::mvCustomData</b> object.
    explicit mvCustomData(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        mvCustomText(),
        mvWriteCustomData(),
        mvReadCustomData()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( mvCustomText, "mvCustomText" );
        locator.bindComponent( mvWriteCustomData, "mvWriteCustomData@i" );
        locator.bindComponent( mvReadCustomData, "mvReadCustomData@i" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief A string property. Custom text.
    /**
     *  Custom text.
     */
    PropertyS mvCustomText;
    /// \brief A method object. Function to write custom data.
    /**
     *  Function to write custom data.
     */
    Method mvWriteCustomData;
    /// \brief A method object. Function to read custom data.
    /**
     *  Function to read custom data.
     */
    Method mvReadCustomData;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains OMAP Preview Engine specific features.
/**
 *  A category that contains OMAP Preview Engine specific features.
 */
class mvOMAPPreviewConfig : public mvIMPACT::acquire::ComponentCollection
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::mvOMAPPreviewConfig</b> object.
    explicit mvOMAPPreviewConfig(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        mvIMPACT::acquire::ComponentCollection( pDev ),
        mvGain(),
        mvBalanceWhiteAuto(),
        mvAutoExposure()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam/mvOMAPPreviewConfig" );
        m_hRoot = locator.searchbase_id();
        locator.bindComponent( mvGain, "mvGain" );
        locator.bindComponent( mvBalanceWhiteAuto, "mvBalanceWhiteAuto" );
        locator.bindComponent( mvAutoExposure, "mvAutoExposure" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An integer property. Changes the current gain.
    /**
     *  Changes the current gain.
     */
    PropertyI64 mvGain;
    /// \brief An enumerated integer property. Controls the white balance engine.
    /**
     *  Controls the white balance engine.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'mv Balance White Auto')
     *  - \b Once (Display string: 'mv Balance White Auto')
     *  - \b Continuous (Display string: 'mv Balance White Auto')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvBalanceWhiteAuto;
    /// \brief An enumerated integer property. Controls the auto exposure engine.
    /**
     *  Controls the auto exposure engine.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'mv Auto Exposure')
     *  - \b Continuous (Display string: 'mv Auto Exposure')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvAutoExposure;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Contains X-Lamp specific control parameters.
/**
 *  Contains X-Lamp specific control parameters.
 */
class mvXLampControl : public mvIMPACT::acquire::ComponentCollection
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::mvXLampControl</b> object.
    explicit mvXLampControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        mvIMPACT::acquire::ComponentCollection( pDev ),
        mvXLampSource(),
        mvXLampActivationSourceSelector(),
        mvXLampActivationSource(),
        mvXLampLEDPairSelector(),
        mvXLampActivationSourceModeSelector(),
        mvXLampLEDActivationSourceMode(),
        mvXLampLEDPairCurrent()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam/mvXLampControl" );
        m_hRoot = locator.searchbase_id();
        locator.bindComponent( mvXLampSource, "mvXLampSource" );
        locator.bindComponent( mvXLampActivationSourceSelector, "mvXLampActivationSourceSelector" );
        locator.bindComponent( mvXLampActivationSource, "mvXLampActivationSource" );
        locator.bindComponent( mvXLampLEDPairSelector, "mvXLampLEDPairSelector" );
        locator.bindComponent( mvXLampActivationSourceModeSelector, "mvXLampActivationSourceModeSelector" );
        locator.bindComponent( mvXLampLEDActivationSourceMode, "mvXLampLEDActivationSourceMode" );
        locator.bindComponent( mvXLampLEDPairCurrent, "mvXLampLEDPairCurrent" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Chooses which signal to use for the lamps
    /**
     *  Chooses which signal to use for the lamps
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'mv X Lamp Source')
     *  - \b mvExposureAndAcquisitionActive (Display string: 'mv X Lamp Source')
     *  - \b Line4 (Display string: 'mv X Lamp Source')
     *  - \b Line5 (Display string: 'mv X Lamp Source')
     *  - \b UserOutput0 (Display string: 'mv X Lamp Source')
     *  - \b UserOutput1 (Display string: 'mv X Lamp Source')
     *  - \b UserOutput2 (Display string: 'mv X Lamp Source')
     *  - \b UserOutput3 (Display string: 'mv X Lamp Source')
     *  - \b Timer1Active (Display string: 'mv X Lamp Source')
     *  - \b Timer2Active (Display string: 'mv X Lamp Source')
     *  - \b Counter1Active (Display string: 'mv X Lamp Source')
     *  - \b Counter2Active (Display string: 'mv X Lamp Source')
     *  - \b Counter3Active (Display string: 'mv X Lamp Source')
     *  - \b Counter4Active (Display string: 'mv X Lamp Source')
     *  - \b ExposureActive (Display string: 'mv X Lamp Source')
     *  - \b FrameActive (Display string: 'mv X Lamp Source')
     *  - \b mvReadOutActive (Display string: 'mv X Lamp Source')
     *  - \b LineActive (Display string: 'mv X Lamp Source')
     *  - \b FrameTriggerWait (Display string: 'mv X Lamp Source')
     *  - \b mvTemperatureOutOfRange (Display string: 'mv X Lamp Source')
     *  - \b mvRTMOutput0 (Display string: 'mv X Lamp Source')
     *  - \b mvRTMOutput1 (Display string: 'mv X Lamp Source')
     *  - \b mvRTMOutput2 (Display string: 'mv X Lamp Source')
     *  - \b mvRTMOutput3 (Display string: 'mv X Lamp Source')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvXLampSource;
    /// \brief An enumerated integer property. Chooses which activation line is to be configured
    /**
     *  Chooses which activation line is to be configured
     *
     *  The following string values might be valid for this feature:
     *  - \b ActivationSource0 (Display string: 'mv X Lamp Activation Source Selector')
     *  - \b ActivationSource1 (Display string: 'mv X Lamp Activation Source Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvXLampActivationSourceSelector;
    /// \brief An enumerated integer property. Chooses which signal to use for the activation line
    /**
     *  Chooses which signal to use for the activation line
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'mv X Lamp Activation Source')
     *  - \b mvExposureAndAcquisitionActive (Display string: 'mv X Lamp Activation Source')
     *  - \b Line4 (Display string: 'mv X Lamp Activation Source')
     *  - \b Line5 (Display string: 'mv X Lamp Activation Source')
     *  - \b UserOutput0 (Display string: 'mv X Lamp Activation Source')
     *  - \b UserOutput1 (Display string: 'mv X Lamp Activation Source')
     *  - \b UserOutput2 (Display string: 'mv X Lamp Activation Source')
     *  - \b UserOutput3 (Display string: 'mv X Lamp Activation Source')
     *  - \b Timer1Active (Display string: 'mv X Lamp Activation Source')
     *  - \b Timer2Active (Display string: 'mv X Lamp Activation Source')
     *  - \b Counter1Active (Display string: 'mv X Lamp Activation Source')
     *  - \b Counter2Active (Display string: 'mv X Lamp Activation Source')
     *  - \b Counter3Active (Display string: 'mv X Lamp Activation Source')
     *  - \b Counter4Active (Display string: 'mv X Lamp Activation Source')
     *  - \b ExposureActive (Display string: 'mv X Lamp Activation Source')
     *  - \b FrameActive (Display string: 'mv X Lamp Activation Source')
     *  - \b mvReadOutActive (Display string: 'mv X Lamp Activation Source')
     *  - \b LineActive (Display string: 'mv X Lamp Activation Source')
     *  - \b FrameTriggerWait (Display string: 'mv X Lamp Activation Source')
     *  - \b mvTemperatureOutOfRange (Display string: 'mv X Lamp Activation Source')
     *  - \b mvRTMOutput0 (Display string: 'mv X Lamp Activation Source')
     *  - \b mvRTMOutput1 (Display string: 'mv X Lamp Activation Source')
     *  - \b mvRTMOutput2 (Display string: 'mv X Lamp Activation Source')
     *  - \b mvRTMOutput3 (Display string: 'mv X Lamp Activation Source')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvXLampActivationSource;
    /// \brief An enumerated integer property. Chooses which LED pair is to be configured.
    /**
     *  Chooses which LED pair is to be configured.
     *
     *  The following string values might be valid for this feature:
     *  - \b LEDPairA (Display string: 'mv X Lamp LED Pair Selector')
     *  - \b LEDPairB (Display string: 'mv X Lamp LED Pair Selector')
     *  - \b LEDPairC (Display string: 'mv X Lamp LED Pair Selector')
     *  - \b LEDPairD (Display string: 'mv X Lamp LED Pair Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvXLampLEDPairSelector;
    /// \brief An enumerated integer property. Chooses which LED mode bit is to be configured.
    /**
     *  Chooses which LED mode bit is to be configured.
     *
     *  The following string values might be valid for this feature:
     *  - \b ActivationSource1Low_ActivationSource0Low (Display string: 'mv X Lamp Activation Source Mode Selector')
     *  - \b ActivationSource1Low_ActivationSource0High (Display string: 'mv X Lamp Activation Source Mode Selector')
     *  - \b ActivationSource1High_ActivationSource0Low (Display string: 'mv X Lamp Activation Source Mode Selector')
     *  - \b ActivationSource1High_ActivationSource0High (Display string: 'mv X Lamp Activation Source Mode Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvXLampActivationSourceModeSelector;
    /// \brief A boolean property. LED mode bit
    /**
     *  LEDD mode bit
     */
    PropertyIBoolean mvXLampLEDActivationSourceMode;
    /// \brief An integer property. Current per LED pair in mA.
    /**
     *  Current per LED pair in mA.
     */
    PropertyI64 mvXLampLEDPairCurrent;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains features to control the devices Logic Gate Control parameters.
/**
 *  A category that contains features to control the devices Logic Gate Control parameters.
 */
class mvLogicGateControl : public mvIMPACT::acquire::ComponentCollection
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::mvLogicGateControl</b> object.
    explicit mvLogicGateControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        mvIMPACT::acquire::ComponentCollection( pDev ),
        mvLogicGateANDSelector(),
        mvLogicGateANDSource1(),
        mvANDSource1Inverter(),
        mvLogicGateANDSource2(),
        mvANDSource2Inverter(),
        mvLogicGateORSelector(),
        mvLogicGateORSource1(),
        mvLogicGateORSource2(),
        mvLogicGateORSource3(),
        mvLogicGateORSource4(),
        mvLogicGateSourceSelector(),
        mvLogicGateSource(),
        mvLogicGateSourceInverter(),
        mvLogicGateANDTermSelector(),
        mvLogicGateANDTermSrc0(),
        mvLogicGateANDTermSrc1(),
        mvLogicGateORTermSelector(),
        mvLogicGateORTermSrc0(),
        mvLogicGateORTermSrc1()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam/mvLogicGateControl" );
        m_hRoot = locator.searchbase_id();
        locator.bindComponent( mvLogicGateANDSelector, "mvLogicGateANDSelector" );
        locator.bindComponent( mvLogicGateANDSource1, "mvLogicGateANDSource1" );
        locator.bindComponent( mvANDSource1Inverter, "mvANDSource1Inverter" );
        locator.bindComponent( mvLogicGateANDSource2, "mvLogicGateANDSource2" );
        locator.bindComponent( mvANDSource2Inverter, "mvANDSource2Inverter" );
        locator.bindComponent( mvLogicGateORSelector, "mvLogicGateORSelector" );
        locator.bindComponent( mvLogicGateORSource1, "mvLogicGateORSource1" );
        locator.bindComponent( mvLogicGateORSource2, "mvLogicGateORSource2" );
        locator.bindComponent( mvLogicGateORSource3, "mvLogicGateORSource3" );
        locator.bindComponent( mvLogicGateORSource4, "mvLogicGateORSource4" );
        locator.bindComponent( mvLogicGateSourceSelector, "mvLogicGateSourceSelector" );
        locator.bindComponent( mvLogicGateSource, "mvLogicGateSource" );
        locator.bindComponent( mvLogicGateSourceInverter, "mvLogicGateSourceInverter" );
        locator.bindComponent( mvLogicGateANDTermSelector, "mvLogicGateANDTermSelector" );
        locator.bindComponent( mvLogicGateANDTermSrc0, "mvLogicGateANDTermSrc0" );
        locator.bindComponent( mvLogicGateANDTermSrc1, "mvLogicGateANDTermSrc1" );
        locator.bindComponent( mvLogicGateORTermSelector, "mvLogicGateORTermSelector" );
        locator.bindComponent( mvLogicGateORTermSrc0, "mvLogicGateORTermSrc0" );
        locator.bindComponent( mvLogicGateORTermSrc1, "mvLogicGateORTermSrc1" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Selects the AND gate to configure.
    /**
     *  This enumeration selects the AND gate to configure.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvLogicGateAND1 (Display string: 'mv Logic Gate AND Selector')
     *  - \b mvLogicGateAND2 (Display string: 'mv Logic Gate AND Selector')
     *  - \b mvLogicGateAND3 (Display string: 'mv Logic Gate AND Selector')
     *  - \b mvLogicGateAND4 (Display string: 'mv Logic Gate AND Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvLogicGateANDSelector;
    /// \brief An enumerated integer property. Selects the first input signal of the AND gate selected by mvLogicGateANDSelector.
    /**
     *  This enumeration can be used to select the first input signal of the AND gate selected by mvLogicGateANDSelector.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Line4 (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Line5 (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Line6 (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Line7 (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Line12 (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Line13 (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Line14 (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Line15 (Display string: 'mv Logic Gate AND Source 1')
     *  - \b ExposureActive (Display string: 'mv Logic Gate AND Source 1')
     *  - \b mvExposureSensor2Active (Display string: 'mv Logic Gate AND Source 1')
     *  - \b UserOutput0 (Display string: 'mv Logic Gate AND Source 1')
     *  - \b UserOutput1 (Display string: 'mv Logic Gate AND Source 1')
     *  - \b UserOutput2 (Display string: 'mv Logic Gate AND Source 1')
     *  - \b UserOutput3 (Display string: 'mv Logic Gate AND Source 1')
     *  - \b UserOutput4 (Display string: 'mv Logic Gate AND Source 1')
     *  - \b UserOutput5 (Display string: 'mv Logic Gate AND Source 1')
     *  - \b UserOutput6 (Display string: 'mv Logic Gate AND Source 1')
     *  - \b UserOutput7 (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Timer1Active (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Timer2Active (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Timer3Active (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Counter1Active (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Counter2Active (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Counter3Active (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Counter4Active (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Counter5Active (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Counter6Active (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Counter7Active (Display string: 'mv Logic Gate AND Source 1')
     *  - \b Counter8Active (Display string: 'mv Logic Gate AND Source 1')
     *  - \b AcquisitionActive (Display string: 'mv Logic Gate AND Source 1')
     *  - \b FrameActive (Display string: 'mv Logic Gate AND Source 1')
     *  - \b LineActive (Display string: 'mv Logic Gate AND Source 1')
     *  - \b FrameTriggerWait (Display string: 'mv Logic Gate AND Source 1')
     *  - \b mvTemperatureOutOfRange (Display string: 'mv Logic Gate AND Source 1')
     *  - \b mvExposureActive (Display string: 'mv Logic Gate AND Source 1')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvLogicGateANDSource1;
    /// \brief A boolean property. Inverts the first input signal of the AND gate selected by mvLogicGateANDSelector
    /**
     *  Inverts the first input signal of the AND gate selected by mvLogicGateANDSelector
     */
    PropertyIBoolean mvANDSource1Inverter;
    /// \brief An enumerated integer property. Selects the second input signal of the AND gate selected by mvLogicGateANDSelector.
    /**
     *  This enumeration can be used to select the second input signal of the AND gate selected by mvLogicGateANDSelector.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Line4 (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Line5 (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Line6 (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Line7 (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Line12 (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Line13 (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Line14 (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Line15 (Display string: 'mv Logic Gate AND Source 2')
     *  - \b ExposureActive (Display string: 'mv Logic Gate AND Source 2')
     *  - \b mvExposureSensor2Active (Display string: 'mv Logic Gate AND Source 2')
     *  - \b UserOutput0 (Display string: 'mv Logic Gate AND Source 2')
     *  - \b UserOutput1 (Display string: 'mv Logic Gate AND Source 2')
     *  - \b UserOutput2 (Display string: 'mv Logic Gate AND Source 2')
     *  - \b UserOutput3 (Display string: 'mv Logic Gate AND Source 2')
     *  - \b UserOutput4 (Display string: 'mv Logic Gate AND Source 2')
     *  - \b UserOutput5 (Display string: 'mv Logic Gate AND Source 2')
     *  - \b UserOutput6 (Display string: 'mv Logic Gate AND Source 2')
     *  - \b UserOutput7 (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Timer1Active (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Timer2Active (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Timer3Active (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Counter1Active (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Counter2Active (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Counter3Active (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Counter4Active (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Counter5Active (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Counter6Active (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Counter7Active (Display string: 'mv Logic Gate AND Source 2')
     *  - \b Counter8Active (Display string: 'mv Logic Gate AND Source 2')
     *  - \b AcquisitionActive (Display string: 'mv Logic Gate AND Source 2')
     *  - \b FrameActive (Display string: 'mv Logic Gate AND Source 2')
     *  - \b LineActive (Display string: 'mv Logic Gate AND Source 2')
     *  - \b FrameTriggerWait (Display string: 'mv Logic Gate AND Source 2')
     *  - \b mvTemperatureOutOfRange (Display string: 'mv Logic Gate AND Source 2')
     *  - \b mvExposureActive (Display string: 'mv Logic Gate AND Source 2')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvLogicGateANDSource2;
    /// \brief A boolean property. Inverts the second input signal of the AND gate selected by mvLogicGateANDSelector
    /**
     *  Inverts the second input signal of the AND gate selected by mvLogicGateANDSelector
     */
    PropertyIBoolean mvANDSource2Inverter;
    /// \brief An enumerated integer property. Selects the OR gate to configure.
    /**
     *  This enumeration selects the OR gate to configure.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvLogicGateOR1 (Display string: 'mv Logic Gate OR Selector')
     *  - \b mvLogicGateOR2 (Display string: 'mv Logic Gate OR Selector')
     *  - \b mvLogicGateOR3 (Display string: 'mv Logic Gate OR Selector')
     *  - \b mvLogicGateOR4 (Display string: 'mv Logic Gate OR Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvLogicGateORSelector;
    /// \brief An enumerated integer property. Selects the first input signal of the OR gate selected by mvLogicGateORSelector.
    /**
     *  This enumeration can be used to select the first input signal of the OR gate selected by mvLogicGateORSelector.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvLogicGateAND1Output (Display string: 'mv Logic Gate OR Source 1')
     *  - \b mvLogicGateAND2Output (Display string: 'mv Logic Gate OR Source 1')
     *  - \b mvLogicGateAND3Output (Display string: 'mv Logic Gate OR Source 1')
     *  - \b mvLogicGateAND4Output (Display string: 'mv Logic Gate OR Source 1')
     *  - \b Off (Display string: 'mv Logic Gate OR Source 1')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvLogicGateORSource1;
    /// \brief An enumerated integer property. Selects the second input signal of the OR gate selected by mvLogicGateORSelector.
    /**
     *  This enumeration can be used to select the second input signal of the OR gate selected by mvLogicGateORSelector.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvLogicGateAND1Output (Display string: 'mv Logic Gate OR Source 2')
     *  - \b mvLogicGateAND2Output (Display string: 'mv Logic Gate OR Source 2')
     *  - \b mvLogicGateAND3Output (Display string: 'mv Logic Gate OR Source 2')
     *  - \b mvLogicGateAND4Output (Display string: 'mv Logic Gate OR Source 2')
     *  - \b Off (Display string: 'mv Logic Gate OR Source 2')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvLogicGateORSource2;
    /// \brief An enumerated integer property. Selects the third input signal of the OR gate selected by mvLogicGateORSelector.
    /**
     *  This enumeration can be used to select the third input signal of the OR gate selected by mvLogicGateORSelector.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvLogicGateAND1Output (Display string: 'mv Logic Gate OR Source 3')
     *  - \b mvLogicGateAND2Output (Display string: 'mv Logic Gate OR Source 3')
     *  - \b mvLogicGateAND3Output (Display string: 'mv Logic Gate OR Source 3')
     *  - \b mvLogicGateAND4Output (Display string: 'mv Logic Gate OR Source 3')
     *  - \b Off (Display string: 'mv Logic Gate OR Source 3')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvLogicGateORSource3;
    /// \brief An enumerated integer property. Selects the fourth input signal of the OR gate selected by mvLogicGateORSelector.
    /**
     *  This enumeration can be used to select the fourth input signal of the OR gate selected by mvLogicGateORSelector.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvLogicGateAND1Output (Display string: 'mv Logic Gate OR Source 4')
     *  - \b mvLogicGateAND2Output (Display string: 'mv Logic Gate OR Source 4')
     *  - \b mvLogicGateAND3Output (Display string: 'mv Logic Gate OR Source 4')
     *  - \b mvLogicGateAND4Output (Display string: 'mv Logic Gate OR Source 4')
     *  - \b Off (Display string: 'mv Logic Gate OR Source 4')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvLogicGateORSource4;
    /// \brief An enumerated integer property. Selects the LogicGateSource of the ANDORMatrix.
    /**
     *  Selects the LogicGateSource of the ANDORMatrix.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvLogicGateSource0 (Display string: 'mv Logic Gate Source Selector')
     *  - \b mvLogicGateSource1 (Display string: 'mv Logic Gate Source Selector')
     *  - \b mvLogicGateSource2 (Display string: 'mv Logic Gate Source Selector')
     *  - \b mvLogicGateSource3 (Display string: 'mv Logic Gate Source Selector')
     *  - \b mvLogicGateSource4 (Display string: 'mv Logic Gate Source Selector')
     *  - \b mvLogicGateSource5 (Display string: 'mv Logic Gate Source Selector')
     *  - \b mvLogicGateSource6 (Display string: 'mv Logic Gate Source Selector')
     *  - \b mvLogicGateSource7 (Display string: 'mv Logic Gate Source Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvLogicGateSourceSelector;
    /// \brief An enumerated integer property. Selects the input signal of the ANDORMatrix selected by mvLogicGateSourceSelector.
    /**
     *  Selects the input signal of the ANDORMatrix selected by mvLogicGateSourceSelector.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'mv Logic Gate Source')
     *  - \b Line4 (Display string: 'mv Logic Gate Source')
     *  - \b Line5 (Display string: 'mv Logic Gate Source')
     *  - \b Line6 (Display string: 'mv Logic Gate Source')
     *  - \b Line7 (Display string: 'mv Logic Gate Source')
     *  - \b ExposureActive (Display string: 'mv Logic Gate Source')
     *  - \b mvExposureSensor2Active (Display string: 'mv Logic Gate Source')
     *  - \b UserOutput0 (Display string: 'mv Logic Gate Source')
     *  - \b UserOutput1 (Display string: 'mv Logic Gate Source')
     *  - \b UserOutput2 (Display string: 'mv Logic Gate Source')
     *  - \b UserOutput3 (Display string: 'mv Logic Gate Source')
     *  - \b UserOutput4 (Display string: 'mv Logic Gate Source')
     *  - \b UserOutput5 (Display string: 'mv Logic Gate Source')
     *  - \b UserOutput6 (Display string: 'mv Logic Gate Source')
     *  - \b UserOutput7 (Display string: 'mv Logic Gate Source')
     *  - \b Timer1Active (Display string: 'mv Logic Gate Source')
     *  - \b Timer2Active (Display string: 'mv Logic Gate Source')
     *  - \b Timer3Active (Display string: 'mv Logic Gate Source')
     *  - \b Counter1Active (Display string: 'mv Logic Gate Source')
     *  - \b Counter2Active (Display string: 'mv Logic Gate Source')
     *  - \b Counter3Active (Display string: 'mv Logic Gate Source')
     *  - \b Counter4Active (Display string: 'mv Logic Gate Source')
     *  - \b Counter5Active (Display string: 'mv Logic Gate Source')
     *  - \b Counter6Active (Display string: 'mv Logic Gate Source')
     *  - \b Counter7Active (Display string: 'mv Logic Gate Source')
     *  - \b Counter8Active (Display string: 'mv Logic Gate Source')
     *  - \b AcquisitionActive (Display string: 'mv Logic Gate Source')
     *  - \b FrameActive (Display string: 'mv Logic Gate Source')
     *  - \b LineActive (Display string: 'mv Logic Gate Source')
     *  - \b FrameTriggerWait (Display string: 'mv Logic Gate Source')
     *  - \b mvTemperatureOutOfRange (Display string: 'mv Logic Gate Source')
     *  - \b mvExposureActive (Display string: 'mv Logic Gate Source')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvLogicGateSource;
    /// \brief A boolean property. Inverts the input signal.
    /**
     *  Inverts the input signal.
     */
    PropertyIBoolean mvLogicGateSourceInverter;
    /// \brief An enumerated integer property. Selects the AND-term of the AND-OR-matrix.
    /**
     *  Selects the AND-term of the AND-OR-matrix.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvLogicGateANDTerm0 (Display string: 'mv Logic Gate AND Term Selector')
     *  - \b mvLogicGateANDTerm1 (Display string: 'mv Logic Gate AND Term Selector')
     *  - \b mvLogicGateANDTerm2 (Display string: 'mv Logic Gate AND Term Selector')
     *  - \b mvLogicGateANDTerm3 (Display string: 'mv Logic Gate AND Term Selector')
     *  - \b mvLogicGateANDTerm4 (Display string: 'mv Logic Gate AND Term Selector')
     *  - \b mvLogicGateANDTerm5 (Display string: 'mv Logic Gate AND Term Selector')
     *  - \b mvLogicGateANDTerm6 (Display string: 'mv Logic Gate AND Term Selector')
     *  - \b mvLogicGateANDTerm7 (Display string: 'mv Logic Gate AND Term Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvLogicGateANDTermSelector;
    /// \brief An enumerated integer property. Selects the first input signal of the AND-term selected by mvLogicGateANDTermSelector.
    /**
     *  Selects the first input signal of the AND-term selected by mvLogicGateANDTermSelector.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'mv Logic Gate AND Term Src 0')
     *  - \b mvLogicGateSource0 (Display string: 'mv Logic Gate AND Term Src 0')
     *  - \b mvLogicGateSource1 (Display string: 'mv Logic Gate AND Term Src 0')
     *  - \b mvLogicGateSource2 (Display string: 'mv Logic Gate AND Term Src 0')
     *  - \b mvLogicGateSource3 (Display string: 'mv Logic Gate AND Term Src 0')
     *  - \b mvLogicGateSource4 (Display string: 'mv Logic Gate AND Term Src 0')
     *  - \b mvLogicGateSource5 (Display string: 'mv Logic Gate AND Term Src 0')
     *  - \b mvLogicGateSource6 (Display string: 'mv Logic Gate AND Term Src 0')
     *  - \b mvLogicGateSource7 (Display string: 'mv Logic Gate AND Term Src 0')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvLogicGateANDTermSrc0;
    /// \brief An enumerated integer property. Selects the second input signal of the AND-term selected by mvLogicGateANDTermSelector.
    /**
     *  Selects the second input signal of the AND-term selected by mvLogicGateANDTermSelector.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'mv Logic Gate AND Term Src 1')
     *  - \b mvLogicGateSource0 (Display string: 'mv Logic Gate AND Term Src 1')
     *  - \b mvLogicGateSource1 (Display string: 'mv Logic Gate AND Term Src 1')
     *  - \b mvLogicGateSource2 (Display string: 'mv Logic Gate AND Term Src 1')
     *  - \b mvLogicGateSource3 (Display string: 'mv Logic Gate AND Term Src 1')
     *  - \b mvLogicGateSource4 (Display string: 'mv Logic Gate AND Term Src 1')
     *  - \b mvLogicGateSource5 (Display string: 'mv Logic Gate AND Term Src 1')
     *  - \b mvLogicGateSource6 (Display string: 'mv Logic Gate AND Term Src 1')
     *  - \b mvLogicGateSource7 (Display string: 'mv Logic Gate AND Term Src 1')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvLogicGateANDTermSrc1;
    /// \brief An enumerated integer property. Selects the OR-term of the AND-OR-matrix.
    /**
     *  Selects the OR-term of the AND-OR-matrix.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvLogicGateORTerm0 (Display string: 'mv Logic Gate OR Term Selector')
     *  - \b mvLogicGateORTerm1 (Display string: 'mv Logic Gate OR Term Selector')
     *  - \b mvLogicGateORTerm2 (Display string: 'mv Logic Gate OR Term Selector')
     *  - \b mvLogicGateORTerm3 (Display string: 'mv Logic Gate OR Term Selector')
     *  - \b mvLogicGateORTerm4 (Display string: 'mv Logic Gate OR Term Selector')
     *  - \b mvLogicGateORTerm5 (Display string: 'mv Logic Gate OR Term Selector')
     *  - \b mvLogicGateORTerm6 (Display string: 'mv Logic Gate OR Term Selector')
     *  - \b mvLogicGateORTerm7 (Display string: 'mv Logic Gate OR Term Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvLogicGateORTermSelector;
    /// \brief An enumerated integer property. Selects the first input signal of the ORTerm selected by mvLogicGateORTermSelector.
    /**
     *  Selects the first input signal of the ORTerm selected by mvLogicGateORTermSelector.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'mv Logic Gate OR Term Src 0')
     *  - \b mvLogicGateANDTerm0 (Display string: 'mv Logic Gate OR Term Src 0')
     *  - \b mvLogicGateANDTerm1 (Display string: 'mv Logic Gate OR Term Src 0')
     *  - \b mvLogicGateANDTerm2 (Display string: 'mv Logic Gate OR Term Src 0')
     *  - \b mvLogicGateANDTerm3 (Display string: 'mv Logic Gate OR Term Src 0')
     *  - \b mvLogicGateANDTerm4 (Display string: 'mv Logic Gate OR Term Src 0')
     *  - \b mvLogicGateANDTerm5 (Display string: 'mv Logic Gate OR Term Src 0')
     *  - \b mvLogicGateANDTerm6 (Display string: 'mv Logic Gate OR Term Src 0')
     *  - \b mvLogicGateANDTerm7 (Display string: 'mv Logic Gate OR Term Src 0')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvLogicGateORTermSrc0;
    /// \brief An enumerated integer property. Selects the second input signal of the ORTerm selected by mvLogicGateORTermSelector.
    /**
     *  Selects the second input signal of the ORTerm selected by mvLogicGateORTermSelector.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'mv Logic Gate OR Term Src 1')
     *  - \b mvLogicGateANDTerm0 (Display string: 'mv Logic Gate OR Term Src 1')
     *  - \b mvLogicGateANDTerm1 (Display string: 'mv Logic Gate OR Term Src 1')
     *  - \b mvLogicGateANDTerm2 (Display string: 'mv Logic Gate OR Term Src 1')
     *  - \b mvLogicGateANDTerm3 (Display string: 'mv Logic Gate OR Term Src 1')
     *  - \b mvLogicGateANDTerm4 (Display string: 'mv Logic Gate OR Term Src 1')
     *  - \b mvLogicGateANDTerm5 (Display string: 'mv Logic Gate OR Term Src 1')
     *  - \b mvLogicGateANDTerm6 (Display string: 'mv Logic Gate OR Term Src 1')
     *  - \b mvLogicGateANDTerm7 (Display string: 'mv Logic Gate OR Term Src 1')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvLogicGateORTermSrc1;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains features to control the devices Current Control parameters.
/**
 *  A category that contains features to control the devices Current Control parameters.
 */
class mvCurrentControl : public mvIMPACT::acquire::ComponentCollection
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::mvCurrentControl</b> object.
    explicit mvCurrentControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        mvIMPACT::acquire::ComponentCollection( pDev ),
        mvCurrentSelector(),
        mvCurrent()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam/mvCurrentControl" );
        m_hRoot = locator.searchbase_id();
        locator.bindComponent( mvCurrentSelector, "mvCurrentSelector" );
        locator.bindComponent( mvCurrent, "mvCurrent" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Selects the current source to configure.
    /**
     *  Selects the current source to configure.
     *
     *  The following string values might be valid for this feature:
     *  - \b Current0 (Display string: 'mv Current Selector')
     *  - \b Current1 (Display string: 'mv Current Selector')
     *  - \b Current2 (Display string: 'mv Current Selector')
     *  - \b Current3 (Display string: 'mv Current Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvCurrentSelector;
    /// \brief An integer property. Sets the current value for the selected device(e.g.: LED).
    /**
     *  Sets the current value for the selected device(e.g.: LED).
     */
    PropertyI64 mvCurrent;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Contains features to control motorized lenses
/**
 *  Contains features to control motorized lenses.
 */
class mvLensControl : public mvIMPACT::acquire::ComponentCollection
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::mvLensControl</b> object.
    explicit mvLensControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        mvIMPACT::acquire::ComponentCollection( pDev ),
        mvIrisType(),
        mvIrisMode(),
        mvIrisSignalLevelMin(),
        mvIrisSignalLevelMax(),
        mvDriveSelector(),
        mvDriveForward(),
        mvDriveBackward(),
        mvDriveDuration(),
        mvDriveLevel()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam/mvLensControl" );
        m_hRoot = locator.searchbase_id();
        locator.bindComponent( mvIrisType, "mvIrisType" );
        locator.bindComponent( mvIrisMode, "mvIrisMode" );
        locator.bindComponent( mvIrisSignalLevelMin, "mvIrisSignalLevelMin" );
        locator.bindComponent( mvIrisSignalLevelMax, "mvIrisSignalLevelMax" );
        locator.bindComponent( mvDriveSelector, "mvDriveSelector" );
        locator.bindComponent( mvDriveForward, "mvDriveForward@i" );
        locator.bindComponent( mvDriveBackward, "mvDriveBackward@i" );
        locator.bindComponent( mvDriveDuration, "mvDriveDuration" );
        locator.bindComponent( mvDriveLevel, "mvDriveLevel" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Sets the iris type.
    /**
     *  Sets the iris type.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvVideoIris (Display string: 'mv Iris Type')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvIrisType;
    /// \brief An enumerated integer property. Sets the iris operating mode.
    /**
     *  Sets the iris operating mode.
     *
     *  The following string values might be valid for this feature:
     *  - \b Off (Display string: 'mv Iris Mode'): No iris adjustment will be done.
     *  - \b mvIrisAuto (Display string: 'mv Iris Mode'): The iris adjustment will be done automatically by evaluating the current image data.
     *  - \b mvIrisOpen (Display string: 'mv Iris Mode'): The iris is fully open.
     *  - \b mvIrisClose (Display string: 'mv Iris Mode'): The iris is fully closed.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvIrisMode;
    /// \brief An integer property. Sets the minimum iris signal level in mV.
    /**
     *  Sets the minimum iris signal level in mV.
     */
    PropertyI64 mvIrisSignalLevelMin;
    /// \brief An integer property. Sets the maximum iris signal level in mV.
    /**
     *  Sets the maximum iris signal level in mV.
     */
    PropertyI64 mvIrisSignalLevelMax;
    /// \brief An enumerated integer property. Selects the lens drive that should be adjusted.
    /**
     *  Selects the lens drive that should be adjusted.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvFocus (Display string: 'mv Drive Selector'): Selects the motor to control the focus.
     *  - \b mvZoom (Display string: 'mv Drive Selector'): Selects the motor to control the zoom.
     *  - \b mvIris (Display string: 'mv Drive Selector'): Selects the motor to control the iris.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvDriveSelector;
    /// \brief A method object. Generates a pulse defined by 'mvDriveDuration' and 'mvDriveLevel' to move the selected motor in forward direction.
    /**
     *  Generates a pulse defined by 'mvDriveDuration' and 'mvDriveLevel' to move the selected motor in forward direction.
     */
    Method mvDriveForward;
    /// \brief A method object. Generates a pulse defined by 'mvDriveDuration' and 'mvDriveLevel' to move the selected motor in backward direction.
    /**
     *  Generates a pulse defined by 'mvDriveDuration' and 'mvDriveLevel' to move the selected motor in backward direction.
     */
    Method mvDriveBackward;
    /// \brief An integer property. Sets the duration of the drive command in us.
    /**
     *  Sets the duration of the drive command in us.
     */
    PropertyI64 mvDriveDuration;
    /// \brief An integer property. Sets the voltage level of the drive command in mV.
    /**
     *  Sets the voltage level of the drive command in mV.
     */
    PropertyI64 mvDriveLevel;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains features to control the devices Flat Field Correction parameters.
/**
 *  A category that contains features to control the devices Flat Field Correction parameters.
 */
class mvFFCControl : public mvIMPACT::acquire::ComponentCollection
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::mvFFCControl</b> object.
    explicit mvFFCControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        mvIMPACT::acquire::ComponentCollection( pDev ),
        mvFFCEnable(),
        mvFFCCalibrationImageCount(),
        mvFFCCalibrate()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam/mvFFCControl" );
        m_hRoot = locator.searchbase_id();
        locator.bindComponent( mvFFCEnable, "mvFFCEnable" );
        locator.bindComponent( mvFFCCalibrationImageCount, "mvFFCCalibrationImageCount" );
        locator.bindComponent( mvFFCCalibrate, "mvFFCCalibrate@i" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief A boolean property. Enables the Flat Field Correction.
    /**
     *  Enables the Flat Field Correction.
     */
    PropertyIBoolean mvFFCEnable;
    /// \brief An integer property. The number of images to use for the calculation of the correction image.
    /**
     *  The number of images to use for the calculation of the correction image.
     */
    PropertyI64 mvFFCCalibrationImageCount;
    /// \brief A method object. Starts the Calibration of the Flat Field Correction.
    /**
     *  Starts the Calibration of the Flat Field Correction.
     */
    Method mvFFCCalibrate;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains features to control the frame averaging engine.
/**
 *  A category that contains features to control the frame averaging engine.
 */
class mvFrameAverageControl : public mvIMPACT::acquire::ComponentCollection
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::mvFrameAverageControl</b> object.
    explicit mvFrameAverageControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        mvIMPACT::acquire::ComponentCollection( pDev ),
        mvFrameAverageMode(),
        mvFrameAverageEnable(),
        mvFrameAverageSlope(),
        mvFrameAverageDynamicMode(),
        mvFrameAverageNoiseLimit(),
        mvFrameAverageNoiseGain(),
        mvFrameAverageFrameCount()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam/mvFrameAverageControl" );
        m_hRoot = locator.searchbase_id();
        locator.bindComponent( mvFrameAverageMode, "mvFrameAverageMode" );
        locator.bindComponent( mvFrameAverageEnable, "mvFrameAverageEnable" );
        locator.bindComponent( mvFrameAverageSlope, "mvFrameAverageSlope" );
        locator.bindComponent( mvFrameAverageDynamicMode, "mvFrameAverageDynamicMode" );
        locator.bindComponent( mvFrameAverageNoiseLimit, "mvFrameAverageNoiseLimit" );
        locator.bindComponent( mvFrameAverageNoiseGain, "mvFrameAverageNoiseGain" );
        locator.bindComponent( mvFrameAverageFrameCount, "mvFrameAverageFrameCount" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Sets the frame average operating mode.
    /**
     *  Sets the frame average operating mode.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvPlain (Display string: 'mv Frame Average Mode')
     *  - \b mvDynamic (Display string: 'mv Frame Average Mode')
     *  - \b mvNTo1 (Display string: 'mv Frame Average Mode')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvFrameAverageMode;
    /// \brief A boolean property. Enables the frame averaging engine.
    /**
     *  Enables the frame averaging engine.
     */
    PropertyIBoolean mvFrameAverageEnable;
    /// \brief An integer property. Here you specify the noise border for very dark pictures.
    /**
     *  Here you specify the noise border for very dark pictures.
     */
    PropertyI64 mvFrameAverageSlope;
    /// \brief An enumerated integer property. Sets the frame average dynamic operating mode.
    /**
     *  Sets the frame average dynamic operating mode.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvStandard (Display string: 'mv Frame Average Dynamic Mode')
     *  - \b mvGauss (Display string: 'mv Frame Average Dynamic Mode')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvFrameAverageDynamicMode;
    /// \brief An integer property. Here you specify the noise limit for very bright pictures.
    /**
     *  Here you specify the noise limit for very bright pictures.
     */
    PropertyI64 mvFrameAverageNoiseLimit;
    /// \brief An integer property. Here you specify the noise border for very bright pictures.
    /**
     *  Here you specify the noise border for very bright pictures.
     */
    PropertyI64 mvFrameAverageNoiseGain;
    /// \brief An integer property. Here you specify the frame count used for the calculation of the frame average.
    /**
     *  Here you specify the frame count used for the calculation of the frame average.
     */
    PropertyI64 mvFrameAverageFrameCount;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains features to control the devices High Dynamic Range parameters.
/**
 *  A category that contains features to control the devices High Dynamic Range parameters.
 */
class mvHDRControl : public mvIMPACT::acquire::ComponentCollection
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::mvHDRControl</b> object.
    explicit mvHDRControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        mvIMPACT::acquire::ComponentCollection( pDev ),
        mvHDREnable(),
        mvHDRPreset(),
        mvHDRSelector(),
        mvHDRVoltage1(),
        mvHDRVoltage2(),
        mvHDRExposure1(),
        mvHDRExposure2()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam/mvHDRControl" );
        m_hRoot = locator.searchbase_id();
        locator.bindComponent( mvHDREnable, "mvHDREnable" );
        locator.bindComponent( mvHDRPreset, "mvHDRPreset" );
        locator.bindComponent( mvHDRSelector, "mvHDRSelector" );
        locator.bindComponent( mvHDRVoltage1, "mvHDRVoltage1" );
        locator.bindComponent( mvHDRVoltage2, "mvHDRVoltage2" );
        locator.bindComponent( mvHDRExposure1, "mvHDRExposure1" );
        locator.bindComponent( mvHDRExposure2, "mvHDRExposure2" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief A boolean property. Enables the High Dynamic Range Feature.
    /**
     *  Enables the High Dynamic Range Feature.
     */
    PropertyIBoolean mvHDREnable;
    /// \brief An enumerated integer property. Selects the HDR parameter set.
    /**
     *  Selects the HDR parameter set.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvDualKneePoint0 (Display string: 'mv HDR Preset')
     *  - \b mvDualKneePoint1 (Display string: 'mv HDR Preset')
     *  - \b mvDualKneePoint2 (Display string: 'mv HDR Preset')
     *  - \b mvDualKneePoint3 (Display string: 'mv HDR Preset')
     *  - \b mvDualKneePoint4 (Display string: 'mv HDR Preset')
     *  - \b mvDualKneePoint5 (Display string: 'mv HDR Preset')
     *  - \b mvDualKneePoint6 (Display string: 'mv HDR Preset')
     *  - \b mvDualKneePointUser (Display string: 'mv HDR Preset')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvHDRPreset;
    /// \brief An enumerated integer property. Selects the HDR parameter set to configure.
    /**
     *  This enumeration selects the HDR parameter set to configure.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvDualKneePoint0 (Display string: 'mv HDR Selector')
     *  - \b mvDualKneePoint1 (Display string: 'mv HDR Selector')
     *  - \b mvDualKneePoint2 (Display string: 'mv HDR Selector')
     *  - \b mvDualKneePoint3 (Display string: 'mv HDR Selector')
     *  - \b mvDualKneePoint4 (Display string: 'mv HDR Selector')
     *  - \b mvDualKneePoint5 (Display string: 'mv HDR Selector')
     *  - \b mvDualKneePoint6 (Display string: 'mv HDR Selector')
     *  - \b mvDualKneePointUser (Display string: 'mv HDR Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvHDRSelector;
    /// \brief An integer property. First HDR Voltage in mV.
    /**
     *  First HDR Voltage in mV.
     */
    PropertyI64 mvHDRVoltage1;
    /// \brief An integer property. Second HDR Voltage in mV.
    /**
     *  Second HDR Voltage in mV.
     */
    PropertyI64 mvHDRVoltage2;
    /// \brief An integer property. First HDR Exposure in ppm.
    /**
     *  First HDR Exposure in ppm.
     */
    PropertyI64 mvHDRExposure1;
    /// \brief An integer property. Second HDR Exposure in ppm.
    /**
     *  Second HDR Exposure in ppm.
     */
    PropertyI64 mvHDRExposure2;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains features to access the device internal SPI bus.
/**
 *  A category that contains features to access the device internal SPI bus.
 */
class mvSPIControl : public mvIMPACT::acquire::ComponentCollection
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::mvSPIControl</b> object.
    explicit mvSPIControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        mvIMPACT::acquire::ComponentCollection( pDev ),
        mvSPIDeviceSelector(),
        mvSPIOperationSelector(),
        mvSPIOperationExecute(),
        mvSPIAccessBuffer(),
        mvSPIAccessLength()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam/mvSPIControl" );
        m_hRoot = locator.searchbase_id();
        locator.bindComponent( mvSPIDeviceSelector, "mvSPIDeviceSelector" );
        locator.bindComponent( mvSPIOperationSelector, "mvSPIOperationSelector" );
        locator.bindComponent( mvSPIOperationExecute, "mvSPIOperationExecute@i" );
        locator.bindComponent( mvSPIAccessBuffer, "mvSPIAccessBuffer" );
        locator.bindComponent( mvSPIAccessLength, "mvSPIAccessLength" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An enumerated integer property. Selects the SPI device.
    /**
     *  Selects the SPI device.
     *
     *  The following string values might be valid for this feature:
     *  - \b mvDevice0 (Display string: 'mv SPI Device Selector')
     *  - \b mvDevice1 (Display string: 'mv SPI Device Selector')
     *  - \b mvDevice2 (Display string: 'mv SPI Device Selector')
     *  - \b mvDevice3 (Display string: 'mv SPI Device Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvSPIDeviceSelector;
    /// \brief An enumerated integer property. Selects the operation. Write: mvSPIAccessLength bytes are written to SPI device. Synchronously read bytes are stored to internal buffer. Read: Reads mvSPIAccessLength from internal buffer. If mvSPIAccessLength > internal buffer size: Additional 'write zeros' will be done.
    /**
     *  Selects the operation. Write: mvSPIAccessLength bytes are written to SPI device. Synchronously read bytes are stored to internal buffer. Read: Reads mvSPIAccessLength from internal buffer. If mvSPIAccessLength > internal buffer size: Additional 'write zeros' will be done.
     *
     *  The following string values might be valid for this feature:
     *  - \b Read (Display string: 'mv SPI Operation Selector')
     *  - \b Write (Display string: 'mv SPI Operation Selector')
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 mvSPIOperationSelector;
    /// \brief A method object. Executes the operation selected by mvSPIOperationSelector.
    /**
     *  Executes the operation selected by mvSPIOperationSelector.
     */
    Method mvSPIOperationExecute;
    /// \brief A string property. Defines the intermediate access buffer that allows the exchange of data.
    /**
     *  Defines the intermediate access buffer that allows the exchange of data.
     */
    PropertyS mvSPIAccessBuffer;
    /// \brief An integer property. Controls the length of the data.
    /**
     *  Controls the length of the data.
     */
    PropertyI64 mvSPIAccessLength;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains features to access DAC devices.
/**
 *  A Category that contains features to access DAC devices.
 */
class mvDACParams : public mvIMPACT::acquire::ComponentCollection
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::mvDACParams</b> object.
    explicit mvDACParams(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        mvIMPACT::acquire::ComponentCollection( pDev ),
        mvDACOUTA(),
        mvDACOUTB(),
        mvDACOUTC(),
        mvDACOUTD(),
        DACIndex(),
        DACValue(),
        DACValueAll(),
        mvErrorDetect0(),
        mvErrorDetect1(),
        mvLampDetect()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam/mvDACParams" );
        m_hRoot = locator.searchbase_id();
        locator.bindComponent( mvDACOUTA, "mvDACOUTA" );
        locator.bindComponent( mvDACOUTB, "mvDACOUTB" );
        locator.bindComponent( mvDACOUTC, "mvDACOUTC" );
        locator.bindComponent( mvDACOUTD, "mvDACOUTD" );
        locator.bindComponent( DACIndex, "DACIndex" );
        locator.bindComponent( DACValue, "DACValue" );
        locator.bindComponent( DACValueAll, "DACValueAll" );
        locator.bindComponent( mvErrorDetect0, "mvErrorDetect0" );
        locator.bindComponent( mvErrorDetect1, "mvErrorDetect1" );
        locator.bindComponent( mvLampDetect, "mvLampDetect" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief An integer property. Changes the current of the CCDs output signal (Tap1).
    /**
     *  Changes the current of the CCDs output signal (Tap1).
     */
    PropertyI64 mvDACOUTA;
    /// \brief An integer property. Changes the current of the CCDs output signal (Tap2).
    /**
     *  Changes the current of the CCDs output signal (Tap2).
     */
    PropertyI64 mvDACOUTB;
    /// \brief An integer property. Currently not used
    /**
     *  Currently not used
     */
    PropertyI64 mvDACOUTC;
    /// \brief An integer property. Sets the sensor's VSUB voltage.
    /**
     *  Sets the sensor's VSUB voltage.
     */
    PropertyI64 mvDACOUTD;
    /// \brief An integer property. Selects the digital to analog converter(DAC) DACValue will be written to
    /**
     *  Selects the digital to analog converter(DAC) DACValue will be written to
     */
    PropertyI64 DACIndex;
    /// \brief An integer property. Register value in hex
    /**
     *  Register value in hex
     */
    PropertyI64 DACValue;
    /// \brief A string property. Write all DAcs with a single call.
    /**
     *  Write all DAcs with a single call.
     */
    PropertyS DACValueAll;
    /// \brief An integer property. Result of the error detection mechanism for lamp0
    /**
     *  Result of the error detection mechanism for lamp0
     */
    PropertyI64 mvErrorDetect0;
    /// \brief An integer property. Result of the error detection mechanism for lamp1
    /**
     *  Result of the error detection mechanism for lamp1
     */
    PropertyI64 mvErrorDetect1;
    /// \brief A boolean property. Result of lamp detection
    /**
     *  Result of lamp detection
     */
    PropertyIBoolean mvLampDetect;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains features to access accelerometer data.
/**
 *  A category that contains features to access accelerometer data.
 */
class mvACCControl : public mvIMPACT::acquire::ComponentCollection
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::mvACCControl</b> object.
    explicit mvACCControl(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        mvIMPACT::acquire::ComponentCollection( pDev ),
        mvACCEnable(),
        mvXAxis(),
        mvYAxis(),
        mvZAxis()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam/mvACCControl" );
        m_hRoot = locator.searchbase_id();
        locator.bindComponent( mvACCEnable, "mvACCEnable" );
        locator.bindComponent( mvXAxis, "mvXAxis" );
        locator.bindComponent( mvYAxis, "mvYAxis" );
        locator.bindComponent( mvZAxis, "mvZAxis" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief A boolean property. Sets ACC in measurement mode.
    /**
     *  Sets ACC in measurement mode.
     */
    PropertyIBoolean mvACCEnable;
    /// \brief An integer property. The position in X-direction.
    /**
     *  The position in X-direction.
     */
    PropertyI64 mvXAxis;
    /// \brief An integer property. The position in Y-direction.
    /**
     *  The position in Y-direction.
     */
    PropertyI64 mvYAxis;
    /// \brief An integer property. The position in Z-direction.
    /**
     *  The position in Z-direction.
     */
    PropertyI64 mvZAxis;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains items that belong to the system module of the transport layer.
/**
 *  The System category contains items that belong to the system module of the transport layer.
 */
class SystemModule : public mvIMPACT::acquire::ComponentCollection
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::SystemModule</b> object.
    explicit SystemModule(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev ) :
        mvIMPACT::acquire::ComponentCollection( INVALID_ID ),
        TLVendorName(),
        TLModelName(),
        TLID(),
        TLVersion(),
        TLFileName(),
        TLDisplayName(),
        TLPath(),
        TLType(),
        genTLVersionMajor(),
        genTLVersionMinor(),
        genTLSFNCVersionMajor(),
        genTLSFNCVersionMinor(),
        genTLSFNCVersionSubMinor(),
        genCPVersionMajor(),
        genCPVersionMinor(),
        gevVersionMajor(),
        gevVersionMinor(),
        u3vVersionMajor(),
        u3vVersionMinor(),
        mvGevChannelDummyPacketSendEnable(),
        mvGevChannelDummyPacketSendInterval(),
        interfaceUpdateList(),
        interfaceSelector(),
        interfaceID(),
        interfaceType(),
        gevInterfaceMACAddress(),
        gevInterfaceDefaultIPAddress(),
        gevInterfaceDefaultSubnetMask(),
        gevInterfaceDefaultGateway(),
        mvGevInterfaceMTU(),
        mvGevInterfaceLinkSpeed()
    {
        mvIMPACT::acquire::ComponentLocator locator( pDev->deviceDriverFeatureList() );
        locator.bindSearchBase( locator.searchbase_id(), "GenTL/System" );
        m_hRoot = locator.searchbase_id();
        locator.bindComponent( TLVendorName, "TLVendorName" );
        locator.bindComponent( TLModelName, "TLModelName" );
        locator.bindComponent( TLID, "TLID" );
        locator.bindComponent( TLVersion, "TLVersion" );
        locator.bindComponent( TLFileName, "TLFileName" );
        locator.bindComponent( TLDisplayName, "TLDisplayName" );
        locator.bindComponent( TLPath, "TLPath" );
        locator.bindComponent( TLType, "TLType" );
        locator.bindComponent( genTLVersionMajor, "GenTLVersionMajor" );
        locator.bindComponent( genTLVersionMinor, "GenTLVersionMinor" );
        locator.bindComponent( genTLSFNCVersionMajor, "GenTLSFNCVersionMajor" );
        locator.bindComponent( genTLSFNCVersionMinor, "GenTLSFNCVersionMinor" );
        locator.bindComponent( genTLSFNCVersionSubMinor, "GenTLSFNCVersionSubMinor" );
        locator.bindComponent( genCPVersionMajor, "GenCPVersionMajor" );
        locator.bindComponent( genCPVersionMinor, "GenCPVersionMinor" );
        locator.bindComponent( gevVersionMajor, "GevVersionMajor" );
        locator.bindComponent( gevVersionMinor, "GevVersionMinor" );
        locator.bindComponent( u3vVersionMajor, "U3vVersionMajor" );
        locator.bindComponent( u3vVersionMinor, "U3vVersionMinor" );
        locator.bindComponent( mvGevChannelDummyPacketSendEnable, "mvGevChannelDummyPacketSendEnable" );
        locator.bindComponent( mvGevChannelDummyPacketSendInterval, "mvGevChannelDummyPacketSendInterval" );
        locator.bindComponent( interfaceUpdateList, "InterfaceUpdateList@i" );
        locator.bindComponent( interfaceSelector, "InterfaceSelector" );
        locator.bindComponent( interfaceID, "InterfaceID" );
        locator.bindComponent( interfaceType, "InterfaceType" );
        locator.bindComponent( gevInterfaceMACAddress, "GevInterfaceMACAddress" );
        locator.bindComponent( gevInterfaceDefaultIPAddress, "GevInterfaceDefaultIPAddress" );
        locator.bindComponent( gevInterfaceDefaultSubnetMask, "GevInterfaceDefaultSubnetMask" );
        locator.bindComponent( gevInterfaceDefaultGateway, "GevInterfaceDefaultGateway" );
        locator.bindComponent( mvGevInterfaceMTU, "mvGevInterfaceMTU" );
        locator.bindComponent( mvGevInterfaceLinkSpeed, "mvGevInterfaceLinkSpeed" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief A string property. Indicates the name of the transport layer vendor.
    /**
     *  This is a read only element. It is a string that indicates the name of the transport layer vendor.
     */
    PropertyS TLVendorName;
    /// \brief A string property. Indicates the name of the transport layer Model.
    /**
     *  This is a read only element. It is a string that indicates the name of the transport layer Model to distinguish different kinds of GenTL Producer implementations from one vendor.
     */
    PropertyS TLModelName;
    /// \brief A string property. Indicates the ID of the transport layer.
    /**
     *  This is a read only element. It is a string that indicates the ID of the transport layer.
     */
    PropertyS TLID;
    /// \brief A string property. Indicates a vendor specific version string for this transport layer.
    /**
     *  This is a read only element. It is a string that indicates a vendor specific version string for this transport layer.
     */
    PropertyS TLVersion;
    /// \brief A string property. Indicates the file name of the GenTL Producer driver including name and extension.
    /**
     *  This is a read only element. It is a string that indicates the file name of the GenTL Producer driver including name and extension.
     */
    PropertyS TLFileName;
    /// \brief A string property. User readable name of the GenTL Producer.
    /**
     *  This is a read only element. It is a string that indicates a user readable name of the GenTL Producer.
     */
    PropertyS TLDisplayName;
    /// \brief A string property. Indicates the full path to the GenTL Producer driver including name and extension.
    /**
     *  This is a read only element. It is a string that indicates the full path to the GenTL Producer driver including name and extension.
     */
    PropertyS TLPath;
    /// \brief An enumerated integer property. Identifies the transport layer technology of the GenTL Producer implementation.
    /**
     *  This is a read only feature. This enumeration provides a value that indicates the transport layer technology of the GenTL Producer implementation.
     *
     *  The following string values might be valid for this feature:
     *  - \b Mixed (Display string: 'Mixed'): This enumeration value indicates that this is a transport layer for different technologies.
     *  - \b GEV (Display string: 'GigE Vision'): This enumeration value indicates that this is a transport layer for the GigE Vision protocol.
     *  - \b U3V (Display string: 'USB3 Vision'): This enumeration value indicates that this is a transport layer for the USB3 Vision protocol.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 TLType;
    /// \brief An integer property. Defines the major version number of the GenTL specification the GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It defines the major version number of the GenTL specification the GenTL Producer implementation complies with.
     */
    PropertyI64 genTLVersionMajor;
    /// \brief An integer property. Defines the minor version number of the GenTL specification the GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It defines the minor version number of the GenTL specification the GenTL Producer implementation complies with.
     */
    PropertyI64 genTLVersionMinor;
    /// \brief An integer property. Defines the major version number of the GenTL SFNC specification the GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It defines the major version number of the GenTL SFNC specification the GenTL Producer implementation complies with.
     */
    PropertyI64 genTLSFNCVersionMajor;
    /// \brief An integer property. Defines the minor version number of the GenTL SFNC specification the GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It defines the minor version number of the GenTL SFNC specification the GenTL Producer implementation complies with.
     */
    PropertyI64 genTLSFNCVersionMinor;
    /// \brief An integer property. Defines the sub minor version number of the GenTL SFNC specification the GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It defines the sub minor version number of the GenTL SFNC specification the GenTL Producer implementation complies with.
     */
    PropertyI64 genTLSFNCVersionSubMinor;
    /// \brief An integer property. Indicates the major version number of the GenCP specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the major version number of the GenCP specification this GenTL Producer implementation complies with.
     */
    PropertyI64 genCPVersionMajor;
    /// \brief An integer property. Indicates the minor version number of the GenCP specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the minor version number of the GenCP specification this GenTL Producer implementation complies with.
     */
    PropertyI64 genCPVersionMinor;
    /// \brief An integer property. Major version of the specification.
    /**
     *  Major version of the specification.
     */
    PropertyI64 gevVersionMajor;
    /// \brief An integer property. Minor version of the specification.
    /**
     *  Minor version of the specification.
     */
    PropertyI64 gevVersionMinor;
    /// \brief An integer property. Indicates the major version number of the USB3 Vision specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the major version number of the USB3 Vision specification this GenTL Producer implementation complies with.
     */
    PropertyI64 u3vVersionMajor;
    /// \brief An integer property. Indicates the minor version number of the USB3 Vision specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the minor version number of the USB3 Vision specification this GenTL Producer implementation complies with.
     */
    PropertyI64 u3vVersionMinor;
    /// \brief A boolean property. Enables or disables the periodical sending of dummy packets to a stream or message channel source port of a GigE Vision device.
    /**
     *  Enables or disables the periodical sending of dummy packets to a stream or message channel source port of a GigE Vision device. This might be useful to overcome firewall related problems when working with network devices.
     */
    PropertyIBoolean mvGevChannelDummyPacketSendEnable;
    /// \brief An integer property. Defines the period(in ms) for sending dummy packets to a stream or message channel source port of a GigE Vision device.
    /**
     *  Defines the period(in ms) for sending dummy packets to a stream or message channel source port of a GigE Vision device. This might be useful to overcome firewall related problems when working with network devices.
     */
    PropertyI64 mvGevChannelDummyPacketSendInterval;
    /// \brief A method object. Updates the internal interface list.
    /**
     *  This command updates the internal interface list of this transport layer.
     */
    Method interfaceUpdateList;
    /// \brief An integer property. Selector for the different GenTL Producer interfaces.
    /**
     *  Selector for the different GenTL Producer interfaces. Selector for the different GenTL Producer interfaces. This interface list only changes on execution of InterfaceUpdateList. The selector is 0-based in order to match the index of the C interface.
     */
    PropertyI64 interfaceSelector;
    /// \brief A string property. GenTL producer wide unique identifier of the selected interface.
    /**
     *  This is a read only element. It is a string that indicates a GenTL producer wide unique identifier of the selected interface.
     */
    PropertyS interfaceID;
    /// \brief An enumerated integer property. Identifies the interfaces technology of the GenTL Producer implementation.
    /**
     *  This is a read only feature. This enumeration provides a value that indicates interfaces technology of the GenTL Producer implementation.
     *
     *  The following string values might be valid for this feature:
     *  - \b Custom (Display string: 'Custom'): This enumeration value indicates that this is a device for a custom protocol.
     *  - \b GEV (Display string: 'GigE Vision'): This enumeration value indicates that this is an interface for the GigE Vision protocol.
     *  - \b U3V (Display string: 'USB3 Vision'): This enumeration value indicates that this is an interface for the USB3 Vision protocol.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 interfaceType;
    /// \brief An integer property. Indicates the 48-bit MAC address of the selected interface.
    /**
     *  This is a read only element. It indicates the 48-bit MAC address of the selected interface.
     */
    PropertyI64 gevInterfaceMACAddress;
    /// \brief An integer property. Indicates the IP address of the first subnet of the selected interface.
    /**
     *  This is a read only element. It indicates the IP address of the first subnet of the selected interface.
     */
    PropertyI64 gevInterfaceDefaultIPAddress;
    /// \brief An integer property. Indicates the subnet mask of the first subnet of the selected interface.
    /**
     *  This is a read only element. It indicates the subnet mask of the first subnet of the selected interface.
     */
    PropertyI64 gevInterfaceDefaultSubnetMask;
    /// \brief An integer property. Indicates the default gateway of the first subnet of the selected interface.
    /**
     *  This is a read only element. It indicates the default gateway of the first subnet of the selected interface.
     */
    PropertyI64 gevInterfaceDefaultGateway;
    /// \brief An integer property. Indicates the MTU of the selected interface.
    /**
     *  This is a read only element. It indicates the MTU(Maximum Transmission Unit) of the selected interface.
     */
    PropertyI64 mvGevInterfaceMTU;
    /// \brief An integer property. Indicates the link speed of this interface.
    /**
     *  This is a read only element. It indicates the link speed(in Mbits per second) of this interface.
     */
    PropertyI64 mvGevInterfaceLinkSpeed;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains items that belong to the interface module of the transport layer.
/**
 *  The Interface category contains items that belong to the interface module of the transport layer.
 */
class InterfaceModule : public mvIMPACT::acquire::ComponentCollection
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::InterfaceModule</b> object.
    explicit InterfaceModule(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The \a index of the instance this object shall be created for. Passing an invalid index will raise an exception.
        int64_type index ) :
        mvIMPACT::acquire::ComponentCollection( INVALID_ID ),
        interfaceID(),
        interfaceDisplayName(),
        interfaceType(),
        gevInterfaceGatewaySelector(),
        gevInterfaceGateway(),
        gevInterfaceMACAddress(),
        gevInterfaceSubnetSelector(),
        gevInterfaceSubnetIPAddress(),
        gevInterfaceSubnetMask(),
        mvGevInterfaceMTU(),
        mvGevInterfaceLinkSpeed(),
        mvGevAdvancedDeviceDiscoveryEnable(),
        deviceUpdateList(),
        deviceSelector(),
        deviceID(),
        deviceVendorName(),
        deviceModelName(),
        deviceType(),
        deviceLinkSpeed(),
        deviceAccessStatus(),
        mvDeviceCommandChannelTransmissionTimeout(),
        mvDeviceCommandChannelRetryCount(),
        gevVersionMajor(),
        gevVersionMinor(),
        genCPVersionMajor(),
        genCPVersionMinor(),
        u3vVersionMajor(),
        u3vVersionMinor(),
        mvDevicePrimaryApplicationSwitchoverSupported(),
        mvDevicePrimaryApplicationSwitchoverEnable(),
        mvDevicePrimaryApplicationSwitchoverKey(),
        mvDeviceNetworkInterfaceCount(),
        gevDeviceIPAddress(),
        gevDeviceSubnetMask(),
        gevDeviceMACAddress(),
        mvActionDeviceKey(),
        mvActionGroupKey(),
        mvActionGroupMask(),
        mvActionScheduledTimeEnable(),
        mvActionScheduledTime(),
        mvActionDestinationIPAddress(),
        mvActionSend()
    {
        mvIMPACT::acquire::ComponentLocator locator( pDev->deviceDriverFeatureList() );
        locator.bindSearchBase( locator.searchbase_id(), "GenTL/Interfaces" );
        std::ostringstream oss;
        oss << "Interface" << index;
        locator = mvIMPACT::acquire::ComponentLocator( locator.findComponent( oss.str() ) );
        m_hRoot = locator.searchbase_id();
        locator.bindComponent( interfaceID, "InterfaceID" );
        locator.bindComponent( interfaceDisplayName, "InterfaceDisplayName" );
        locator.bindComponent( interfaceType, "InterfaceType" );
        locator.bindComponent( gevInterfaceGatewaySelector, "GevInterfaceGatewaySelector" );
        locator.bindComponent( gevInterfaceGateway, "GevInterfaceGateway" );
        locator.bindComponent( gevInterfaceMACAddress, "GevInterfaceMACAddress" );
        locator.bindComponent( gevInterfaceSubnetSelector, "GevInterfaceSubnetSelector" );
        locator.bindComponent( gevInterfaceSubnetIPAddress, "GevInterfaceSubnetIPAddress" );
        locator.bindComponent( gevInterfaceSubnetMask, "GevInterfaceSubnetMask" );
        locator.bindComponent( mvGevInterfaceMTU, "mvGevInterfaceMTU" );
        locator.bindComponent( mvGevInterfaceLinkSpeed, "mvGevInterfaceLinkSpeed" );
        locator.bindComponent( mvGevAdvancedDeviceDiscoveryEnable, "mvGevAdvancedDeviceDiscoveryEnable" );
        locator.bindComponent( deviceUpdateList, "DeviceUpdateList@i" );
        locator.bindComponent( deviceSelector, "DeviceSelector" );
        locator.bindComponent( deviceID, "DeviceID" );
        locator.bindComponent( deviceVendorName, "DeviceVendorName" );
        locator.bindComponent( deviceModelName, "DeviceModelName" );
        locator.bindComponent( deviceType, "DeviceType" );
        locator.bindComponent( deviceLinkSpeed, "DeviceLinkSpeed" );
        locator.bindComponent( deviceAccessStatus, "DeviceAccessStatus" );
        locator.bindComponent( mvDeviceCommandChannelTransmissionTimeout, "mvDeviceCommandChannelTransmissionTimeout" );
        locator.bindComponent( mvDeviceCommandChannelRetryCount, "mvDeviceCommandChannelRetryCount" );
        locator.bindComponent( gevVersionMajor, "GevVersionMajor" );
        locator.bindComponent( gevVersionMinor, "GevVersionMinor" );
        locator.bindComponent( genCPVersionMajor, "GenCPVersionMajor" );
        locator.bindComponent( genCPVersionMinor, "GenCPVersionMinor" );
        locator.bindComponent( u3vVersionMajor, "U3vVersionMajor" );
        locator.bindComponent( u3vVersionMinor, "U3vVersionMinor" );
        locator.bindComponent( mvDevicePrimaryApplicationSwitchoverSupported, "mvDevicePrimaryApplicationSwitchoverSupported" );
        locator.bindComponent( mvDevicePrimaryApplicationSwitchoverEnable, "mvDevicePrimaryApplicationSwitchoverEnable" );
        locator.bindComponent( mvDevicePrimaryApplicationSwitchoverKey, "mvDevicePrimaryApplicationSwitchoverKey" );
        locator.bindComponent( mvDeviceNetworkInterfaceCount, "mvDeviceNetworkInterfaceCount" );
        locator.bindComponent( gevDeviceIPAddress, "GevDeviceIPAddress" );
        locator.bindComponent( gevDeviceSubnetMask, "GevDeviceSubnetMask" );
        locator.bindComponent( gevDeviceMACAddress, "GevDeviceMACAddress" );
        locator.bindComponent( mvActionDeviceKey, "mvActionDeviceKey" );
        locator.bindComponent( mvActionGroupKey, "mvActionGroupKey" );
        locator.bindComponent( mvActionGroupMask, "mvActionGroupMask" );
        locator.bindComponent( mvActionScheduledTimeEnable, "mvActionScheduledTimeEnable" );
        locator.bindComponent( mvActionScheduledTime, "mvActionScheduledTime" );
        locator.bindComponent( mvActionDestinationIPAddress, "mvActionDestinationIPAddress" );
        locator.bindComponent( mvActionSend, "mvActionSend@i" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief A string property. GenTL producer wide unique identifier of the selected interface.
    /**
     *  This is a read only element. It is a string that indicates a GenTL producer wide unique identifier of the selected interface.
     */
    PropertyS interfaceID;
    /// \brief A string property. GenTL producer wide unique user readable name for the selected interface.
    /**
     *  This is a read only element. It is a string that indicates a GenTL producer wide unique user readable name for the selected interface.
     */
    PropertyS interfaceDisplayName;
    /// \brief An enumerated integer property. Identifies the interfaces technology of the GenTL Producer implementation.
    /**
     *  This is a read only feature. This enumeration provides a value that indicates interfaces technology of the GenTL Producer implementation.
     *
     *  The following string values might be valid for this feature:
     *  - \b Custom (Display string: 'Custom'): This enumeration value indicates that this is a device for a custom protocol.
     *  - \b GEV (Display string: 'GigE Vision'): This enumeration value indicates that this is an interface for the GigE Vision protocol.
     *  - \b U3V (Display string: 'USB3 Vision'): This enumeration value indicates that this is an interface for the USB3 Vision protocol.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 interfaceType;
    /// \brief An integer property. Selector for the different gateway entries for this interface.
    /**
     *  Selector for the different gateway entries for this interface. The selector is 0-based in order to match the index of the C interface.
     */
    PropertyI64 gevInterfaceGatewaySelector;
    /// \brief An integer property. Indicates the IP address of the selected gateway entry of this interface.
    /**
     *  This is a read only element. It indicates the IP address of the selected gateway entry of this interface.
     */
    PropertyI64 gevInterfaceGateway;
    /// \brief An integer property. Indicates the 48-bit MAC address of the selected interface.
    /**
     *  This is a read only element. It indicates the 48-bit MAC address of the selected interface.
     */
    PropertyI64 gevInterfaceMACAddress;
    /// \brief An integer property. Selector for the different subnet entries for this interface.
    /**
     *  Selector for the different subnet entries for this interface. The selector is 0-based in order to match the index of the C interface.
     */
    PropertyI64 gevInterfaceSubnetSelector;
    /// \brief An integer property. Indicates the IP address of the selected subnet entry of this interface.
    /**
     *  This is a read only element. It indicates the IP address of the selected subnet entry of this interface.
     */
    PropertyI64 gevInterfaceSubnetIPAddress;
    /// \brief An integer property. Indicates the subnet mask of the selected subnet entry of this interface.
    /**
     *  This is a read only element. It indicates the subnet mask of the selected subnet entry of this interface.
     */
    PropertyI64 gevInterfaceSubnetMask;
    /// \brief An integer property. Indicates the MTU of this interface.
    /**
     *  This is a read only element. It indicates the MTU(Maximum Transmission Unit) of this interface.
     */
    PropertyI64 mvGevInterfaceMTU;
    /// \brief An integer property. Indicates the link speed of this interface.
    /**
     *  This is a read only element. It indicates the link speed(in Mbits per second) of this interface.
     */
    PropertyI64 mvGevInterfaceLinkSpeed;
    /// \brief A boolean property. Enables or disables the advanced device discovery.
    /**
     *  Enables or disables the advanced device discovery. When enabled also devices, which currently use an incorrect IP configuration for the network they are connected to might be detectable. However depending on the operating system this may result in devices showing up on interfaces to which they are not physically connected.
     */
    PropertyIBoolean mvGevAdvancedDeviceDiscoveryEnable;
    /// \brief A method object. Updates the internal device list of this interface.
    /**
     *  This command updates the internal device list of this interface.
     */
    Method deviceUpdateList;
    /// \brief An integer property. Selector for the different devices on this interface.
    /**
     *  Selector for the different devices on this interface. The limits of this feature might change upon execution of DeviceUpdateList.
     */
    PropertyI64 deviceSelector;
    /// \brief A string property. This feature is deprecated (See DeviceSerialNumber).
    /**
     *  \deprecated
     *  This feature is deprecated (See DeviceSerialNumber). It was representing the Device unique identifier (serial number).
     */
    PropertyS deviceID;
    /// \brief A string property. Name of the manufacturer of the device.
    /**
     *  Name of the manufacturer of the device.
     */
    PropertyS deviceVendorName;
    /// \brief A string property. Model of the device.
    /**
     *  Model of the device.
     */
    PropertyS deviceModelName;
    /// \brief An enumerated integer property. Returns the device type.
    /**
     *  Returns the device type.
     *
     *  The following string values might be valid for this feature:
     *  - \b Transmitter (Display string: 'Transmitter'): Data stream transmitter device.
     *  - \b Receiver (Display string: 'Receiver'): Data stream receiver device.
     *  - \b Transceiver (Display string: 'Transceiver'): Data stream receiver and transmitter device.
     *  - \b Peripheral (Display string: 'Peripheral'): Controllable device (with no data stream handling).
     *  - \b Custom (Display string: 'Custom'): This enumeration value indicates that this is a device for a custom protocol.
     *  - \b GEV (Display string: 'GigE Vision'): This enumeration value indicates that this is a device for the GigE Vision protocol.
     *  - \b U3V (Display string: 'USB3 Vision'): This enumeration value indicates that this is a device for the USB3 Vision protocol.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceType;
    /// \brief An integer property. Indicates the speed of transmission negotiated on the specified Link.
    /**
     *  Indicates the speed of transmission negotiated on the specified Link.
     */
    PropertyI64 deviceLinkSpeed;
    /// \brief An enumerated integer property. Indicates the current access status for the device.
    /**
     *  This is a read only feature. This enumeration provides a value that indicates the current access status for the device.
     *
     *  The following string values might be valid for this feature:
     *  - \b Unknown (Display string: 'Unknown'): This enumeration value indicates that the device accessibility is not known.
     *  - \b ReadWrite (Display string: 'Read/Write'): This enumeration value indicates that full access to the device is available.
     *  - \b ReadOnly (Display string: 'Read Only'): This enumeration value indicates that read access to the device is available.
     *  - \b NoAccess (Display string: 'No Access'): This enumeration value indicates that no access to the device is available.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceAccessStatus;
    /// \brief An integer property. Defines the maximum time in milli-seconds the host driver will wait for an ACK from the device to a previously sent command.
    /**
     *  Defines the maximum time in milli-seconds the host driver will wait for an ACK from the device to a previously sent command.
     */
    PropertyI64 mvDeviceCommandChannelTransmissionTimeout;
    /// \brief An integer property. Indicates the number of retransmissions allowed when command channel message timed out (no ACK was received from the device).
    /**
     *  Indicates the number of retransmissions allowed when command channel message timed out (no ACK was received from the device).
     */
    PropertyI64 mvDeviceCommandChannelRetryCount;
    /// \brief An integer property. Major version of the specification.
    /**
     *  Major version of the specification.
     */
    PropertyI64 gevVersionMajor;
    /// \brief An integer property. Minor version of the specification.
    /**
     *  Minor version of the specification.
     */
    PropertyI64 gevVersionMinor;
    /// \brief An integer property. Indicates the major version number of the GenCP specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the major version number of the GenCP specification this GenTL Producer implementation complies with.
     */
    PropertyI64 genCPVersionMajor;
    /// \brief An integer property. Indicates the minor version number of the GenCP specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the minor version number of the GenCP specification this GenTL Producer implementation complies with.
     */
    PropertyI64 genCPVersionMinor;
    /// \brief An integer property. Indicates the major version number of the USB3 Vision specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the major version number of the USB3 Vision specification this GenTL Producer implementation complies with.
     */
    PropertyI64 u3vVersionMajor;
    /// \brief An integer property. Indicates the minor version number of the USB3 Vision specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the minor version number of the USB3 Vision specification this GenTL Producer implementation complies with.
     */
    PropertyI64 u3vVersionMinor;
    /// \brief A boolean property. Reports the availability of the primary application switchover feature.
    /**
     *  Reports the availability of the primary application switchover feature.
     */
    PropertyIBoolean mvDevicePrimaryApplicationSwitchoverSupported;
    /// \brief A boolean property. Enables or disables primary application switchover.
    /**
     *  Enables or disables primary application switchover.
     */
    PropertyIBoolean mvDevicePrimaryApplicationSwitchoverEnable;
    /// \brief An integer property. Controls the key to use to authenticate primary application switchover requests.
    /**
     *  Controls the key to use to authenticate primary application switchover requests. If the device to take over has 'mvDevicePrimaryApplicationSwitchoverEnable' set to true and this key matches the devices internal key control access will be granted.
     */
    PropertyI64 mvDevicePrimaryApplicationSwitchoverKey;
    /// \brief An integer property. The number of physical network interfaces supported by this device.
    /**
     *  This is an integer feature. It contains the number of physical network interfaces supported by this device.
     */
    PropertyI64 mvDeviceNetworkInterfaceCount;
    /// \brief An integer property. Indicates the current IP address of the GVCP interface of the selected remote device.
    /**
     *  This is a read only element. It indicates the current IP address of the GVCP interface of the selected remote device.
     */
    PropertyI64 gevDeviceIPAddress;
    /// \brief An integer property. Indicates the current subnet mask of the GVCP interface of the selected remote device.
    /**
     *  This is a read only element. It indicates the current subnet mask of the GVCP interface of the selected remote device.
     */
    PropertyI64 gevDeviceSubnetMask;
    /// \brief An integer property. Indicates the 48-bit MAC address of the GVCP interface of the selected remote device.
    /**
     *  This is a read only element. It indicates the 48-bit MAC address of the GVCP interface of the selected remote device.
     */
    PropertyI64 gevDeviceMACAddress;
    /// \brief An integer property. The device key for the action command
    /**
     *  The device key is one of the three main components that constitute an action command packet. It partly defines which device(s) will positively assert the action command packet.
     */
    PropertyI64 mvActionDeviceKey;
    /// \brief An integer property. The group key for the action command
    /**
     *  The group key is one of the three main components that constitute an action command packet. It partly defines which device(s) will positively assert the action command packet.
     */
    PropertyI64 mvActionGroupKey;
    /// \brief An integer property. The group mask for the action command
    /**
     *  The group mask is one of the three main components that constitute an action command packet. It partly defines which device(s) will positively assert the action command packet.
     */
    PropertyI64 mvActionGroupMask;
    /// \brief A boolean property. Enables or disables action command scheduling
    /**
     *  Action commands can be scheduled to execute at a particular moment in time, defined by the 'mvActionScheduledTime' property. If this is disabled the action command takes place immediately after it is received and asserted by each device.
     */
    PropertyIBoolean mvActionScheduledTimeEnable;
    /// \brief An integer property. Sets the time in which the action command will be executed
    /**
     *  Sets the time in which the action command will be executed
     */
    PropertyI64 mvActionScheduledTime;
    /// \brief An integer property. The IP address of the action command recipient
    /**
     *  A valid IP address if the action command shall be unicast. A broadcast subnet if the action command shall be broadcast.
     */
    PropertyI64 mvActionDestinationIPAddress;
    /// \brief A method object. Sends the action command
    /**
     *  It either sends an action command unicast packet to the IP address specified by the 'mvActionDestinationIPAddress' property, or broadcasts an action command broadcast packet on the broadcast domain specified by the 'mvActionDestinationIPAddress' property
     */
    Method mvActionSend;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category contains items that belong to the device module of the transport layer.
/**
 *  The Device category contains items that belong to the device module of the transport layer.
 */
class DeviceModule : public mvIMPACT::acquire::ComponentCollection
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::DeviceModule</b> object.
    explicit DeviceModule(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        mvIMPACT::acquire::ComponentCollection( pDev ),
        deviceID(),
        deviceVendorName(),
        deviceModelName(),
        deviceType(),
        deviceLinkSpeed(),
        gevVersionMajor(),
        gevVersionMinor(),
        genCPVersionMajor(),
        genCPVersionMinor(),
        u3vVersionMajor(),
        u3vVersionMinor(),
        gevDeviceIPAddress(),
        gevDeviceSubnetMask(),
        gevDeviceMACAddress(),
        gevDeviceGateway(),
        deviceEndianessMechanism(),
        streamSelector(),
        streamID()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenTL/Device" );
        m_hRoot = locator.searchbase_id();
        locator.bindComponent( deviceID, "DeviceID" );
        locator.bindComponent( deviceVendorName, "DeviceVendorName" );
        locator.bindComponent( deviceModelName, "DeviceModelName" );
        locator.bindComponent( deviceType, "DeviceType" );
        locator.bindComponent( deviceLinkSpeed, "DeviceLinkSpeed" );
        locator.bindComponent( gevVersionMajor, "GevVersionMajor" );
        locator.bindComponent( gevVersionMinor, "GevVersionMinor" );
        locator.bindComponent( genCPVersionMajor, "GenCPVersionMajor" );
        locator.bindComponent( genCPVersionMinor, "GenCPVersionMinor" );
        locator.bindComponent( u3vVersionMajor, "U3vVersionMajor" );
        locator.bindComponent( u3vVersionMinor, "U3vVersionMinor" );
        locator.bindComponent( gevDeviceIPAddress, "GevDeviceIPAddress" );
        locator.bindComponent( gevDeviceSubnetMask, "GevDeviceSubnetMask" );
        locator.bindComponent( gevDeviceMACAddress, "GevDeviceMACAddress" );
        locator.bindComponent( gevDeviceGateway, "GevDeviceGateway" );
        locator.bindComponent( deviceEndianessMechanism, "DeviceEndianessMechanism" );
        locator.bindComponent( streamSelector, "StreamSelector" );
        locator.bindComponent( streamID, "StreamID" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief A string property. This feature is deprecated (See DeviceSerialNumber).
    /**
     *  \deprecated
     *  This feature is deprecated (See DeviceSerialNumber). It was representing the Device unique identifier (serial number).
     */
    PropertyS deviceID;
    /// \brief A string property. Name of the manufacturer of the device.
    /**
     *  Name of the manufacturer of the device.
     */
    PropertyS deviceVendorName;
    /// \brief A string property. Model of the device.
    /**
     *  Model of the device.
     */
    PropertyS deviceModelName;
    /// \brief An enumerated integer property. Returns the device type.
    /**
     *  Returns the device type.
     *
     *  The following string values might be valid for this feature:
     *  - \b Transmitter (Display string: 'Transmitter'): Data stream transmitter device.
     *  - \b Receiver (Display string: 'Receiver'): Data stream receiver device.
     *  - \b Transceiver (Display string: 'Transceiver'): Data stream receiver and transmitter device.
     *  - \b Peripheral (Display string: 'Peripheral'): Controllable device (with no data stream handling).
     *  - \b Custom (Display string: 'Custom'): This enumeration value indicates that this is a device for a custom protocol.
     *  - \b GEV (Display string: 'GigE Vision'): This enumeration value indicates that this is a device for the GigE Vision protocol.
     *  - \b U3V (Display string: 'USB3 Vision'): This enumeration value indicates that this is a device for the USB3 Vision protocol.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceType;
    /// \brief An integer property. Indicates the speed of transmission negotiated on the specified Link.
    /**
     *  Indicates the speed of transmission negotiated on the specified Link.
     */
    PropertyI64 deviceLinkSpeed;
    /// \brief An integer property. Major version of the specification.
    /**
     *  Major version of the specification.
     */
    PropertyI64 gevVersionMajor;
    /// \brief An integer property. Minor version of the specification.
    /**
     *  Minor version of the specification.
     */
    PropertyI64 gevVersionMinor;
    /// \brief An integer property. Indicates the major version number of the GenCP specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the major version number of the GenCP specification this GenTL Producer implementation complies with.
     */
    PropertyI64 genCPVersionMajor;
    /// \brief An integer property. Indicates the minor version number of the GenCP specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the minor version number of the GenCP specification this GenTL Producer implementation complies with.
     */
    PropertyI64 genCPVersionMinor;
    /// \brief An integer property. Indicates the major version number of the USB3 Vision specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the major version number of the USB3 Vision specification this GenTL Producer implementation complies with.
     */
    PropertyI64 u3vVersionMajor;
    /// \brief An integer property. Indicates the minor version number of the USB3 Vision specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the minor version number of the USB3 Vision specification this GenTL Producer implementation complies with.
     */
    PropertyI64 u3vVersionMinor;
    /// \brief An integer property. Indicates the current IP address of the GVCP interface of the selected remote device.
    /**
     *  This is a read only element. It indicates the current IP address of the GVCP interface of the selected remote device.
     */
    PropertyI64 gevDeviceIPAddress;
    /// \brief An integer property. Indicates the current subnet mask of the GVCP interface of the selected remote device.
    /**
     *  This is a read only element. It indicates the current subnet mask of the GVCP interface of the selected remote device.
     */
    PropertyI64 gevDeviceSubnetMask;
    /// \brief An integer property. Indicates the 48-bit MAC address of the GVCP interface of the selected remote device.
    /**
     *  This is a read only element. It indicates the 48-bit MAC address of the GVCP interface of the selected remote device.
     */
    PropertyI64 gevDeviceMACAddress;
    /// \brief An integer property. Indicates the current gateway of the GVCP interface of the remote device.
    /**
     *  This is a read only element. It indicates the current gateway of the GVCP interface of the remote device.
     */
    PropertyI64 gevDeviceGateway;
    /// \brief An enumerated integer property. Identifies the endianess mode to be used for this device.
    /**
     *  This is a read only feature. This enumeration provides a value that indicates the endianess mode to be used for this device.
     *
     *  The following string values might be valid for this feature:
     *  - \b Legacy (Display string: 'Legacy'): This enumeration value indicates that this device shall be handled according to GenICam Schema 1.0.
     *  - \b Standard (Display string: 'Standard'): This enumeration value indicates that this device shall be handled according to GenICam Schema 1.1 and later.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 deviceEndianessMechanism;
    /// \brief An integer property. Selects the stream channel.
    /**
     *  Selects the stream channel.
     */
    PropertyI64 streamSelector;
    /// \brief A string property. Device wide unique ID of the selected stream.
    /**
     *  This is a read only element. It is a string that indicates a device wide unique identifier of the selected stream.
     */
    PropertyS streamID;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Category that contains items that belong to the data stream module of the transport layer.
/**
 *  The DataStream category contains items that belong to the data stream module of the transport layer.
 */
class DataStreamModule : public mvIMPACT::acquire::ComponentCollection
//-----------------------------------------------------------------------------
{
public:
    /// \brief Constructs a new <b>mvIMPACT::acquire::GenICam::DataStreamModule</b> object.
    explicit DataStreamModule(
        /// [in] A pointer to a <b>mvIMPACT::acquire::Device</b> object obtained from a <b>mvIMPACT::acquire::DeviceManager</b> object.
        mvIMPACT::acquire::Device* pDev,
        /// [in] The \a index of the instance this object shall be created for. Passing an invalid index will raise an exception.
        int64_type index,
        /// [in] The name of the driver internal setting to access with this instance.
        /// A list of valid setting names can be obtained by a call to
        /// <b>mvIMPACT::acquire::FunctionInterface::getAvailableSettings</b>, new
        /// settings can be created with the function
        /// <b>mvIMPACT::acquire::FunctionInterface::createSetting</b>
        const std::string& settingName = "Base" ) :
        mvIMPACT::acquire::ComponentCollection( pDev ),
        streamID(),
        streamAnnouncedBufferCount(),
        mvStreamAnnounceBufferMaximum(),
        streamBufferHandlingMode(),
        streamAnnounceBufferMinimum(),
        streamType(),
        mvStreamDriverTechnology(),
        mvResendActive(),
        mvResendMode(),
        mvResendBatchingActive(),
        mvResendCaptureWindowSize(),
        mvResendThreshold(),
        mvResendRequestMax(),
        mvResendRequestCredits(),
        mvResendResponseTimeout(),
        mvResendsPerTimeout(),
        mvResendFeaturesLocked()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenTL/DataStreams" );
        std::ostringstream oss;
        oss << "Stream" << index;
        locator = mvIMPACT::acquire::DeviceComponentLocator( locator.findComponent( oss.str() ) );
        m_hRoot = locator.searchbase_id();
        locator.bindComponent( streamID, "StreamID" );
        locator.bindComponent( streamAnnouncedBufferCount, "StreamAnnouncedBufferCount" );
        locator.bindComponent( mvStreamAnnounceBufferMaximum, "mvStreamAnnounceBufferMaximum" );
        locator.bindComponent( streamBufferHandlingMode, "StreamBufferHandlingMode" );
        locator.bindComponent( streamAnnounceBufferMinimum, "StreamAnnounceBufferMinimum" );
        locator.bindComponent( streamType, "StreamType" );
        locator.bindComponent( mvStreamDriverTechnology, "mvStreamDriverTechnology" );
        locator.bindComponent( mvResendActive, "mvResendActive" );
        locator.bindComponent( mvResendMode, "mvResendMode" );
        locator.bindComponent( mvResendBatchingActive, "mvResendBatchingActive" );
        locator.bindComponent( mvResendCaptureWindowSize, "mvResendCaptureWindowSize" );
        locator.bindComponent( mvResendThreshold, "mvResendThreshold" );
        locator.bindComponent( mvResendRequestMax, "mvResendRequestMax" );
        locator.bindComponent( mvResendRequestCredits, "mvResendRequestCredits" );
        locator.bindComponent( mvResendResponseTimeout, "mvResendResponseTimeout" );
        locator.bindComponent( mvResendsPerTimeout, "mvResendsPerTimeout" );
        locator.bindComponent( mvResendFeaturesLocked, "mvResendFeaturesLocked" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief A string property. Device wide unique ID of the selected stream.
    /**
     *  This is a read only element. It is a string that indicates a device wide unique identifier of the selected stream.
     */
    PropertyS streamID;
    /// \brief An integer property. Number of announced (known) buffers on this stream. This value is volatile. It may change if additional buffers are announced and/or buffers are revoked by the GenTL Consumer.
    /**
     *  This is a read-only feature. It indicates the number of announced (known) buffers on this stream. This value is volatile. It may change if additional buffers are announced and/or buffers are revoked by the GenTL Consumer.
     */
    PropertyI64 streamAnnouncedBufferCount;
    /// \brief An integer property. Maximal number of buffers to announce to enable selected acquisition mode.
    /**
     *  This feature indicates the maximal number of buffers to announce to enable selected acquisition mode.
     */
    PropertyI64 mvStreamAnnounceBufferMaximum;
    /// \brief An enumerated integer property. Allows to select the buffer handling mode for the stream.
    /**
     *  This enumeration allows the selection of the buffer handling mode for the stream.
     *
     *  The following string values might be valid for this feature:
     *  - \b OldestFirst (Display string: 'OldestFirst'): This enumeration value indicates that this stream is using the default acquisition mode.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 streamBufferHandlingMode;
    /// \brief An integer property. Minimal number of buffers to announce to enable selected acquisition mode.
    /**
     *  This feature indicates the minimal number of buffers to announce to enable selected acquisition mode.
     */
    PropertyI64 streamAnnounceBufferMinimum;
    /// \brief An enumerated integer property. Identifies the stream technology of the GenTL Producer implementation.
    /**
     *  This is a read only feature. This enumeration provides a value that indicates stream technology of the GenTL Producer implementation.
     *
     *  The following string values might be valid for this feature:
     *  - \b Custom (Display string: 'Custom'): This enumeration value indicates that this is a device for a custom protocol.
     *  - \b GEV (Display string: 'GigE Vision'): This enumeration value indicates that this is a stream for the GigE Vision protocol.
     *  - \b U3V (Display string: 'USB3 Vision'): This enumeration value indicates that this is a stream for the USB3 Vision protocol.
     *
     *  \note Depending on the device some of these values might not be supported and especially when working with third party devices there might be custom values which are not listed here.
     *  To get a complete and reliable list of supported values at runtime an application should therefore call <b>mvIMPACT::acquire::EnumPropertyI::getTranslationDictStrings()</b> or one of the other functions dealing with translation dictionaries for enumerated properties.
     */
    PropertyI64 streamType;
    /// \brief A string property. The underlying driver technology used by this stream.
    /**
     *  This is a read only element. It is a string that contains the underlying driver technology used by this stream.
     */
    PropertyS mvStreamDriverTechnology;
    /// \brief A boolean property. This feature controls if the stream will issue packet resend requests.
    /**
     *  This feature controls if the stream will issue packet resend requests.
     */
    PropertyIBoolean mvResendActive;
    /// \brief An integer property. Indicates the mode the internal resend algorithm is working in. This feature is a bit mask. The bits have the following meaning (LSB to MSB): Request Resends when a new block starts and the current one has missing packets(0x01)(not recommended for LAG), Request Resends when a new block starts and the current one has no trailer so far(0x02)(not recommended for LAG), Request Resends when more than 'ResendThreshold' packets have been received since a missing packet has been detected(0x04), Request Resends whenever 'mvResendResponseTimeout' did elapse for the previous still incomplete buffer(0x08), Request Resends whenever 'mvResendResponseTimeout' did elapse for the current still incomplete buffer(0x10), Request Resends whenever a packet is considered as missing(0x20)(not recommended for LAG), Request Resends whenever a block start has been missing(e.g. because no capture buffer was available at the time the block did start)(0x40)
    /**
     *  Indicates the mode the internal resend algorithm is working in. This feature is a bit mask. The bits have the following meaning (LSB to MSB): Request Resends when a new block starts and the current one has missing packets(0x01)(not recommended for LAG), Request Resends when a new block starts and the current one has no trailer so far(0x02)(not recommended for LAG), Request Resends when more than 'ResendThreshold' packets have been received since a missing packet has been detected(0x04), Request Resends whenever 'mvResendResponseTimeout' did elapse for the previous still incomplete buffer(0x08), Request Resends whenever 'mvResendResponseTimeout' did elapse for the current still incomplete buffer(0x10), Request Resends whenever a packet is considered as missing(0x20)(not recommended for LAG), Request Resends whenever a block start has been missing(e.g. because no capture buffer was available at the time the block did start)(0x40)
     */
    PropertyI64 mvResendMode;
    /// \brief A boolean property. This feature controls if the stream will issue batched packet resend requests if it detects several consecutive missing packets.
    /**
     *  This feature controls if the stream will issue batched packet resend requests if it detects several consecutive missing packets.
     */
    PropertyIBoolean mvResendBatchingActive;
    /// \brief An integer property. Indicates the width of the capture window.
    /**
     *  This feature indicates the width of the capture window in packets.
     */
    PropertyI64 mvResendCaptureWindowSize;
    /// \brief An integer property. Indicates the resend threshold within the capture window.
    /**
     *  This feature indicates the resend threshold within the capture window. If current packet ID and first missing packet ID are mvResendThreshold IDs apart the stream will issue a resend request.
     */
    PropertyI64 mvResendThreshold;
    /// \brief An integer property. Indicates the maximum number of resend requests per packet to send to the device until the packet is considered as lost.
    /**
     *  This feature indicates the maximum number of resend requests per packet to send to the device until the packet is considered as lost.
     */
    PropertyI64 mvResendRequestMax;
    /// \brief A floating point property. Indicates the maximum number of resend requests in percent of payload packets per buffer to send to the device until the packet is considered as lost.
    /**
     *  This feature indicates the maximum number of resend requests in percent of payload packets per buffer to send to the device until the packet is considered as lost.
     */
    PropertyF mvResendRequestCredits;
    /// \brief An integer property. This feature controls the resend response timeout in milliseconds.
    /**
     *  This float value sets the resend response timeout in milliseconds. Whenever a requested packet does not arrive within this timer period it will be requested again until mvResendRequestMax resend requests for this packet have been issued.
     */
    PropertyI64 mvResendResponseTimeout;
    /// \brief An integer property. Indicates the number of packets to be requested whenever the resend response timeout elapses.
    /**
     *  This feature indicates the number of packets to be requested whenever the resend response timeout elapses.
     */
    PropertyI64 mvResendsPerTimeout;
    /// \brief An integer property. Used by the driver to lock critical resend related parameters during the acquisition.
    /**
     *  Used by the driver to lock critical resend related parameters during the acquisition.
     */
    PropertyI64 mvResendFeaturesLocked;
    PYTHON_ONLY( %mutable; )
};

/// @}

} // namespace GenICam
} // namespace acquire
} // namespace mvIMPACT

#endif //mvIMPACT_acquire_GenICam_CPP_autogen_h
