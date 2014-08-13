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
        deviceVendorName(),
        deviceModelName(),
        deviceManufacturerInfo(),
        deviceVersion(),
        deviceFirmwareVersion(),
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
        deviceID(),
        deviceUserID(),
        deviceReset(),
        deviceRegistersStreamingStart(),
        deviceRegistersStreamingEnd(),
        deviceRegistersCheck(),
        deviceRegistersValid(),
        deviceMaxThroughput(),
        deviceTemperatureSelector(),
        deviceTemperature(),
        deviceClockSelector(),
        deviceClockFrequency(),
        deviceSerialPortSelector(),
        deviceSerialPortBaudRate(),
        deviceScanType(),
        timestamp(),
        timestampReset(),
        timestampLatch(),
        mvDeviceTemperatureRaw(),
        mvDeviceTemperatureUpperLimit(),
        mvDeviceTemperatureLowerLimit(),
        mvDeviceTemperatureLimitHysteresis(),
        mvDeviceClockFrequency(),
        mvDeviceClockGranularity(),
        mvDeviceSensorName(),
        mvDeviceSensorColorMode(),
        mvDeviceFPGAVersion(),
        mvDeviceFirmwareSource(),
        mvDeviceProcessingUnit()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( deviceVendorName, "DeviceVendorName" );
        locator.bindComponent( deviceModelName, "DeviceModelName" );
        locator.bindComponent( deviceManufacturerInfo, "DeviceManufacturerInfo" );
        locator.bindComponent( deviceVersion, "DeviceVersion" );
        locator.bindComponent( deviceFirmwareVersion, "DeviceFirmwareVersion" );
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
        locator.bindComponent( deviceID, "DeviceID" );
        locator.bindComponent( deviceUserID, "DeviceUserID" );
        locator.bindComponent( deviceReset, "DeviceReset@i" );
        locator.bindComponent( deviceRegistersStreamingStart, "DeviceRegistersStreamingStart@i" );
        locator.bindComponent( deviceRegistersStreamingEnd, "DeviceRegistersStreamingEnd@i" );
        locator.bindComponent( deviceRegistersCheck, "DeviceRegistersCheck@i" );
        locator.bindComponent( deviceRegistersValid, "DeviceRegistersValid" );
        locator.bindComponent( deviceMaxThroughput, "DeviceMaxThroughput" );
        locator.bindComponent( deviceTemperatureSelector, "DeviceTemperatureSelector" );
        locator.bindComponent( deviceTemperature, "DeviceTemperature" );
        locator.bindComponent( deviceClockSelector, "DeviceClockSelector" );
        locator.bindComponent( deviceClockFrequency, "DeviceClockFrequency" );
        locator.bindComponent( deviceSerialPortSelector, "DeviceSerialPortSelector" );
        locator.bindComponent( deviceSerialPortBaudRate, "DeviceSerialPortBaudRate" );
        locator.bindComponent( deviceScanType, "DeviceScanType" );
        locator.bindComponent( timestamp, "Timestamp" );
        locator.bindComponent( timestampReset, "TimestampReset@i" );
        locator.bindComponent( timestampLatch, "TimestampLatch@i" );
        locator.bindComponent( mvDeviceTemperatureRaw, "mvDeviceTemperatureRaw" );
        locator.bindComponent( mvDeviceTemperatureUpperLimit, "mvDeviceTemperatureUpperLimit" );
        locator.bindComponent( mvDeviceTemperatureLowerLimit, "mvDeviceTemperatureLowerLimit" );
        locator.bindComponent( mvDeviceTemperatureLimitHysteresis, "mvDeviceTemperatureLimitHysteresis" );
        locator.bindComponent( mvDeviceClockFrequency, "mvDeviceClockFrequency" );
        locator.bindComponent( mvDeviceClockGranularity, "mvDeviceClockGranularity" );
        locator.bindComponent( mvDeviceSensorName, "mvDeviceSensorName" );
        locator.bindComponent( mvDeviceSensorColorMode, "mvDeviceSensorColorMode" );
        locator.bindComponent( mvDeviceFPGAVersion, "mvDeviceFPGAVersion" );
        locator.bindComponent( mvDeviceFirmwareSource, "mvDeviceFirmwareSource" );
        locator.bindComponent( mvDeviceProcessingUnit, "mvDeviceProcessingUnit" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief Name of the manufacturer of the device.
    /**
     *  Name of the manufacturer of the device.
     */
    PropertyS deviceVendorName;
    /// \brief Model of the device.
    /**
     *  Model of the device.
     */
    PropertyS deviceModelName;
    /// \brief Manufacturer information about the device.
    /**
     *  Manufacturer information about the device.
     */
    PropertyS deviceManufacturerInfo;
    /// \brief Version of the device.
    /**
     *  Version of the device.
     */
    PropertyS deviceVersion;
    /// \brief Version of the firmware in the device.
    /**
     *  Version of the firmware in the device.
     */
    PropertyS deviceFirmwareVersion;
    /// \brief Major version of the Standard Features Naming Convention that was used to create the device`s GenICam XML.
    /**
     *  Major version of the Standard Features Naming Convention that was used to create the device`s GenICam XML.
     */
    PropertyI64 deviceSFNCVersionMajor;
    /// \brief Minor version of the Standard Features Naming Convention that was used to create the device`s GenICam XML.
    /**
     *  Minor version of the Standard Features Naming Convention that was used to create the device`s GenICam XML.
     */
    PropertyI64 deviceSFNCVersionMinor;
    /// \brief Sub minor version of Standard Features Naming Convention that was used to create the device`s GenICam XML.
    /**
     *  Sub minor version of Standard Features Naming Convention that was used to create the device`s GenICam XML.
     */
    PropertyI64 deviceSFNCVersionSubMinor;
    /// \brief Selects the manifest entry to reference.
    /**
     *  Selects the manifest entry to reference.
     */
    PropertyI64 deviceManifestEntrySelector;
    /// \brief Indicates the major version number of the GenICam XML file of the selected manifest entry.
    /**
     *  Indicates the major version number of the GenICam XML file of the selected manifest entry.
     */
    PropertyI64 deviceManifestXMLMajorVersion;
    /// \brief Indicates the minor version number of the GenICam XML file of the selected manifest entry.
    /**
     *  Indicates the minor version number of the GenICam XML file of the selected manifest entry.
     */
    PropertyI64 deviceManifestXMLMinorVersion;
    /// \brief Indicates the subminor version number of the GenICam XML file of the selected manifest entry.
    /**
     *  Indicates the subminor version number of the GenICam XML file of the selected manifest entry.
     */
    PropertyI64 deviceManifestXMLSubMinorVersion;
    /// \brief Indicates the major version number of the schema file of the selected manifest entry.
    /**
     *  Indicates the major version number of the schema file of the selected manifest entry.
     */
    PropertyI64 deviceManifestSchemaMajorVersion;
    /// \brief Indicates the minor version number of the schema file of the selected manifest entry.
    /**
     *  Indicates the minor version number of the schema file of the selected manifest entry.
     */
    PropertyI64 deviceManifestSchemaMinorVersion;
    /// \brief Indicates the first URL to the GenICam XML device description file of the selected manifest entry.
    /**
     *  Indicates the first URL to the GenICam XML device description file of the selected manifest entry.
     */
    PropertyS deviceManifestPrimaryURL;
    /// \brief Indicates the second URL to the GenICam XML device description file of the selected manifest entry.
    /**
     *  Indicates the second URL to the GenICam XML device description file of the selected manifest entry.
     */
    PropertyS deviceManifestSecondaryURL;
    /// \brief This feature is deprecated (See DeviceSerialNumber).
    /**
     *  \deprecated
     *  This feature is deprecated (See DeviceSerialNumber). It was representing the Device unique identifier (serial number).
     */
    PropertyS deviceID;
    /// \brief User-programmable device identifier.
    /**
     *  User-programmable device identifier.
     */
    PropertyS deviceUserID;
    /// \brief Resets the device to its power up state.
    /**
     *  Resets the device to its power up state. After reset, the device must be rediscovered.
     */
    Method deviceReset;
    /// \brief Prepare the device for registers streaming without checking for consistency.
    /**
     *  Prepare the device for registers streaming without checking for consistency.
     */
    Method deviceRegistersStreamingStart;
    /// \brief Announce the end of registers streaming.
    /**
     *  Announce the end of registers streaming. This will do a register set validation for consistency and activate it. This will also update the DeviceRegistersValid flag.
     */
    Method deviceRegistersStreamingEnd;
    /// \brief Perform the validation of the current register set for consistency.
    /**
     *  Perform the validation of the current register set for consistency. This will update the DeviceRegistersValid flag.
     */
    Method deviceRegistersCheck;
    /// \brief Returns if the current register set is valid and consistent.
    /**
     *  Returns if the current register set is valid and consistent.
     */
    PropertyIBoolean deviceRegistersValid;
    /// \brief Maximum bandwidth of the data that can be streamed out of the device.
    /**
     *  Maximum bandwidth of the data that can be streamed out of the device. This can be used to estimate if the physical connection(s) can sustain transfer of free-running images from the camera at its maximum speed.
     */
    PropertyI64 deviceMaxThroughput;
    /// \brief Selects the location within the device, where the temperature will be measured.
    /**
     *  Selects the location within the device, where the temperature will be measured.
     */
    PropertyI64 deviceTemperatureSelector;
    /// \brief Device temperature in degrees Celsius (C).
    /**
     *  Device temperature in degrees Celsius (C). It is measured at the location selected by DeviceTemperatureSelector.
     */
    PropertyF deviceTemperature;
    /// \brief Selects the clock frequency to access from the device.
    /**
     *  Selects the clock frequency to access from the device.
     */
    PropertyI64 deviceClockSelector;
    /// \brief Returns the frequency of the selected Clock.
    /**
     *  Returns the frequency of the selected Clock.
     */
    PropertyF deviceClockFrequency;
    /// \brief Selects which serial port of the device to control.
    /**
     *  Selects which serial port of the device to control.
     */
    PropertyI64 deviceSerialPortSelector;
    /// \brief This feature controls the baud rate used by the selected serial port.
    /**
     *  This feature controls the baud rate used by the selected serial port.
     */
    PropertyI64 deviceSerialPortBaudRate;
    /// \brief Scan type of the sensor of the device.
    /**
     *  Scan type of the sensor of the device.
     */
    PropertyI64 deviceScanType;
    /// \brief Reports the current value of the device timestamp counter.
    /**
     *  Reports the current value of the device timestamp counter.
     */
    PropertyI64 timestamp;
    /// \brief Resets the current value of the device timestamp counter.
    /**
     *  Resets the current value of the device timestamp counter.
     */
    Method timestampReset;
    /// \brief Latches the current timestamp counter into the 'Timestamp' property.
    /**
     *  Latches the current timestamp counter into the 'Timestamp' property.
     */
    Method timestampLatch;
    /// \brief Device temperature in degrees Celsius (C).
    /**
     *  Device temperature in degrees Celsius (C). It is measured at the location selected by DeviceTemperatureSelector.
     */
    PropertyI64 mvDeviceTemperatureRaw;
    /// \brief Upper limit in degrees Celsius(C) for the TemperatureOutOfRange signal.
    /**
     *  Upper limit in degrees Celsius(C) for the TemperatureOutOfRange signal.
     */
    PropertyI64 mvDeviceTemperatureUpperLimit;
    /// \brief Lower limit in degrees Celsius(C) for the TemperatureOutOfRange signal.
    /**
     *  Lower limit in degrees Celsius(C) for the TemperatureOutOfRange signal.
     */
    PropertyI64 mvDeviceTemperatureLowerLimit;
    /// \brief Hysteresis in degrees Celsius(C) for temperature limits.
    /**
     *  Hysteresis in degrees Celsius(C) for temperature limits.
     */
    PropertyI64 mvDeviceTemperatureLimitHysteresis;
    /// \brief Clock frequency of the image sensor of the camera.
    /**
     *  Clock frequency of the image sensor of the camera.
     */
    PropertyI64 mvDeviceClockFrequency;
    /// \brief Special register to configure the clock granularity for LUPA sensors.
    /**
     *  Special register to configure the clock granularity for LUPA sensors.
     */
    PropertyI64 mvDeviceClockGranularity;
    /// \brief Shows the name of the sensor.
    /**
     *  Shows the name of the sensor.
     */
    PropertyS mvDeviceSensorName;
    /// \brief Shows color mode of the sensor.
    /**
     *  Shows color mode of the sensor.
     */
    PropertyI64 mvDeviceSensorColorMode;
    /// \brief Shows version number of the FPGA.
    /**
     *  Shows version number of the FPGA.
     */
    PropertyS mvDeviceFPGAVersion;
    /// \brief Shows the location from where the firmware was loaded.
    /**
     *  Shows the location from where the firmware was loaded.
     */
    PropertyI64 mvDeviceFirmwareSource;
    /// \brief The processing unit to activate for the selected processing unit.
    /**
     *  The processing unit to activate for the selected processing unit.
     */
    PropertyI64 mvDeviceProcessingUnit;
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
        sensorTaps(),
        sensorDigitizationTaps(),
        widthMax(),
        heightMax(),
        width(),
        height(),
        offsetX(),
        offsetY(),
        mvOffsetYSensorB(),
        mvSensorLineOffsetSelector(),
        mvSensorLineOffset(),
        mvSensorLinePeriod(),
        linePitch(),
        binningHorizontal(),
        binningVertical(),
        decimationHorizontal(),
        decimationVertical(),
        reverseX(),
        reverseY(),
        pixelFormat(),
        pixelCoding(),
        pixelSize(),
        pixelColorFilter(),
        pixelDynamicRangeMin(),
        pixelDynamicRangeMax(),
        testImageSelector()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( sensorWidth, "SensorWidth" );
        locator.bindComponent( sensorHeight, "SensorHeight" );
        locator.bindComponent( sensorTaps, "SensorTaps" );
        locator.bindComponent( sensorDigitizationTaps, "SensorDigitizationTaps" );
        locator.bindComponent( widthMax, "WidthMax" );
        locator.bindComponent( heightMax, "HeightMax" );
        locator.bindComponent( width, "Width" );
        locator.bindComponent( height, "Height" );
        locator.bindComponent( offsetX, "OffsetX" );
        locator.bindComponent( offsetY, "OffsetY" );
        locator.bindComponent( mvOffsetYSensorB, "mvOffsetYSensorB" );
        locator.bindComponent( mvSensorLineOffsetSelector, "mvSensorLineOffsetSelector" );
        locator.bindComponent( mvSensorLineOffset, "mvSensorLineOffset" );
        locator.bindComponent( mvSensorLinePeriod, "mvSensorLinePeriod" );
        locator.bindComponent( linePitch, "LinePitch" );
        locator.bindComponent( binningHorizontal, "BinningHorizontal" );
        locator.bindComponent( binningVertical, "BinningVertical" );
        locator.bindComponent( decimationHorizontal, "DecimationHorizontal" );
        locator.bindComponent( decimationVertical, "DecimationVertical" );
        locator.bindComponent( reverseX, "ReverseX" );
        locator.bindComponent( reverseY, "ReverseY" );
        locator.bindComponent( pixelFormat, "PixelFormat" );
        locator.bindComponent( pixelCoding, "PixelCoding" );
        locator.bindComponent( pixelSize, "PixelSize" );
        locator.bindComponent( pixelColorFilter, "PixelColorFilter" );
        locator.bindComponent( pixelDynamicRangeMin, "PixelDynamicRangeMin" );
        locator.bindComponent( pixelDynamicRangeMax, "PixelDynamicRangeMax" );
        locator.bindComponent( testImageSelector, "TestImageSelector" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief Effective width of the sensor in pixels.
    /**
     *  Effective width of the sensor in pixels.
     */
    PropertyI64 sensorWidth;
    /// \brief Effective height of the sensor in pixels.
    /**
     *  Effective height of the sensor in pixels.
     */
    PropertyI64 sensorHeight;
    /// \brief Number of taps of the camera sensor.
    /**
     *  Number of taps of the camera sensor.
     */
    PropertyI64 sensorTaps;
    /// \brief Number of digitized samples outputted simultaneously by the camera A/D conversion stage.
    /**
     *  Number of digitized samples outputted simultaneously by the camera A/D conversion stage.
     */
    PropertyI64 sensorDigitizationTaps;
    /// \brief Maximum width of the image (in pixels).
    /**
     *  Maximum width of the image (in pixels). The dimension is calculated after horizontal binning, decimation or any other function changing the horizontal dimension of the image.
     */
    PropertyI64 widthMax;
    /// \brief Maximum height of the image (in pixels).
    /**
     *  Maximum height of the image (in pixels). This dimension is calculated after vertical binning, decimation or any other function changing the vertical dimension of the image
     */
    PropertyI64 heightMax;
    /// \brief Width of the image provided by the device (in pixels).
    /**
     *  Width of the image provided by the device (in pixels).
     */
    PropertyI64 width;
    /// \brief Height of the image provided by the device (in pixels).
    /**
     *  Height of the image provided by the device (in pixels).
     */
    PropertyI64 height;
    /// \brief Horizontal offset from the origin to the region of interest (in pixels).
    /**
     *  Horizontal offset from the origin to the region of interest (in pixels).
     */
    PropertyI64 offsetX;
    /// \brief Vertical offset from the origin to the region of interest (in pixels).
    /**
     *  Vertical offset from the origin to the region of interest (in pixels).
     */
    PropertyI64 offsetY;
    /// \brief Vertical offset of SensorB from the origin to the region of interest (in pixels).
    /**
     *  Vertical offset of SensorB from the origin to the region of interest (in pixels).
     */
    PropertyI64 mvOffsetYSensorB;
    /// \brief Selects the sensor to configure
    /**
     *  Selects the sensor to configure
     */
    PropertyI64 mvSensorLineOffsetSelector;
    /// \brief Sets the offset of the sensor selected by mvSensorLineOffsetSelector.
    /**
     *  Sets the offset of the sensor selected by mvSensorLineOffsetSelector.
     */
    PropertyI64 mvSensorLineOffset;
    /// \brief Time in nanoseconds for one line
    /**
     *  Time in nanoseconds for one line
     */
    PropertyI64 mvSensorLinePeriod;
    /// \brief Total number of bytes between 2 successive lines.
    /**
     *  Total number of bytes between 2 successive lines. This feature is used to facilitate alignment of image data.
     */
    PropertyI64 linePitch;
    /// \brief Number of horizontal photo-sensitive cells to combine together.
    /**
     *  Number of horizontal photo-sensitive cells to combine together. This increases the intensity (or signal to noise ratio) of the pixels and reduces the horizontal resolution (width) of the image.
     */
    PropertyI64 binningHorizontal;
    /// \brief Number of vertical photo-sensitive cells to combine together.
    /**
     *  Number of vertical photo-sensitive cells to combine together. This increases the intensity (or signal to noise ratio) of the pixels and reduces the vertical resolution (height) of the image.
     */
    PropertyI64 binningVertical;
    /// \brief Horizontal sub-sampling of the image.
    /**
     *  Horizontal sub-sampling of the image. This reduces the horizontal resolution (width) of the image by the specified horizontal decimation factor.
     */
    PropertyI64 decimationHorizontal;
    /// \brief Vertical sub-sampling of the image.
    /**
     *  Vertical sub-sampling of the image. This reduces the vertical resolution (height) of the image by the specified vertical decimation factor.
     */
    PropertyI64 decimationVertical;
    /// \brief Flip horizontally the image sent by the device.
    /**
     *  Flip horizontally the image sent by the device. The Region of interest is applied after the flipping.
     */
    PropertyIBoolean reverseX;
    /// \brief Flip vertically the image sent by the device.
    /**
     *  Flip vertically the image sent by the device. The Region of interest is applied after the flipping.
     */
    PropertyIBoolean reverseY;
    /// \brief Format of the pixels provided by the device.
    /**
     *  Format of the pixels provided by the device. It represents all the information provided by PixelCoding, PixelSize, PixelColorFilter combined in a single feature.
     */
    PropertyI64 pixelFormat;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It represents the coding of the pixels in the image. Raw gives the data in the native format of the sensor.
     */
    PropertyI64 pixelCoding;
    /// \brief Total size in bits of a pixel of the image.
    /**
     *  Total size in bits of a pixel of the image.
     */
    PropertyI64 pixelSize;
    /// \brief Type of color filter that is applied to the image.
    /**
     *  Type of color filter that is applied to the image.
     */
    PropertyI64 pixelColorFilter;
    /// \brief Minimum value that can be returned during the digitization process.
    /**
     *  Minimum value that can be returned during the digitization process. This corresponds to the darkest value of the camera. For color camera, this returns the smallest value that each color component can take.
     */
    PropertyI64 pixelDynamicRangeMin;
    /// \brief Maximum value that will be returned during the digitization process.
    /**
     *  Maximum value that will be returned during the digitization process. This corresponds to the brightest value of the camera. For color camera, this returns the biggest value that each color component can take.
     */
    PropertyI64 pixelDynamicRangeMax;
    /// \brief This feature is deprecated (see TestPattern).
    /**
     *  \deprecated
     *  This feature is deprecated (see TestPattern). Selects the type of test image that is sent by the device.
     */
    PropertyI64 testImageSelector;
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
        mvAcquisitionFrameRateLimitMode(),
        mvAcquisitionFrameRateEnable(),
        mvResultingFrameRate(),
        acquisitionFrameRate(),
        acquisitionFrameRateAbs(),
        acquisitionFrameRateRaw(),
        acquisitionLineRate(),
        acquisitionLineRateAbs(),
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
        triggerDelayAbs(),
        triggerDelayRaw(),
        triggerDivider(),
        triggerMultiplier(),
        exposureMode(),
        exposureTime(),
        exposureTimeAbs(),
        exposureTimeRaw(),
        exposureAuto(),
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
        locator.bindComponent( mvAcquisitionFrameRateLimitMode, "mvAcquisitionFrameRateLimitMode" );
        locator.bindComponent( mvAcquisitionFrameRateEnable, "mvAcquisitionFrameRateEnable" );
        locator.bindComponent( mvResultingFrameRate, "mvResultingFrameRate" );
        locator.bindComponent( acquisitionFrameRate, "AcquisitionFrameRate" );
        if( !acquisitionFrameRate.isValid() )
        {
            locator.bindComponent( acquisitionFrameRate, "AcquisitionFrameRateAbs" );
        }
        locator.bindComponent( acquisitionFrameRateAbs, "AcquisitionFrameRateAbs" );
        locator.bindComponent( acquisitionFrameRateRaw, "AcquisitionFrameRateRaw" );
        locator.bindComponent( acquisitionLineRate, "AcquisitionLineRate" );
        if( !acquisitionLineRate.isValid() )
        {
            locator.bindComponent( acquisitionLineRate, "AcquisitionLineRateAbs" );
        }
        locator.bindComponent( acquisitionLineRateAbs, "AcquisitionLineRateAbs" );
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
        locator.bindComponent( triggerDelayAbs, "TriggerDelayAbs" );
        locator.bindComponent( triggerDelayRaw, "TriggerDelayRaw" );
        locator.bindComponent( triggerDivider, "TriggerDivider" );
        locator.bindComponent( triggerMultiplier, "TriggerMultiplier" );
        locator.bindComponent( exposureMode, "ExposureMode" );
        locator.bindComponent( exposureTime, "ExposureTime" );
        if( !exposureTime.isValid() )
        {
            locator.bindComponent( exposureTime, "ExposureTimeAbs" );
        }
        locator.bindComponent( exposureTimeAbs, "ExposureTimeAbs" );
        locator.bindComponent( exposureTimeRaw, "ExposureTimeRaw" );
        locator.bindComponent( exposureAuto, "ExposureAuto" );
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
    /// \brief Sets the acquisition mode of the device.
    /**
     *  Sets the acquisition mode of the device. It defines mainly the number of frames to capture during an acquisition and the way the acquisition stops.
     */
    PropertyI64 acquisitionMode;
    /// \brief Arms the device before an AcquisitionStart command.
    /**
     *  Arms the device before an AcquisitionStart command. This optional command validates all the current features for consistency and prepares the device for a fast start of the Acquisition.
     */
    Method acquisitionArm;
    /// \brief Number of frames to acquire in MultiFrame Acquisition mode.
    /**
     *  Number of frames to acquire in MultiFrame Acquisition mode.
     */
    PropertyI64 acquisitionFrameCount;
    /// \brief Number of frames to acquire for each FrameBurstStart trigger.
    /**
     *  Number of frames to acquire for each FrameBurstStart trigger.
     */
    PropertyI64 acquisitionBurstFrameCount;
    /// \brief Controls the calculation of the maximum frame rate.
    /**
     *  Controls the calculation of the maximum frame rate.
     */
    PropertyI64 mvAcquisitionFrameRateLimitMode;
    /// \brief Enables the use of the 'AcquisitionFrameRate' feature.
    /**
     *  Enables the use of the 'AcquisitionFrameRate' feature.
     */
    PropertyI64 mvAcquisitionFrameRateEnable;
    /// \brief Shows the resulting frame rate.
    /**
     *  Shows the resulting frame rate.
     */
    PropertyF mvResultingFrameRate;
    /// \brief Controls the acquisition rate (in Hertz) at which the frames are captured.
    /**
     *  Controls the acquisition rate (in Hertz) at which the frames are captured.
     */
    PropertyF acquisitionFrameRate;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It controls the rate (in Hertz) at which the Frames are captured when TriggerMode is Off for the Frame trigger.
     */
    PropertyF acquisitionFrameRateAbs;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It controls the rate (in device specific unit) at which the Frames are captured when TriggerMode is Off for the Frame trigger.
     */
    PropertyI64 acquisitionFrameRateRaw;
    /// \brief Controls the rate (in Hertz) at which the Lines in a Frame are captured.
    /**
     *  Controls the rate (in Hertz) at which the Lines in a Frame are captured.
     */
    PropertyF acquisitionLineRate;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It controls the rate (in Hertz) at which the Lines in a Frame are captured when TriggerMode is Off for the Line trigger.
     */
    PropertyF acquisitionLineRateAbs;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It controls the rate (in device specific unit) at which the Lines in a Frame are captured when TriggerMode is Off for the Line trigger.
     */
    PropertyI64 acquisitionLineRateRaw;
    /// \brief Selects the internal acquisition signal to read using AcquisitionStatus.
    /**
     *  Selects the internal acquisition signal to read using AcquisitionStatus.
     */
    PropertyI64 acquisitionStatusSelector;
    /// \brief Reads the state of the internal acquisition signal selected using AcquisitionStatusSelector.
    /**
     *  Reads the state of the internal acquisition signal selected using AcquisitionStatusSelector.
     */
    PropertyIBoolean acquisitionStatus;
    /// \brief Selects the type of trigger to configure.
    /**
     *  Selects the type of trigger to configure.
     */
    PropertyI64 triggerSelector;
    /// \brief Controls if the selected trigger is active.
    /**
     *  Controls if the selected trigger is active.
     */
    PropertyI64 triggerMode;
    /// \brief Generates an internal trigger.
    /**
     *  Generates an internal trigger. TriggerSource must be set to Software.
     */
    Method triggerSoftware;
    /// \brief Specifies the internal signal or physical input Line to use as the trigger source.
    /**
     *  Specifies the internal signal or physical input Line to use as the trigger source. The selected trigger must have its TriggerMode set to On.
     */
    PropertyI64 triggerSource;
    /// \brief Specifies the activation mode of the trigger.
    /**
     *  Specifies the activation mode of the trigger.
     */
    PropertyI64 triggerActivation;
    /// \brief Specifies the type trigger overlap permitted with the previous frame.
    /**
     *  Specifies the type trigger overlap permitted with the previous frame. This defines when a valid trigger will be accepted (or latched) for a new frame.
     */
    PropertyI64 triggerOverlap;
    /// \brief Specifies the delay in microseconds (us) to apply after the trigger reception before activating it.
    /**
     *  Specifies the delay in microseconds (us) to apply after the trigger reception before activating it.
     */
    PropertyF triggerDelay;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It specifies the absolute delay in microseconds (us) to apply after the trigger reception before effectively activating it. TriggerDelayRaw must reflect the state of TriggerDelayAbs when they are both supported.
     */
    PropertyF triggerDelayAbs;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. TriggerDelayRaw specifies the delay in device-specific unit to apply after the trigger reception before effectively activating it. TriggerDelayAbs must reflect the state of TriggerDelayRaw when they are both supported.
     */
    PropertyI64 triggerDelayRaw;
    /// \brief Specifies a division factor for the incoming trigger pulses.
    /**
     *  Specifies a division factor for the incoming trigger pulses.
     */
    PropertyI64 triggerDivider;
    /// \brief Specifies a multiplication factor for the incoming trigger pulses.
    /**
     *  Specifies a multiplication factor for the incoming trigger pulses. It is used generally used in conjunction with TriggerDivider to control the ratio of triggers that are accepted.
     */
    PropertyI64 triggerMultiplier;
    /// \brief Sets the operation mode of the Exposure (or shutter).
    /**
     *  Sets the operation mode of the Exposure (or shutter).
     */
    PropertyI64 exposureMode;
    /// \brief Sets the Exposure time when ExposureMode is Timed and ExposureAuto is Off.
    /**
     *  Sets the Exposure time when ExposureMode is Timed and ExposureAuto is Off. This controls the duration where the photosensitive cells are exposed to light.
     */
    PropertyF exposureTime;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It is used to set the Exposure time (in microseconds) when ExposureMode is Timed. This controls the duration where the photosensitive cells are exposed to light.
     */
    PropertyF exposureTimeAbs;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It can used to set the Exposure time in device-specific unit when ExposureMode is Timed. This controls the duration where the photosensitive cells are exposed to light.
     */
    PropertyI64 exposureTimeRaw;
    /// \brief Sets the automatic exposure mode when ExposureMode is Timed.
    /**
     *  Sets the automatic exposure mode when ExposureMode is Timed. The exact algorithm used to implement this control is device-specific.
     */
    PropertyI64 exposureAuto;
    /// \brief Selects the shutter mode of the sensor.
    /**
     *  Selects the shutter mode of the sensor.
     */
    PropertyI64 mvShutterMode;
    /// \brief Kneepoint of 10 to 8 bit compression.
    /**
     *  Kneepoint of 10 to 8 bit compression.
     */
    PropertyI64 mvCompressionKneepoint;
    /// \brief Activates the sensor's defective pixel correction.
    /**
     *  Activates the sensor's defective pixel correction.
     */
    PropertyIBoolean mvDefectivePixelEnable;
    /// \brief The lower limit of the exposure time in auto exposure mode.
    /**
     *  The lower limit of the exposure time in auto exposure mode.
     */
    PropertyF mvExposureAutoLowerLimit;
    /// \brief The upper limit of the exposure time in auto exposure mode.
    /**
     *  The upper limit of the exposure time in auto exposure mode.
     */
    PropertyF mvExposureAutoUpperLimit;
    /// \brief Determines the increment or decrement size of exposure value from frame to frame.
    /**
     *  Determines the increment or decrement size of exposure value from frame to frame.
     */
    PropertyI64 mvExposureAutoSpeed;
    /// \brief The number of frames that the AEC must skip before updating the exposure register.
    /**
     *  The number of frames that the AEC must skip before updating the exposure register.
     */
    PropertyI64 mvExposureAutoDelayImages;
    /// \brief Common desired average grey value (in percent) used for Auto Gain Control(AGC) and Auto Exposure Control(AEC).
    /**
     *  Common desired average grey value (in percent) used for auto gain control(AGC) and auto exposure control (AEC).
     */
    PropertyI64 mvExposureAutoAverageGrey;
    /// \brief Highlight auto control AOI to check AOI settings. Switch off for normal operation.
    /**
     *  Highlight auto control AOI to check AOI settings. Switch off for normal operation.
     */
    PropertyI64 mvExposureAutoHighlightAOI;
    /// \brief Common AutoControl AOI used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AutoControl AOI used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvExposureAutoAOIMode;
    /// \brief Common AOI XOffset used for auto gain control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI XOffset used for auto gain control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvExposureAutoOffsetX;
    /// \brief Common AOI YOffset used for auto gain control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI YOffset used for auto gain control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvExposureAutoOffsetY;
    /// \brief Common AOI Width used for auto gain control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI Width used for auto gain control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvExposureAutoWidth;
    /// \brief Common AOI Height used for auto gain control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI Height used for auto gain control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvExposureAutoHeight;
    /// \brief Selects the common auto mode for gain and exposure.
    /**
     *  Selects the common auto mode for gain and exposure.
     */
    PropertyI64 mvExposureAutoMode;
    /// \brief Smear reduction in triggered and nonoverlapped mode.
    /**
     *  Smear reduction in triggered and nonoverlapped mode.
     */
    PropertyI64 mvSmearReduction;
    /// \brief mvRecord is used to store frames in memory. mvPlayback transfers stored frames. mvPretrigger stores frames in memory to be transfered after trigger.
    /**
     *  mvRecord is used to store frames in memory. mvPlayback transfers stored frames. mvPretrigger stores frames in memory to be transfered after trigger.
     */
    PropertyI64 mvAcquisitionMemoryMode;
    /// \brief Number of frames to acquire before the occurence of an AcquisitionStart or AcquisitionActive trigger.
    /**
     *  Number of frames to acquire before the occurence of an AcquisitionStart or AcquisitionActive trigger.
     */
    PropertyI64 mvPretriggerFrameCount;
    /// \brief Max number of frames to record.
    /**
     *  Max number of frames to record.
     */
    PropertyI64 mvAcquisitionMemoryMaxFrameCount;
    /// \brief AOI and/or binning parameter changed after last Acquisition.
    /**
     *  AOI and/or binning parameter changed after last Acquisition.
     */
    PropertyI64 mvAcquisitionMemoryAOIParameterChanged;
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
    /// \brief Selects the physical line (or pin) of the external device connector to configure.
    /**
     *  Selects the physical line (or pin) of the external device connector to configure.
     */
    PropertyI64 lineSelector;
    /// \brief Controls if the physical Line is used to Input or Output a signal.
    /**
     *  Controls if the physical Line is used to Input or Output a signal.
     */
    PropertyI64 lineMode;
    /// \brief Controls the inversion of the signal of the selected input or output Line.
    /**
     *  Controls the inversion of the signal of the selected input or output Line.
     */
    PropertyIBoolean lineInverter;
    /// \brief Returns the current status of the selected input or output Line.
    /**
     *  Returns the current status of the selected input or output Line.
     */
    PropertyIBoolean lineStatus;
    /// \brief Returns the current status of all available Line signals at time of polling in a single bitfield.
    /**
     *  Returns the current status of all available Line signals at time of polling in a single bitfield.
     */
    PropertyI64 lineStatusAll;
    /// \brief Selects which internal acquisition or I/O source signal to output on the selected Line.
    /**
     *  Selects which internal acquisition or I/O source signal to output on the selected Line. LineMode must be Output.
     */
    PropertyI64 lineSource;
    /// \brief Controls the current electrical format of the selected physical input or output Line.
    /**
     *  Controls the current electrical format of the selected physical input or output Line.
     */
    PropertyI64 lineFormat;
    /// \brief Selects which bit of the User Output register will be set by UserOutputValue.
    /**
     *  Selects which bit of the User Output register will be set by UserOutputValue.
     */
    PropertyI64 userOutputSelector;
    /// \brief Sets the value of the bit selected by UserOutputSelector.
    /**
     *  Sets the value of the bit selected by UserOutputSelector.
     */
    PropertyIBoolean userOutputValue;
    /// \brief Sets the value of all the bits of the User Output register.
    /**
     *  Sets the value of all the bits of the User Output register. It is subject to the UserOutputValueAllMask.
     */
    PropertyI64 userOutputValueAll;
    /// \brief Sets the write mask to apply to the value specified by UserOutputValueAll before writing it in the User Output register.
    /**
     *  Sets the write mask to apply to the value specified by UserOutputValueAll before writing it in the User Output register. If the UserOutputValueAllMask feature is present, setting the user Output register using UserOutputValueAll will only change the bits that have a corresponding bit in the mask set to one.
     */
    PropertyI64 userOutputValueAllMask;
    /// \brief Sets the debounce time in micro seconds for low to high transitions.
    /**
     *  Sets the debounce time in micro seconds for low to high transitions.
     */
    PropertyI64 mvLineDebounceTimeRisingEdge;
    /// \brief Sets the debounce time in micro seconds for high to low transitions.
    /**
     *  Sets the debounce time in micro seconds for high to low transitions.
     */
    PropertyI64 mvLineDebounceTimeFallingEdge;
    /// \brief Selects which RTM input to configure.
    /**
     *  Selects which RTM input to configure.
     */
    PropertyI64 mvRTMInputSelector;
    /// \brief Selects which signal to connect to the selected RTM input.
    /**
     *  Selects which signal to connect to the selected RTM input.
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
        timerDurationAbs(),
        timerDurationRaw(),
        timerDelay(),
        timerDelayAbs(),
        timerDelayRaw(),
        timerReset(),
        timerValue(),
        timerValueAbs(),
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
        locator.bindComponent( timerDurationAbs, "TimerDurationAbs" );
        locator.bindComponent( timerDurationRaw, "TimerDurationRaw" );
        locator.bindComponent( timerDelay, "TimerDelay" );
        if( !timerDelay.isValid() )
        {
            locator.bindComponent( timerDelay, "TimerDelayAbs" );
        }
        locator.bindComponent( timerDelayAbs, "TimerDelayAbs" );
        locator.bindComponent( timerDelayRaw, "TimerDelayRaw" );
        locator.bindComponent( timerReset, "TimerReset@i" );
        locator.bindComponent( timerValue, "TimerValue" );
        if( !timerValue.isValid() )
        {
            locator.bindComponent( timerValue, "TimerValueAbs" );
        }
        locator.bindComponent( timerValueAbs, "TimerValueAbs" );
        locator.bindComponent( timerValueRaw, "TimerValueRaw" );
        locator.bindComponent( timerStatus, "TimerStatus" );
        locator.bindComponent( timerTriggerSource, "TimerTriggerSource" );
        locator.bindComponent( timerTriggerActivation, "TimerTriggerActivation" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief Selects which Counter to configure.
    /**
     *  Selects which Counter to configure.
     */
    PropertyI64 counterSelector;
    /// \brief Select the events that will be the source to increment the Counter.
    /**
     *  Select the events that will be the source to increment the Counter.
     */
    PropertyI64 counterEventSource;
    /// \brief Selects the Activation mode Event Source signal.
    /**
     *  Selects the Activation mode Event Source signal.
     */
    PropertyI64 counterEventActivation;
    /// \brief Selects the signals that will be the source to reset the Counter.
    /**
     *  Selects the signals that will be the source to reset the Counter.
     */
    PropertyI64 counterResetSource;
    /// \brief Selects the Activation mode of the Counter Reset Source signal.
    /**
     *  Selects the Activation mode of the Counter Reset Source signal.
     */
    PropertyI64 counterResetActivation;
    /// \brief Does a software reset of the selected Counter and starts it.
    /**
     *  Does a software reset of the selected Counter and starts it. The counter starts counting events immediately after the reset unless a Counter trigger is active. CounterReset can be used to reset the Counter independently from the CounterResetSource. To disable the counter temporarily, set CounterEventSource to Off.
     */
    Method counterReset;
    /// \brief Reads or writes the current value of the selected Counter.
    /**
     *  Reads or writes the current value of the selected Counter.
     */
    PropertyI64 counterValue;
    /// \brief Reads the value of the selected Counter when it was reset by a trigger or by an explicit CounterReset command.
    /**
     *  Reads the value of the selected Counter when it was reset by a trigger or by an explicit CounterReset command.
     */
    PropertyI64 counterValueAtReset;
    /// \brief Sets the duration (or number of events) before the CounterEnd event is generated.
    /**
     *  Sets the duration (or number of events) before the CounterEnd event is generated.
     */
    PropertyI64 counterDuration;
    /// \brief Returns the current status of the Counter.
    /**
     *  Returns the current status of the Counter.
     */
    PropertyI64 counterStatus;
    /// \brief Selects the source to start the Counter.
    /**
     *  Selects the source to start the Counter.
     */
    PropertyI64 counterTriggerSource;
    /// \brief Selects the activation mode of the trigger to start the Counter.
    /**
     *  Selects the activation mode of the trigger to start the Counter.
     */
    PropertyI64 counterTriggerActivation;
    /// \brief Selects which Timer to configure.
    /**
     *  Selects which Timer to configure.
     */
    PropertyI64 timerSelector;
    /// \brief Sets the duration (in microseconds) of the Timer pulse.
    /**
     *  Sets the duration (in microseconds) of the Timer pulse.
     */
    PropertyF timerDuration;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It sets the duration (in microseconds) of the Timer pulse.
     */
    PropertyF timerDurationAbs;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It sets the duration in device-specific unit of the Timer pulse.
     */
    PropertyI64 timerDurationRaw;
    /// \brief Sets the duration (in microseconds) of the delay to apply at the reception of a trigger before starting the Timer.
    /**
     *  Sets the duration (in microseconds) of the delay to apply at the reception of a trigger before starting the Timer.
     */
    PropertyF timerDelay;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. This feature sets the duration (in microseconds) of the delay to apply after the reception of a trigger before starting the Timer.
     */
    PropertyF timerDelayAbs;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It sets the duration in device-specific unit of the delay to apply after the reception of a trigger before starting the Timer.
     */
    PropertyI64 timerDelayRaw;
    /// \brief Does a software reset of the selected timer and starts it.
    /**
     *  Does a software reset of the selected timer and starts it. The timer starts immediately after the reset unless a timer trigger is active.
     */
    Method timerReset;
    /// \brief Reads or writes the current value (in microseconds) of the selected Timer.
    /**
     *  Reads or writes the current value (in microseconds) of the selected Timer.
     */
    PropertyF timerValue;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It returns the current value (in microseconds) of the selected Timer.
     */
    PropertyF timerValueAbs;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. This feature is used to read the current value in device-specific unit of the selected Timer.
     */
    PropertyI64 timerValueRaw;
    /// \brief Returns the current status of the Timer.
    /**
     *  Returns the current status of the Timer.
     */
    PropertyI64 timerStatus;
    /// \brief Selects the source of the trigger to start the Timer.
    /**
     *  Selects the source of the trigger to start the Timer.
     */
    PropertyI64 timerTriggerSource;
    /// \brief Selects the activation mode of the trigger to start the Timer.
    /**
     *  Selects the activation mode of the trigger to start the Timer.
     */
    PropertyI64 timerTriggerActivation;
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
        eventCounter1Start(),
        eventCounter1StartTimestamp(),
        eventCounter1StartFrameID(),
        eventCounter2Start(),
        eventCounter2StartTimestamp(),
        eventCounter2StartFrameID(),
        eventCounter1End(),
        eventCounter1EndTimestamp(),
        eventCounter1EndFrameID(),
        eventCounter2End(),
        eventCounter2EndTimestamp(),
        eventCounter2EndFrameID(),
        eventTimer1Start(),
        eventTimer1StartTimestamp(),
        eventTimer1StartFrameID(),
        eventTimer2Start(),
        eventTimer2StartTimestamp(),
        eventTimer2StartFrameID(),
        eventTimer1End(),
        eventTimer1EndTimestamp(),
        eventTimer1EndFrameID(),
        eventTimer2End(),
        eventTimer2EndTimestamp(),
        eventTimer2EndFrameID(),
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
        locator.bindComponent( eventCounter1Start, "EventCounter1Start" );
        locator.bindComponent( eventCounter1StartTimestamp, "EventCounter1StartTimestamp" );
        locator.bindComponent( eventCounter1StartFrameID, "EventCounter1StartFrameID" );
        locator.bindComponent( eventCounter2Start, "EventCounter2Start" );
        locator.bindComponent( eventCounter2StartTimestamp, "EventCounter2StartTimestamp" );
        locator.bindComponent( eventCounter2StartFrameID, "EventCounter2StartFrameID" );
        locator.bindComponent( eventCounter1End, "EventCounter1End" );
        locator.bindComponent( eventCounter1EndTimestamp, "EventCounter1EndTimestamp" );
        locator.bindComponent( eventCounter1EndFrameID, "EventCounter1EndFrameID" );
        locator.bindComponent( eventCounter2End, "EventCounter2End" );
        locator.bindComponent( eventCounter2EndTimestamp, "EventCounter2EndTimestamp" );
        locator.bindComponent( eventCounter2EndFrameID, "EventCounter2EndFrameID" );
        locator.bindComponent( eventTimer1Start, "EventTimer1Start" );
        locator.bindComponent( eventTimer1StartTimestamp, "EventTimer1StartTimestamp" );
        locator.bindComponent( eventTimer1StartFrameID, "EventTimer1StartFrameID" );
        locator.bindComponent( eventTimer2Start, "EventTimer2Start" );
        locator.bindComponent( eventTimer2StartTimestamp, "EventTimer2StartTimestamp" );
        locator.bindComponent( eventTimer2StartFrameID, "EventTimer2StartFrameID" );
        locator.bindComponent( eventTimer1End, "EventTimer1End" );
        locator.bindComponent( eventTimer1EndTimestamp, "EventTimer1EndTimestamp" );
        locator.bindComponent( eventTimer1EndFrameID, "EventTimer1EndFrameID" );
        locator.bindComponent( eventTimer2End, "EventTimer2End" );
        locator.bindComponent( eventTimer2EndTimestamp, "EventTimer2EndTimestamp" );
        locator.bindComponent( eventTimer2EndFrameID, "EventTimer2EndFrameID" );
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
        locator.bindComponent( eventError, "EventError" );
        locator.bindComponent( eventErrorTimestamp, "EventErrorTimestamp" );
        locator.bindComponent( eventErrorFrameID, "EventErrorFrameID" );
        locator.bindComponent( eventErrorCode, "EventErrorCode" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief Selects which Event to signal to the host application.
    /**
     *  Selects which Event to signal to the host application.
     */
    PropertyI64 eventSelector;
    /// \brief Activate or deactivate the notification to the host application of the occurrence of the selected Event.
    /**
     *  Activate or deactivate the notification to the host application of the occurrence of the selected Event.
     */
    PropertyI64 eventNotification;
    /// \brief Returns the unique Identifier of the Acquisition Trigger type of Event.
    /**
     *  Returns the unique Identifier of the Acquisition Trigger type of Event.
     */
    PropertyI64 eventAcquisitionTrigger;
    /// \brief Returns the Timestamp of the Acquisition Trigger Event.
    /**
     *  Returns the Timestamp of the Acquisition Trigger Event.
     */
    PropertyI64 eventAcquisitionTriggerTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Acquisition Trigger Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Acquisition Trigger Event.
     */
    PropertyI64 eventAcquisitionTriggerFrameID;
    /// \brief Returns the unique Identifier of the Acquisition Start type of Event.
    /**
     *  Returns the unique Identifier of the Acquisition Start type of Event.
     */
    PropertyI64 eventAcquisitionStart;
    /// \brief Returns the Timestamp of the Acquisition Start Event.
    /**
     *  Returns the Timestamp of the Acquisition Start Event.
     */
    PropertyI64 eventAcquisitionStartTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Acquisition Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Acquisition Start Event.
     */
    PropertyI64 eventAcquisitionStartFrameID;
    /// \brief Returns the unique Identifier of the Acquisition End type of Event.
    /**
     *  Returns the unique Identifier of the Acquisition End type of Event.
     */
    PropertyI64 eventAcquisitionEnd;
    /// \brief Returns the Timestamp of the Acquisition End Event.
    /**
     *  Returns the Timestamp of the Acquisition End Event.
     */
    PropertyI64 eventAcquisitionEndTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Acquisition End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Acquisition End Event.
     */
    PropertyI64 eventAcquisitionEndFrameID;
    /// \brief Returns the unique Identifier of the Acquisition Transfer Start type of Event.
    /**
     *  Returns the unique Identifier of the Acquisition Transfer Start type of Event.
     */
    PropertyI64 eventAcquisitionTransferStart;
    /// \brief Returns the Timestamp of the Acquisition Transfer Start Event.
    /**
     *  Returns the Timestamp of the Acquisition Transfer Start Event.
     */
    PropertyI64 eventAcquisitionTransferStartTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Acquisition Transfer Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Acquisition Transfer Start Event.
     */
    PropertyI64 eventAcquisitionTransferStartFrameID;
    /// \brief Returns the unique Identifier of the Acquisition Transfer End type of Event.
    /**
     *  Returns the unique Identifier of the Acquisition Transfer End type of Event.
     */
    PropertyI64 eventAcquisitionTransferEnd;
    /// \brief Returns the Timestamp of the Acquisition Transfer End Event.
    /**
     *  Returns the Timestamp of the Acquisition Transfer End Event.
     */
    PropertyI64 eventAcquisitionTransferEndTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Acquisition Transfer End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Acquisition Transfer End Event.
     */
    PropertyI64 eventAcquisitionTransferEndFrameID;
    /// \brief Returns the unique Identifier of the Acquisition Error type of Event.
    /**
     *  Returns the unique Identifier of the Acquisition Error type of Event.
     */
    PropertyI64 eventAcquisitionError;
    /// \brief Returns the Timestamp of the Acquisition Error Event.
    /**
     *  Returns the Timestamp of the Acquisition Error Event.
     */
    PropertyI64 eventAcquisitionErrorTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Acquisition Error Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Acquisition Error Event.
     */
    PropertyI64 eventAcquisitionErrorFrameID;
    /// \brief Returns the unique Identifier of the FrameTrigger type of Event.
    /**
     *  Returns the unique Identifier of the FrameTrigger type of Event. It can be used to register a callback function to be notified of the event occurrence. Its value uniquely identifies the type event received.
     */
    PropertyI64 eventFrameTrigger;
    /// \brief Returns the Timestamp of the AcquisitionTrigger Event.
    /**
     *  Returns the Timestamp of the AcquisitionTrigger Event. It can be used to determine precisely when the event occured.
     */
    PropertyI64 eventFrameTriggerTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the FrameTrigger Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the FrameTrigger Event.
     */
    PropertyI64 eventFrameTriggerFrameID;
    /// \brief Returns the unique Identifier of the Frame Start type of Event.
    /**
     *  Returns the unique Identifier of the Frame Start type of Event.
     */
    PropertyI64 eventFrameStart;
    /// \brief Returns the Timestamp of the Frame Start Event.
    /**
     *  Returns the Timestamp of the Frame Start Event.
     */
    PropertyI64 eventFrameStartTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Frame Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Frame Start Event.
     */
    PropertyI64 eventFrameStartFrameID;
    /// \brief Returns the unique Identifier of the Frame End type of Event.
    /**
     *  Returns the unique Identifier of the Frame End type of Event.
     */
    PropertyI64 eventFrameEnd;
    /// \brief Returns the Timestamp of the Frame End Event.
    /**
     *  Returns the Timestamp of the Frame End Event.
     */
    PropertyI64 eventFrameEndTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Frame End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Frame End Event.
     */
    PropertyI64 eventFrameEndFrameID;
    /// \brief Returns the unique Identifier of the Frame Burst Start type of Event.
    /**
     *  Returns the unique Identifier of the Frame Burst Start type of Event.
     */
    PropertyI64 eventFrameBurstStart;
    /// \brief Returns the Timestamp of the Frame Burst Start Event.
    /**
     *  Returns the Timestamp of the Frame Burst Start Event.
     */
    PropertyI64 eventFrameBurstStartTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Frame Burst Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Frame Burst Start Event.
     */
    PropertyI64 eventFrameBurstStartFrameID;
    /// \brief Returns the unique Identifier of the Frame Burst End type of Event.
    /**
     *  Returns the unique Identifier of the Frame Burst End type of Event.
     */
    PropertyI64 eventFrameBurstEnd;
    /// \brief Returns the Timestamp of the Frame Burst End Event.
    /**
     *  Returns the Timestamp of the Frame Burst End Event.
     */
    PropertyI64 eventFrameBurstEndTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Frame Burst End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Frame Burst End Event.
     */
    PropertyI64 eventFrameBurstEndFrameID;
    /// \brief Returns the unique Identifier of the Frame Transfer Start type of Event.
    /**
     *  Returns the unique Identifier of the Frame Transfer Start type of Event.
     */
    PropertyI64 eventFrameTransferStart;
    /// \brief Returns the Timestamp of the Frame Transfer Start Event.
    /**
     *  Returns the Timestamp of the Frame Transfer Start Event.
     */
    PropertyI64 eventFrameTransferStartTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Frame Transfer Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Frame Transfer Start Event.
     */
    PropertyI64 eventFrameTransferStartFrameID;
    /// \brief Returns the unique Identifier of the Frame Transfer End type of Event.
    /**
     *  Returns the unique Identifier of the Frame Transfer End type of Event.
     */
    PropertyI64 eventFrameTransferEnd;
    /// \brief Returns the Timestamp of the Frame Transfer End Event.
    /**
     *  Returns the Timestamp of the Frame Transfer End Event.
     */
    PropertyI64 eventFrameTransferEndTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Frame Transfer End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Frame Transfer End Event.
     */
    PropertyI64 eventFrameTransferEndFrameID;
    /// \brief Returns the unique Identifier of the Exposure Start type of Event.
    /**
     *  Returns the unique Identifier of the Exposure Start type of Event.
     */
    PropertyI64 eventExposureStart;
    /// \brief Returns the Timestamp of the Exposure Start Event.
    /**
     *  Returns the Timestamp of the Exposure Start Event.
     */
    PropertyI64 eventExposureStartTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Exposure Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Exposure Start Event.
     */
    PropertyI64 eventExposureStartFrameID;
    /// \brief Returns the unique identifier of the ExposureEnd type of Event.
    /**
     *  Returns the unique identifier of the ExposureEnd type of Event. This feature can be used to register a callback function to be notified of the event occurrence. Its value uniquely identifies the type of event that will be received.
     */
    PropertyI64 eventExposureEnd;
    /// \brief Returns the Timestamp of the ExposureEnd Event.
    /**
     *  Returns the Timestamp of the ExposureEnd Event. It can be used to determine precisely when the event occured.
     */
    PropertyI64 eventExposureEndTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the ExposureEnd Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the ExposureEnd Event.
     */
    PropertyI64 eventExposureEndFrameID;
    /// \brief Returns the unique Identifier of the Counter 1 Start type of Event.
    /**
     *  Returns the unique Identifier of the Counter 1 Start type of Event.
     */
    PropertyI64 eventCounter1Start;
    /// \brief Returns the Timestamp of the Counter 1 Start Event.
    /**
     *  Returns the Timestamp of the Counter 1 Start Event.
     */
    PropertyI64 eventCounter1StartTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Counter 1 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 1 Start Event.
     */
    PropertyI64 eventCounter1StartFrameID;
    /// \brief Returns the unique Identifier of the Counter 2 Start type of Event.
    /**
     *  Returns the unique Identifier of the Counter 2 Start type of Event.
     */
    PropertyI64 eventCounter2Start;
    /// \brief Returns the Timestamp of the Counter 2 Start Event.
    /**
     *  Returns the Timestamp of the Counter 2 Start Event.
     */
    PropertyI64 eventCounter2StartTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Counter 2 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 2 Start Event.
     */
    PropertyI64 eventCounter2StartFrameID;
    /// \brief Returns the unique Identifier of the Counter 1 End type of Event.
    /**
     *  Returns the unique Identifier of the Counter 1 End type of Event.
     */
    PropertyI64 eventCounter1End;
    /// \brief Returns the Timestamp of the Counter 1 End Event.
    /**
     *  Returns the Timestamp of the Counter 1 End Event.
     */
    PropertyI64 eventCounter1EndTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Counter 1 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 1 End Event.
     */
    PropertyI64 eventCounter1EndFrameID;
    /// \brief Returns the unique Identifier of the Counter 2 End type of Event.
    /**
     *  Returns the unique Identifier of the Counter 2 End type of Event.
     */
    PropertyI64 eventCounter2End;
    /// \brief Returns the Timestamp of the Counter 2 End Event.
    /**
     *  Returns the Timestamp of the Counter 2 End Event.
     */
    PropertyI64 eventCounter2EndTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Counter 2 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Counter 2 End Event.
     */
    PropertyI64 eventCounter2EndFrameID;
    /// \brief Returns the unique Identifier of the Timer 1 Start type of Event.
    /**
     *  Returns the unique Identifier of the Timer 1 Start type of Event.
     */
    PropertyI64 eventTimer1Start;
    /// \brief Returns the Timestamp of the Timer 1 Start Event.
    /**
     *  Returns the Timestamp of the Timer 1 Start Event.
     */
    PropertyI64 eventTimer1StartTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Timer 1 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 1 Start Event.
     */
    PropertyI64 eventTimer1StartFrameID;
    /// \brief Returns the unique Identifier of the Timer 2 Start type of Event.
    /**
     *  Returns the unique Identifier of the Timer 2 Start type of Event.
     */
    PropertyI64 eventTimer2Start;
    /// \brief Returns the Timestamp of the Timer 2 Start Event.
    /**
     *  Returns the Timestamp of the Timer 2 Start Event.
     */
    PropertyI64 eventTimer2StartTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Timer 2 Start Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 2 Start Event.
     */
    PropertyI64 eventTimer2StartFrameID;
    /// \brief Returns the unique Identifier of the Timer 1 End type of Event.
    /**
     *  Returns the unique Identifier of the Timer 1 End type of Event.
     */
    PropertyI64 eventTimer1End;
    /// \brief Returns the Timestamp of the Timer 1 End Event.
    /**
     *  Returns the Timestamp of the Timer 1 End Event.
     */
    PropertyI64 eventTimer1EndTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Timer 1 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 1 End Event.
     */
    PropertyI64 eventTimer1EndFrameID;
    /// \brief Returns the unique Identifier of the Timer 2 End type of Event.
    /**
     *  Returns the unique Identifier of the Timer 2 End type of Event.
     */
    PropertyI64 eventTimer2End;
    /// \brief Returns the Timestamp of the Timer 2 End Event.
    /**
     *  Returns the Timestamp of the Timer 2 End Event.
     */
    PropertyI64 eventTimer2EndTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Timer 2 End Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Timer 2 End Event.
     */
    PropertyI64 eventTimer2EndFrameID;
    /// \brief Returns the unique Identifier of the Line 0 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 0 Rising Edge type of Event.
     */
    PropertyI64 eventLine0RisingEdge;
    /// \brief Returns the Timestamp of the Line 0 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 0 Rising Edge Event.
     */
    PropertyI64 eventLine0RisingEdgeTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Line 0 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 0 Rising Edge Event.
     */
    PropertyI64 eventLine0RisingEdgeFrameID;
    /// \brief Returns the unique Identifier of the Line 1 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 1 Rising Edge type of Event.
     */
    PropertyI64 eventLine1RisingEdge;
    /// \brief Returns the Timestamp of the Line 1 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 1 Rising Edge Event.
     */
    PropertyI64 eventLine1RisingEdgeTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Line 1 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 1 Rising Edge Event.
     */
    PropertyI64 eventLine1RisingEdgeFrameID;
    /// \brief Returns the unique Identifier of the Line 2 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 2 Rising Edge type of Event.
     */
    PropertyI64 eventLine2RisingEdge;
    /// \brief Returns the Timestamp of the Line 2 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 2 Rising Edge Event.
     */
    PropertyI64 eventLine2RisingEdgeTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Line 2 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 2 Rising Edge Event.
     */
    PropertyI64 eventLine2RisingEdgeFrameID;
    /// \brief Returns the unique Identifier of the Line 3 Rising Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 3 Rising Edge type of Event.
     */
    PropertyI64 eventLine3RisingEdge;
    /// \brief Returns the Timestamp of the Line 3 Rising Edge Event.
    /**
     *  Returns the Timestamp of the Line 3 Rising Edge Event.
     */
    PropertyI64 eventLine3RisingEdgeTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Line 3 Rising Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 3 Rising Edge Event.
     */
    PropertyI64 eventLine3RisingEdgeFrameID;
    /// \brief Returns the unique Identifier of the Line 0 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 0 Falling Edge type of Event.
     */
    PropertyI64 eventLine0FallingEdge;
    /// \brief Returns the Timestamp of the Line 0 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 0 Falling Edge Event.
     */
    PropertyI64 eventLine0FallingEdgeTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Line 0 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 0 Falling Edge Event.
     */
    PropertyI64 eventLine0FallingEdgeFrameID;
    /// \brief Returns the unique Identifier of the Line 1 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 1 Falling Edge type of Event.
     */
    PropertyI64 eventLine1FallingEdge;
    /// \brief Returns the Timestamp of the Line 1 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 1 Falling Edge Event.
     */
    PropertyI64 eventLine1FallingEdgeTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Line 1 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 1 Falling Edge Event.
     */
    PropertyI64 eventLine1FallingEdgeFrameID;
    /// \brief Returns the unique Identifier of the Line 2 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 2 Falling Edge type of Event.
     */
    PropertyI64 eventLine2FallingEdge;
    /// \brief Returns the Timestamp of the Line 2 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 2 Falling Edge Event.
     */
    PropertyI64 eventLine2FallingEdgeTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Line 2 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 2 Falling Edge Event.
     */
    PropertyI64 eventLine2FallingEdgeFrameID;
    /// \brief Returns the unique Identifier of the Line 3 Falling Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 3 Falling Edge type of Event.
     */
    PropertyI64 eventLine3FallingEdge;
    /// \brief Returns the Timestamp of the Line 3 Falling Edge Event.
    /**
     *  Returns the Timestamp of the Line 3 Falling Edge Event.
     */
    PropertyI64 eventLine3FallingEdgeTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Line 3 Falling Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 3 Falling Edge Event.
     */
    PropertyI64 eventLine3FallingEdgeFrameID;
    /// \brief Returns the unique Identifier of the Line 0 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 0 Any Edge type of Event.
     */
    PropertyI64 eventLine0AnyEdge;
    /// \brief Returns the Timestamp of the Line 0 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 0 Any Edge Event.
     */
    PropertyI64 eventLine0AnyEdgeTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Line 0 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 0 Any Edge Event.
     */
    PropertyI64 eventLine0AnyEdgeFrameID;
    /// \brief Returns the unique Identifier of the Line 1 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 1 Any Edge type of Event.
     */
    PropertyI64 eventLine1AnyEdge;
    /// \brief Returns the Timestamp of the Line 1 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 1 Any Edge Event.
     */
    PropertyI64 eventLine1AnyEdgeTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Line 1 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 1 Any Edge Event.
     */
    PropertyI64 eventLine1AnyEdgeFrameID;
    /// \brief Returns the unique Identifier of the Line 2 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 2 Any Edge type of Event.
     */
    PropertyI64 eventLine2AnyEdge;
    /// \brief Returns the Timestamp of the Line 2 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 2 Any Edge Event.
     */
    PropertyI64 eventLine2AnyEdgeTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Line 2 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 2 Any Edge Event.
     */
    PropertyI64 eventLine2AnyEdgeFrameID;
    /// \brief Returns the unique Identifier of the Line 3 Any Edge type of Event.
    /**
     *  Returns the unique Identifier of the Line 3 Any Edge type of Event.
     */
    PropertyI64 eventLine3AnyEdge;
    /// \brief Returns the Timestamp of the Line 3 Any Edge Event.
    /**
     *  Returns the Timestamp of the Line 3 Any Edge Event.
     */
    PropertyI64 eventLine3AnyEdgeTimestamp;
    /// \brief Returns the unique Identifier of the Frame (or image) that generated the Line 3 Any Edge Event.
    /**
     *  Returns the unique Identifier of the Frame (or image) that generated the Line 3 Any Edge Event.
     */
    PropertyI64 eventLine3AnyEdgeFrameID;
    /// \brief Returns the unique identifier of the Error type of Event.
    /**
     *  Returns the unique identifier of the Error type of Event. It can be used to register a callback function to be notified of the Error event occurrence. Its value uniquely identifies that the event received was an Error.
     */
    PropertyI64 eventError;
    /// \brief Returns the Timestamp of the Error Event.
    /**
     *  Returns the Timestamp of the Error Event. It can be used to determine when the event occured.
     */
    PropertyI64 eventErrorTimestamp;
    /// \brief If applicable, returns the unique Identifier of the Frame (or image) that generated the Error Event.
    /**
     *  If applicable, returns the unique Identifier of the Frame (or image) that generated the Error Event.
     */
    PropertyI64 eventErrorFrameID;
    /// \brief Returns an error code for the error(s) that happened.
    /**
     *  Returns an error code for the error(s) that happened.
     */
    PropertyI64 eventErrorCode;
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
        gainAbs(),
        gainAuto(),
        gainAutoBalance(),
        blackLevelSelector(),
        blackLevel(),
        blackLevelAbs(),
        blackLevelRaw(),
        blackLevelAuto(),
        blackLevelAutoBalance(),
        whiteClipSelector(),
        whiteClip(),
        whiteClipAbs(),
        whiteClipRaw(),
        balanceRatioSelector(),
        balanceRatio(),
        balanceRatioAbs(),
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
        locator.bindComponent( gainAbs, "GainAbs" );
        locator.bindComponent( gainAuto, "GainAuto" );
        locator.bindComponent( gainAutoBalance, "GainAutoBalance" );
        locator.bindComponent( blackLevelSelector, "BlackLevelSelector" );
        locator.bindComponent( blackLevel, "BlackLevel" );
        if( !blackLevel.isValid() )
        {
            locator.bindComponent( blackLevel, "BlackLevelAbs" );
        }
        locator.bindComponent( blackLevelAbs, "BlackLevelAbs" );
        locator.bindComponent( blackLevelRaw, "BlackLevelRaw" );
        locator.bindComponent( blackLevelAuto, "BlackLevelAuto" );
        locator.bindComponent( blackLevelAutoBalance, "BlackLevelAutoBalance" );
        locator.bindComponent( whiteClipSelector, "WhiteClipSelector" );
        locator.bindComponent( whiteClip, "WhiteClip" );
        if( !whiteClip.isValid() )
        {
            locator.bindComponent( whiteClip, "WhiteClipAbs" );
        }
        locator.bindComponent( whiteClipAbs, "WhiteClipAbs" );
        locator.bindComponent( whiteClipRaw, "WhiteClipRaw" );
        locator.bindComponent( balanceRatioSelector, "BalanceRatioSelector" );
        locator.bindComponent( balanceRatio, "BalanceRatio" );
        if( !balanceRatio.isValid() )
        {
            locator.bindComponent( balanceRatio, "BalanceRatioAbs" );
        }
        locator.bindComponent( balanceRatioAbs, "BalanceRatioAbs" );
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
    /// \brief Selects which Gain is controlled by the various Gain features.
    /**
     *  Selects which Gain is controlled by the various Gain features.
     */
    PropertyI64 gainSelector;
    /// \brief Controls the selected gain as an absolute physical value.
    /**
     *  Controls the selected gain as an absolute physical value. This is an amplification factor applied to the video signal.
     */
    PropertyF gain;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It controls the selected gain as a raw integer value. This is an amplification factor applied to the video signal.
     */
    PropertyI64 gainRaw;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. This feature controls the selected gain as an absolute physical value. This is an amplification factor applied to the video signal.
     */
    PropertyF gainAbs;
    /// \brief Sets the automatic gain control (AGC) mode.
    /**
     *  Sets the automatic gain control (AGC) mode. The exact algorithm used to implement AGC is device-specific.
     */
    PropertyI64 gainAuto;
    /// \brief Sets the mode for automatic gain balancing between the sensor color channels or taps.
    /**
     *  Sets the mode for automatic gain balancing between the sensor color channels or taps. The gain coefficients of each channel or tap are adjusted so they are matched.
     */
    PropertyI64 gainAutoBalance;
    /// \brief Selects which Black Level is controlled by the various Black Level features.
    /**
     *  Selects which Black Level is controlled by the various Black Level features.
     */
    PropertyI64 blackLevelSelector;
    /// \brief Controls the analog black level as an absolute physical value.
    /**
     *  Controls the analog black level as an absolute physical value. This represents a DC offset applied to the video signal.
     */
    PropertyF blackLevel;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. This feature controls the analog black level as an absolute physical value. This represents a DC offset applied to the video signal.
     */
    PropertyF blackLevelAbs;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It controls the analog black level as a raw integer value. This represents a DC offset applied to the video signal.
     */
    PropertyI64 blackLevelRaw;
    /// \brief Controls the mode for automatic black level adjustment.
    /**
     *  Controls the mode for automatic black level adjustment. The exact algorithm used to implement this adjustment is device-specific.
     */
    PropertyI64 blackLevelAuto;
    /// \brief Controls the mode for automatic black level balancing between the sensor color channels or taps.
    /**
     *  Controls the mode for automatic black level balancing between the sensor color channels or taps. The black level coefficients of each channel are adjusted so they are matched.
     */
    PropertyI64 blackLevelAutoBalance;
    /// \brief Selects which White Clip to control.
    /**
     *  Selects which White Clip to control.
     */
    PropertyI64 whiteClipSelector;
    /// \brief Controls the maximal intensity taken by the video signal before being clipped as an absolute physical value.
    /**
     *  Controls the maximal intensity taken by the video signal before being clipped as an absolute physical value. The video signal will never exceed the white clipping point: it will saturate at that level.
     */
    PropertyF whiteClip;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. Controls the maximal intensity taken by the video signal before being clipped as an absolute physical value. The video signal will never exceed the white clipping point: it will saturate at that level.
     */
    PropertyF whiteClipAbs;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. Controls the maximal intensity taken by the video signal before being clipped as a raw integer value. The video signal will never exceed the white clipping point: it will saturate at that level.
     */
    PropertyI64 whiteClipRaw;
    /// \brief Selects which Balance ratio to control.
    /**
     *  Selects which Balance ratio to control.
     */
    PropertyI64 balanceRatioSelector;
    /// \brief Controls ratio of the selected color component to a reference color component.
    /**
     *  Controls ratio of the selected color component to a reference color component. It is used for white balancing.
     */
    PropertyF balanceRatio;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. It controls the ratio of the selected color component to a reference color component. This feature is used for white balancing.
     */
    PropertyF balanceRatioAbs;
    /// \brief Controls the mode for automatic white balancing between the color channels.
    /**
     *  Controls the mode for automatic white balancing between the color channels. The white balancing ratios are automatically adjusted.
     */
    PropertyI64 balanceWhiteAuto;
    /// \brief Controls the gamma correction of pixel intensity.
    /**
     *  Controls the gamma correction of pixel intensity. This is typically used to compensate for non-linearity of the display system (such as CRT).
     */
    PropertyF gamma;
    /// \brief The number of frames that the AEC must skip before updating the exposure register
    /**
     *  The number of frames that the AEC must skip before updating the exposure register
     */
    PropertyI64 mvGainAutoDelayImages;
    /// \brief The upper limit of the gain in auto gain mode
    /**
     *  The upper limit of the gain in auto gain mode
     */
    PropertyF mvGainAutoUpperLimit;
    /// \brief The lower limit of the gain in auto gain mode
    /**
     *  The lower limit of the gain in auto gain mode
     */
    PropertyF mvGainAutoLowerLimit;
    /// \brief Determines the increment or decrement size of gain value from frame to frame.
    /**
     *  Determines the increment or decrement size of gain value from frame to frame.
     */
    PropertyI64 mvGainAutoSpeed;
    /// \brief Common desired average grey value (in percent) used for Auto Gain Control(AGC) and Auto Exposure Control(AEC).
    /**
     *  Common desired average grey value (in percent) used for Auto Gain Control(AGC) and Auto Exposure Control(AEC).
     */
    PropertyI64 mvGainAutoAverageGrey;
    /// \brief Highlight auto control AOI to check AOI settings. Switch off for normal operation.
    /**
     *  Highlight auto control AOI to check AOI settings. Switch off for normal operation.
     */
    PropertyI64 mvGainAutoHighlightAOI;
    /// \brief Common AutoControl AOI used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balancing.
    /**
     *  Common AutoControl AOI used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balancing.
     */
    PropertyI64 mvGainAutoAOIMode;
    /// \brief Common AOI X-Offset used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI X-Offset used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvGainAutoOffsetX;
    /// \brief Common AOI Y-Offset used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI Y-Offset used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvGainAutoOffsetY;
    /// \brief Common AOI Width used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI Width used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvGainAutoWidth;
    /// \brief Common AOI Height used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI Height used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvGainAutoHeight;
    /// \brief Selects the common auto mode for gain and exposure.
    /**
     *  Selects the common auto mode for gain and exposure.
     */
    PropertyI64 mvGainAutoMode;
    /// \brief Common AutoControl AOI used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AutoControl AOI used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvBalanceWhiteAutoAOIMode;
    /// \brief Common AOI X-Offset used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI XOffset used for auto gain control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvBalanceWhiteAutoOffsetX;
    /// \brief Common AOI Y-Offset used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI Y-Offset used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvBalanceWhiteAutoOffsetY;
    /// \brief Common AOI Width used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI Width used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvBalanceWhiteAutoWidth;
    /// \brief Common AOI Height used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
    /**
     *  Common AOI Height used for Auto Gain Control(AGC), Auto Exposure Control(AEC) and Auto White Balance(AWB).
     */
    PropertyI64 mvBalanceWhiteAutoHeight;
    /// \brief Sets the voltage in millivolt.
    /**
     *  Sets the voltage in millivolt.
     */
    PropertyI64 mvVCAL;
    /// \brief Sets the voltage in millivolt.
    /**
     *  Sets the voltage in millivolt.
     */
    PropertyI64 mvVBLACK;
    /// \brief Sets the voltage in millivolt.
    /**
     *  Sets the voltage in millivolt.
     */
    PropertyI64 mvVOFFSET;
    /// \brief Makes the image brighter.
    /**
     *  Makes the image brighter.
     */
    PropertyI64 mvLowLight;
    /// \brief Adapt gain. Gain value of the sensor may differ from sensor to sensor.
    /**
     *  Adapt gain. Gain value of the sensor may differ from sensor to sensor.
     */
    PropertyI64 mvADCGain;
    /// \brief Adjusting this value will result in better column CDS (correlated double sampling) which will remove the column FPN from the image.
    /**
     *  Adjusting this value will result in better column CDS (correlated double sampling) which will remove the column FPN from the image.
     */
    PropertyI64 mvVRamp;
    /// \brief Controls the knee point between linear response and logarithmic response.
    /**
     *  Controls the knee point between linear response and logarithmic response.
     */
    PropertyI64 mvLinearLogarithmicMode;
    /// \brief Used for fine tuning of the brightness of the sensor.
    /**
     *  Used for fine tuning of the brightness of the sensor.
     */
    PropertyI64 mvDigitalGainOffset;
    /// \brief Saves the calibration data to non-volatile memory.
    /**
     *  Saves the calibration data to non-volatile memory.
     */
    Method mvSaveCalibrationData;
    PYTHON_ONLY( %mutable; )
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
    /// \brief Custom text.
    /**
     *  Custom text.
     */
    PropertyS mvCustomText;
    /// \brief Function to write custom data.
    /**
     *  Function to write custom data.
     */
    Method mvWriteCustomData;
    /// \brief Function to read custom data.
    /**
     *  Function to read custom data.
     */
    Method mvReadCustomData;
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
    /// \brief Selects which LUT to control.
    /**
     *  Selects which LUT to control.
     */
    PropertyI64 LUTSelector;
    /// \brief Activates the selected LUT.
    /**
     *  Activates the selected LUT.
     */
    PropertyIBoolean LUTEnable;
    /// \brief Control the index (offset) of the coefficient to access in the selected LUT.
    /**
     *  Control the index (offset) of the coefficient to access in the selected LUT.
     */
    PropertyI64 LUTIndex;
    /// \brief Returns the Value at entry LUTIndex of the LUT selected by LUTSelector.
    /**
     *  Returns the Value at entry LUTIndex of the LUT selected by LUTSelector.
     */
    PropertyI64 LUTValue;
    /// \brief Accesses all the LUT coefficients in a single access without using individual LUTIndex.
    /**
     *  Accesses all the LUT coefficients in a single access without using individual LUTIndex.
     */
    PropertyS LUTValueAll;
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
    /// \brief Controls if the sequencer mechanism is active.
    /**
     *  Controls if the sequencer mechanism is active.
     */
    PropertyI64 sequencerMode;
    /// \brief Controls if the sequencer configuration mode is active.
    /**
     *  Controls if the sequencer configuration mode is active.
     */
    PropertyI64 sequencerConfigurationMode;
    /// \brief Selects which sequencer features to control.
    /**
     *  Selects which sequencer features to control.
     */
    PropertyI64 sequencerFeatureSelector;
    /// \brief Enables the selected feature and make it active in all the sequencer sets.
    /**
     *  Enables the selected feature and make it active in all the sequencer sets.
     */
    PropertyIBoolean sequencerFeatureEnable;
    /// \brief Selects the sequencer set to which further feature settings applies.
    /**
     *  Selects the sequencer set to which further feature settings applies.
     */
    PropertyI64 sequencerSetSelector;
    /// \brief Saves the current device state to the sequencer set selected by the SequencerSetSelector.
    /**
     *  Saves the current device state to the sequencer set selected by the SequencerSetSelector.
     */
    Method sequencerSetSave;
    /// \brief Loads the sequencer set selected by SequencerSetSelector in the device.
    /**
     *  Loads the sequencer set selected by SequencerSetSelector in the device. Even if SequencerMode is off, this will change the device state to the configuration of the selected set.
     */
    Method sequencerSetLoad;
    /// \brief Contains the currently active sequencer set.
    /**
     *  Contains the currently active sequencer set.
     */
    PropertyI64 sequencerSetActive;
    /// \brief Sets the initial/start sequencer set, which is the first set used within a sequencer.
    /**
     *  Sets the initial/start sequencer set, which is the first set used within a sequencer.
     */
    PropertyI64 sequencerSetStart;
    /// \brief Selects to which branching path further path settings applies.
    /**
     *  Selects to which branching path further path settings applies.
     */
    PropertyI64 sequencerPathSelector;
    /// \brief Specifies the next sequencer set.
    /**
     *  Specifies the next sequencer set.
     */
    PropertyI64 sequencerSetNext;
    /// \brief Specifies the internal signal or physical input line to use as the sequencer trigger source.
    /**
     *  Specifies the internal signal or physical input line to use as the sequencer trigger source.
     */
    PropertyI64 sequencerTriggerSource;
    /// \brief Specifies the activation mode of the sequencer trigger.
    /**
     *  Specifies the activation mode of the sequencer trigger.
     */
    PropertyI64 sequencerTriggerActivation;
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
        gevVersionMajor(),
        gevVersionMinor(),
        gevDeviceModeIsBigEndian(),
        gevDeviceClass(),
        gevDeviceModeCharacterSet(),
        gevInterfaceSelector(),
        gevMACAddress(),
        gevSupportedOptionSelector(),
        gevSupportedOption(),
        gevSupportedIPConfigurationLLA(),
        gevSupportedIPConfigurationDHCP(),
        gevSupportedIPConfigurationPersistentIP(),
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
        gevLinkSpeed(),
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
        gevGVCPExtendedStatusCodes(),
        gevGVCPPendingAck(),
        gevGVCPHeartbeatDisable(),
        gevGVCPPendingTimeout(),
        gevPrimaryApplicationSwitchoverKey(),
        gevCCP(),
        gevPrimaryApplicationSocket(),
        gevPrimaryApplicationIPAddress(),
        gevMCPHostPort(),
        gevMCDA(),
        gevMCTT(),
        gevMCRC(),
        gevMCSP(),
        gevStreamChannelSelector(),
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
        gevManifestEntrySelector(),
        gevManifestXMLMajorVersion(),
        gevManifestXMLMinorVersion(),
        gevManifestXMLSubMinorVersion(),
        gevManifestSchemaMajorVersion(),
        gevManifestSchemaMinorVersion(),
        gevManifestPrimaryURL(),
        gevManifestSecondaryURL(),
        clConfiguration(),
        clTimeSlotsCount(),
        deviceTapGeometry(),
        mvGevSCBWControl(),
        mvGevSCBW()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( payloadSize, "PayloadSize" );
        locator.bindComponent( gevVersionMajor, "GevVersionMajor" );
        locator.bindComponent( gevVersionMinor, "GevVersionMinor" );
        locator.bindComponent( gevDeviceModeIsBigEndian, "GevDeviceModeIsBigEndian" );
        locator.bindComponent( gevDeviceClass, "GevDeviceClass" );
        locator.bindComponent( gevDeviceModeCharacterSet, "GevDeviceModeCharacterSet" );
        locator.bindComponent( gevInterfaceSelector, "GevInterfaceSelector" );
        locator.bindComponent( gevMACAddress, "GevMACAddress" );
        locator.bindComponent( gevSupportedOptionSelector, "GevSupportedOptionSelector" );
        locator.bindComponent( gevSupportedOption, "GevSupportedOption" );
        locator.bindComponent( gevSupportedIPConfigurationLLA, "GevSupportedIPConfigurationLLA" );
        locator.bindComponent( gevSupportedIPConfigurationDHCP, "GevSupportedIPConfigurationDHCP" );
        locator.bindComponent( gevSupportedIPConfigurationPersistentIP, "GevSupportedIPConfigurationPersistentIP" );
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
        locator.bindComponent( gevLinkSpeed, "GevLinkSpeed" );
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
        locator.bindComponent( gevGVCPExtendedStatusCodes, "GevGVCPExtendedStatusCodes" );
        locator.bindComponent( gevGVCPPendingAck, "GevGVCPPendingAck" );
        locator.bindComponent( gevGVCPHeartbeatDisable, "GevGVCPHeartbeatDisable" );
        locator.bindComponent( gevGVCPPendingTimeout, "GevGVCPPendingTimeout" );
        locator.bindComponent( gevPrimaryApplicationSwitchoverKey, "GevPrimaryApplicationSwitchoverKey" );
        locator.bindComponent( gevCCP, "GevCCP" );
        locator.bindComponent( gevPrimaryApplicationSocket, "GevPrimaryApplicationSocket" );
        locator.bindComponent( gevPrimaryApplicationIPAddress, "GevPrimaryApplicationIPAddress" );
        locator.bindComponent( gevMCPHostPort, "GevMCPHostPort" );
        locator.bindComponent( gevMCDA, "GevMCDA" );
        locator.bindComponent( gevMCTT, "GevMCTT" );
        locator.bindComponent( gevMCRC, "GevMCRC" );
        locator.bindComponent( gevMCSP, "GevMCSP" );
        locator.bindComponent( gevStreamChannelSelector, "GevStreamChannelSelector" );
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
        locator.bindComponent( gevManifestEntrySelector, "GevManifestEntrySelector" );
        locator.bindComponent( gevManifestXMLMajorVersion, "GevManifestXMLMajorVersion" );
        locator.bindComponent( gevManifestXMLMinorVersion, "GevManifestXMLMinorVersion" );
        locator.bindComponent( gevManifestXMLSubMinorVersion, "GevManifestXMLSubMinorVersion" );
        locator.bindComponent( gevManifestSchemaMajorVersion, "GevManifestSchemaMajorVersion" );
        locator.bindComponent( gevManifestSchemaMinorVersion, "GevManifestSchemaMinorVersion" );
        locator.bindComponent( gevManifestPrimaryURL, "GevManifestPrimaryURL" );
        locator.bindComponent( gevManifestSecondaryURL, "GevManifestSecondaryURL" );
        locator.bindComponent( clConfiguration, "ClConfiguration" );
        locator.bindComponent( clTimeSlotsCount, "ClTimeSlotsCount" );
        locator.bindComponent( deviceTapGeometry, "DeviceTapGeometry" );
        locator.bindComponent( mvGevSCBWControl, "mvGevSCBWControl" );
        locator.bindComponent( mvGevSCBW, "mvGevSCBW" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief Provides the number of bytes transferred for each image or chunk on the stream channel.
    /**
     *  Provides the number of bytes transferred for each image or chunk on the stream channel. This includes any end-of-line, end-of-frame statistics or other stamp data. This is the total size of data payload for a data block.
     */
    PropertyI64 payloadSize;
    /// \brief Major version of the specification.
    /**
     *  Major version of the specification.
     */
    PropertyI64 gevVersionMajor;
    /// \brief Minor version of the specification.
    /**
     *  Minor version of the specification.
     */
    PropertyI64 gevVersionMinor;
    /// \brief Endianess of the device registers.
    /**
     *  Endianess of the device registers.
     */
    PropertyIBoolean gevDeviceModeIsBigEndian;
    /// \brief Returns the class of the device.
    /**
     *  Returns the class of the device.
     */
    PropertyI64 gevDeviceClass;
    /// \brief Character set used by all the strings of the bootstrap registers.
    /**
     *  Character set used by all the strings of the bootstrap registers.
     */
    PropertyI64 gevDeviceModeCharacterSet;
    /// \brief Selects which logical link to control.
    /**
     *  Selects which logical link to control.
     */
    PropertyI64 gevInterfaceSelector;
    /// \brief MAC address of the logical link.
    /**
     *  MAC address of the logical link.
     */
    PropertyI64 gevMACAddress;
    /// \brief Selects the GEV option to interrogate for existing support.
    /**
     *  Selects the GEV option to interrogate for existing support.
     */
    PropertyI64 gevSupportedOptionSelector;
    /// \brief Returns if the selected GEV option is supported.
    /**
     *  Returns if the selected GEV option is supported.
     */
    PropertyIBoolean gevSupportedOption;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if Link Local Address IP configuration scheme is supported by the given network interface.
     */
    PropertyIBoolean gevSupportedIPConfigurationLLA;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if DHCP IP configuration scheme is supported by the given network interface.
     */
    PropertyIBoolean gevSupportedIPConfigurationDHCP;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if PersistentIP configuration scheme is supported by the given network interface.
     */
    PropertyIBoolean gevSupportedIPConfigurationPersistentIP;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It reports the current IP Configuration scheme. Note that this feature doesn't provision more that one simultaneous IP configuration and should not be used.
     */
    PropertyI64 gevCurrentIPConfiguration;
    /// \brief Controls whether the Link Local Address IP configuration scheme is activated on the given logical link.
    /**
     *  Controls whether the Link Local Address IP configuration scheme is activated on the given logical link.
     */
    PropertyIBoolean gevCurrentIPConfigurationLLA;
    /// \brief Controls whether the DHCP IP configuration scheme is activated on the given logical link.
    /**
     *  Controls whether the DHCP IP configuration scheme is activated on the given logical link.
     */
    PropertyIBoolean gevCurrentIPConfigurationDHCP;
    /// \brief Controls whether the PersistentIP configuration scheme is activated on the given logical link.
    /**
     *  Controls whether the PersistentIP configuration scheme is activated on the given logical link.
     */
    PropertyIBoolean gevCurrentIPConfigurationPersistentIP;
    /// \brief Reports the IP address for the given locical link.
    /**
     *  Reports the IP address for the given locical link.
     */
    PropertyI64 gevCurrentIPAddress;
    /// \brief Reports the subnet mask of the given logical link.
    /**
     *  Reports the subnet mask of the given logical link.
     */
    PropertyI64 gevCurrentSubnetMask;
    /// \brief Reports the default gateway IP address to be used on the given logical link.
    /**
     *  Reports the default gateway IP address to be used on the given logical link.
     */
    PropertyI64 gevCurrentDefaultGateway;
    /// \brief Reports the current IP configuration status.
    /**
     *  Reports the current IP configuration status.
     */
    PropertyI64 gevIPConfigurationStatus;
    /// \brief Indicates the first URL to the GenICam XML device description file.
    /**
     *  Indicates the first URL to the GenICam XML device description file. The First URL is used as the first choice by the application to retrieve the GenICam XML device description file.
     */
    PropertyS gevFirstURL;
    /// \brief Indicates the second URL to the GenICam XML device description file.
    /**
     *  Indicates the second URL to the GenICam XML device description file. This URL is an alternative if the application was unsuccessful to retrieve the device description file using the first URL.
     */
    PropertyS gevSecondURL;
    /// \brief Indicates the number of logical links supported by this device.
    /**
     *  Indicates the number of logical links supported by this device.
     */
    PropertyI64 gevNumberOfInterfaces;
    /// \brief Controls the Persistent IP address for this logical link.
    /**
     *  Controls the Persistent IP address for this logical link. It is only used when the device boots with the Persistent IP configuration scheme.
     */
    PropertyI64 gevPersistentIPAddress;
    /// \brief Controls the Persistent subnet mask associated with the Persistent IP address on this logical link.
    /**
     *  Controls the Persistent subnet mask associated with the Persistent IP address on this logical link. It is only used when the device boots with the Persistent IP configuration scheme.
     */
    PropertyI64 gevPersistentSubnetMask;
    /// \brief Controls the persistent default gateway for this logical link.
    /**
     *  Controls the persistent default gateway for this logical link. It is only used when the device boots with the Persistent IP configuration scheme.Visibility
     */
    PropertyI64 gevPersistentDefaultGateway;
    /// \brief Indicates the speed of transmission negotiated by the given logical link.
    /**
     *  Indicates the speed of transmission negotiated by the given logical link.
     */
    PropertyI64 gevLinkSpeed;
    /// \brief Indicates the number of message channels supported by this device.
    /**
     *  Indicates the number of message channels supported by this device.
     */
    PropertyI64 gevMessageChannelCount;
    /// \brief Indicates the number of stream channels supported by this device.
    /**
     *  Indicates the number of stream channels supported by this device.
     */
    PropertyI64 gevStreamChannelCount;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if the User-defined name register is supported.
     */
    PropertyIBoolean gevSupportedOptionalCommandsUserDefinedName;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if the Serial number register is supported.
     */
    PropertyIBoolean gevSupportedOptionalCommandsSerialNumber;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if the EVENTDATA_CMD and EVENTDATA_ACK are supported.
     */
    PropertyIBoolean gevSupportedOptionalCommandsEVENTDATA;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if the EVENT_CMD and EVENT_ACK are supported.
     */
    PropertyIBoolean gevSupportedOptionalCommandsEVENT;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if the PACKETRESEND_CMD is supported.
     */
    PropertyIBoolean gevSupportedOptionalCommandsPACKETRESEND;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if the WRITEMEM_CMD and WRITEMEM_ACK are supported.
     */
    PropertyIBoolean gevSupportedOptionalCommandsWRITEMEM;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. GevSupportedOption should be used instead. It indicates if the Multiple operations in a single message are supported.
     */
    PropertyIBoolean gevSupportedOptionalCommandsConcatenation;
    /// \brief Controls the current heartbeat timeout in milliseconds.
    /**
     *  Controls the current heartbeat timeout in milliseconds.
     */
    PropertyI64 gevHeartbeatTimeout;
    /// \brief Indicates the number of timestamp ticks in 1 second (frequency in Hz).
    /**
     *  Indicates the number of timestamp ticks in 1 second (frequency in Hz). If IEEE 1588 is used, this feature must return 1,000,000,000 (1 GHz).
     */
    PropertyI64 gevTimestampTickFrequency;
    /// \brief Latches the current timestamp counter into GevTimestampValue.
    /**
     *  Latches the current timestamp counter into GevTimestampValue.
     */
    Method gevTimestampControlLatch;
    /// \brief Resets the timestamp counter to 0.
    /**
     *  Resets the timestamp counter to 0. This feature is not available or as no effect when IEEE 1588 is used.
     */
    Method gevTimestampControlReset;
    /// \brief Returns the latched 64-bit value of the timestamp counter.
    /**
     *  Returns the latched 64-bit value of the timestamp counter.
     */
    PropertyI64 gevTimestampValue;
    /// \brief Indicates the maximum randomized delay the device will wait to acknowledge a discovery command.
    /**
     *  Indicates the maximum randomized delay the device will wait to acknowledge a discovery command.
     */
    PropertyI64 gevDiscoveryAckDelay;
    /// \brief Enables the generation of extended status codes.
    /**
     *  Enables the generation of extended status codes.
     */
    PropertyIBoolean gevGVCPExtendedStatusCodes;
    /// \brief Enables the generation of PENDING_ACK.
    /**
     *  Enables the generation of PENDING_ACK.
     */
    PropertyIBoolean gevGVCPPendingAck;
    /// \brief Disables the GVCP heartbeat.
    /**
     *  Disables the GVCP heartbeat.
     */
    PropertyIBoolean gevGVCPHeartbeatDisable;
    /// \brief Indicates the longest GVCP command execution time before a device returns a PENDING_ACK.
    /**
     *  Indicates the longest GVCP command execution time before a device returns a PENDING_ACK.
     */
    PropertyI64 gevGVCPPendingTimeout;
    /// \brief Controls the key to use to authenticate primary application switchover requests.
    /**
     *  Controls the key to use to authenticate primary application switchover requests.
     */
    PropertyI64 gevPrimaryApplicationSwitchoverKey;
    /// \brief Controls the device access privilege of an application.
    /**
     *  Controls the device access privilege of an application.
     */
    PropertyI64 gevCCP;
    /// \brief Returns the UDP source port of the primary application.
    /**
     *  Returns the UDP source port of the primary application.
     */
    PropertyI64 gevPrimaryApplicationSocket;
    /// \brief Returns the address of the primary application.
    /**
     *  Returns the address of the primary application.
     */
    PropertyI64 gevPrimaryApplicationIPAddress;
    /// \brief Controls the port to which the device must send messages.
    /**
     *  Controls the port to which the device must send messages. Setting this value to 0 closes the message channel.
     */
    PropertyI64 gevMCPHostPort;
    /// \brief Controls the destination IP address for the message channel.
    /**
     *  Controls the destination IP address for the message channel.
     */
    PropertyI64 gevMCDA;
    /// \brief Provides the transmission timeout value in milliseconds.
    /**
     *  Provides the transmission timeout value in milliseconds.
     */
    PropertyI64 gevMCTT;
    /// \brief Controls the number of retransmissions allowed when a message channel message times out.
    /**
     *  Controls the number of retransmissions allowed when a message channel message times out.
     */
    PropertyI64 gevMCRC;
    /// \brief This feature indicates the source port for the message channel.
    /**
     *  This feature indicates the source port for the message channel.
     */
    PropertyI64 gevMCSP;
    /// \brief Selects the stream channel to control.
    /**
     *  Selects the stream channel to control.
     */
    PropertyI64 gevStreamChannelSelector;
    /// \brief Enables the camera to continue to stream, for this stream channel, if its control channel is closed or regardless of the reception of any ICMP messages (such as destination unreachable messages).
    /**
     *  Enables the camera to continue to stream, for this stream channel, if its control channel is closed or regardless of the reception of any ICMP messages (such as destination unreachable messages).
     */
    PropertyIBoolean gevSCCFGUnconditionalStreaming;
    /// \brief Enables cameras to use the extended chunk data payload type for this stream channel.
    /**
     *  Enables cameras to use the extended chunk data payload type for this stream channel.
     */
    PropertyIBoolean gevSCCFGExtendedChunkData;
    /// \brief Reports the direction of the stream channel.
    /**
     *  Reports the direction of the stream channel.
     */
    PropertyI64 gevSCPDirection;
    /// \brief Index of the logical link to use.
    /**
     *  Index of the logical link to use.
     */
    PropertyI64 gevSCPInterfaceIndex;
    /// \brief Controls the port of the selected channel to which a GVSP transmitter must send data stream or the port from which a GVSP receiver may receive data stream.
    /**
     *  Controls the port of the selected channel to which a GVSP transmitter must send data stream or the port from which a GVSP receiver may receive data stream. Setting this value to 0 closes the stream channel.
     */
    PropertyI64 gevSCPHostPort;
    /// \brief Sends a test packet.
    /**
     *  Sends a test packet. When this feature is set, the device will fire one test packet.
     */
    PropertyIBoolean gevSCPSFireTestPacket;
    /// \brief The state of this feature is copied into the 'do not fragment' bit of IP header of each stream packet.
    /**
     *  The state of this feature is copied into the 'do not fragment' bit of IP header of each stream packet. It can be used by the application to prevent IP fragmentation of packets on the stream channel.
     */
    PropertyIBoolean gevSCPSDoNotFragment;
    /// \brief Endianess of multi-byte pixel data for this stream.
    /**
     *  Endianess of multi-byte pixel data for this stream.
     */
    PropertyIBoolean gevSCPSBigEndian;
    /// \brief Specifies the stream packet size, in bytes, to send on the selected channel for a GVSP transmitter or specifies the maximum packet size supported by a GVSP receiver.
    /**
     *  Specifies the stream packet size, in bytes, to send on the selected channel for a GVSP transmitter or specifies the maximum packet size supported by a GVSP receiver.
     */
    PropertyI64 gevSCPSPacketSize;
    /// \brief Controls the delay (in timestamp counter unit) to insert between each packet for this stream channel.
    /**
     *  Controls the delay (in timestamp counter unit) to insert between each packet for this stream channel. This can be used as a crude flow-control mechanism if the application or the network infrastructure cannot keep up with the packets coming from the device.
     */
    PropertyI64 gevSCPD;
    /// \brief Controls the destination IP address of the selected stream channel to which a GVSP transmitter must send data stream or the destination IP address from which a GVSP receiver may receive data stream.
    /**
     *  Controls the destination IP address of the selected stream channel to which a GVSP transmitter must send data stream or the destination IP address from which a GVSP receiver may receive data stream.
     */
    PropertyI64 gevSCDA;
    /// \brief Indicates the source port of the stream channel.
    /**
     *  Indicates the source port of the stream channel.
     */
    PropertyI64 gevSCSP;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. See the Device Control section for an equivalent. Selects the manifest entry to reference.
     */
    PropertyI64 gevManifestEntrySelector;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. See the Device Control section for an equivalent. Indicates the major version number of the XML file of the selected manifest entry.
     */
    PropertyI64 gevManifestXMLMajorVersion;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. See the Device Control section for an equivalent. Indicates the minor version number of the XML file of the selected manifest entry.
     */
    PropertyI64 gevManifestXMLMinorVersion;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. See the Device Control section for an equivalent. Indicates the subminor version number of the XML file of the selected manifest entry.
     */
    PropertyI64 gevManifestXMLSubMinorVersion;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. See the Device Control section for an equivalent. Indicates the major version number of the schema file of the selected manifest entry.
     */
    PropertyI64 gevManifestSchemaMajorVersion;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. See the Device Control section for an equivalent.. Indicates the minor version number of the schema file of the selected manifest entry.
     */
    PropertyI64 gevManifestSchemaMinorVersion;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. See the Device Control section for an equivalent. Indicates the first URL to the XML device description file of the selected manifest entry.
     */
    PropertyS gevManifestPrimaryURL;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. See the Device Control section for an equivalent. Indicates the second URL to the XML device description file of the selected manifest entry.
     */
    PropertyS gevManifestSecondaryURL;
    /// \brief This Camera Link specific feature describes the configuration used by the camera.
    /**
     *  This Camera Link specific feature describes the configuration used by the camera. It helps especially when a camera is capable of operation in a non-standard configuration, and when the features PixelSize, SensorDigitizationTaps, and DeviceTapGeometry do not provide enough information for interpretation of the image data provided by the camera.
     */
    PropertyI64 clConfiguration;
    /// \brief This Camera Link specific feature describes the time multiplexing of the camera link connection to transfer more than the configuration allows, in one single clock.
    /**
     *  This Camera Link specific feature describes the time multiplexing of the camera link connection to transfer more than the configuration allows, in one single clock.
     */
    PropertyI64 clTimeSlotsCount;
    /// \brief This device tap geometry feature describes the geometrical properties characterizing the taps of a camera as presented at the output of the device.
    /**
     *  This device tap geometry feature describes the geometrical properties characterizing the taps of a camera as presented at the output of the device.
     */
    PropertyI64 deviceTapGeometry;
    /// \brief Selects the bandwidth control for the selected stream channel.
    /**
     *  This enumeration selects the bandwidth control for the selected stream channel.
     */
    PropertyI64 mvGevSCBWControl;
    /// \brief Sets the stream channels max. bandwidth in KBps
    /**
     *  This value sets the stream channels max. bandwidth in KBps.
     */
    PropertyI64 mvGevSCBW;
    PYTHON_ONLY( %mutable; )
    /// \brief Calculates the effective number of payload packets (not including leader and trailer) per block of data (e.g. an image) for a GigE Vision data stream when transferring the payload type \a image.
    /**
     *  This will include all overhead introduced by the network protocol. The value will be correct for payload type image only, thus e.g. when
     *  transferring chunk data the result will not be 100 per cent accurate as then some packets will use a slightly different layout. However
     *  these differences are negligible when working in modes, where individual images are not smaller then roughly 64 by 64 pixels.
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
     *  these differences are negligible when working in modes, where individual images are not smaller then roughly 64 by 64 pixels.
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
     *  these differences are negligible when working in modes, where individual images are not smaller then roughly 64 by 64 pixels.
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
     *  these differences are negligible when working in modes, where individual images are not smaller then roughly 64 by 64 pixels.
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
     *  these differences are negligible when working in modes, where individual images are not smaller then roughly 64 by 64 pixels.
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
     *  these differences are negligible when working in modes, where individual images are not smaller then roughly 64 by 64 pixels.
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
     *  these differences are negligible when working in modes, where individual images are not smaller then roughly 64 by 64 pixels.
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
     *  these differences are negligible when working in modes, where individual images are not smaller then roughly 64 by 64 pixels.
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
        userSetDefaultSelector(),
        mvUserData()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( userSetSelector, "UserSetSelector" );
        locator.bindComponent( userSetLoad, "UserSetLoad@i" );
        locator.bindComponent( userSetSave, "UserSetSave@i" );
        locator.bindComponent( userSetDefaultSelector, "UserSetDefaultSelector" );
        locator.bindComponent( mvUserData, "mvUserData" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief Selects the feature User Set to load, save or configure.
    /**
     *  Selects the feature User Set to load, save or configure.
     */
    PropertyI64 userSetSelector;
    /// \brief Loads the User Set specified by UserSetSelector to the device and makes it active.
    /**
     *  Loads the User Set specified by UserSetSelector to the device and makes it active.
     */
    Method userSetLoad;
    /// \brief Save the User Set specified by UserSetSelector to the non-volatile memory of the device.
    /**
     *  Save the User Set specified by UserSetSelector to the non-volatile memory of the device.
     */
    Method userSetSave;
    /// \brief This feature is deprecated (See UserSetDefault).
    /**
     *  \deprecated
     *  This feature is deprecated (See UserSetDefault). Selects the feature User Set to load and make active when the device is reset.
     */
    PropertyI64 userSetDefaultSelector;
    /// \brief A register to store arbitrary user data into the devices non-volatile memory.
    /**
     *  A register to store arbitrary user data into the devices non-volatile memory
     */
    PropertyS mvUserData;
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
        chunkImage(),
        chunkOffsetX(),
        chunkOffsetY(),
        chunkWidth(),
        chunkHeight(),
        chunkPixelFormat(),
        chunkPixelDynamicRangeMin(),
        chunkPixelDynamicRangeMax(),
        chunkDynamicRangeMin(),
        chunkDynamicRangeMax(),
        chunkTimestamp(),
        chunkLineStatusAll(),
        chunkCounterSelector(),
        chunkCounterValue(),
        chunkCounter(),
        chunkTimerSelector(),
        chunkTimerValue(),
        chunkTimer(),
        chunkExposureTime(),
        chunkGainSelector(),
        chunkGain(),
        chunkBlackLevelSelector(),
        chunkBlackLevel(),
        chunkLinePitch(),
        chunkFrameID()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( chunkModeActive, "ChunkModeActive" );
        locator.bindComponent( chunkSelector, "ChunkSelector" );
        locator.bindComponent( chunkEnable, "ChunkEnable" );
        locator.bindComponent( chunkImage, "ChunkImage" );
        locator.bindComponent( chunkOffsetX, "ChunkOffsetX" );
        locator.bindComponent( chunkOffsetY, "ChunkOffsetY" );
        locator.bindComponent( chunkWidth, "ChunkWidth" );
        locator.bindComponent( chunkHeight, "ChunkHeight" );
        locator.bindComponent( chunkPixelFormat, "ChunkPixelFormat" );
        locator.bindComponent( chunkPixelDynamicRangeMin, "ChunkPixelDynamicRangeMin" );
        locator.bindComponent( chunkPixelDynamicRangeMax, "ChunkPixelDynamicRangeMax" );
        locator.bindComponent( chunkDynamicRangeMin, "ChunkDynamicRangeMin" );
        locator.bindComponent( chunkDynamicRangeMax, "ChunkDynamicRangeMax" );
        locator.bindComponent( chunkTimestamp, "ChunkTimestamp" );
        locator.bindComponent( chunkLineStatusAll, "ChunkLineStatusAll" );
        locator.bindComponent( chunkCounterSelector, "ChunkCounterSelector" );
        locator.bindComponent( chunkCounterValue, "ChunkCounterValue" );
        locator.bindComponent( chunkCounter, "ChunkCounter" );
        locator.bindComponent( chunkTimerSelector, "ChunkTimerSelector" );
        locator.bindComponent( chunkTimerValue, "ChunkTimerValue" );
        locator.bindComponent( chunkTimer, "ChunkTimer" );
        locator.bindComponent( chunkExposureTime, "ChunkExposureTime" );
        locator.bindComponent( chunkGainSelector, "ChunkGainSelector" );
        locator.bindComponent( chunkGain, "ChunkGain" );
        locator.bindComponent( chunkBlackLevelSelector, "ChunkBlackLevelSelector" );
        locator.bindComponent( chunkBlackLevel, "ChunkBlackLevel" );
        locator.bindComponent( chunkLinePitch, "ChunkLinePitch" );
        locator.bindComponent( chunkFrameID, "ChunkFrameID" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief Activates the inclusion of Chunk data in the payload of the image.
    /**
     *  Activates the inclusion of Chunk data in the payload of the image.
     */
    PropertyIBoolean chunkModeActive;
    /// \brief Selects which Chunk to enable or control.
    /**
     *  Selects which Chunk to enable or control.
     */
    PropertyI64 chunkSelector;
    /// \brief Enables the inclusion of the selected Chunk data in the payload of the image.
    /**
     *  Enables the inclusion of the selected Chunk data in the payload of the image.
     */
    PropertyIBoolean chunkEnable;
    /// \brief Returns the entire image data included in the payload.
    /**
     *  Returns the entire image data included in the payload.
     */
    PropertyS chunkImage;
    /// \brief Returns the OffsetX of the image included in the payload.
    /**
     *  Returns the OffsetX of the image included in the payload.
     */
    PropertyI64 chunkOffsetX;
    /// \brief Returns the OffsetY of the image included in the payload.
    /**
     *  Returns the OffsetY of the image included in the payload.
     */
    PropertyI64 chunkOffsetY;
    /// \brief Returns the Width of the image included in the payload.
    /**
     *  Returns the Width of the image included in the payload.
     */
    PropertyI64 chunkWidth;
    /// \brief Returns the Height of the image included in the payload.
    /**
     *  Returns the Height of the image included in the payload.
     */
    PropertyI64 chunkHeight;
    /// \brief Returns the PixelFormat of the image included in the payload.
    /**
     *  Returns the PixelFormat of the image included in the payload.
     */
    PropertyI64 chunkPixelFormat;
    /// \brief Returns the minimum value of dynamic range of the image included in the payload.
    /**
     *  Returns the minimum value of dynamic range of the image included in the payload.
     */
    PropertyI64 chunkPixelDynamicRangeMin;
    /// \brief Returns the maximum value of dynamic range of the image included in the payload.
    /**
     *  Returns the maximum value of dynamic range of the image included in the payload.
     */
    PropertyI64 chunkPixelDynamicRangeMax;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. ChunkPixelDynamicRangeMin should be used instead. Returns the minimum value of dynamic range of the image included in the payload.
     */
    PropertyI64 chunkDynamicRangeMin;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. ChunkPixelDynamicRangeMax should be used instead. Returns the maximum value of dynamic range of the image included in the payload.
     */
    PropertyI64 chunkDynamicRangeMax;
    /// \brief Returns the Timestamp of the image included in the payload at the time of the FrameStart internal event.
    /**
     *  Returns the Timestamp of the image included in the payload at the time of the FrameStart internal event.
     */
    PropertyI64 chunkTimestamp;
    /// \brief Returns the status of all the I/O lines at the time of the FrameStart internal event.
    /**
     *  Returns the status of all the I/O lines at the time of the FrameStart internal event.
     */
    PropertyI64 chunkLineStatusAll;
    /// \brief Selects which counter to retrieve data from.
    /**
     *  Selects which counter to retrieve data from.
     */
    PropertyI64 chunkCounterSelector;
    /// \brief Returns the value of the selected Chunk counter at the time of the FrameStart event.
    /**
     *  Returns the value of the selected Chunk counter at the time of the FrameStart event.
     */
    PropertyI64 chunkCounterValue;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. Returns the value of the selected Chunk counter at the time of the FrameStart internal event.
     */
    PropertyI64 chunkCounter;
    /// \brief Selects which Timer to retrieve data from.
    /**
     *  Selects which Timer to retrieve data from.
     */
    PropertyI64 chunkTimerSelector;
    /// \brief Returns the value of the selected Timer at the time of the FrameStart internal event.
    /**
     *  Returns the value of the selected Timer at the time of the FrameStart internal event.
     */
    PropertyF chunkTimerValue;
    /// \brief This feature is deprecated.
    /**
     *  \deprecated
     *  This feature is deprecated. Returns the value of the selected Timer at the time of the FrameStart internal event.
     */
    PropertyF chunkTimer;
    /// \brief Returns the exposure time used to capture the image.
    /**
     *  Returns the exposure time used to capture the image.
     */
    PropertyF chunkExposureTime;
    /// \brief Selects which Gain to return.
    /**
     *  Selects which Gain to return.
     */
    PropertyI64 chunkGainSelector;
    /// \brief Returns the gain used to capture the image.
    /**
     *  Returns the gain used to capture the image.
     */
    PropertyF chunkGain;
    /// \brief Selects which Black Level to return.
    /**
     *  Selects which Black Level to return. Possible values are:
     */
    PropertyI64 chunkBlackLevelSelector;
    /// \brief Returns the black level used to capture the image included in the payload.
    /**
     *  Returns the black level used to capture the image included in the payload.
     */
    PropertyF chunkBlackLevel;
    /// \brief Returns the LinePitch of the image included in the payload.
    /**
     *  Returns the LinePitch of the image included in the payload.
     */
    PropertyI64 chunkLinePitch;
    /// \brief Returns the unique Identifier of the frame (or image) included in the payload.
    /**
     *  Returns the unique Identifier of the frame (or image) included in the payload.
     */
    PropertyI64 chunkFrameID;
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
    /// \brief Selects the target file in the device.
    /**
     *  Selects the target file in the device.
     */
    PropertyI64 fileSelector;
    /// \brief Selects the target operation for the selected file in the device.
    /**
     *  Selects the target operation for the selected file in the device. This Operation is executed when the FileOperationExecute feature is called.
     */
    PropertyI64 fileOperationSelector;
    /// \brief Executes the operation selected by FileOperationSelector on the selected file.
    /**
     *  Executes the operation selected by FileOperationSelector on the selected file.
     */
    Method fileOperationExecute;
    /// \brief Selects the access mode in which a file is opened in the device.
    /**
     *  Selects the access mode in which a file is opened in the device.
     */
    PropertyI64 fileOpenMode;
    /// \brief Defines the intermediate access buffer that allows the exchange of data between the device file storage and the application.
    /**
     *  Defines the intermediate access buffer that allows the exchange of data between the device file storage and the application.
     */
    PropertyS fileAccessBuffer;
    /// \brief Controls the Offset of the mapping between the device file storage and the FileAccessBuffer.
    /**
     *  Controls the Offset of the mapping between the device file storage and the FileAccessBuffer.
     */
    PropertyI64 fileAccessOffset;
    /// \brief Controls the Length of the mapping between the device file storage and the FileAccessBuffer.
    /**
     *  Controls the Length of the mapping between the device file storage and the FileAccessBuffer.
     */
    PropertyI64 fileAccessLength;
    /// \brief Represents the file operation execution status.
    /**
     *  Represents the file operation execution status.
     */
    PropertyI64 fileOperationStatus;
    /// \brief Represents the file operation result.
    /**
     *  Represents the file operation result. For Read or Write operations, the number of successfully read/written bytes is returned.
     */
    PropertyI64 fileOperationResult;
    /// \brief Represents the size of the selected file in bytes.
    /**
     *  Represents the size of the selected file in bytes.
     */
    PropertyI64 fileSize;
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
    /// \brief Selects which Color Transformation module is controlled by the various Color Transformation features.
    /**
     *  Selects which Color Transformation module is controlled by the various Color Transformation features.
     */
    PropertyI64 colorTransformationSelector;
    /// \brief Activates the selected Color Transformation module.
    /**
     *  Activates the selected Color Transformation module.
     */
    PropertyIBoolean colorTransformationEnable;
    /// \brief Selects the Gain factor or Offset of the Transformation matrix to access in the selected Color Transformation module.
    /**
     *  Selects the Gain factor or Offset of the Transformation matrix to access in the selected Color Transformation module.
     */
    PropertyI64 colorTransformationValueSelector;
    /// \brief Represents the value of the selected Gain factor or Offset inside the Transformation matrix.
    /**
     *  Represents the value of the selected Gain factor or Offset inside the Transformation matrix.
     */
    PropertyF colorTransformationValue;
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
        actionDeviceKey(),
        actionSelector(),
        actionGroupMask(),
        actionGroupKey()
    {
        mvIMPACT::acquire::DeviceComponentLocator locator( pDev, mvIMPACT::acquire::dltSetting, settingName );
        locator.bindSearchBase( locator.searchbase_id(), "Camera/GenICam" );
        locator.bindComponent( actionDeviceKey, "ActionDeviceKey" );
        locator.bindComponent( actionSelector, "ActionSelector" );
        locator.bindComponent( actionGroupMask, "ActionGroupMask" );
        locator.bindComponent( actionGroupKey, "ActionGroupKey" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief Provides the device key that allows the device to check the validity of action commands.
    /**
     *  Provides the device key that allows the device to check the validity of action commands. The device internal assertion of an action signal is only authorized if the ActionDeviceKey and the action device key value in the protocol message are equal.
     */
    PropertyI64 actionDeviceKey;
    /// \brief Selects to which Action Signal further Action settings apply.
    /**
     *  Selects to which Action Signal further Action settings apply.
     */
    PropertyI64 actionSelector;
    /// \brief Provides the mask that the device will use to validate the action on reception of the action protocol message.
    /**
     *  Provides the mask that the device will use to validate the action on reception of the action protocol message.
     */
    PropertyI64 actionGroupMask;
    /// \brief Provides the key that the device will use to validate the action on reception of the action protocol message.
    /**
     *  Provides the key that the device will use to validate the action on reception of the action protocol message.
     */
    PropertyI64 actionGroupKey;
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
    /// \brief Changes the current gain.
    /**
     *  Changes the current gain.
     */
    PropertyI64 mvGain;
    /// \brief Controls the white balance engine.
    /**
     *  Controls the white balance engine.
     */
    PropertyI64 mvBalanceWhiteAuto;
    /// \brief Controls the auto exposure engine.
    /**
     *  Controls the auto exposure engine.
     */
    PropertyI64 mvAutoExposure;
    PYTHON_ONLY( %mutable; )
};

//-----------------------------------------------------------------------------
/// \brief Contains X-Lamp specific control paramters.
/**
 *  Contains X-Lamp specific control paramters.
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
    /// \brief Chooses which signal to use for the lamps
    /**
     *  Chooses which signal to use for the lamps
     */
    PropertyI64 mvXLampSource;
    /// \brief Chooses which activation line is to be configured
    /**
     *  Chooses which activation line is to be configured
     */
    PropertyI64 mvXLampActivationSourceSelector;
    /// \brief Chooses which signal to use for the activation line
    /**
     *  Chooses which signal to use for the activation line
     */
    PropertyI64 mvXLampActivationSource;
    /// \brief Chooses which LED pair is to be configured.
    /**
     *  Chooses which LED pair is to be configured.
     */
    PropertyI64 mvXLampLEDPairSelector;
    /// \brief Chooses which LED mode bit is to be configured.
    /**
     *  Chooses which LED mode bit is to be configured.
     */
    PropertyI64 mvXLampActivationSourceModeSelector;
    /// \brief LED mode bit
    /**
     *  LEDD mode bit
     */
    PropertyIBoolean mvXLampLEDActivationSourceMode;
    /// \brief Current per LED pair in mA.
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
    /// \brief Selects the AND gate to configure.
    /**
     *  This enumeration selects the AND gate to configure.
     */
    PropertyI64 mvLogicGateANDSelector;
    /// \brief Selects the first input signal of the AND gate selected by mvLogicGateANDSelector.
    /**
     *  This enumeration can be used to select the first input signal of the AND gate selected by mvLogicGateANDSelector.
     */
    PropertyI64 mvLogicGateANDSource1;
    /// \brief Inverts the first input signal of the AND gate selected by mvLogicGateANDSelector
    /**
     *  Inverts the first input signal of the AND gate selected by mvLogicGateANDSelector
     */
    PropertyIBoolean mvANDSource1Inverter;
    /// \brief Selects the second input signal of the AND gate selected by mvLogicGateANDSelector.
    /**
     *  This enumeration can be used to select the second input signal of the AND gate selected by mvLogicGateANDSelector.
     */
    PropertyI64 mvLogicGateANDSource2;
    /// \brief Inverts the second input signal of the AND gate selected by mvLogicGateANDSelector
    /**
     *  Inverts the second input signal of the AND gate selected by mvLogicGateANDSelector
     */
    PropertyIBoolean mvANDSource2Inverter;
    /// \brief Selects the OR gate to configure.
    /**
     *  This enumeration selects the OR gate to configure.
     */
    PropertyI64 mvLogicGateORSelector;
    /// \brief Selects the first input signal of the OR gate selected by mvLogicGateORSelector.
    /**
     *  This enumeration can be used to select the first input signal of the OR gate selected by mvLogicGateORSelector.
     */
    PropertyI64 mvLogicGateORSource1;
    /// \brief Selects the second input signal of the OR gate selected by mvLogicGateORSelector.
    /**
     *  This enumeration can be used to select the second input signal of the OR gate selected by mvLogicGateORSelector.
     */
    PropertyI64 mvLogicGateORSource2;
    /// \brief Selects the third input signal of the OR gate selected by mvLogicGateORSelector.
    /**
     *  This enumeration can be used to select the third input signal of the OR gate selected by mvLogicGateORSelector.
     */
    PropertyI64 mvLogicGateORSource3;
    /// \brief Selects the fourth input signal of the OR gate selected by mvLogicGateORSelector.
    /**
     *  This enumeration can be used to select the fourth input signal of the OR gate selected by mvLogicGateORSelector.
     */
    PropertyI64 mvLogicGateORSource4;
    /// \brief Selects the LogicGateSource of the ANDORMatrix.
    /**
     *  Selects the LogicGateSource of the ANDORMatrix.
     */
    PropertyI64 mvLogicGateSourceSelector;
    /// \brief Selects the input signal of the ANDORMatrix selected by mvLogicGateSourceSelector.
    /**
     *  Selects the input signal of the ANDORMatrix selected by mvLogicGateSourceSelector.
     */
    PropertyI64 mvLogicGateSource;
    /// \brief Inverts the input signal.
    /**
     *  Inverts the input signal.
     */
    PropertyIBoolean mvLogicGateSourceInverter;
    /// \brief Selects the AND-term of the AND-OR-matrix.
    /**
     *  Selects the AND-term of the AND-OR-matrix.
     */
    PropertyI64 mvLogicGateANDTermSelector;
    /// \brief Selects the first input signal of the AND-term selected by mvLogicGateANDTermSelector.
    /**
     *  Selects the first input signal of the AND-term selected by mvLogicGateANDTermSelector.
     */
    PropertyI64 mvLogicGateANDTermSrc0;
    /// \brief Selects the second input signal of the AND-term selected by mvLogicGateANDTermSelector.
    /**
     *  Selects the second input signal of the AND-term selected by mvLogicGateANDTermSelector.
     */
    PropertyI64 mvLogicGateANDTermSrc1;
    /// \brief Selects the OR-term of the AND-OR-matrix.
    /**
     *  Selects the OR-term of the AND-OR-matrix.
     */
    PropertyI64 mvLogicGateORTermSelector;
    /// \brief Selects the first input signal of the ORTerm selected by mvLogicGateORTermSelector.
    /**
     *  Selects the first input signal of the ORTerm selected by mvLogicGateORTermSelector.
     */
    PropertyI64 mvLogicGateORTermSrc0;
    /// \brief Selects the second input signal of the ORTerm selected by mvLogicGateORTermSelector.
    /**
     *  Selects the second input signal of the ORTerm selected by mvLogicGateORTermSelector.
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
    /// \brief Selects the current source to configure.
    /**
     *  Selects the current source to configure.
     */
    PropertyI64 mvCurrentSelector;
    /// \brief Sets the current value for the selected device(e.g.: LED).
    /**
     *  Sets the current value for the selected device(e.g.: LED).
     */
    PropertyI64 mvCurrent;
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
    /// \brief Enables the Flat Field Correction.
    /**
     *  Enables the Flat Field Correction.
     */
    PropertyIBoolean mvFFCEnable;
    /// \brief The number of images to use for the calculation of the correction image.
    /**
     *  The number of images to use for the calculation of the correction image.
     */
    PropertyI64 mvFFCCalibrationImageCount;
    /// \brief Starts the Calibration of the Flat Field Correction.
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
    /// \brief Sets the frame average operating mode.
    /**
     *  Sets the frame average operating mode.
     */
    PropertyI64 mvFrameAverageMode;
    /// \brief Enables the frame averaging engine.
    /**
     *  Enables the frame averaging engine.
     */
    PropertyIBoolean mvFrameAverageEnable;
    /// \brief Here you specify the noise border for very dark pictures.
    /**
     *  Here you specify the noise border for very dark pictures.
     */
    PropertyI64 mvFrameAverageSlope;
    /// \brief Sets the frame average dynamic operating mode.
    /**
     *  Sets the frame average dynamic operating mode.
     */
    PropertyI64 mvFrameAverageDynamicMode;
    /// \brief Here you specify the noise limit for very bright pictures.
    /**
     *  Here you specify the noise limit for very bright pictures.
     */
    PropertyI64 mvFrameAverageNoiseLimit;
    /// \brief Here you specify the noise border for very bright pictures.
    /**
     *  Here you specify the noise border for very bright pictures.
     */
    PropertyI64 mvFrameAverageNoiseGain;
    /// \brief Here you specify the frame count used for the calculation of the frame average.
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
    /// \brief Enables the High Dynamic Range Feature.
    /**
     *  Enables the High Dynamic Range Feature.
     */
    PropertyIBoolean mvHDREnable;
    /// \brief Selects the HDR parameter set.
    /**
     *  Selects the HDR parameter set.
     */
    PropertyI64 mvHDRPreset;
    /// \brief Selects the HDR parameter set to configure.
    /**
     *  This enumeration selects the HDR parameter set to configure.
     */
    PropertyI64 mvHDRSelector;
    /// \brief First HDR Voltage in mV.
    /**
     *  First HDR Voltage in mV.
     */
    PropertyI64 mvHDRVoltage1;
    /// \brief Second HDR Voltage in mV.
    /**
     *  Second HDR Voltage in mV.
     */
    PropertyI64 mvHDRVoltage2;
    /// \brief First HDR Exposure in ppm.
    /**
     *  First HDR Exposure in ppm.
     */
    PropertyI64 mvHDRExposure1;
    /// \brief Second HDR Exposure in ppm.
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
    /// \brief Selects the SPI device.
    /**
     *  Selects the SPI device.
     */
    PropertyI64 mvSPIDeviceSelector;
    /// \brief Selects the operation. Write: mvSPIAccessLength bytes are written to SPI device. Synchronuously read bytes are stored to internal buffer. Read: Reads mvSPIAccessLength from internal buffer. If mvSPIAccessLength > internal buffer size: Additional 'write zeros' will be done.
    /**
     *  Selects the operation. Write: mvSPIAccessLength bytes are written to SPI device. Synchronuously read bytes are stored to internal buffer. Read: Reads mvSPIAccessLength from internal buffer. If mvSPIAccessLength > internal buffer size: Additional 'write zeros' will be done.
     */
    PropertyI64 mvSPIOperationSelector;
    /// \brief Executes the operation selected by mvSPIOperationSelector.
    /**
     *  Executes the operation selected by mvSPIOperationSelector.
     */
    Method mvSPIOperationExecute;
    /// \brief Defines the intermediate access buffer that allows the exchange of data.
    /**
     *  Defines the intermediate access buffer that allows the exchange of data.
     */
    PropertyS mvSPIAccessBuffer;
    /// \brief Controls the length of the data.
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
    /// \brief Changes the current of the CCDs output signal (Tap1).
    /**
     *  Changes the current of the CCDs output signal (Tap1).
     */
    PropertyI64 mvDACOUTA;
    /// \brief Changes the current of the CCDs output signal (Tap2).
    /**
     *  Changes the current of the CCDs output signal (Tap2).
     */
    PropertyI64 mvDACOUTB;
    /// \brief Currently not used
    /**
     *  Currently not used
     */
    PropertyI64 mvDACOUTC;
    /// \brief Sets the sensor's VSUB voltage.
    /**
     *  Sets the sensor's VSUB voltage.
     */
    PropertyI64 mvDACOUTD;
    /// \brief Selects the digital to analog converter(DAC) DACValue will be written to
    /**
     *  Selects the digital to analog converter(DAC) DACValue will be written to
     */
    PropertyI64 DACIndex;
    /// \brief Register value in hex
    /**
     *  Register value in hex
     */
    PropertyI64 DACValue;
    /// \brief Write all DAcs with a single call.
    /**
     *  Write all DAcs with a single call.
     */
    PropertyS DACValueAll;
    /// \brief Result of the error detection mechanism for lamp0
    /**
     *  Result of the error detection mechanism for lamp0
     */
    PropertyI64 mvErrorDetect0;
    /// \brief Result of the error detection mechanism for lamp1
    /**
     *  Result of the error detection mechanism for lamp1
     */
    PropertyI64 mvErrorDetect1;
    /// \brief Result of lamp detection
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
    /// \brief Sets ACC in measurement mode.
    /**
     *  Sets ACC in measurement mode.
     */
    PropertyIBoolean mvACCEnable;
    /// \brief The postition in X-direction.
    /**
     *  The postition in X-direction.
     */
    PropertyI64 mvXAxis;
    /// \brief The postition in Y-direction.
    /**
     *  The postition in Y-direction.
     */
    PropertyI64 mvYAxis;
    /// \brief The postition in Z-direction.
    /**
     *  The postition in Z-direction.
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
        TLPath(),
        TLType(),
        interfaceUpdateList(),
        interfaceSelector(),
        interfaceID(),
        interfaceType(),
        gevInterfaceMACAddress(),
        gevInterfaceDefaultIPAddress(),
        gevInterfaceDefaultSubnetMask(),
        gevInterfaceDefaultGateway(),
        mvGevInterfaceMTU(),
        mvGevInterfaceLinkSpeed(),
        genTLVersionMajor(),
        genTLVersionMinor(),
        genCPVersionMajor(),
        genCPVersionMinor(),
        gevVersionMajor(),
        gevVersionMinor(),
        mvGevChannelDummyPacketSendEnable(),
        mvGevChannelDummyPacketSendInterval(),
        u3vVersionMajor(),
        u3vVersionMinor()
    {
        mvIMPACT::acquire::ComponentLocator locator( pDev->deviceDriverFeatureList() );
        locator.bindSearchBase( locator.searchbase_id(), "GenTL/System" );
        m_hRoot = locator.searchbase_id();
        locator.bindComponent( TLVendorName, "TLVendorName" );
        locator.bindComponent( TLModelName, "TLModelName" );
        locator.bindComponent( TLID, "TLID" );
        locator.bindComponent( TLVersion, "TLVersion" );
        locator.bindComponent( TLPath, "TLPath" );
        locator.bindComponent( TLType, "TLType" );
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
        locator.bindComponent( genTLVersionMajor, "GenTLVersionMajor" );
        locator.bindComponent( genTLVersionMinor, "GenTLVersionMinor" );
        locator.bindComponent( genCPVersionMajor, "GenCPVersionMajor" );
        locator.bindComponent( genCPVersionMinor, "GenCPVersionMinor" );
        locator.bindComponent( gevVersionMajor, "GevVersionMajor" );
        locator.bindComponent( gevVersionMinor, "GevVersionMinor" );
        locator.bindComponent( mvGevChannelDummyPacketSendEnable, "mvGevChannelDummyPacketSendEnable" );
        locator.bindComponent( mvGevChannelDummyPacketSendInterval, "mvGevChannelDummyPacketSendInterval" );
        locator.bindComponent( u3vVersionMajor, "U3vVersionMajor" );
        locator.bindComponent( u3vVersionMinor, "U3vVersionMinor" );
    }
    PYTHON_ONLY( %immutable; )
    /// \brief Indicates the name of the transport layer vendor.
    /**
     *  This is a read only element. It is a string that indicates the name of the transport layer vendor.
     */
    PropertyS TLVendorName;
    /// \brief Indicates the name of the transport layer Model.
    /**
     *  This is a read only element. It is a string that indicates the name of the transport layer Model to distinguish different kinds of GenTL Producer implementations from one vendor.
     */
    PropertyS TLModelName;
    /// \brief Indicates the ID of the transport layer.
    /**
     *  This is a read only element. It is a string that indicates the ID of the transport layer.
     */
    PropertyS TLID;
    /// \brief Indicates a vendor specific version string for this transport layer.
    /**
     *  This is a read only element. It is a string that indicates a vendor specific version string for this transport layer.
     */
    PropertyS TLVersion;
    /// \brief Indicates the full path to the GenTL Producer driver including name and extension.
    /**
     *  This is a read only element. It is a string that indicates the full path to the GenTL Producer driver including name and extension.
     */
    PropertyS TLPath;
    /// \brief Identifies the transport layer technology of the GenTL Producer implementation.
    /**
     *  This is a read only feature. This enumeration provides a value that indicates the transport layer technology of the GenTL Producer implementation.
     */
    PropertyI64 TLType;
    /// \brief Updates the internal interface list.
    /**
     *  This command updates the internal interface list of this transport layer.
     */
    Method interfaceUpdateList;
    /// \brief Selector for the different GenTL Producer interfaces.
    /**
     *  Selector for the different GenTL Producer interfaces. Selector for the different GenTL Producer interfaces. This interface list only changes on execution of InterfaceUpdateList. The selector is 0-based in order to match the index of the C interface.
     */
    PropertyI64 interfaceSelector;
    /// \brief GenTL producer wide unique identifier of the selected interface.
    /**
     *  This is a read only element. It is a string that indicates a GenTL producer wide unique identifier of the selected interface.
     */
    PropertyS interfaceID;
    /// \brief Identifies the interfaces technology of the GenTL Producer implementation.
    /**
     *  This is a read only feature. This enumeration provides a value that indicates interfaces technology of the GenTL Producer implementation.
     */
    PropertyI64 interfaceType;
    /// \brief Indicates the 48-bit MAC address of the selected interface.
    /**
     *  This is a read only element. It indicates the 48-bit MAC address of the selected interface.
     */
    PropertyI64 gevInterfaceMACAddress;
    /// \brief Indicates the IP address of the first subnet of the selected interface.
    /**
     *  This is a read only element. It indicates the IP address of the first subnet of the selected interface.
     */
    PropertyI64 gevInterfaceDefaultIPAddress;
    /// \brief Indicates the subnet mask of the first subnet of the selected interface.
    /**
     *  This is a read only element. It indicates the subnet mask of the first subnet of the selected interface.
     */
    PropertyI64 gevInterfaceDefaultSubnetMask;
    /// \brief Indicates the default gateway of the first subnet of the selected interface.
    /**
     *  This is a read only element. It indicates the default gateway of the first subnet of the selected interface.
     */
    PropertyI64 gevInterfaceDefaultGateway;
    /// \brief Indicates the MTU of the selected interface.
    /**
     *  This is a read only element. It indicates the MTU(Maximum Transmission Unit) of the selected interface.
     */
    PropertyI64 mvGevInterfaceMTU;
    /// \brief Indicates the link speed of this interface.
    /**
     *  This is a read only element. It indicates the link speed(in Mbits per second) of this interface.
     */
    PropertyI64 mvGevInterfaceLinkSpeed;
    /// \brief Defines the major version number of the GenTL specification the GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It defines the major version number of the GenTL specification the GenTL Producer implementation complies with.
     */
    PropertyI64 genTLVersionMajor;
    /// \brief Defines the minor version number of the GenTL specification the GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It defines the minor version number of the GenTL specification the GenTL Producer implementation complies with.
     */
    PropertyI64 genTLVersionMinor;
    /// \brief Indicates the major version number of the GenCP specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the major version number of the GenCP specification this GenTL Producer implementation complies with.
     */
    PropertyI64 genCPVersionMajor;
    /// \brief Indicates the minor version number of the GenCP specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the minor version number of the GenCP specification this GenTL Producer implementation complies with.
     */
    PropertyI64 genCPVersionMinor;
    /// \brief Major version of the specification.
    /**
     *  Major version of the specification.
     */
    PropertyI64 gevVersionMajor;
    /// \brief Minor version of the specification.
    /**
     *  Minor version of the specification.
     */
    PropertyI64 gevVersionMinor;
    /// \brief Enables or disables the periodical sending of dummy packets to a stream or message channel source port of a GigE Vision device.
    /**
     *  Enables or disables the periodical sending of dummy packets to a stream or message channel source port of a GigE Vision device. This might be useful to overcome firewall related problems when working with network devices.
     */
    PropertyIBoolean mvGevChannelDummyPacketSendEnable;
    /// \brief Defines the period(in ms) for sending dummy packets to a stream or message channel source port of a GigE Vision device.
    /**
     *  Defines the period(in ms) for sending dummy packets to a stream or message channel source port of a GigE Vision device. This might be useful to overcome firewall related problems when working with network devices.
     */
    PropertyI64 mvGevChannelDummyPacketSendInterval;
    /// \brief Indicates the major version number of the USB3 Vision specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the major version number of the USB3 Vision specification this GenTL Producer implementation complies with.
     */
    PropertyI64 u3vVersionMajor;
    /// \brief Indicates the minor version number of the USB3 Vision specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the minor version number of the USB3 Vision specification this GenTL Producer implementation complies with.
     */
    PropertyI64 u3vVersionMinor;
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
        gevDeviceMACAddress()
    {
        mvIMPACT::acquire::ComponentLocator locator( pDev->deviceDriverFeatureList() );
        locator.bindSearchBase( locator.searchbase_id(), "GenTL/Interfaces" );
        std::ostringstream oss;
        oss << "Interface" << index;
        locator = mvIMPACT::acquire::ComponentLocator( locator.findComponent( oss.str() ) );
        m_hRoot = locator.searchbase_id();
        locator.bindComponent( interfaceID, "InterfaceID" );
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
    }
    PYTHON_ONLY( %immutable; )
    /// \brief GenTL producer wide unique identifier of the selected interface.
    /**
     *  This is a read only element. It is a string that indicates a GenTL producer wide unique identifier of the selected interface.
     */
    PropertyS interfaceID;
    /// \brief Identifies the interfaces technology of the GenTL Producer implementation.
    /**
     *  This is a read only feature. This enumeration provides a value that indicates interfaces technology of the GenTL Producer implementation.
     */
    PropertyI64 interfaceType;
    /// \brief Selector for the different gateway entries for this interface.
    /**
     *  Selector for the different gateway entries for this interface. The selector is 0-based in order to match the index of the C interface.
     */
    PropertyI64 gevInterfaceGatewaySelector;
    /// \brief Indicates the IP address of the selected gateway entry of this interface.
    /**
     *  This is a read only element. It indicates the IP address of the selected gateway entry of this interface.
     */
    PropertyI64 gevInterfaceGateway;
    /// \brief Indicates the 48-bit MAC address of the selected interface.
    /**
     *  This is a read only element. It indicates the 48-bit MAC address of the selected interface.
     */
    PropertyI64 gevInterfaceMACAddress;
    /// \brief Selector for the different subnet entries for this interface.
    /**
     *  Selector for the different subnet entries for this interface. The selector is 0-based in order to match the index of the C interface.
     */
    PropertyI64 gevInterfaceSubnetSelector;
    /// \brief Indicates the IP address of the selected subnet entry of this interface.
    /**
     *  This is a read only element. It indicates the IP address of the selected subnet entry of this interface.
     */
    PropertyI64 gevInterfaceSubnetIPAddress;
    /// \brief Indicates the subnet mask of the selected subnet entry of this interface.
    /**
     *  This is a read only element. It indicates the subnet mask of the selected subnet entry of this interface.
     */
    PropertyI64 gevInterfaceSubnetMask;
    /// \brief Indicates the MTU of this interface.
    /**
     *  This is a read only element. It indicates the MTU(Maximum Transmission Unit) of this interface.
     */
    PropertyI64 mvGevInterfaceMTU;
    /// \brief Indicates the link speed of this interface.
    /**
     *  This is a read only element. It indicates the link speed(in Mbits per second) of this interface.
     */
    PropertyI64 mvGevInterfaceLinkSpeed;
    /// \brief Enables or disables the advanced device discovery.
    /**
     *  Enables or disables the advanced device discovery. When enabled also devices, which currently use an incorrect IP configuration for the network they are connected to might be detectable. However depending on the operating system this may result in devices showing up on interfaces to which they are not physically connected.
     */
    PropertyIBoolean mvGevAdvancedDeviceDiscoveryEnable;
    /// \brief Updates the internal device list of this interface.
    /**
     *  This command updates the internal device list of this interface.
     */
    Method deviceUpdateList;
    /// \brief Selector for the different devices on this interface.
    /**
     *  Selector for the different devices on this interface. The limits of this feature might change upon execution of DeviceUpdateList.
     */
    PropertyI64 deviceSelector;
    /// \brief This feature is deprecated (See DeviceSerialNumber).
    /**
     *  \deprecated
     *  This feature is deprecated (See DeviceSerialNumber). It was representing the Device unique identifier (serial number).
     */
    PropertyS deviceID;
    /// \brief Name of the manufacturer of the device.
    /**
     *  Name of the manufacturer of the device.
     */
    PropertyS deviceVendorName;
    /// \brief Model of the device.
    /**
     *  Model of the device.
     */
    PropertyS deviceModelName;
    /// \brief Returns the device type.
    /**
     *  Returns the device type.
     */
    PropertyI64 deviceType;
    /// \brief Indicates the speed of transmission negotiated on the specified Link.
    /**
     *  Indicates the speed of transmission negotiated on the specified Link.
     */
    PropertyI64 deviceLinkSpeed;
    /// \brief Indicates the current access status for the device.
    /**
     *  This is a read only feature. This enumeration provides a value that indicates the current access status for the device.
     */
    PropertyI64 deviceAccessStatus;
    /// \brief Defines the maximum time in milli-seconds the host driver will wait for an ACK from the device to a previously sent command.
    /**
     *  Defines the maximum time in milli-seconds the host driver will wait for an ACK from the device to a previously sent command.
     */
    PropertyI64 mvDeviceCommandChannelTransmissionTimeout;
    /// \brief Indicates the number of retransmissions allowed when command channel message timed out (no ACK was received from the device).
    /**
     *  Indicates the number of retransmissions allowed when command channel message timed out (no ACK was received from the device).
     */
    PropertyI64 mvDeviceCommandChannelRetryCount;
    /// \brief Major version of the specification.
    /**
     *  Major version of the specification.
     */
    PropertyI64 gevVersionMajor;
    /// \brief Minor version of the specification.
    /**
     *  Minor version of the specification.
     */
    PropertyI64 gevVersionMinor;
    /// \brief Indicates the major version number of the GenCP specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the major version number of the GenCP specification this GenTL Producer implementation complies with.
     */
    PropertyI64 genCPVersionMajor;
    /// \brief Indicates the minor version number of the GenCP specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the minor version number of the GenCP specification this GenTL Producer implementation complies with.
     */
    PropertyI64 genCPVersionMinor;
    /// \brief Indicates the major version number of the USB3 Vision specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the major version number of the USB3 Vision specification this GenTL Producer implementation complies with.
     */
    PropertyI64 u3vVersionMajor;
    /// \brief Indicates the minor version number of the USB3 Vision specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the minor version number of the USB3 Vision specification this GenTL Producer implementation complies with.
     */
    PropertyI64 u3vVersionMinor;
    /// \brief Reports the availability of the primary application switchover feature.
    /**
     *  Reports the availability of the primary application switchover feature.
     */
    PropertyIBoolean mvDevicePrimaryApplicationSwitchoverSupported;
    /// \brief Enables or disables primary application switchover.
    /**
     *  Enables or disables primary application switchover.
     */
    PropertyIBoolean mvDevicePrimaryApplicationSwitchoverEnable;
    /// \brief Controls the key to use to authenticate primary application switchover requests.
    /**
     *  Controls the key to use to authenticate primary application switchover requests. If the device to take over has 'mvDevicePrimaryApplicationSwitchoverEnable' set to true and this key matches the devices internal key control access will be granted.
     */
    PropertyI64 mvDevicePrimaryApplicationSwitchoverKey;
    /// \brief The number of physical network interfaces supported by this device.
    /**
     *  This is an integer feature. It contains the number of physical network interfaces supported by this device.
     */
    PropertyI64 mvDeviceNetworkInterfaceCount;
    /// \brief Indicates the current IP address of the GVCP interface of the selected remote device.
    /**
     *  This is a read only element. It indicates the current IP address of the GVCP interface of the selected remote device.
     */
    PropertyI64 gevDeviceIPAddress;
    /// \brief Indicates the current subnet mask of the GVCP interface of the selected remote device.
    /**
     *  This is a read only element. It indicates the current subnet mask of the GVCP interface of the selected remote device.
     */
    PropertyI64 gevDeviceSubnetMask;
    /// \brief Indicates the 48-bit MAC address of the GVCP interface of the selected remote device.
    /**
     *  This is a read only element. It indicates the 48-bit MAC address of the GVCP interface of the selected remote device.
     */
    PropertyI64 gevDeviceMACAddress;
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
    /// \brief This feature is deprecated (See DeviceSerialNumber).
    /**
     *  \deprecated
     *  This feature is deprecated (See DeviceSerialNumber). It was representing the Device unique identifier (serial number).
     */
    PropertyS deviceID;
    /// \brief Name of the manufacturer of the device.
    /**
     *  Name of the manufacturer of the device.
     */
    PropertyS deviceVendorName;
    /// \brief Model of the device.
    /**
     *  Model of the device.
     */
    PropertyS deviceModelName;
    /// \brief Returns the device type.
    /**
     *  Returns the device type.
     */
    PropertyI64 deviceType;
    /// \brief Indicates the speed of transmission negotiated on the specified Link.
    /**
     *  Indicates the speed of transmission negotiated on the specified Link.
     */
    PropertyI64 deviceLinkSpeed;
    /// \brief Major version of the specification.
    /**
     *  Major version of the specification.
     */
    PropertyI64 gevVersionMajor;
    /// \brief Minor version of the specification.
    /**
     *  Minor version of the specification.
     */
    PropertyI64 gevVersionMinor;
    /// \brief Indicates the major version number of the GenCP specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the major version number of the GenCP specification this GenTL Producer implementation complies with.
     */
    PropertyI64 genCPVersionMajor;
    /// \brief Indicates the minor version number of the GenCP specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the minor version number of the GenCP specification this GenTL Producer implementation complies with.
     */
    PropertyI64 genCPVersionMinor;
    /// \brief Indicates the major version number of the USB3 Vision specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the major version number of the USB3 Vision specification this GenTL Producer implementation complies with.
     */
    PropertyI64 u3vVersionMajor;
    /// \brief Indicates the minor version number of the USB3 Vision specification this GenTL Producer implementation complies with.
    /**
     *  This is a read only element. It indicates the minor version number of the USB3 Vision specification this GenTL Producer implementation complies with.
     */
    PropertyI64 u3vVersionMinor;
    /// \brief Indicates the current IP address of the GVCP interface of the selected remote device.
    /**
     *  This is a read only element. It indicates the current IP address of the GVCP interface of the selected remote device.
     */
    PropertyI64 gevDeviceIPAddress;
    /// \brief Indicates the current subnet mask of the GVCP interface of the selected remote device.
    /**
     *  This is a read only element. It indicates the current subnet mask of the GVCP interface of the selected remote device.
     */
    PropertyI64 gevDeviceSubnetMask;
    /// \brief Indicates the 48-bit MAC address of the GVCP interface of the selected remote device.
    /**
     *  This is a read only element. It indicates the 48-bit MAC address of the GVCP interface of the selected remote device.
     */
    PropertyI64 gevDeviceMACAddress;
    /// \brief Indicates the current gateway of the GVCP interface of the remote device.
    /**
     *  This is a read only element. It indicates the current gateway of the GVCP interface of the remote device.
     */
    PropertyI64 gevDeviceGateway;
    /// \brief Identifies the endianess mode to be used for this device.
    /**
     *  This is a read only feature. This enumeration provides a value that indicates the endianess mode to be used for this device.
     */
    PropertyI64 deviceEndianessMechanism;
    /// \brief Selects the stream channel.
    /**
     *  Selects the stream channel.
     */
    PropertyI64 streamSelector;
    /// \brief Device wide unique ID of the selected stream.
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
        streamAcquisitionModeSelector(),
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
        locator.bindComponent( streamAcquisitionModeSelector, "StreamAcquisitionModeSelector" );
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
    /// \brief Device wide unique ID of the selected stream.
    /**
     *  This is a read only element. It is a string that indicates a device wide unique identifier of the selected stream.
     */
    PropertyS streamID;
    /// \brief Number of announced (known) buffers on this stream. This value is volatile. It may change if additional buffers are announced and/or buffers are revoked by the GenTL Consumer.
    /**
     *  This is a read-only feature. It indicates the number of announced (known) buffers on this stream. This value is volatile. It may change if additional buffers are announced and/or buffers are revoked by the GenTL Consumer.
     */
    PropertyI64 streamAnnouncedBufferCount;
    /// \brief Maximal number of buffers to announce to enable selected acquisition mode.
    /**
     *  This feature indicates the maximal number of buffers to announce to enable selected acquisition mode.
     */
    PropertyI64 mvStreamAnnounceBufferMaximum;
    /// \brief Allows to select the acquisition mode for the stream.
    /**
     *  This enumeration allows the selection of the acquisition mode for the stream.
     */
    PropertyI64 streamAcquisitionModeSelector;
    /// \brief Minimal number of buffers to announce to enable selected acquisition mode.
    /**
     *  This feature indicates the minimal number of buffers to announce to enable selected acquisition mode.
     */
    PropertyI64 streamAnnounceBufferMinimum;
    /// \brief Identifies the stream technology of the GenTL Producer implementation.
    /**
     *  This is a read only feature. This enumeration provides a value that indicates stream technology of the GenTL Producer implementation.
     */
    PropertyI64 streamType;
    /// \brief The underlying driver technology used by this stream.
    /**
     *  This is a read only element. It is a string that contains the underlying driver technology used by this stream.
     */
    PropertyS mvStreamDriverTechnology;
    /// \brief This feature controls if the stream will issue packet resend requests.
    /**
     *  This feature controls if the stream will issue packet resend requests.
     */
    PropertyIBoolean mvResendActive;
    /// \brief Indicates the mode the internal resend algorithm is working in.
    /**
     *  This feature indicates the mode the internal resend algorithm is working in.
     */
    PropertyI64 mvResendMode;
    /// \brief This feature controls if the stream will issue batched packet resend requests if it detects several consecutive missing packets.
    /**
     *  This feature controls if the stream will issue batched packet resend requests if it detects several consecutive missing packets.
     */
    PropertyIBoolean mvResendBatchingActive;
    /// \brief Indicates the width of the capture window.
    /**
     *  This feature indicates the width of the capture window in packets.
     */
    PropertyI64 mvResendCaptureWindowSize;
    /// \brief Indicates the resend threshold within the capture window.
    /**
     *  This feature indicates the resend threshold within the capture window. If current packet ID and first missing packet ID are mvResendThreshold IDs apart the stream will issue a resend request.
     */
    PropertyI64 mvResendThreshold;
    /// \brief Indicates the maximum number of resend requests per packet to send to the device until the packet is considered as lost.
    /**
     *  This feature indicates the maximum number of resend requests per packet to send to the device until the packet is considered as lost.
     */
    PropertyI64 mvResendRequestMax;
    /// \brief Indicates the maximum number of resend requests in percent of payload packets per buffer to send to the device until the packet is considered as lost.
    /**
     *  This feature indicates the maximum number of resend requests in percent of payload packets per buffer to send to the device until the packet is considered as lost.
     */
    PropertyF mvResendRequestCredits;
    /// \brief This feature controls the resend response timeout in milliseconds.
    /**
     *  This float value sets the resend response timeout in milliseconds. Whenever a requested packet does not arive wirthin this timer period it will be requested again until mvResendRequestMax resend requests for this packet have been issued.
     */
    PropertyI64 mvResendResponseTimeout;
    /// \brief Indicates the number of packets to be requested whenever the resend response timeout elapses.
    /**
     *  This feature indicates the number of packets to be requested whenever the resend response timeout elapses.
     */
    PropertyI64 mvResendsPerTimeout;
    /// \brief Used by the driver to lock critical resend related parameters during the acquisition.
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
