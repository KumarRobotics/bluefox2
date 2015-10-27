//-----------------------------------------------------------------------------
#ifndef mvDriverBaseEnumsH
#if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
#   define mvDriverBaseEnumsH mvDriverBaseEnumsH
#endif // DOXYGEN_SHOULD_SKIP_THIS && WRAP_ANY
//-----------------------------------------------------------------------------

#if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
#   ifdef _WIN32
#       ifdef __BORLANDC__
#           pragma option push -b // force enums to the size of integer
#       endif // __BORLANDC__
#   endif // _WIN32
#endif // #if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)

// Macros to influence what is to be included into the documentation and what is not
#if defined(DEVICE_SPECIFIC_DOCUMENTATION_ONLY)
#   if defined(BUILD_MVBLUECOUGAR_DOCUMENTATION)
#       if defined(BUILD_MVBLUECOUGARP_DOCUMENTATION)
#           define IGNORE_MVBLUECOUGARS_SPECIFIC_DOCUMENTATION
#           define IGNORE_MVBLUELYNXM7_SPECIFIC_DOCUMENTATION
#       elif defined(BUILD_MVBLUECOUGARS_DOCUMENTATION)
#           define IGNORE_MVBLUECOUGARP_SPECIFIC_DOCUMENTATION
#           define IGNORE_MVBLUELYNXM7_SPECIFIC_DOCUMENTATION
#       elif defined(BUILD_MVBLUELYNXM7_DOCUMENTATION)
#           define IGNORE_MVBLUECOUGARP_SPECIFIC_DOCUMENTATION
#           define IGNORE_MVBLUECOUGARS_SPECIFIC_DOCUMENTATION
#       endif
#       define IGNORE_MVBLUEFOX_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVBLUELYNXX_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVV4L2_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVVIRTUALDEVICE_SPECIFIC_DOCUMENTATION
#   elif defined(BUILD_MVBLUEFOX_DOCUMENTATION)
#       define IGNORE_MVBLUECOUGAR_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVBLUELYNXX_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVV4L2_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVVIRTUALDEVICE_SPECIFIC_DOCUMENTATION
#   elif defined(BUILD_MVBLUELYNXX_DOCUMENTATION)
#       define IGNORE_MVDEVICE_SPECIFIC_INTERFACE_DOCUMENTATION
#       define IGNORE_MVBLUECOUGAR_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVBLUEFOX_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVV4L2_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVVIRTUALDEVICE_SPECIFIC_DOCUMENTATION
#   elif defined(BUILD_MVGRABBER_DOCUMENTATION)
#       define IGNORE_MVBLUECOUGAR_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVBLUEFOX_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVBLUELYNXX_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVV4L2_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVVIRTUALDEVICE_SPECIFIC_DOCUMENTATION
#   elif defined(BUILD_MVVIRTUALDEVICE_DOCUMENTATION)
#       define IGNORE_MVBLUECOUGAR_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVBLUEFOX_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVBLUELYNXX_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVV4L2_SPECIFIC_DOCUMENTATION
#   elif defined(BUILD_MVV4L2_DOCUMENTATION)
#       define IGNORE_MVBLUECOUGAR_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVBLUEFOX_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVBLUELYNXX_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
#       define IGNORE_MVVIRTUALDEVICE_SPECIFIC_DOCUMENTATION
#   endif // device specific documentation macros
#endif // #if defined(DEVICE_SPECIFIC_DOCUMENTATION_ONLY)

#if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
#   ifndef MV_CUSTOM_DEVICE_INTERFACE_LAYOUTS
#       define MV_CUSTOM_DEVICE_INTERFACE_LAYOUTS
#   endif
#endif // #if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#if defined(MVIMPACT_ACQUIRE_H_) || defined(DOXYGEN_CPP_DOCUMENTATION)
namespace mvIMPACT
{
namespace acquire
{
#endif // #if defined(MVIMPACT_ACQUIRE_H_) || defined(DOXYGEN_CPP_DOCUMENTATION)

#include <DriverBase/Include/mvVersionInfo.h>

//-----------------------------------------------------------------------------
/// \brief Defines which field triggers the start of the acquisition.
/// \ingroup DeviceSpecificInterface
enum TAcquisitionField // flags_attribute, uint_type
//-----------------------------------------------------------------------------
{
    /// \brief Controlled by the camera parameter.
    afAuto = 0,
    /// \brief Only odd fields will be digitised.
    afOdd = 1,
    /// \brief Only even fields will be digitised.
    afEven = 2,
    /// \brief Odd and even fields will be digitised.
    afAny = afOdd | afEven
};

//-----------------------------------------------------------------------------
/// \brief Defines valid acquisition modes.
/// \ingroup CommonInterface
enum TAcquisitionMode
//-----------------------------------------------------------------------------
{
    /// \brief Continuous mode. This is the recommended mode when image data shall either be transferred constantly or when working with an externally triggered setup.
    amContinuous = 1,
    /// \brief In this mode \a AcquisitionFrameCount images will transferred by the device.
    /**
     *  When \a AcquisitionFrameCount have been send by the device, it will automatically stop
     *  to send more data
     */
    amMultiFrame = 2,
    /// \brief In this mode the device always will always just send a single image when a data stream is started.
    /**
     *  This mode can be interesting, when the devices acquisition parameters change from image to
     *  image or when a lot of devices will be operated in the same system an bandwidth resources are
     *  limited.
     */
    amSingleFrame = 3
};

//-----------------------------------------------------------------------------
/// \brief Defines valid modes for acquisition start/stop behaviour.
/// \ingroup CommonInterface
enum TAcquisitionStartStopBehaviour
//-----------------------------------------------------------------------------
{
    /// \brief The default behaviour for acquisition start and stop.
    /**
     *  Most devices will only support this mode. When this mode is selected,
     *  the device driver will try to start and stop the transfer of data from
     *  the device automatically. Internally this will happen while image requests
     *  are being processed
     */
    assbDefault,
    /// \brief The user can control the start and stop of the data transfer from the device.
    /**
     *  In this mode, queing of image request buffers and the actual streaming of
     *  data from the device is de-coupled. This can sometimes be favourable
     *  compared to the default behaviour e.g. when dealing with device drivers
     *  that do not accept new buffers while the acquisition engine is running.
     *  Also when working at very high frame rates, pre-queueing some buffer before
     *  starting the actual data transfer can help to avoid capture queue underruns
     *  and thus data loss.
     */
    assbUser
};

//-----------------------------------------------------------------------------
/// \brief Defines valid <b>A</b>rea <b>O</b>f <b>I</b>nterest modes.
/// \ingroup CommonInterface
enum TAoiMode
//-----------------------------------------------------------------------------
{
    /// \brief Use a small centered window for image processing.
    /**
     *  In this mode, a device and processing function dependent window in the middle of
     *  the AOI captured from the device will be used for the processing function.
     *
     *  Example:
     *
     *  - Assume a device that can deliver 640 x 480 pixels.
     *  - The user selects to capture an rectangular AOI starting at 100/100 with a width of 200*200
     *
     *  Now in the centered AOI mode a processing function will use a window smaller than the AOI in the middle
     *  of the user defined AOI. This e.g. could be a rectangle starting at 150/150 with a width of 100*100.
     *
     * \code
     *             640
     *  |--------------------------------|
     *  |    100                         |
     *  | 100|-----------------|         |
     *  |    |   150           |         |
     *  |    |150|--------|    |         |
     *  |    |   |        |100 |200      |480
     *  |    |   |--------|    |         |
     *  |    |      100        |         |
     *  |    |-----------------|         |
     *  |           200                  |
     *  |                                |
     *  |--------------------------------|
     * \endcode
     */
    amCentered = 0,
    /// \brief Use the complete image for image processing.
    amFull,
    /// \brief Use a user defined AOI window for image processing.
    amUseAoi
};

//-----------------------------------------------------------------------------
/// \brief Defines valid AutoControlSpeed modes.
/**
 *  Auto control speed modes define the time in which the controller tries to adapt its parameters to
 *  reach the desired result.
 */
/// \ingroup DeviceSpecificInterface
enum TAutoControlSpeed
//-----------------------------------------------------------------------------
{
    /// \brief The controller will converge slowly to the desired value.
    acsSlow = 0,
    /// \brief The controller will converge to the desired value at medium speed.
    acsMedium,
    /// \brief The controller will converge fast to the desired value.
    acsFast,
    /// \brief In this mode the user can control the behaviour of the closed loop(control circuit).
    acsUserDefined
};

//-----------------------------------------------------------------------------
/// \brief Defines valid auto control modes.
/// \ingroup DeviceSpecificInterface
enum TAutoControlMode
//-----------------------------------------------------------------------------
{
    /// \brief The standard auto control mode.
    acmStandard,
    /// \brief A device specific auto control mode.
    /**
     *  \b mvBlueFOX \b specific:
     *  For mvBlueFOX devices of type 202b and 202d the operation in device specific AEC/AGC
     *  mode is limited in (non continuous)triggered-modes. AEC/AGC only works while the trigger
     *  signal is active. As these sensor types only support the trigger modes
     *  <b>mvIMPACT::acquire::ctmOnHighLevel</b> and <b>mvIMPACT::acquire::ctmOnLowLevel</b>
     *  'active' means that the required signal level for that mode(either \a high or \a low)
     *  is present.
     *
     *  When this signal level is no longer present AEC/AGC will stop working and gain and exposure
     *  will be set to a static value. This is due to a limitation of the sensor chip. Effectively this
     *  means that for single frame triggering requiring short active pulses AEC/AGC is not possible.
     */
    acmDeviceSpecific
};

//-----------------------------------------------------------------------------
/// \brief Defines valid AEC( <b>A</b>utomatic <b>E</b>xposure <b>C</b>ontrol ) modes.
/// \ingroup DeviceSpecificInterface
enum TAutoExposureControl
//-----------------------------------------------------------------------------
{
    /// \brief AEC is switched off.
    aecOff = 0,
    /// \brief AEC is switched on.
    aecOn
};

//-----------------------------------------------------------------------------
/// \brief Defines valid AGC( <b>A</b>utomatic <b>G</b>ain <b>C</b>ontrol ) modes.
/// \ingroup DeviceSpecificInterface
enum TAutoGainControl
//-----------------------------------------------------------------------------
{
    /// \brief AGC is switched off.
    agcOff = 0,
    /// \brief AGC is switched on.
    agcOn
};

//-----------------------------------------------------------------------------
/// \brief Defines valid offset calibration modes.
/// \ingroup DeviceSpecificInterface
enum TAutoOffsetCalibration
//-----------------------------------------------------------------------------
{
    /// \brief The automatic offset calibration is switched off.
    /**
     *  In this mode the offset can be adjusted manually.
     */
    aocOff = 0,
    /// \brief The automatic offset calibration is switched on.
    aocOn
};

//-----------------------------------------------------------------------------
/// \brief Defines the bayer conversion algorithm to use.
/// \ingroup CommonInterface
enum TBayerConversionMode // uint_type
//-----------------------------------------------------------------------------
{
    /// \brief Linear interpolation.
    /**
     *  This mode is fast but especially sharp edges will appear slightly blurred in the
     *  resulting image.
     */
    bcmLinearInterpolation,
    /// \brief Adaptive edge sensing.
    /**
     *  This mode requires more CPU time then linear interpolation, but the resulting image moreclosely
     *  matches the original scene. Edges will be reconstructed with higher accuracy except for noisy images.
     *  For better results in noisy images \b bcmLinearInterpolation is the recommended mode.
     */
    bcmAdaptiveEdgeSensing,
    /// \brief Auto.
    /**
     *  This mode automatically sets the Bayer conversion algorithm according to the format property of the camera description.
     */
    bcmAuto,
    /// \brief Packed.
    /**
     *  This mode is useful for line scan cameras only.
     */
    bcmPacked,
    /// \brief Linear Packed.
    /**
     *  This mode is useful for line scan cameras only.
     */
    bcmLinearPacked
};

//-----------------------------------------------------------------------------
/// \brief Defines valid bayer formats.
/// \ingroup CommonInterface
enum TBayerMosaicParity
//-----------------------------------------------------------------------------
{
    /// \brief It is not known whether the buffer or image contains raw Bayer data or the buffer or image does NOT contain raw Bayer data.
    bmpUndefined = -1,
    /// \brief The buffer or image starts with a green-red line starting with a green pixel.
    bmpGR,
    /// \brief The buffer or image starts with a green-red line starting with a red pixel.
    bmpRG,
    /// \brief The buffer or image starts with a green-blue line starting with a blue pixel.
    bmpBG,
    /// \brief The buffer or image starts with a green-blue line starting with a green pixel.
    bmpGB
};

//-----------------------------------------------------------------------------
/// \brief Defines valid results of a white balance calibration.
/// \ingroup CommonInterface
enum TBayerWhiteBalanceResult
//-----------------------------------------------------------------------------
{
    /// \brief No white balance calibration has been performed since start up.
    bwbrUnknown = 0,
    /// \brief The white balance calibration has been performed successfully for the selected setting.
    bwbrOK = 1,
    /// \brief An unknown error occurred during the white balance calibration for the selected setting.
    bwbrErrorUnknown = 2,
    /// \brief The previous white balance calibration failed because the reference image used for the calibration was too dark.
    bwbrErrorTooDark = 3,
    /// \brief The previous white balance calibration failed because the reference image used for the calibration was too bright.
    bwbrErrorTooBright = 4
};

#ifndef IGNORE_MVBLUEFOX_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief Defines valid thresholds( in Volt ) for the digital inputs of the
/// <b>mvBlueFOX</b> cameras.
/// \ingroup DeviceSpecificInterface
enum TBlueFOXDigitalInputThreshold
//-----------------------------------------------------------------------------
{
    /// \brief This input is assumed as logic '1' when the voltage applied to the input lies above about 2 Volts.
    bfdit2V = 2,
    /// \brief This input is assumed as logic '1' when the voltage applied to the input lies above about 10 Volts.
    bfdit10V = 10
};

//-----------------------------------------------------------------------------
/// \brief Defines the footer mode of the mvBlueFOX.
/// \ingroup DeviceSpecificInterface
enum TBlueFOXFooterMode
//-----------------------------------------------------------------------------
{
    /// \brief No footer.
    bffmOff  = 0,
    /// \brief A 64 Byte footer (standard).
    bffm64B  = 64,
    /// \brief A long 512 Byte footer.
    bffm512B = 512
};

//-----------------------------------------------------------------------------
/// \brief Defines valid image sensor capabilities
/**
 *  These enums may be 'ored' together.
 */
/// \ingroup DeviceSpecificInterface
enum TBlueFOXInfoSensorCapabilities // flags_attribute, uint_type
//-----------------------------------------------------------------------------
{
    /// \brief A dummy constant to indicate, that this device does not have any capabilities defined by other constants belonging to this enumeration.
    bfiscNone               = 0x00000,
    /// \brief This sensor allows to control the exposure time.
    bfiscExposure           = 0x00001,
    /// \brief This sensor allows to control the exposure time automatically.
    bfiscExposureAuto       = 0x00002,
    /// \brief This sensor allows to control the gain.
    bfiscGain               = 0x00004,
    /// \brief This sensor allows to control the gain automatically.
    bfiscGainAuto           = 0x00008,
    /// \brief This sensor allows to control the offset.
    bfiscOffset             = 0x00010,
    /// \brief This sensor allows to control the offset automatically.
    bfiscOffsetAuto         = 0x00020,
    /// \brief This sensor supports binning.
    bfiscBinning            = 0x00040,
    /// \brief This sensor supports triggered acquisition.
    bfiscTrigger            = 0x00080,
    /// \brief This sensor allows to output the 'exposure active' signal(e.g. to control a flash).
    bfiscFlash              = 0x00100,
    /// \brief This sensor supports line triggered acquisition.
    bfiscLineTrigger        = 0x00200,
    /// \brief This sensor can perform shading correction.
    bfiscShadingCorrection  = 0x00400,
    /// \brief This sensor supports overlapped exposure.
    bfiscOverlappedExposure = 0x00800,
    /// \brief This sensor supports frame delay.
    bfiscFrameDelay         = 0x01000,
    /// \brief This sensor supports line delay.
    bfiscLineDelay          = 0x02000,
    /// \brief This sensor supports to define an AOI for the AGC/AEC/AOC(Auto Offset Control) features.
    bfiscAutoControlAOI     = 0x04000,
    /// \brief This sensor supports to define the control speed for the AGC/AEC/AOC(Auto Offset Control) features.
    bfiscAutoControlSpeed   = 0x08000,
    /// \brief This sensor supports to define a delay for the AGC/AEC/AOC(Auto Offset Control) features.
    bfiscAutoControlDelay   = 0x10000,
    /// \brief This sensor supports a temperature sensor within the imager
    bfiscTemperatureSensor  = 0x20000
};

//-----------------------------------------------------------------------------
/// \brief Defines the version of the kernel driver the <b>mvBlueFOX</b> is running with.
/// \ingroup CommonInterface
enum TBlueFOXKernelDriver
//-----------------------------------------------------------------------------
{
    /// \brief The first version of the kernel driver.
    bfkdmvBlueFOX,
    /// \brief The second version of the kernel driver.
    /**
     *  Under Windows&reg; this driver results in less CPU load, Under Linux
     *  this driver is currently not available, however the first version of the
     *  Linux kernel driver provides the same performance as the second version
     *  under Windows&reg;.
     */
    bfkdmvBlueFOX2
};

//-----------------------------------------------------------------------------
/// \brief Defines Offset Auto Calibration Controller Speed.
/**
 *  These are relative values, that might result in a different behaviour depending
 *  on the sensor type used.
 */
/// \ingroup DeviceSpecificInterface
enum TBlueFOXOffsetAutoBlackSpeed
//-----------------------------------------------------------------------------
{
    /// \brief Fastest Setting
    bfoablFastest  = 0,
    /// \brief Very fast Setting
    bfoablVeryFast = 1,
    /// \brief Fast Setting
    bfoablFast     = 2,
    /// \brief Medium Setting
    bfoablMedium   = 3,
    /// \brief Slow Setting
    bfoablSlow     = 4,
    /// \brief Very slow Setting
    bfoablVerySlow = 6,
    /// \brief Slowest Setting
    bfoablSlowest  = 7
};

//-----------------------------------------------------------------------------
/// \brief Sensor timing options.
/// \ingroup DeviceSpecificInterface
enum TBlueFOXSensorTiming
//-----------------------------------------------------------------------------
{
    /// \brief Standard Timing
    bfstStandard = 0,
    /// \brief Fast line skip timing
    /**
     *  In this mode a faster line skip timing will be used. This will result in a higher
     *  frame rate in partial scan mode, but might affect the image quality.
     *
     *  \note
     *  This mode is not available for every <b>mvBlueFOX</b> camera.
     */
    bfstFastLineSkip = 1,
    /// This mode is not available for every <b>mvBlueFOX</b> camera.
    bfstLowSmearLineSkip = 2
};

//-----------------------------------------------------------------------------
/// \brief Defines the block size used for the USB transfer of the <b>mvBlueFOX</b>.
/// \ingroup DeviceSpecificInterface
enum TBlueFOXTransferSize
//-----------------------------------------------------------------------------
{
    /// \brief 16KB blocks.
    bfts16KB   = 16 * 1024,
    /// \brief 32KB blocks.
    bfts32KB   = 32 * 1024,
    /// \brief 64KB blocks.
    bfts64KB   = 64 * 1024,
    /// \brief 128KB blocks.
    bfts128KB  = 128 * 1024,
    /// \brief 256KB blocks.
    bfts256KB  = 256 * 1024,
    /// \brief 512KB blocks.
    bfts512KB  = 512 * 1024,
    /// \brief 1024KB blocks.
    bfts1024KB = 1024 * 1024,
    /// \brief 2048KB blocks.
    bfts2048KB = 2048 * 1024
};
#endif // #ifndef IGNORE_MVBLUEFOX_SPECIFIC_DOCUMENTATION

//-----------------------------------------------------------------------------
/// \brief Defines a Boolean value type.
/// \ingroup CommonInterface
enum TBoolean
//-----------------------------------------------------------------------------
{
    /// \brief Off, false or logical low.
    bFalse = 0,
    /// \brief On, true or logical high.
    bTrue = 1
};

//-----------------------------------------------------------------------------
/// \brief Defines the camera Aoi modes.
/// \ingroup DeviceSpecificInterface
enum TCameraAoiMode
//-----------------------------------------------------------------------------
{
    /// \brief Use the complete AOI window defined by the hardware or input data (sensor, camera).
    camFull = 0,
    /// \brief Use a user defined AOI window.
    camUser
};

//-----------------------------------------------------------------------------
/// \brief Defines valid binning modes for the camera.
/**
 *  \note
 *  Binning might be available for color sensors that do not support color
 *  binning. This will result in incorrect color information when the data
 *  is converted from a Bayer sensor. However under some circumstances this feature
 *  might be useful (e.g. when taking image in a very dark surrounding or at night
 *  where almost no color information will be contained in the image anyway thus
 *  resulting in useful images again). Therefore this feature has deliberately
 *  left available. \n \n
 *  \image html Binning_modes.png
 */
/// \ingroup DeviceSpecificInterface
enum TCameraBinningMode // flags_attribute, uint_type
//-----------------------------------------------------------------------------
{
    /// \brief No Binning.
    cbmOff = 0x0,
    /// \brief Horizontal Binning (combines 2 adjacent columns).
    cbmBinningH = 0x1,
    /// \brief Vertical Binning (combines 2 adjacent rows).
    cbmBinningV = 0x2,
    /// \brief Combines <b>mvIMPACT::acquire::cbmBinningH</b> and <b>mvIMPACT::acquire::cbmBinningV</b>.
    cbmBinningHV = cbmBinningH | cbmBinningV,
    /// \brief Horizontal Binning (combines 4 adjacent columns).
    cbmBinning3H = 0x10,
    /// \brief Vertical Binning (combines 4 adjacent rows).
    cbmBinning3V = 0x20,
    /// \brief Combines <b>mvIMPACT::acquire::cbmBinning3H</b> and <b>mvIMPACT::acquire::cbmBinning3V</b>.
    cbmBinning3H3V = cbmBinning3H | cbmBinning3V,
    /// \brief Horizontal Binning with average (combines 2 adjacent columns and averages the result).
    cbmBinningHAvg = 0x101,
    /// \brief Vertical Binning with average (combines 2 adjacent rows and averages the result).
    cbmBinningVAvg = 0x102,
    /// \brief Combines <b>mvIMPACT::acquire::cbmBinningH</b> and <b>mvIMPACT::acquire::cbmBinningV</b>.
    cbmBinningHVAvg = cbmBinningHAvg | cbmBinningVAvg,
    /// \brief Horizontal Binning with average (combines 4 adjacent columns and averages the result).
    cbmBinning3HAvg = 0x110,
    /// \brief Vertical Binning with average (combines 4 adjacent rows and averages the result).
    cbmBinning3VAvg = 0x120,
    /// \brief Combines <b>mvIMPACT::acquire::cbmBinning3H</b> and <b>mvIMPACT::acquire::cbmBinning3V</b>.
    cbmBinning3H3VAvg = cbmBinning3HAvg | cbmBinning3VAvg,
    /// \brief Horizontal Dropping (drops every second column).
    cbmDroppingH = 0x1001,
    /// \brief Vertical Dropping (drops every second row).
    cbmDroppingV = 0x1002,
    /// \brief Combines <b>mvIMPACT::acquire::cbmDroppingH</b> and <b>mvIMPACT::acquire::cbmDroppingV</b>.
    cbmDroppingHV = cbmDroppingH | cbmDroppingV,
    /// \brief Horizontal Dropping (drops 3 adjacent columns out of 4).
    cbmDropping3H = 0x1010,
    /// \brief Vertical Binning (drops 3 adjacent rows out of 4).
    cbmDropping3V = 0x1020,
    /// \brief Combines <b>mvIMPACT::acquire::cbmDropping3H</b> and <b>mvIMPACT::acquire::cbmDropping3V</b>.
    cbmDropping3H3V = cbmDropping3H | cbmDropping3V
};

#ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief Defines the data format the camera is sending.
/// \ingroup CommonInterface
enum TCameraDataFormat
//-----------------------------------------------------------------------------
{
    /// \brief This is an unknown type.
    cdfUnknown = 0,
    /// \brief This is a mono data format.
    cdfMono,
    /// \brief This is a Bayer format.
    cdfBayer,
    /// \brief This is a Bayer Packed format. For each object line there is a red and a blue raw line to calculate the resulting color line.
    cdfBayerPacked,
    /// \brief This is a RGB format.
    cdfRGB,
    /// \brief This is a YUV format.
    cdfYUV
};
#endif // #ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION

//-----------------------------------------------------------------------------
/// \brief Defines recognized camera sensor expose modes.
/// \ingroup DeviceSpecificInterface
enum TCameraExposeMode
//-----------------------------------------------------------------------------
{
    /// \brief Standard sequential mode.
    /**
     *  In this mode the sensor first is exposed and then afterwards the image readout
     *  is performed.
     */
    cemStandard = 0,
    /// \brief Overlapped mode, expose during image readout.
    /**
     *  This only affects the behaviour of the acquisition in <b>mvIMPACT::acquire::TCameraTriggerMode</b>
     *  is set to <b>mvIMPACT::acquire::ctmContinuous</b>.
     *
     *  In this mode the flash output should <b>NOT</b> be used. In any case the flash output will <b>NOT</b>
     *  work like in <b>mvIMPACT::acquire::cemStandard</b> but only a short pulse will be sent to
     *  the output.
     */
    cemOverlapped,
    /// \brief 'No shutter' mode, switch off exposure control.
    /**
     *  This only affects the behaviour of the acquisition in <b>mvIMPACT::acquire::TCameraTriggerMode</b>
     *  is set to <b>mvIMPACT::acquire::ctmContinuous</b>. In this case the shutter of the camera is
     *  never closed. Thus the exposure time in this mode is equal to the reciprocal value of the
     *  current frame rate.
     */
    cemNoShutter
};

#ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief Some grabbers are able to get the video signal and sync signals ( HD-IN, VD-IN ) on separate lines. The user can define this for non standard cameras.
/// \ingroup DeviceSpecificInterface
enum TCameraExternalSyncEdge
//-----------------------------------------------------------------------------
{
    // \brief The sync signal is expected within the video signal.
    ceseNo = 0,
    // \brief The falling edge of external sync signal is used ( HD-IN,VD-IN )
    ceseFallingEdge = 1,
    // \brief The rising edge of external sync signal is used ( HD-IN,VD-IN )
    ceseRisingEdge = 2
};

//-----------------------------------------------------------------------------
/// \brief Some grabbers are able to get the video signal and the sync signal on different input pins. The user can select this for non standard cameras.
/// \ingroup DeviceSpecificInterface
enum TCameraExternalSyncOutput
//-----------------------------------------------------------------------------
{
    // \brief The sync signal is expected on the selected video channel.
    // If RGB is used the sync signal is expected on the 'green' channel ( SyncOnGreen )
    cesoAuto = 0,
    // \brief The sync signal is expected on the first ('red') video channel ( mvTITAN-RGB only )
    cesoRed = 1,
    // \brief The sync signal is expected on the second ('green') video channel ( mvTITAN-RGB only )
    cesoGreen = 2,
    // \brief The sync signal is expected on the third ('blue') video channel ( mvTITAN-RGB only )
    cesoBlue = 3,
    // \brief The sync signal is expected on the fourth ('extern') video channel ( mvTITAN-RGB only )
    cesoExtern = 4
};
#endif // #ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION

//-----------------------------------------------------------------------------
/// \brief Defines valid camera flash modes.
/**
 *  These enumeration values may be 'ored' together.
 */
/// \ingroup DeviceSpecificInterface
enum TCameraFlashMode
//-----------------------------------------------------------------------------
{
    /// \brief Do not use the cameras flash output.
    cfmOff = 0,
    /// \brief Output 0 will be active during the exposure period.
    cfmDigout0 = 0x1,
    /// \brief Output 1 will be active during the exposure period.
    cfmDigout1 = 0x2
};

//-----------------------------------------------------------------------------
/// \brief Defines valid camera flash control types.
/// \ingroup DeviceSpecificInterface
enum TCameraFlashType
//-----------------------------------------------------------------------------
{
    /// \brief Flash signal is on while the shutter is open on a frame shutter sensor or during the complete exposure period of a rolling shutter sensor.
    cftStandard = 0,
    /// \brief Flash signal is only on during the time all lines of a rolling shutter sensor are exposed.
    /**
     *  This time is always smaller or equal to the time defined by <b>mvIMPACT::acquire::cftStandard</b>.
     */
    cftRollingShutterFlash = 1,
    /// \brief Flash signal is derived from the sensors internal VSync (Framesync. signal).
    /**
     *  The specific timing of this signal is hardware dependent. The signal can be used to synchronise
     *  a master camera with a flash or another camera with a rolling shutter sensor.
     */
    cftVSync = 2
};

//-----------------------------------------------------------------------------
/// \brief Defines valid camera <b>H</b>igh <b>D</b>ynamic <b>R</b>ange modes.
/// \ingroup DeviceSpecificInterface
enum TCameraHDRMode
//-----------------------------------------------------------------------------
{
    /// \brief Fixed HDR parameter set 0.
    cHDRmFixed0 = 0,
    /// \brief Fixed HDR parameter set 1.
    cHDRmFixed1 = 1,
    /// \brief Fixed HDR parameter set 2.
    cHDRmFixed2 = 2,
    /// \brief Fixed HDR parameter set 3.
    cHDRmFixed3 = 3,
    /// \brief Fixed HDR parameter set 4.
    cHDRmFixed4 = 4,
    /// \brief Fixed HDR parameter set 5.
    cHDRmFixed5 = 5,
    /// \brief Fixed HDR parameter set 6.
    cHDRmFixed6 = 6,
    /// \brief User specific HDR mode, controlled by additional parameters.
    cHDRmUser = 100
};

//-----------------------------------------------------------------------------
/// \brief Defines how the camera transmits its video signal.
/// \ingroup DeviceSpecificInterface
enum TCameraInterlacedType
//-----------------------------------------------------------------------------
{
    /// \brief The video signal is transmitted non interlaced, meaning that a complete image is transferred without interruption.
    citNone,
    /// \brief The video signal is transferred interlaced.
    /**
     *  Here the camera transmits the video signal in two consecutive frames that form a complete
     *  image. The first frame contains all the even lines (0, 2, 4, ... ) of the image, while
     *  the second frame contains all odd lines of the image.
     */
    citInterlaced,
    /// \brief The video signal is transferred interlaced with the two frames in reversed order.
    /**
     *  Here the camera transmits the video signal in two consecutive frames that form a complete
     *  image. The first frame contains all the odd lines (0, 2, 4, ... ) of the image, while
     *  the second frame contains all even lines of the image.
     */
    citInvertedInterlaced
};

#ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief Defines how the camera transmits the <b>DVAL</b> signal defined in the <b>CameraLink&reg; standard</b>.
/// \ingroup DeviceSpecificInterface
enum TCameraLinkDataValidMode
//-----------------------------------------------------------------------------
{
    /// \brief The camera transmits a data valid (<b>DVAL</b>) signal, that should be evaluated by the frame grabber.
    cldvmActive = 0,
    /// \brief The camera does not transmit a data valid (<b>DVAL</b>) signal, that should be evaluated by the frame grabber.
    cldvmInactive
};

//-----------------------------------------------------------------------------
/// \brief Defines valid ways a camera can offer image data to a capture device.
/// \ingroup CommonInterface
enum TCameraOutput
//-----------------------------------------------------------------------------
{
    /// \brief Specifies an undefined output.
    coUndefined = -1,
    /// \brief Auto mode. Here the capture device tries to guess how the data is transmitted.
    coAuto = 0,
    /// \brief The camera will offer an analogue composite video signal.
    coComposite = 1,
    /// \brief The camera will offer <b>CameraLink&reg; Base</b> compliant image data.
    coBase = 2,
    /// \brief The camera will offer digital image data.
    coDigital = 3,
    /// \brief The camera will offer an analogue SVideo signal.
    coSVideo = 4,
    /// \brief The camera will offer <b>CameraLink&reg; Medium</b> compliant image data.
    coMedium = 5,
    /// \brief The camera will offer an analogue RGB signal.
    coRGB = 6,
    /// \brief Two cameras will offer two synchronous analogue signals.
    co2xComposite = 7,
    /// \brief Three cameras will offer three synchronous analogue signals.
    co3xComposite = 8,
    /// \brief Four cameras will offer four synchronous analogue signals.
    co4xComposite = 9,
    /// \brief The camera will offer <b>CameraLink&reg; Full</b> compliant image data.
    coFull = 10,
    /// \brief The camera will offer serial digital interface(SDI) SD signal.
    coSDSDI = 11,
    /// \brief The camera will offer serial digital interface(SDI) HD signal.
    coHDSDI = 12,
    /// \brief The camera will offer serial digital interface(SDI) 3G signal.
    co3GSDI = 13
};
#endif // #ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION

//-----------------------------------------------------------------------------
/// \brief Defines valid camera pixel frequencies.
/// \ingroup DeviceSpecificInterface
enum TCameraPixelClock
//-----------------------------------------------------------------------------
{
    /// \brief Standard sensor clocking.
    /**
     *  This is a legacy mode used by some devices only.
     */
    cpcStandard = 0,
    /// \brief High speed sensor clocking.
    /**
     *  This is a legacy mode used by some devices only.
     */
    cpcHighSpeed = 1,
    /// \brief 6 MHz pixel clock.
    cpc6000KHz = 6000,
    /// \brief 8 MHz pixel clock.
    cpc8000KHz = 8000,
    /// \brief 10 MHz pixel clock.
    cpc10000KHz = 10000,
    /// \brief 12 MHz pixel clock.
    cpc12000KHz = 12000,
    /// \brief 13.5 MHz pixel clock.
    cpc13500KHz = 13500,
    /// \brief 20 MHz pixel clock.
    cpc20000KHz = 20000,
    /// \brief 24 MHz pixel clock.
    cpc24000KHz = 24000,
    /// \brief 24.54 MHz pixel clock.
    cpc24540KHz = 24540,
    /// \brief 27 MHz pixel clock.
    cpc27000KHz = 27000,
    /// \brief 32 MHz pixel clock.
    cpc32000KHz = 32000,
    /// \brief 37.6 MHz pixel clock.
    cpc37600KHz = 37600,
    /// \brief 40 MHz pixel clock.
    cpc40000KHz = 40000,
    /// \brief 50 MHz pixel clock.
    cpc50000KHz = 50000,
    /// \brief 57.6 MHz pixel clock.
    cpc57600KHz = 57600
};

//-----------------------------------------------------------------------------
/// \brief Defines valid scan modes for the a camera.
/// \ingroup DeviceSpecificInterface
enum TCameraScanMode
//-----------------------------------------------------------------------------
{
    /// \brief The connected camera is an area scan camera.
    csmArea = 0,
    /// \brief The connected camera is an line scan camera.
    csmLine
};

#ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief Defines valid baud rates for serial port communication between frame grabber and camera.
/// \ingroup DeviceSpecificInterface
enum TCameraSerialPortBaudRate
//-----------------------------------------------------------------------------
{
    /// \brief 9600 baud
    cspbr9600 = 9600,
    /// \brief 19200 baud
    cspbr19200 = 19200,
    /// \brief 38400 baud
    cspbr38400 = 38400,
    /// \brief 57600 baud
    cspbr57600 = 57600,
    /// \brief 115200 baud
    cspbr115200 = 115200,
    /// \brief 230400 baud
    cspbr230400 = 230400,
    /// \brief 460800 baud
    cspbr460800 = 460800,
    /// \brief 921600 baud
    cspbr921600 = 921600
};
#endif // #ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION

//-----------------------------------------------------------------------------
/// \brief Defines recognized camera sensor shutter modes.
/// \ingroup DeviceSpecificInterface
enum TCameraShutterMode
//-----------------------------------------------------------------------------
{
    /// \brief Standard Frame-Shutter mode.
    /**
     *  Start and stop of integration occurs at the same time for all pixels
     */
    csmFrameShutter = 0,
    /// \brief Electronic rolling shutter mode (ERS)
    /**
     *  Start and stop of integration occurs on a line by line base. Integration time is the same for all lines bit timing is slightly different
     */
    csmElectronicRollingShutter,
    /// \brief Global reset release shutter (GRR)
    /**
     *  Start of integration occurs at the same time for all pixels. End of integration happens on a line per line base like with ERS.
     *  This is only useful with special lighting or an mechanical extra shutter
     */
    csmGlobalResetRelease,
    /// Start and stop of integration will happen at the same time for all pixels. Uses optimisation for fast centered Readout.
    csmFrameShutterWithFastCenterReadout
};

#ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief Multitap cameras can transmit data in different ways. This enum can be used to define how the camera transmits a line of pixels.
/// \ingroup DeviceSpecificInterface
enum TCameraTapsXGeometry
//-----------------------------------------------------------------------------
{
    /// \brief One tap. Pixels are transmitted from left to right.
    cltxg1X = 0,
    /// \brief Two taps. Pixels are transmitted from left to right.
    /**
     *  Adjacent pixels are transmitted with one pixel clock.
     *
     *  <table>
     *  <tr><td class="header">clock cycle</td><td class="header">Pixel from Tap 1</td><td class="header">Pixel from Tap 2</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">1</td><td class="indexvalue">2</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">3</td><td class="indexvalue">4</td></tr>
     *  <tr><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td></tr>
     *  <tr><td class="indexvalue">W/2</td><td class="indexvalue">W-1</td><td class="indexvalue">W</td></tr>
     *  </table>
     */
    cltxg1X2 = 1,
    /// \brief Two taps. Sorting of data needed.
    /**
     *  The first tap will transmit the first half of each line, the second tap will transmit the second half
     *  of each line. Both taps will transmit pixels from left to right.
     *
     *  <table>
     *  <tr><td class="header">clock cycle</td><td class="header">Pixel from Tap 1</td><td class="header">Pixel from Tap 2</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">1</td><td class="indexvalue">W/2+1</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">2</td><td class="indexvalue">W/2+2</td></tr>
     *  <tr><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td></tr>
     *  <tr><td class="indexvalue">W/2</td><td class="indexvalue">W/2</td><td class="indexvalue">W</td></tr>
     *  </table>
     */
    cltxg2X = 2,
    /// \brief Two taps. Sorting of data needed.
    /**
     *  The first tap will transmit the first half of each line from left to right, the second tap will transmit the
     *  second half of the line from right to left.
     *
     *  <table>
     *  <tr><td class="header">clock cycle</td><td class="header">Pixel from Tap 1</td><td class="header">Pixel from Tap 2</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">1</td><td class="indexvalue">W</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">2</td><td class="indexvalue">W-1</td></tr>
     *  <tr><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td></tr>
     *  <tr><td class="indexvalue">W/2</td><td class="indexvalue">W/2</td><td class="indexvalue">W/2+1</td></tr>
     *  </table>
     */
    cltxg2XE = 3,
    /// \brief Two taps. Sorting of data needed.
    /**
     *  The first tap will transmit the first half of each line from right to left, the second tap will transmit the
     *  second half of the line from left to right.
     *
     *  <table>
     *  <tr><td class="header">clock cycle</td><td class="header">Pixel from Tap 1</td><td class="header">Pixel from Tap 2</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">W/2</td><td class="indexvalue">W/2+1</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">W/2-1</td><td class="indexvalue">W/2+2</td></tr>
     *  <tr><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td></tr>
     *  <tr><td class="indexvalue">W/2</td><td class="indexvalue">1</td><td class="indexvalue">W</td></tr>
     *  </table>
     */
    cltxg2XM = 4,
    /// \brief Three taps. Pixels are transmitted from left to right.
    /**
     *  Adjacent pixels are transmitted with one pixel clock.
     *
     *  <table>
     *  <tr><td class="header">clock cycle</td><td class="header">Pixel from Tap 1</td><td class="header">Pixel from Tap 2</td><td class="header">Pixel from Tap 3</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">1</td><td class="indexvalue">2</td><td class="indexvalue">3</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">4</td><td class="indexvalue">5</td><td class="indexvalue">6</td></tr>
     *  <tr><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td></tr>
     *  <tr><td class="indexvalue">W/3</td><td class="indexvalue">W-2</td><td class="indexvalue">W-1</td><td class="indexvalue">W</td></tr>
     *  </table>
     */
    cltxg1X3 = 5,
    /// \brief Three taps. Each tap will transmit one third of each line, pixel are transmitted from left to right. Sorting of data needed.
    /**
     *  The first tap will transmit the first third of each line, the second tap will transmit the second third and the third tap will transmit the
     *  last third of each line from left to right.
     *
     *  <table>
     *  <tr><td class="header">clock cycle</td><td class="header">Pixel from Tap 1</td><td class="header">Pixel from Tap 2</td><td class="header">Pixel from Tap 3</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">1</td><td class="indexvalue">W/3+1</td><td class="indexvalue">2W/3+1</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">2</td><td class="indexvalue">W/3+2</td><td class="indexvalue">2W/3+2</td></tr>
     *  <tr><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td></tr>
     *  <tr><td class="indexvalue">W/3</td><td class="indexvalue">W/3</td><td class="indexvalue">2W/3</td><td class="indexvalue">W</td></tr>
     *  </table>
     */
    cltxg3X = 6,
    /// \brief Four taps. Pixels are transmitted from left to right.
    /**
     *  Adjacent pixels are transmitted with one pixel clock.
     *
     *  <table>
     *  <tr><td class="header">clock cycle</td><td class="header">Pixel from Tap 1</td><td class="header">Pixel from Tap 2</td><td class="header">Pixel from Tap 3</td><td class="header">Pixel from Tap 4</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">1</td><td class="indexvalue">2</td><td class="indexvalue">3</td><td class="indexvalue">4</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">5</td><td class="indexvalue">6</td><td class="indexvalue">7</td><td class="indexvalue">8</td></tr>
     *  <tr><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td></tr>
     *  <tr><td class="indexvalue">W/4</td><td class="indexvalue">W-3</td><td class="indexvalue">W-2</td><td class="indexvalue">W-1</td><td class="indexvalue">W</td></tr>
     *  </table>
     */
    cltxg1X4 = 7,
    /// \brief Four taps. Each tap will transmit one fourth of each line, pixel are transmitted from left to right. Sorting of data needed.
    /**
     *  The first tap will transmit the first quarter of each line, the second tap will transmit the second quarter etc.
     *
     *  <table>
     *  <tr><td class="header">clock cycle</td><td class="header">Pixel from Tap 1</td><td class="header">Pixel from Tap 2</td><td class="header">Pixel from Tap 3</td><td class="header">Pixel from Tap 4</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">1</td><td class="indexvalue">W/4+1</td><td class="indexvalue">2W/4+1</td><td class="indexvalue">3W/4+1</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">2</td><td class="indexvalue">W/4+2</td><td class="indexvalue">2W/4+2</td><td class="indexvalue">3W/4+2</td></tr>
     *  <tr><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td></tr>
     *  <tr><td class="indexvalue">W/4</td><td class="indexvalue">W/4</td><td class="indexvalue">2W/4</td><td class="indexvalue">3W/4</td><td class="indexvalue">W</td></tr>
     *  </table>
     */
    cltxg4X = 8,
    /// \brief Four taps. The first two taps will transmit the first half of the line, while the second two taps will transmit the second half of the line. Sorting of data needed.
    /**
     *  Both tap pairs will transmit their data from left to right.
     *
     *  <table>
     *  <tr><td class="header">clock cycle</td><td class="header">Pixel from Tap 1</td><td class="header">Pixel from Tap 2</td><td class="header">Pixel from Tap 3</td><td class="header">Pixel from Tap 4</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">1</td><td class="indexvalue">2</td><td class="indexvalue">W/2+1</td><td class="indexvalue">W/2+2</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">3</td><td class="indexvalue">4</td><td class="indexvalue">W/2+3</td><td class="indexvalue">W/2+4</td></tr>
     *  <tr><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td></tr>
     *  <tr><td class="indexvalue">W/4</td><td class="indexvalue">W/2-1</td><td class="indexvalue">W/2</td><td class="indexvalue">W-1</td><td class="indexvalue">W</td></tr>
     *  </table>
     */
    cltxg2X2 = 9,
    /// \brief Four taps. The first two taps will transmit the first half of the line, while the second two taps will transmit the second half of the line. Sorting of data needed.
    /**
     *  The first tap pair will transmit the data from left to right, while the second pair of taps will transfer the data from right to left.
     *
     *  <table>
     *  <tr><td class="header">clock cycle</td><td class="header">Pixel from Tap 1</td><td class="header">Pixel from Tap 2</td><td class="header">Pixel from Tap 3</td><td class="header">Pixel from Tap 4</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">1</td><td class="indexvalue">2</td><td class="indexvalue">W-1</td><td class="indexvalue">W</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">3</td><td class="indexvalue">4</td><td class="indexvalue">W-3</td><td class="indexvalue">W-2</td></tr>
     *  <tr><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td></tr>
     *  <tr><td class="indexvalue">W/4</td><td class="indexvalue">W/2-1</td><td class="indexvalue">W/2</td><td class="indexvalue">W/2+1</td><td class="indexvalue">W/2+2</td></tr>
     *  </table>
     */
    cltxg2X2E = 10,
    /// \brief Four taps. The first two taps will transmit the first half of the line, while the second two taps will transmit the second half of the line. Sorting of data needed.
    /**
     *  The first tap pair will transmit the data from right to left, while the second pair of taps will transfer the data from left to right.
     *
     *  <table>
     *  <tr><td class="header">clock cycle</td><td class="header">Pixel from Tap 1</td><td class="header">Pixel from Tap 2</td><td class="header">Pixel from Tap 3</td><td class="header">Pixel from Tap 4</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">W/2-1</td><td class="indexvalue">W/2</td><td class="indexvalue">W/2+1</td><td class="indexvalue">W/2+2</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">W/2-3</td><td class="indexvalue">W/2-2</td><td class="indexvalue">W/2+3</td><td class="indexvalue">W/2+4</td></tr>
     *  <tr><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td></tr>
     *  <tr><td class="indexvalue">W/4</td><td class="indexvalue">1</td><td class="indexvalue">2</td><td class="indexvalue">W-1</td><td class="indexvalue">W</td></tr>
     *  </table>
     */
    cltxg2X2M = 11,
    /// \brief Four taps. Each tap will transmit one quarter of the image. Sorting of data needed.
    /**
     *  The first two taps will transmit the data from left to right, while the second two taps will transfer the data from right to to left.
     *
     *  <table>
     *  <tr><td class="header">clock cycle</td><td class="header">Pixel from Tap 1</td><td class="header">Pixel from Tap 2</td><td class="header">Pixel from Tap 3</td><td class="header">Pixel from Tap 4</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">1</td><td class="indexvalue">W/4+1</td><td class="indexvalue">3W/4</td><td class="indexvalue">W</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">2</td><td class="indexvalue">W/4+2</td><td class="indexvalue">3W/4-1</td><td class="indexvalue">W-1</td></tr>
     *  <tr><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td></tr>
     *  <tr><td class="indexvalue">W/4</td><td class="indexvalue">W/4</td><td class="indexvalue">W/2</td><td class="indexvalue">W/2+1</td><td class="indexvalue">3W/4+1</td></tr>
     *  </table>
     */
    cltxg4XE = 12,
    /// \brief Eight taps. Pixels are transmitted from left to right.
    /**
     *  Adjacent pixels are transmitted with one pixel clock.
     *  <table>
     *  <tr><td class="header">clock cycle</td><td class="header">Pixel from Tap 1</td><td class="header">Pixel from Tap 2</td><td class="header">Pixel from Tap 3</td><td class="header">Pixel from Tap 4</td><td class="header">Pixel from Tap 5</td><td class="header">Pixel from Tap 6</td><td class="header">Pixel from Tap 7</td><td class="header">Pixel from Tap 8</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">1</td><td class="indexvalue">2</td><td class="indexvalue">3</td><td class="indexvalue">4</td><td class="indexvalue">5</td><td class="indexvalue">6</td><td class="indexvalue">7</td><td class="indexvalue">8</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">9</td><td class="indexvalue">10</td><td class="indexvalue">11</td><td class="indexvalue">12</td><td class="indexvalue">13</td><td class="indexvalue">14</td><td class="indexvalue">15</td><td class="indexvalue">16</td></tr>
     *  <tr><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td></tr>
     *  <tr><td class="indexvalue">W/8</td><td class="indexvalue">W-7</td><td class="indexvalue">W-6</td><td class="indexvalue">W-5</td><td class="indexvalue">W-4</td><td class="indexvalue">W-3</td><td class="indexvalue">W-2</td><td class="indexvalue">W-1</td><td class="indexvalue">W</td></tr>
     *  </table>
     */
    cltxg1X8 = 13,
    /// \brief Eight taps. Each tap will transmit one eighth of each line, pixel are transmitted from left to right. Sorting of data needed.
    /**
     *  The first tap will transmit the first eighth of each line, the second tap will transmit the second eighth etc.
     *
     *  <table>
     *  <tr><td class="header">clock cycle</td><td class="header">Pixel from Tap 1</td><td class="header">Pixel from Tap 2</td><td class="header">Pixel from Tap 3</td><td class="header">Pixel from Tap 4</td><td class="header">Pixel from Tap 5</td><td class="header">Pixel from Tap 6</td><td class="header">Pixel from Tap 7</td><td class="header">Pixel from Tap 8</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">1</td><td class="indexvalue">W/8+1</td><td class="indexvalue">2W/8+1</td><td class="indexvalue">3W/8+1</td><td class="indexvalue">4W/8+1</td><td class="indexvalue">5W/8+1</td><td class="indexvalue">6W/8+1</td><td class="indexvalue">7W/8+1</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">2</td><td class="indexvalue">W/8+2</td><td class="indexvalue">2W/8+2</td><td class="indexvalue">3W/8+2</td><td class="indexvalue">4W/8+2</td><td class="indexvalue">5W/8+2</td><td class="indexvalue">6W/8+2</td><td class="indexvalue">7W/8+2</td></tr>
     *  <tr><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td></tr>
     *  <tr><td class="indexvalue">W/8</td><td class="indexvalue">W/8</td><td class="indexvalue">2W/8</td><td class="indexvalue">3W/8</td><td class="indexvalue">4W/8</td><td class="indexvalue">5W/8</td><td class="indexvalue">6W/8</td><td class="indexvalue">7W/8</td><td class="indexvalue">W</td></tr>
     *  </table>
     */
    cltxg8X = 14,
    /// \brief Eight taps. Every two taps will transmit one quarter of the line. Sorting of data needed.
    /**
     *  All tap pairs will transmit their data from left to right.
     *
     *  <table>
     *  <tr><td class="header">clock cycle</td><td class="header">Pixel from Tap 1</td><td class="header">Pixel from Tap 2</td><td class="header">Pixel from Tap 3</td><td class="header">Pixel from Tap 4</td><td class="header">Pixel from Tap 5</td><td class="header">Pixel from Tap 6</td><td class="header">Pixel from Tap 7</td><td class="header">Pixel from Tap 8</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">1</td><td class="indexvalue">2</td><td class="indexvalue">W/4+1</td><td class="indexvalue">W/4+2</td><td class="indexvalue">W/2+1</td><td class="indexvalue">W/2+2</td><td class="indexvalue">3W/4+1</td><td class="indexvalue">3W/4+2</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">3</td><td class="indexvalue">4</td><td class="indexvalue">W/4+3</td><td class="indexvalue">W/4+4</td><td class="indexvalue">W/2+3</td><td class="indexvalue">W/2+4</td><td class="indexvalue">3W/4+3</td><td class="indexvalue">3W/4+4</td></tr>
     *  <tr><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td></tr>
     *  <tr><td class="indexvalue">W/8</td><td class="indexvalue">W/4-1</td><td class="indexvalue">W/4</td><td class="indexvalue">W/2-1</td><td class="indexvalue">W/2</td><td class="indexvalue">3W/4-1</td><td class="indexvalue">3W/4</td><td class="indexvalue">W-1</td><td class="indexvalue">W</td></tr>
     *  </table>
     */
    cltxg4X2 = 15,
    /// \brief Eight taps. Every two taps will transmit one quarter of the line. Sorting of data needed.
    /**
     *  Taps 1 to 4 will transmit the data from left to right, while taps 5 to 8 will transmit the data from right to left.
     *
     *  <table>
     *  <tr><td class="header">clock cycle</td><td class="header">Pixel from Tap 1</td><td class="header">Pixel from Tap 2</td><td class="header">Pixel from Tap 3</td><td class="header">Pixel from Tap 4</td><td class="header">Pixel from Tap 5</td><td class="header">Pixel from Tap 6</td><td class="header">Pixel from Tap 7</td><td class="header">Pixel from Tap 8</td></tr>
     *  <tr><td class="indexvalue">1</td><td class="indexvalue">1</td><td class="indexvalue">2</td><td class="indexvalue">W/4+1</td><td class="indexvalue">W/4+2</td><td class="indexvalue">3W/4-1</td><td class="indexvalue">3W/4</td><td class="indexvalue">W-1</td><td class="indexvalue">W</td></tr>
     *  <tr><td class="indexvalue">2</td><td class="indexvalue">3</td><td class="indexvalue">4</td><td class="indexvalue">W/4+3</td><td class="indexvalue">W/4+4</td><td class="indexvalue">3W/4-3</td><td class="indexvalue">3W/4-2</td><td class="indexvalue">W-3</td><td class="indexvalue">W-2</td></tr>
     *  <tr><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td><td class="indexvalue">...</td></tr>
     *  <tr><td class="indexvalue">W/8</td><td class="indexvalue">W/4-1</td><td class="indexvalue">W/4</td><td class="indexvalue">W/2-1</td><td class="indexvalue">W/2</td><td class="indexvalue">W/2+1</td><td class="indexvalue">W/2+2</td><td class="indexvalue">3W/4+1</td><td class="indexvalue">3W/4+2</td></tr>
     *  </table>
     */
    cltxg4X2E = 16
};

//-----------------------------------------------------------------------------
/// \brief Multitap cameras can transmit data in different ways. This enumeration can be used to
/// define how the camera transmits the lines of pixels.
/// \ingroup DeviceSpecificInterface
enum TCameraTapsYGeometry
//-----------------------------------------------------------------------------
{
    /// \brief Lines from top to bottom.
    cltyg1Y = 0,
    /// \brief Two neighboured lines are transmitted during one FVAL
    cltyg1Y2 = 1,
    /// \brief One line from top and one line from bottom are transmitted during one FVAL
    cltyg2YE = 2
};

#endif // #ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION

//-----------------------------------------------------------------------------
/// \brief Defines valid transmission modes for the camera.
/// \ingroup DeviceSpecificInterface
enum TCameraTestMode
//-----------------------------------------------------------------------------
{
    /// \brief The 'normal' camera image will be transmitted.
    ctmOff = 0,
    /// \brief A grey gradient will be transmitted by the camera.
    ctmGreyRamp = 1,
    /// \brief A color test image with some moving components in it will be displayed.
    ctmMovingColor = 2,
    /// \brief A raw white Bayer image will be transmitted.
    ctmWBTest = 3
};

//-----------------------------------------------------------------------------
/// \brief Defines valid camera sensor trigger modes.
/**
 *  \anchor TCameraTriggerMode_Enum
 */
/// \ingroup DeviceSpecificInterface
enum TCameraTriggerMode
//-----------------------------------------------------------------------------
{
    /// \brief Don't wait for trigger. In this mode the camera continuously exposes images with the current settings.
    /**
     *  However images are not transferred to the host system automatically in this mode,
     *  so <b>NO</b> CPU load or whatsoever is produced in this mode when the driver isn't asked
     *  for images by the user.
     *
     *  This mode is recommended for most applications and will be available for every image sensor.
     *
     *  When the user requests an image the image <b>AFTER</b> the next frame start will be returned.
     *  In applications that need fast but <b>NOT</b> continuous image transfer the <b>mvIMPACT::acquire::ctmOnDemand</b>
     *  therefore might be more interesting.
     */
    ctmContinuous = 0,
    /// \brief Start frame expose when the software asks for an image.
    /**
     *  Here without image requests by the user the image sensor will not expose images. An exposure
     *  and image transmission will start immediately after at least one images has been requested
     *  by the user.
     *
     *  When e.g. a camera in free running mode captures 30 images per sec. and the user needs
     *  an image every 40 ms (25 fps) this mode might be more suitable then <b>mvIMPACT::acquire::ctmContinuous</b>
     *  as in the continuous mode when asking for an image every 40 ms the user might need to wait
     *  for the next frame start which at 30 Hz in the worst case would result in a capture time
     *  of (1/30Hz)*2 = 66.6 ms when an image start has just been missed. In
     *  <b>mvIMPACT::acquire::ctmOnDemand</b> however the image exposure will be started immediately
     *  after the request reaches the camera thus no delay will be introduced.
     *
     *  \note
     *  In applications where the capture time can be disregarded because either the transfer time is
     *  much higher or the capture frequency is very low the difference between the
     *  <b>mvIMPACT::acquire::ctmOnDemand</b> and the <b>mvIMPACT::acquire::ctmContinuous</b> can
     *  be disregarded as well. However in this case <b>mvIMPACT::acquire::ctmContinuous</b> is recommended
     *  as this mode will be available for every sensor type and is more universal.
     */
    ctmOnDemand,
    /// \brief Start the exposure of a frame when the trigger input is below the trigger threshold.
    /**
     *  Each time an image is requested and the trigger signal is below the trigger threshold a image will be captured.
     */
    ctmOnLowLevel,
    /// \brief Start the exposure of a frame when the trigger input is above the trigger threshold.
    /**
     *  Each time an image is requested and the trigger signal is above the trigger threshold a image will be captured.
     */
    ctmOnHighLevel,
    /// \brief Start the exposure of a frame when the trigger input level changes from high to low.
    ctmOnFallingEdge,
    /// \brief Start the exposure of a frame when the trigger input level changes from low to high.
    ctmOnRisingEdge,
    /// \brief Start frame expose when the trigger input level rises above the trigger threshold and
    /// expose while the trigger input level remains above this threshold.
    ctmOnHighExpose,
    /// \brief Start frame expose when the trigger input level falls below the trigger threshold and
    /// expose while the trigger input level remains below this threshold.
    ctmOnLowExpose,
    /// \brief Start the exposure of a frame when the trigger input level changes from high to low or from low to high.
    ctmOnAnyEdge,
    /// \brief Start the exposure of a frame when the trigger input level changes from high to low or from low to high.
    ctmFramerateControlled
    /// This mode is behaves like ctmContinuous but allowes the FPS-Rate to be controlled directly
};

//-----------------------------------------------------------------------------
/// \brief Defined valie camera sensor trigger source values.
/// \ingroup DeviceSpecificInterface
enum TCameraTriggerSource
//-----------------------------------------------------------------------------
{
    /// \brief Uses digital input 0 as the source for the trigger signal.
    ctsDigIn0 = 0,
    /// \brief Use digital input 1 as the source for the trigger signal.
    ctsDigIn1,
    /// \brief Use real time controller (RTCtrl) as the source for the trigger signal.
    ctsRTCtrl,
    /// \brief Uses digital output 0 as the source for the trigger signal (this allows a SW controlled trigger (or exposure)).
    ctsDigOut0,
    /// \brief Uses digital output 1 as the source for the trigger signal (this allows a SW controlled trigger (or exposure)).
    ctsDigOut1,
    /// \brief Uses digital output 2 as the source for the trigger signal (this allows a SW controlled trigger (or exposure)).
    ctsDigOut2,
    /// \brief Uses digital output 3 as the source for the trigger signal (this allows a SW controlled trigger (or exposure)).
    ctsDigOut3
};

//-----------------------------------------------------------------------------
/// \brief Defines valid modes for channel split filters.
/// \ingroup CommonInterface
enum TChannelSplitMode
//-----------------------------------------------------------------------------
{
    /// \brief The channels will be re-arranged one after the other thus the resulting image will have the same width but 'channel count' times more lines then the input image.
    csmVertical,
    /// \brief The channels will be re-arranged next to each other thus the resulting image will have the same height but 'channel count' times more pixels per line.
    csmHorizontal,
    /// \brief Only one selectable channel will be extracted and forwarded.
    csmExtractSingle
};

#ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief Clamp signal means, that an AC coupled video signal is clamped on the porch to get a signal transfer with less noise and independent from the d.c. voltage portion.
/**
 *  The clamp pulse width is always 0.5 micro sec.
 */
/// \ingroup DeviceSpecificInterface
enum TClampMode
//-----------------------------------------------------------------------------
{
    /// \brief Clamp pulse starts at 80 % of \b ActiveVideoAoi/X .
    ecmAuto,
    /// \brief The user can set the clamp start time in micro sec. after the falling edge of the video signals' VSync.
    ecmUser
};
#endif // IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION

//-----------------------------------------------------------------------------
/// \brief Defines valid values for input color correction matrices.
/**
 *  The constant values have the following meaning:
 *
 *  First column of values:
 *  <table>
 *  <tr><td class="header">Constant Value</td><td class="header">Meaning</td></tr>
 *  <tr><td class="indexvalue">0x00010000</td><td class="indexvalue">Custom(not associated with a specific product)</td></tr>
 *  <tr><td class="indexvalue">0x00020000</td><td class="indexvalue">mvBlueCOUGAR-X</td></tr>
 *  <tr><td class="indexvalue">0x00030000</td><td class="indexvalue">mvBlueCOUGAR-XD</td></tr>
 *  <tr><td class="indexvalue">0x00040000</td><td class="indexvalue">mvBlueFOX</td></tr>
 *  <tr><td class="indexvalue">0x00050000</td><td class="indexvalue">mvBlueFOX3</td></tr>
 *  </table>
 *
 *  Second column of values:
 *  <table>
 *  <tr><td class="header">Constant Value</td><td class="header">Meaning</td></tr>
 *  <tr><td class="indexvalue">0x10000000</td><td class="indexvalue">WPPLS</td></tr>
 *  </table>
 *
 *  Third column of values:
 *  A unique constant for each image sensor or custom selection. The following values have been
 *  assigned so far:
 *  - 0x0001: Aptina MT9V034 sensor
 *  - 0x0002: Aptina MT9M021 and MT9M031 sensor
 *  - 0x0003: Aptina MT9M023, MT9M024 and MT9M034 sensor
 *  - 0x0004: e2v EV76C560 sensor
 *  - 0x0005: CMOSIS CMV4000 sensor
 *  - 0x0006: Aptina MT9P031 sensor
 *  - 0x0007: Sony ICX424 sensor
 *  - 0x0008: Sony ICX414 sensor
 *  - 0x0009: Sony ICX415 sensor
 *  - 0x000a: Sony ICX445 sensor
 *  - 0x000b: Sony ICX267 sensor
 *  - 0x000c: Sony ICX274 sensor
 *  - 0x000d: Sony ICX655 sensor
 *  - 0x000e: Sony ICX674 sensor
 *  - 0x000f: Sony ICX694 sensor
 *  - 0x0010: Sony ICX814 sensor
 *  - 0x0011: Aptina MT9J003 sensor
 *  - 0x0012: CMOSIS CMV2000 sensor
 *  - 0x0013: CMOSIS CMV4000 sensor
 *  - 0x0014: ev2 EV76C570 sensor
 *  - 0x0015: Aptina AR0331 sensor
 *  - 0x0016: Sony ICX204 sensor
 *  - 0x0017: Sony IMX174 sensor
 *  - 0x0018: Sony ICX834 and ICX834_2T sensors
 *  - 0x0019: Sony ICX625 sensor
 *  - 0x001a: Aptina MT9F002 sensor
 *  - 0x001b: Sony IMX249 sensor
 *  - ...
 *  - 0x1000: User defined correction matrix
 *  - 0x2000: Driver automatically selects the matching sensor matrix if available
 */
/// \ingroup CommonInterface
enum TColorTwistInputCorrectionMatrixMode
//-----------------------------------------------------------------------------
{
    /// \brief A user defined correction matrix.
    cticmmUser                      = 0x00010000 |              0x1000,
    /// \brief A device specific internally defined correction matrix.
    /**
     *  This will almost always be the best selection as then the driver
     *  internally uses the best matrix for known products.
     */
    cticmmDeviceSpecific            = 0x00010000 |              0x2000,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx00wC devices.
    cticmmBlueCOUGAR_Xx00wC_WPPLS   = 0x00020000 | 0x10000000 | 0x0001,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx010C devices.
    cticmmBlueCOUGAR_Xx010C_WPPLS   = 0x00020000 | 0x10000000 | 0x0011,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx02bC devices.
    cticmmBlueCOUGAR_Xx02bC_WPPLS   = 0x00020000 | 0x10000000 | 0x0002,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx02dC devices.
    cticmmBlueCOUGAR_Xx02dC_WPPLS   = 0x00020000 | 0x10000000 | 0x0003,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx02eC devices.
    cticmmBlueCOUGAR_Xx02eC_WPPLS   = 0x00020000 | 0x10000000 | 0x0004,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx04bC and mvBlueCOUGAR-XDx04bC devices.
    cticmmBlueCOUGAR_Xx04bC_WPPLS   = 0x00020000 | 0x10000000 | 0x0005,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx04fC devices.
    cticmmBlueCOUGAR_Xx04fC_WPPLS   = 0x00020000 | 0x10000000 | 0x001b,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx05C devices.
    cticmmBlueCOUGAR_Xx05C_WPPLS    = 0x00020000 | 0x10000000 | 0x0006,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx20aC devices.
    cticmmBlueCOUGAR_Xx20aC_WPPLS   = 0x00020000 | 0x10000000 | 0x0007,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx20bC devices.
    cticmmBlueCOUGAR_Xx20bC_WPPLS   = 0x00020000 | 0x10000000 | 0x0008,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx20dC devices.
    cticmmBlueCOUGAR_Xx20dC_WPPLS   = 0x00020000 | 0x10000000 | 0x0009,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-x21C devices.
    cticmmBlueCOUGAR_Xx21C_WPPLS    = 0x00020000 | 0x10000000 | 0x0016,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx22C devices.
    cticmmBlueCOUGAR_Xx22C_WPPLS    = 0x00020000 | 0x10000000 | 0x000a,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx23C devices.
    cticmmBlueCOUGAR_Xx23C_WPPLS    = 0x00020000 | 0x10000000 | 0x000b,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx24C devices.
    cticmmBlueCOUGAR_Xx24C_WPPLS    = 0x00020000 | 0x10000000 | 0x000c,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx25aC devices.
    cticmmBlueCOUGAR_Xx25aC_WPPLS   = 0x00020000 | 0x10000000 | 0x000d,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx25C devices.
    cticmmBlueCOUGAR_Xx25C_WPPLS   = 0x00020000 | 0x10000000 | 0x0019,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx04C and mvBlueCOUGAR-XDx04C devices.
    cticmmBlueCOUGAR_Xx04C_WPPLS    = 0x00020000 | 0x10000000 | 0x0012,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx04aC and mvBlueCOUGAR-XDx04aC devices.
    cticmmBlueCOUGAR_Xx04aC_WPPLS   = 0x00020000 | 0x10000000 | 0x0013,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-Xx04eC devices.
    cticmmBlueCOUGAR_Xx04eC_WPPLS   = 0x00020000 | 0x10000000 | 0x0014,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-XDx04dC devices.
    cticmmBlueCOUGAR_XDx04dC_WPPLS = 0x00030000 | 0x10000000 | 0x0017,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-XDx212aC and mvBlueCOUGAR-XDx212C devices.
    cticmmBlueCOUGAR_XDx212C_WPPLS = 0x00030000 | 0x10000000 | 0x0018,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-XDx24aC and mvBlueCOUGAR-XDx24bC devices.
    cticmmBlueCOUGAR_XDx24aC_WPPLS  = 0x00030000 | 0x10000000 | 0x000e,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-XDx26C and mvBlueCOUGAR-XDx26aC devices.
    cticmmBlueCOUGAR_XDx26C_WPPLS   = 0x00030000 | 0x10000000 | 0x000f,
    /// \brief The WPPLS correction matrix for mvBlueCOUGAR-XDx29C and mvBlueCOUGAR-XDx29aC devices.
    cticmmBlueCOUGAR_XDx29C_WPPLS   = 0x00030000 | 0x10000000 | 0x0010,
    /// \brief The WPPLS correction matrix for mvBlueFOX-x00wC devices.
    cticmmBlueFOX_x00wC_WPPLS       = 0x00040000 | 0x10000000 | 0x0001,
    /// \brief The WPPLS correction matrix for mvBlueFOX-x02bC devices.
    cticmmBlueFOX_x02bC_WPPLS       = 0x00040000 | 0x10000000 | 0x0002,
    /// \brief The WPPLS correction matrix for mvBlueFOX-x02dC devices.
    cticmmBlueFOX_x02dC_WPPLS       = 0x00040000 | 0x10000000 | 0x0003,
    /// \brief The WPPLS correction matrix for mvBlueFOX-x05C devices.
    cticmmBlueFOX_x05C_WPPLS        = 0x00040000 | 0x10000000 | 0x0006,
    /// \brief The WPPLS correction matrix for mvBlueFOX-x20aC devices.
    cticmmBlueFOX_x20aC_WPPLS       = 0x00040000 | 0x10000000 | 0x0007,
    /// \brief The WPPLS correction matrix for mvBlueFOX-x21C devices.
    cticmmBlueFOX_x21C_WPPLS        = 0x00040000 | 0x10000000 | 0x0016,
    /// \brief The WPPLS correction matrix for mvBlueFOX-x23C devices.
    cticmmBlueFOX_x23C_WPPLS        = 0x00040000 | 0x10000000 | 0x000b,
    /// \brief The WPPLS correction matrix for mvBlueFOX-x24C devices.
    cticmmBlueFOX_x24C_WPPLS        = 0x00040000 | 0x10000000 | 0x000c,
    /// \brief The WPPLS correction matrix for mvBlueFOX3-x100C devices.
    cticmmBlueFOX3_x100C_WPPLS      = 0x00050000 | 0x10000000 | 0x0011,
    /// \brief The WPPLS correction matrix for mvBlueFOX3-x020C devices.
    cticmmBlueFOX3_x020C_WPPLS      = 0x00050000 | 0x10000000 | 0x0014,
    /// \brief The WPPLS correction matrix for mvBlueFOX3-x031C devices.
    cticmmBlueFOX3_x031C_WPPLS      = 0x00050000 | 0x10000000 | 0x0015,
    /// \brief The WPPLS correction matrix for mvBlueFOX3-x012bC devices.
    cticmmBlueFOX3_x012bC_WPPLS     = 0x00050000 | 0x10000000 | 0x0002,
    /// \brief The WPPLS correction matrix for mvBlueFOX3-x012dC devices.
    cticmmBlueFOX3_x012dC_WPPLS     = 0x00050000 | 0x10000000 | 0x0003,
    /// \brief The WPPLS correction matrix for mvBlueFOX3-x013C devices.
    cticmmBlueFOX3_x013C_WPPLS      = 0x00050000 | 0x10000000 | 0x0004,
    /// \brief The WPPLS correction matrix for mvBlueFOX3-x024C devices.
    cticmmBlueFOX3_x024C_WPPLS      = 0x00050000 | 0x10000000 | 0x0017,
    /// \brief The WPPLS correction matrix for mvBlueFOX3-x140C devices.
    cticmmBlueFOX3_x140C_WPPLS      = 0x00050000 | 0x10000000 | 0x001a,
    /// \brief The WPPLS correction matrix for mvBlueFOX3-x024C devices.
    cticmmBlueFOX3_x024aC_WPPLS      = 0x00050000 | 0x10000000 | 0x001b
};

//-----------------------------------------------------------------------------
/// \brief Defines valid values for output color correction matrices.
/// \ingroup CommonInterface
enum TColorTwistOutputCorrectionMatrixMode
//-----------------------------------------------------------------------------
{
    /// \brief A user defined correction matrix.
    ctocmmUser,
    /// \brief Will apply the XYZ to Adobe RGB matrix with a D50 white reference.
    /**
     *  The following matrix will be applied:
     *
     *  <table>
     *  <tr><td class="header">Row 0</td><td class="header">Row 1</td><td class="header">Row 2</td></tr>
     *  <tr><td class="indexvalue">1.9624274</td><td class="indexvalue">-0.6105343</td><td class="indexvalue">-0.3413404</td></tr>
     *  <tr><td class="indexvalue">-0.9787684</td><td class="indexvalue">1.9161415</td><td class="indexvalue">0.0334540</td></tr>
     *  <tr><td class="indexvalue">0.0286869</td><td class="indexvalue">-0.1406752</td><td class="indexvalue">1.3487655</td></tr>
     *  </table>
     */
    ctocmmXYZToAdobeRGB_D50,
    /// \brief Will apply the XYZ to sRGB matrix with a D50 white reference.
    /**
     *  The following matrix will be applied:
     *
     *  <table>
     *  <tr><td class="header">Row 0</td><td class="header">Row 1</td><td class="header">Row 2</td></tr>
     *  <tr><td class="indexvalue">3.1338561</td><td class="indexvalue">-1.6168667</td><td class="indexvalue">-0.4906146</td></tr>
     *  <tr><td class="indexvalue">-0.9787684</td><td class="indexvalue">1.9161415</td><td class="indexvalue">0.0334540</td></tr>
     *  <tr><td class="indexvalue">0.0719453</td><td class="indexvalue">-0.2289914</td><td class="indexvalue">1.4052427</td></tr>
     *  </table>
     */
    ctocmmXYZTosRGB_D50,
    /// \brief Will apply the XYZ to White Gamut RGB matrix with a D50 white reference.
    /**
     *  The following matrix will be applied:
     *
     *  <table>
     *  <tr><td class="header">Row 0</td><td class="header">Row 1</td><td class="header">Row 2</td></tr>
     *  <tr><td class="indexvalue">1.4628067</td><td class="indexvalue">-0.1840623</td><td class="indexvalue">-0.2743606</td></tr>
     *  <tr><td class="indexvalue">-0.5217933,</td><td class="indexvalue">1.4472381</td><td class="indexvalue">0.0677227</td></tr>
     *  <tr><td class="indexvalue">0.0349342</td><td class="indexvalue">-0.0968930</td><td class="indexvalue">1.2884099</td></tr>
     *  </table>
     */
    ctocmmXYZToWideGamutRGB_D50,
    /// \brief Will apply the XYZ to Adobe RGB matrix with a D65 white reference.
    /**
     *  The following matrix will be applied:
     *
     *  <table>
     *  <tr><td class="header">Row 0</td><td class="header">Row 1</td><td class="header">Row 2</td></tr>
     *  <tr><td class="indexvalue">2.0413690</td><td class="indexvalue">-0.5649464</td><td class="indexvalue">-0.3446944</td></tr>
     *  <tr><td class="indexvalue">-0.9692660</td><td class="indexvalue">1.8760108</td><td class="indexvalue">0.0415560</td></tr>
     *  <tr><td class="indexvalue">0.0134474</td><td class="indexvalue">-0.1183897</td><td class="indexvalue">1.0154096</td></tr>
     *  </table>
     */
    ctocmmXYZToAdobeRGB_D65,
    /// \brief Will apply the XYZ to sRGB matrix with a D65 white reference.
    /**
     *  The following matrix will be applied:
     *
     *  <table>
     *  <tr><td class="header">Row 0</td><td class="header">Row 1</td><td class="header">Row 2</td></tr>
     *  <tr><td class="indexvalue">3.2404542</td><td class="indexvalue">-1.5371385</td><td class="indexvalue">-0.4985314</td></tr>
     *  <tr><td class="indexvalue">-0.9692660</td><td class="indexvalue">1.8760108</td><td class="indexvalue">0.0415560</td></tr>
     *  <tr><td class="indexvalue">0.0556434</td><td class="indexvalue">-0.2040259</td><td class="indexvalue">1.0572252</td></tr>
     *  </table>
     */
    ctocmmXYZTosRGB_D65
};

//-----------------------------------------------------------------------------
/// \brief Defines the color processing mode.
/// \ingroup CommonInterface
enum TColorProcessingMode
//-----------------------------------------------------------------------------
{
    /// \brief The driver decides (depending on the connected camera) what kind of color processing has to be applied.
    cpmAuto = 0,
    /// \brief No color processing will be performed.
    cpmRaw,
    /// \brief A Bayer color conversion will be applied before the image is transferred to the user.
    cpmBayer,
    /// \brief A Bayer to mono conversion will be applied before the image is transferred to the user.
    cpmBayerToMono,
    /// \brief No color processing will be performed but the packed raw Bayer data will be re-arranged within the buffer.
    /**
     *  In the resulting image the top left quarter of the image will contain the red pixels,
     *  the top right quarter the blue pixels, the lower left quarter the green pixels from the
     *  red line and the lower right quarter the green pixels from the blue line:
     *
        \verbatim
        // w: width, h: height
        R(0, 0)          R(0, 1), ...          R(0, (w-1)/2)          B(0, 0)          B(0, 1), ...          B(0, (w-1)/2)
        R(1, 0)          R(1, 1), ...          R(1, (w-1)/2)          B(1, 0)          B(1, 1), ...          B(1, (w-1)/2)
                  .
                  .
                  .
        R((h-1/2), 0)    R((h-1/2), 1), ...    R((h-1/2), (w-1)/2)    B((h-1/2), 0)    B((h-1/2), 1), ...    B((h-1/2), (w-1)/2)
        G(R)(0, 0)       G(R)(0, 1), ...       G(R)(0, (w-1)/2)       G(B)(0, 0)       G(B)(0, 1), ...       G(B)(0, (w-1)/2)
        G(R)(1, 0)       G(R)(1, 1), ...       G(R)(1, (w-1)/2)       G(B)(1, 0)       G(B)(1, 1), ...       G(B)(1, (w-1)/2)
                  .
                  .
                  .
        G(R)((h-1/2), 0) G(R)((h-1/2), 1), ... G(R)((h-1/2), (w-1)/2) G(B)((h-1/2), 0) G(B)((h-1/2), 1), ... G(B)((h-1/2), (w-1)/2)
        \endverbatim
     */
    cpmRawToPlanes
};

//-----------------------------------------------------------------------------
/// \brief Defines valid modes for the dark current filter.
/// \ingroup CommonInterface
enum TDarkCurrentFilterMode
//-----------------------------------------------------------------------------
{
    /// \brief The filter is switched off.
    dcfmOff = 0,
    /// \brief The filter is switched on.
    dcfmOn,
    /// \brief The next selected number of images will be taken for calculating the dark current correction image.
    /**
     *  In this mode after the correction image has been calculated the mode will automatically switch back to
     *  <b>mvIMPACT::acquire::dcfmOff</b>
     */
    dcfmCalibrateDarkCurrent,
    /// \brief In this mode whenever reaching this filter, the captured image will be replaced by the
    /// last correction image, that has been created as a result of the filter being calibrated.
    dcfmTransmitCorrectionImage
};

//-----------------------------------------------------------------------------
/// \brief Defines valid modes for defective pixels filter.
/// \ingroup CommonInterface
enum TDefectivePixelsFilterMode
//-----------------------------------------------------------------------------
{
    /// \brief This filter is switched off.
    dpfmOff = 0,
    /// \brief The filter is active, detected defective pixels will be replaced with the average value from the left and right neighbour pixel.
    dpfm3x1Average,
    /// \brief The filter is active, detected defective pixels will be replaced with the median value calculated from the nearest neighbours (3x3).
    dpfm3x3Median,
    /// \brief reset the calibration, delete all internal lists.
    dpfmResetCalibration,
    /// \brief Detect defective leaky pixels within the next frame captured.
    /**
     *  These are pixels that produce a higher read out value than average when the sensor is not exposed.
     */
    dpfmCalibrateLeakyPixel,
    /// \brief Detect defective cold pixels within the next frame captured.
    /**
     *  These are pixels that produce a lower read out code than average when the sensor is exposed to light.
     */
    dpfmCalibrateColdPixel
};

//-----------------------------------------------------------------------------
/// \brief Defines valid device access modes.
/// \ingroup CommonInterface
enum TDeviceAccessMode
//-----------------------------------------------------------------------------
{
    /// \brief Unknown device access mode.
    damUnknown,
    /// \brief No access to the device.
    damNone,
    /// \brief Requested or obtained read access to the device.
    /**
     *  Properties can be read but can't be changed.
     */
    damRead,
    /// \brief Requested or obtained control access to the device.
    /**
     *  Properties can be read and changed, other applications might establish read
     *  access.
     */
    damControl,
    /// \brief Requested or obtained exclusive access to the device.
    /**
     *  Properties can be read and changed, other applications can't establish access to the device.
     */
    damExclusive
};

//-----------------------------------------------------------------------------
/// \brief Defines valid advanced options
/**
 *  These enums may be 'ored' together.
 */
/// \ingroup DeviceSpecificInterface
enum TDeviceAdvancedOptions // flags_attribute, uint_type
//-----------------------------------------------------------------------------
{
    /// \brief No advanced option selected.
    daoOff = 0,
    /// \brief Put camera in low light mode.
    /**
     *  This is a special feature offered by some sensors. Typically this will enable an additional analogue
     *  gain that will increase both the luminance and the noise of the resulting image. This feature can not
     *  be configured any further and there also is no additional information available on this topic.
     */
    daoLowLight = 0x1,
    /// \brief Embed sensor specific info into the image readout buffer.
    daoEmbeddedImageInfo = 0x2,
    /// \brief Calculate the average intensity value of the image and return as part of the request.
    daoImageAverage = 0x4,
    /// \brief Enable pipelined Gain/Exposure control.
    /**
     *  This will result in a changed exposure or gain value becoming active not with the next frame but the one after that.
     *  Changing Gain/Exposure will be faster in pipelined Gain/Exposure control mode.
     */
    daoPipelinedGainExposeControl = 0x8,
    /// \brief Enable on demand trigger preshot option.
    /**
     *  This will trigger an internal image capture cycle on the sensor prior to the user requested frame.
     *  Can be used to remove variations in image quality when working with unstable frame rates.
    */
    daoOnDemandTriggerPreShot = 0x10,
    /// \brief Enable low frame rate optimization.
    /**
     *  This will result in a much reduced variation in the offset signal when changing the sensor frame rate or running
     *  the sensor at low frame rates. The offset will change slightly if switched on and the signal response is slightly reduced.
    */
    daoLowFrameRateOptimization = 0x20,
    /// \brief Enable per channel offset correction.
    /**
     *  Allow per channel offset correction in non auto offset mode for sensors with a bayer (RGGB) based analog path.
     *  The per channel offset value will be added to the master offset (Offset_pc).
    */
    daoEnablePerChannelOffsetCorrection = 0x40,
    /// \brief Enable raw sensor gain.
    /**
     *  Use mathematical correct gain for sensor setting. Thus increasing the gain by 6 dB will actually result in a factor of 2.
     *  However with this option enabled the gain range will include values so low that the pixel saturation charge will
     *  be with in ADC digitizer range thus an over-saturated image will contain pixels that do \b NOT contain the maximum
     *  value for the given pixel format.
    */
    daoUseRawSensorGain = 0x80,
    /// \brief Trigger sensor column correction.
    /**
     * When switched on this triggers a single column correction calibration process when requesting an image.
     * To do it again switch it off and on again. This should be done while no acquisition is running.
     * Changing gain or AOI could make such a recalibration necessary.
    */
    daoTriggerSensorColumnCalibration = 0x100
};

//-----------------------------------------------------------------------------
/// \brief Defines valid device capabilities.
/**
 *  Values of these enum type may be 'OR'ed together.
 */
/// \ingroup CommonInterface
enum TDeviceCapability // flags_attribute, uint_type
//-----------------------------------------------------------------------------
{
    /// \brief A dummy constant to indicate, that this device does not have any capabilities defined by other constants belonging to this enumeration.
    dcNone = 0x0,
    /// \brief This is a device that supports hot plugging.
    dcHotplugable = 0x1,
    /// \brief This is a device, that has more than one video input channel.
    dcSelectableVideoInputs = 0x2,
    /// \brief This device has non volatile memory, the user can write to and read from.
    dcNonVolatileUserMemory = 0x4,
    /// \brief This device supports camera descriptions.
    /**
     *  This is a feature mainly interesting for frame grabbers.
     */
    dcCameraDescriptionSupport = 0x8,
    /// \brief This device supports events.
    dcEventSupport = 0x10
};

//-----------------------------------------------------------------------------
/// \brief Defines valid generic device classes.
/// \ingroup CommonInterface
enum TDeviceClass
//-----------------------------------------------------------------------------
{
    /// \brief A generic device
    dcGeneric,
    /// \brief A plain camera device
    dcCamera,
    /// \brief An intelligent camera device
    dcIntelligentCamera,
    /// \brief A frame grabber device
    dcFrameGrabber
};

//-----------------------------------------------------------------------------
/// \brief Defines grabber specific digital output modes.
/// \ingroup DeviceSpecificInterface
enum TDeviceDigitalOutputMode
//-----------------------------------------------------------------------------
{
    /// \brief The digital output can be switched manually.
    ddomManual = 0,
    /// \brief A single pulse will be generated on the digital output.
    ddomPulse,
    /// \brief A user defined signal will be generated on the digital output.
    ddomUser,
    /// \brief The digital output will change its state during the active exposure period of the image sensor and will switch back to its initial state again once the exposure period is over.
    ddomExposureActive,
    /// \brief A signal connected to a digital input is passed through to this digital output.
    ddomDigitalSignalPassThrough,
    /// \brief A signal connected to a digital input is inverted and passed to this digital output.
    ddomDigitalSignalPassThroughInv,
    /// \brief An internal VD sync. signal will be passed to this digital output.
    /**
     *  In case of a camera this e.g. might be the cameras internal VD signal. This then can be used to
     *  synchronize two or more cameras.
     */
    ddomInternalVD,
    /// \brief The digital output is controlled by a <b>R</b>eal <b>T</b>ime <b>C</b>ontroller.
    ddomRealTimeController,
    /// \brief When there is at least one outstanding request the digital output will change its state during the active exposure period of the image sensor and will switch back to its initial state again once the exposure period is over.
    ddomExposureAndAcquisitionActive,
    /// \brief Will change the state whenever the device temperature moves in or out of defined limits(<b>subject to change</b>!).
    ddomTemperatureOutOfRange
};

//-----------------------------------------------------------------------------
/// \brief Defines valid event states.
/**
 *  A driver might offer to inform the user about certain events that occur
 *  at runtime. This e.g. might be unplugging the device if it's PnP compliant or
 *  the detection of a digital input change.
 */
/// \ingroup CommonInterface
enum TDeviceEventMode
//-----------------------------------------------------------------------------
{
    /// \brief This event won't be signalled in this state even if the underlying event has been noticed by the device driver.
    demIgnore,
    /// \brief This event will be notified whenever the underlying event has been detected by the device driver.
    demNotify
};

//-----------------------------------------------------------------------------
/// \brief Defines valid device event types.
/**
 *  \note
 *  Not every device will support every event.
 *
 *  \deprecated
 *  This enumeration belongs to a set of functions and data types that have been declared
 *  deprecated and will be removed in future versions of this interface.
 *  A more flexible way of getting informed about changes in driver features
 *  has been added to the interface and should be used instead. Look for an example
 *  called \a Callback to find out how to use it.
 */
/// \ingroup CommonInterface
enum TDeviceEventType // flags_attribute, uint_type
//-----------------------------------------------------------------------------
{
    /// \brief A dummy constant to specify \a no event where an event type must be specified.
    detNone = 0,
    /// \brief An event of this type will be signalled (<b>if desired</b>) each time a hotplug compliant device recognized by the mvIMPACT acquire device manager has been connected to the system(<b>deprecated</b>).
    /**
     *  \deprecated
     *  This event has been declared deprecated. An application should register a callback
     *  to the state property instead.
     */
    detPnPArrival = 0x1,
    /// \brief An event of this type will be signalled (<b>if desired</b>) each time a hotplug compliant device recognized by the mvIMPACT acquire device manager has been disconnected to the system(<b>deprecated</b>).
    /**
     *  \deprecated
     *  This event has been declared deprecated. An application should register a callback
     *  to the state property instead.
     */
    detPnPRemoval = 0x2,
    /// \brief An event of this type will be signalled (<b>if desired</b>) each time the start of a new image has been detected by the device.
    /**
     *  \note
     *  This is currently only supported by mvTITAN/mvGAMMA devices.
     */
    detFrameStart = 0x4,
    /// \brief An event of this type will be signalled (<b>if desired</b>) each time the histogram is calculated.
    /**
     *  \note
     *  This is currently only supported by OEM devices.
     */
    detHistogramReady = 0x8,
    /// \brief A combination of all event types, which can be used as a mask.
    detAll = detPnPArrival | detPnPRemoval | detFrameStart | detHistogramReady
};

#ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief Defines acquisition start event if using pulse sequences.
/// \ingroup DeviceSpecificInterface
enum TDeviceImageTrigger
//-----------------------------------------------------------------------------
{
    /// \brief Acquisition starts with trigger event as fast as possible.
    ditImmediately = 0,
    /// \brief Acquisition starts after all defined signals have been generated on the digital outputs.
    ditAfterDigOutSignals
};
#endif // IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION

//-----------------------------------------------------------------------------
/// \brief Defines valid interface layouts for the device.
/**
 *  The device interface layout defines what kind of features will be available
 *  after the device driver has been opened and where these features will be
 *  located. Apart from that the interface layout also has impact at what time
 *  property values will be buffered for buffer captures.
 */
/// \ingroup CommonInterface
enum TDeviceInterfaceLayout
//-----------------------------------------------------------------------------
{
#if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
    MV_CUSTOM_DEVICE_INTERFACE_LAYOUTS
#endif // #if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
    /// \brief A device specific interface shall be used(<b>deprecated</b> for all GenICam compliant devices).
    /**
     *  For most devices supported by this SDK this will be the only interface layout
     *  available. In this interface layout also most of the features will have
     *  the same name and location for every device even if a device is operated
     *  using another device driver. However this interface layout requires the
     *  driver to have detailed information about the underlying hardware, thus
     *  it will not be available for any third party hardware which might be useable with
     *  a certain device driver.
     *
     *  In contrast to the other interface layouts, this layout will use a \a buffered \a property
     *  \a approach. This means it allows to request consecutive buffers each using defined but
     *  different settings. At the time of requesting a buffer, the driver will internally store the
     *  current property settings and will re-program the hardware later at the time of processing
     *  this request if the current settings differ from the settings that shall be used for this request.
     *
     *  \deprecated
     *  This interface layout has been declared deprecated for GenICam compliant devices(mvBlueCOUGAR-P, mvBlueCOUGAR-S,
     *  mvBlueCOUGAR-X, mvBlueCOUGAR-XD and mvBlueLYNX-M7). For these products please use <b>mvIMPACT::acquire::dilGenICam</b>
     *  instead \ref InterfaceLayouts_Differences.
     */
    dilDeviceSpecific = 1,
    /// \brief A GenICam&trade; like interface layout shall be used.
    /**
     *  This interface layout will be available when a device is
     *  (or claims to be) compliant with a the GenICam&trade; standard, thus provides a GenICam&trade;
     *  compliant XML interface description. This also applies for third party devices, which can
     *  be used with the GenICam GenTL Producer of mvIMPACT Acquire.
     *
     *  In this interface layout property value changes will always have immediate effect, thus when
     *  changing the exposure time directly \b after requesting a buffer this buffer might be captured
     *  with the new exposure time already depending on the time the buffer request is actually be processed.
     *
     *  \note This interface layout will allow to access third party devices as well.
     *
     *  \sa \ref AccessingAndWorkingWithPropertiesMethodsAndLists
     */
    dilGenICam = 2
};

//-----------------------------------------------------------------------------
/// \brief Defines valid modes for the loading of settings during initialization.
/**
 *  Whenever a <b>mvIMPACT::acquire::Device</b> is initialized this enumeration type defines the mode the
 *  <b>mvIMPACT::acquire::Device</b> tries to restore settings from a previously stored session.
 */
/// \ingroup CommonInterface
enum TDeviceLoadSettings
//-----------------------------------------------------------------------------
{
    /// \brief Tries to load settings automatically following an internal procedure.
    /**
     *  The load cycle at initialization time is like this:
     *
     * \code
     *  look for a setting for this particular device (via serial number)
     *  if not found
     *    look for a setting for this device type (via string in property 'Product' )
     *    if not found
     *      look for a setting for this device family (via string in property 'Family' )
     *      if not found
     *        use the default settings
     * \endcode
     *
     *  Under Linux&reg; the current directory will be searched for files named &lt;serialNumber&gt;.xml,
     *  &lt;productString&gt;.xml and &lt;familyString.xml&gt; while under Windows&reg; the registry will
     *  be searched for keys with these names. This only happens once (when the device is opened)
     */
    dlsAuto = 0,
    /// \brief No stored settings will be loaded at start-up. The device will be initialized with the drivers default values.
    dlsNoLoad
    //, dlsFamily,
    //dlsProduct,
    //dlsCameraLocal
};

#ifndef IGNORE_MVBLUEFOX_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief Defines the power mode for this device.
/// \ingroup DeviceSpecificInterface
enum TDevicePowerMode
//-----------------------------------------------------------------------------
{
    /// \brief This device is switched on
    dpmOn,
    /// \brief This device is switched off.
    /**
     *  This might save a considerable amount of energy if the device isn't
     *  needed for a certain amount of time.
     */
    dpmOff
};
#endif // #ifndef IGNORE_MVBLUEFOX_SPECIFIC_DOCUMENTATION

#ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief Defines valid device scan rate mode.
/// \ingroup DeviceSpecificInterface
enum TDeviceScanRateMode
//-----------------------------------------------------------------------------
{
    /// \brief Auto, scan rate of camera used.
    dsrmAuto,
    /// \brief User, scan rate must be set manually.
    dsrmUser
};

//-----------------------------------------------------------------------------
/// \brief Defines valid moments to start the signal generation on the digital outputs.
/// \ingroup DeviceSpecificInterface
enum TDeviceSignalOutputStartEvent
//-----------------------------------------------------------------------------
{
    /// \brief The signal generation on the digital outputs starts with the next frame start signal ( e.g.: VSync ).
    dsoseFrame,
    /// \brief The signal generation on the digital outputs starts with the event defined in setting->camera->trigger.
    dsoseTrigger,
    /// \brief The signal generation on the digital outputs starts with next frame signal after the event defined in setting->camera->trigger.
    dsoseFrameAfterTrigger,
    /// \brief The signal generation on the digital outputs starts with the rising edge of SyncIn - signal. <b>CameraLink&reg;</b> only!!!
    dsoseSyncInRisingEdge,
    /// \brief The signal generation on the digital outputs starts with the falling edge of SyncIn - signal. <b>CameraLink&reg;</b> only!!!
    dsoseSyncInFallingEdge,
    /// \brief The SyncIn - signal is passed to the selected digital output. <b>CameraLink&reg;</b> only!!!
    dsoseSyncInPassThrough,
    /// \brief The SyncIn - signal is inverted and passed to the selected digital output. <b>CameraLink&reg;</b> only!!!
    dsoseSyncInPassThroughInv,
    /// \brief The signal generation on the digital outputs starts periodically. <b>CameraLink&reg;</b> only!!!
    dsosePeriodically,
    /// \brief The TriggerIn - signal is passed to the selected digital output. <b>CameraLink&reg;</b> only!!!
    dsoseTriggerInPassThrough,
    /// \brief The TriggerIn - signal is inverted and passed to the selected digital output. <b>CameraLink&reg;</b> only!!!
    dsoseTriggerInPassThroughInv,
    /// \brief The FVAL - signal is passed to the selected digital output. <b>CameraLink&reg;</b> only!!!
    dsoseFVALPassThrough,
    /// \brief The FVAL - signal is inverted and passed to the selected digital output. <b>CameraLink&reg;</b> only!!!
    dsoseFVALPassThroughInv,
    /// \brief The signal generation on the digital outputs starts with the rising edge of FVAL - signal. <b>CameraLink&reg;</b> only!!!
    dsoseFVALRisingEdge
};
#endif // IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION

//-----------------------------------------------------------------------------
/// \brief Defines valid <b>Device</b> states.
/// \ingroup CommonInterface
enum TDeviceState
//-----------------------------------------------------------------------------
{
    /// \brief The <b>mvIMPACT::acquire::Device</b> has been unplugged.
    /**
     *  The <b>mvIMPACT::acquire::Device</b> has present been since the <b>mvIMPACT::acquire::DeviceManager</b> has been initialized,
     *  but has been unplugged now and the driver has detected the unplugging of the device. Automatic detection of unplugging events
     *  is only possible for devices that support plug and play, other device drivers will only check if a device is still present
     *  if an application triggered this check.
     */
    dsAbsent = 0,
    /// \brief The <b>mvIMPACT::acquire::Device</b> is currently connected and initialized.
    dsPresent,
    /// \brief The <b>mvIMPACT::acquire::Device</b> is connected and is currently initializing.
    dsInitializing,
    /// \brief This device is recognized, but can't be accessed currently.
    /**
     *  This e.g. can be the case, if this is a device connected via a network and the device
     *  does not respond to one of the recognized network protocols or if another client is already
     *  connected to this device and the device does not support multiple clients.
     */
    dsUnreachable,
    /// \brief This device is present, but currently switched into a low power consumption mode
    dsPowerDown
};

#ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief Valid sync. signal output modes for frame grabbers.
/**
 *  Currently only <b>mvTITAN-RGB</b> boards support this feature.
 */
/// \ingroup DeviceSpecificInterface
enum TDeviceSyncOutMode
//-----------------------------------------------------------------------------
{
    /// \brief Sync. signals off.
    dsomOff = 0,
    /// \brief A non interlaced HD-out/VD-out signal is generated.
    dsomNonInterlaced,
    /// \brief A interlaced HD-out/VD-out signal is generated.
    dsomInterlaced
};
#endif // IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION

//-----------------------------------------------------------------------------
/// \brief Defines which trigger interface is currently active for the device.
/**
 *  A device might offer different views on the properties that can be used to
 *  configure trigger signals and events.
 */
/// \ingroup DeviceSpecificInterface
enum TDeviceTriggerInterface
//-----------------------------------------------------------------------------
{
    /// \brief The standard trigger interface.
    /**
     *  When this trigger interface is used, the configuration of an external trigger
     *  signal can be done very easy. However more complex scenarios might not be
     *  possible using this view on the trigger configuration.
     */
    dtiStandard = 0,
    /// \brief The advanced view on the trigger interface.
    /**
     *  When this view on the interface is selected, all features offered by the device
     *  regarding the creation of trigger events will be visible. This allows to configure
     *  everything, but requires more knowledge about the hardware.
     */
    dtiAdvanced
};

#ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief Valid trigger modes for frame grabber boards.
/// \ingroup DeviceSpecificInterface
enum TDeviceTriggerMode
//-----------------------------------------------------------------------------
{
    /// \brief Trigger off
    dtmOff = 0,
    /// \brief Trigger on
    dtmOn,
    /// \brief Trigger on falling edge of an external signal.
    dtmFallingEdge,
    /// \brief Trigger on rising edge of an external signal.
    dtmRisingEdge,
    /// \brief Timer is used to simulate trigger.
    dtmPeriodically,
    /// \brief Request simulates trigger.
    dtmOnDemand,
    /// \brief Line scan mode: Acquisition starts with rising edge and stops with falling edge of trigger ( mvTITAN/mvGAMMA-CL only )
    dtmStartRisingStopFalling,
    /// \brief Line scan mode: Acquisition starts with falling edge and stops with rising edge of trigger ( mvTITAN/mvGAMMA-CL only )
    dtmStartFallingStopRising,
    /// \brief Trigger valid as long as the level of the source signal is high.
    dtmLevelHigh,
    /// \brief Trigger valid as long as the level of the source signal is low.
    dtmLevelLow
};
#endif // IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION

//-----------------------------------------------------------------------------
/// \brief Specifies the type trigger overlap permitted with the previous frame.
/**
 *  This defines when a valid trigger will be accepted (or latched) for a new frame.
 */
/// \ingroup DeviceSpecificInterface
enum TDeviceTriggerOverlap // long_type
//-----------------------------------------------------------------------------
{
    /// \brief No trigger overlap is permitted.
    dtoOff,
    /// \brief Trigger is accepted immediately after the exposure period.
    dtoReadOut,
    /// \brief Trigger is accepted at any time during the capture of the previous frame.
    dtoPreviousFrame
};

//-----------------------------------------------------------------------------
/// \brief Defines valid digital I/O states.
/// \ingroup DeviceSpecificInterface
enum TDigIOState
//-----------------------------------------------------------------------------
{
    /// \brief Digital I/O is in 'logic 0' state.
    digioOff = 0,
    /// \brief Digital I/O is in 'logic 1' state.
    digioOn = 1,
    /// \brief Digital Input is in 'ignore' state.
    digioIgnore = 2,
    /// \brief Digital Output is kept in unchanged state.
    digioKeep = 3
};

#ifndef IGNORE_MVBLUEFOX_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief Defines valid IO Measurement Modes.
/**
 *  The shorter the gate time the faster results will be available. However a
 *  shorter gate time will also result in a less accurate measurement.
 */
/// \ingroup DeviceSpecificInterface
enum TDigitalIOMeasurementMode
//-----------------------------------------------------------------------------
{
    /// \brief Measure frequency with a 10 ms gate time.
    diommFrequency_Hz_10ms = 0,
    /// \brief Measure frequency with a 100 ms gate time.
    diommFrequency_Hz_100ms
};

//-----------------------------------------------------------------------------
/// \brief Defines valid IO Measurement Sources.
/**
 *  This will define where the actual measurement will take place.
 */
/// \ingroup DeviceSpecificInterface
enum TDigitalIOMeasurementSource
//-----------------------------------------------------------------------------
{
    /// \brief Measurement will be done on digital input 0.
    diomsInput0 = 0,
    /// \brief Measurement will be done on digital input 1.
    diomsInput1 = 1,
    /// \brief Measurement will be done on digital input 2.
    diomsInput2 = 2,
    /// \brief Measurement will be done on digital input 3.
    diomsInput3 = 3
};
#endif // #ifndef IGNORE_MVBLUEFOX_SPECIFIC_DOCUMENTATION

#ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief Defines valid ways to create signals on a digital output.
/// \ingroup DeviceSpecificInterface
enum TDigitalOutputControlMode
//-----------------------------------------------------------------------------
{
    /// \brief The digital output signal is generated by the onboard processor.
    docmSoftware = 0,
    /// \brief The digital output signal is generated by a <b>R</b>eal <b>T</b>ime <b>C</b>ontroller that is part of the used hardware device.
    docmRTC
};

//-----------------------------------------------------------------------------
/// \brief Defines valid digital source signal constants that can be used to configure a devices behaviour in certain digital I/O related modes.
/**
 *  As these parameters are highly device dependent, no direct name like
 *  \a dsTriggerJ8/12 are defined here. However when the translation dictionary for
 *  a property with this type is queried, the string representation for the
 *  enumeration value will contain a more descriptive name for the digital signal.
 */
/// \ingroup DeviceSpecificInterface
enum TDigitalSignal // flags_attribute, uint_type
//-----------------------------------------------------------------------------
{
    /// \brief A dummy value to delete a mask or signal configuration.
    dsNone = 0x00000000,
    /// \brief A constant for digital signal 1.
    dsSignal1 = 0x00000001,
    /// \brief A constant for digital signal 2.
    dsSignal2 = 0x00000002,
    /// \brief A constant for digital signal 3.
    dsSignal3 = 0x00000004,
    /// \brief A constant for digital signal 4.
    dsSignal4 = 0x00000008,
    /// \brief A constant for digital signal 5.
    dsSignal5 = 0x00000010,
    /// \brief A constant for digital signal 6.
    dsSignal6 = 0x00000020,
    /// \brief A constant for digital signal 7.
    dsSignal7 = 0x00000040,
    /// \brief A constant for digital signal 8.
    dsSignal8 = 0x00000080,
    /// \brief A constant for digital signal 9.
    dsSignal9 = 0x00000100,
    /// \brief A constant for digital signal 10.
    dsSignal10 = 0x00000200,
    /// \brief A constant for digital signal 11.
    dsSignal11 = 0x00000400,
    /// \brief A constant for digital signal 12.
    dsSignal12 = 0x00000800,
    /// \brief A constant for digital signal 13.
    dsSignal13 = 0x00001000,
    /// \brief A constant for digital signal 14.
    dsSignal14 = 0x00002000,
    /// \brief A constant for digital signal 15.
    dsSignal15 = 0x00004000,
    /// \brief A constant for digital signal 16.
    dsSignal16 = 0x00008000
};
#endif // #ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION

//-----------------------------------------------------------------------------
/// \brief Errors reported by the device manager.
/**
 *  These are errors which might occur in connection with the device manager
 *  itself or while working with the single devices.
 */
/// \ingroup CommonInterface
enum TDMR_ERROR // no_property_type
//-----------------------------------------------------------------------------
{
    /// \brief The function call was executed successfully.
    /**
     *  \b [0]
     */
    DMR_NO_ERROR = 0,
    /// \brief The specified device can't be found.
    /**
     *  This error occurs either if an invalid device ID has been passed to the
     *  device manager or if the caller tried to close a device which currently
     *  isn't initialized.
     *
     *  \b [-2100]
     */
    DMR_DEV_NOT_FOUND = -2100,
    /// \brief The device manager couldn't be initialized.
    /**
     *  This is an internal error.
     *
     *  \b [-2101]
     */
    DMR_INIT_FAILED = -2101,
    /// \brief The device is already in use.
    /**
     *  This error e.g. will occur if this or another process has initialized this
     *  device already and an application tries to open the device once more or if a
     *  certain resource is available only once but shall be used twice.
     *
     *  \b [-2102]
     */
    DMR_DRV_ALREADY_IN_USE = -2102,
    /// \brief The specified device couldn't be initialized.
    /**
     *  \b [-2103]
     */
    DMR_DEV_CANNOT_OPEN = -2103,
    /// \brief The device manager or another module hasn't been initialized properly.
    /**
     *  This error occurs if the user tries e.g. to close the device manager without
     *  having initialized it before or if a library used internally or a module or device associated with that library has has not been initialized properly or if
     *
     *  \b [-2104]
     */
    DMR_NOT_INITIALIZED = -2104,
    /// \brief A device could not be initialized.
    /**
     *  In this case the log-file will contain detailed information about the source of the
     *  problem.
     *
     *  \b [-2105]
     */
    DMR_DRV_CANNOT_OPEN = -2105,
    /// \brief The devices request queue is empty.
    /**
     *  This error e.g. occurs if the user waits for an image request to become available at a
     *  result queue without having send an image request to the device before.
     *
     *  It might also arise when trying to trigger an image with a software trigger mechanism
     *  before the acquisition engine has been completely started. In this case a small delay and
     *  then again calling the software trigger function will succeed.
     *
     *  \b [-2106]
     */
    DMR_DEV_REQUEST_QUEUE_EMPTY = -2106,
    /// \brief A request object couldn't be created.
    /**
     *  The creation of a request object failed. This might e.g. happen, if the system
     *  runs extremely low on memory.
     *
     *  \b [-2107]
     */
    DMR_DEV_REQUEST_CREATION_FAILED = -2107,
    /// \brief An invalid parameter has been passed to a function.
    /**
     *  This might e.g. happen if a function requiring a pointer to a structure has been passed
     *  an unassigned pointer or if a value has been passed, that is either too large or too small in
     *  that context.
     *
     *  \b [-2108]
     */
    DMR_INVALID_PARAMETER = -2108,
    /// \brief One or more symbols needed in a detected driver library couldn't be resolved.
    /**
     *  In most cases this is an error handled internally. So the user will not receive this error
     *  code as a result of a call to an API function. However when the user tries to get access
     *  to an <b>IMPACT</b> buffer type while the needed <b>IMPACT Base libraries</b> are not installed
     *  on the target system this error code also might be returned to the user.
     *
     *  \b [-2109]
     */
    DMR_EXPORTED_SYMBOL_NOT_FOUND = -2109,
    /// \brief An unknown error occurred while processing a user called driver function.
    /**
     *  \b [-2110]
     */
    DEV_UNKNOWN_ERROR = -2110,
    /// \brief A driver function has been called with an invalid device handle.
    /**
     *  \b [-2111]
     */
    DEV_HANDLE_INVALID = -2111,
    /// \brief A driver function has been called but one or more of the input parameters are invalid.
    /**
     *  There are several possible reasons for this error:
     *  - an unassigned pointer has been passed to a function, that requires a valid pointer
     *  - one or more of the passed parameters are of an incorrect type
     *  - one or more parameters contain an invalid value (e.g. a filename that points to a file that can't
     *  be found, a value, that is larger or smaller than the allowed values.
     *
     *  \b [-2112]
     */
    DEV_INPUT_PARAM_INVALID = -2112,
    /// \brief A function has been called with an invalid number of input parameters.
    /**
     *  \b [-2113]
     */
    DEV_WRONG_INPUT_PARAM_COUNT = -2113,
    /// \brief The creation of a setting failed.
    /**
     *  This can either happen, when a setting with the same name as the one the user
     *  tried to create already exists or if the system can't allocate memory for the
     *  new setting.
     *
     *  \b [-2114]
     */
    DEV_CREATE_SETTING_FAILED = -2114,
    /// \brief The unlock for a <b>mvIMPACT::acquire::Request</b> object failed.
    /**
     *  This might happen, if the <b>mvIMPACT::acquire::Request</b> is
     *  not locked at the time of calling the unlock function. It either has been unlocked by the
     *  user already or this request has never been locked as the request so far has not been used to
     *  capture image data into its buffer. Another reason for this error might be that the user tries to
     *  unlock a request that is currently processed by the device driver.
     *
     *  \b [-2115]
     */
    DEV_REQUEST_CANT_BE_UNLOCKED = -2115,
    /// \brief The number for the <b>mvIMPACT::acquire::Request</b> object is invalid.
    /**
     *  The max. number for a <b>mvIMPACT::acquire::Request</b> object is
     *  the value of the property \a RequestCount in the <b>mvIMPACT::acquire::SystemSettings</b> list - 1.
     *
     *  \b [-2116]
     */
    DEV_INVALID_REQUEST_NUMBER = -2116,
    /// \brief A Request that hasn't been unlocked has been passed back to the driver.
    /**
     *  This error might occur if the user requested an image from the driver but hasn't
     *  unlocked the <b>mvIMPACT::acquire::Request</b> that will be used for this new
     *  image.
     *
     *  \b [-2117]
     */
    DEV_LOCKED_REQUEST_IN_QUEUE = -2117,
    /// \brief The user requested a new image, but no free <b>mvIMPACT::acquire::Request</b> object is available to process this request.
    /**
     *  \b [-2118]
     */
    DEV_NO_FREE_REQUEST_AVAILABLE = -2118,
    /// \brief The wait for a request failed.
    /**
     *  This might have several reasons:
     *
     *  - the user waited for an image, but no image has been requested before.
     *  - the user waited for a requested image, but the image is still not ready(e.g. because of
     *  a short timeout and a long exposure time).
     *  - a triggered image has been requested but no trigger signal has been detected within the
     *  wait period.
     *  - a plug and play device(e.g. an USB device) has been unplugged and therefore can't deliver
     *  images anymore. In this case the \a 'state' property should be checked to find out if the
     *  device is still present or not.
     *
     *  \b [-2119]
     */
    DEV_WAIT_FOR_REQUEST_FAILED = -2119,
    /// \brief The user tried to get/set a parameter, which is not supported by this device.
    /**
     *  \b [-2120]
     */
    DEV_UNSUPPORTED_PARAMETER = -2120,
    /// \brief The requested real time controller is not available for this device.
    /**
     *  \b [-2121]
     */
    DEV_INVALID_RTC_NUMBER = -2121,
    /// \brief Some kind of internal error occurred.
    /**
     *  More information can be found in the *.log-file or the debug output.
     *
     *  \b [-2122]
     */
    DMR_INTERNAL_ERROR = -2122,
    /// \brief The user allocated input buffer is too small to accommodate the result.
    /**
     *  \b [-2123]
     */
    DMR_INPUT_BUFFER_TOO_SMALL = -2123,
    /// \brief Some kind of internal error occurred in the device driver.
    /**
     *  More information can be found in the *.log-file or the debug output.
     *
     *  \b [-2124]
     */
    DEV_INTERNAL_ERROR = -2124,
    /// \brief One or more needed libraries are not installed on the system.
    /**
     *  \b [-2125]
     */
    DMR_LIBRARY_NOT_FOUND = -2125,
    /// \brief A called function or accessed feature is not available for this device.
    /**
     *  \b [-2126]
     */
    DMR_FUNCTION_NOT_IMPLEMENTED = -2126,
    /// \brief The feature in question is (currently) not available for this device or driver.
    /**
     *  This might be because another feature currently blocks the one in question from being accessible.
     *  More information can be found in the *.log-file or the debug output.
     *
     *  \b [-2127]
     */
    DMR_FEATURE_NOT_AVAILABLE = -2127,
    /// \brief The user is not permitted to perform the requested operation.
    /**
     *  This e.g. might happen if the user tried to delete user data without specifying the
     *  required password.
     *
     *  \b [-2128]
     */
    DMR_EXECUTION_PROHIBITED = -2128,
    /// \brief The specified file can't be found.
    /**
     *  This might e.g. happen if the current working directory doesn't contain the file specified.
     *
     *  \b [-2129]
     */
    DMR_FILE_NOT_FOUND = -2129,
    /// \brief The licence doesn't match the device it has been assigned to.
    /**
     *  When e.g. upgrading a device feature each licence file is bound to a certain device. If the
     *  device this file has been assigned to has a different serial number then the one used
     *  to create the licence this error will occur.
     *
     *  \b [-2130]
     */
    DMR_INVALID_LICENCE = -2130,
    /// \brief There is no sensor found or the found sensor type is wrong or not supported.
    /**
     *  \b [-2131]
     */
    DEV_SENSOR_TYPE_ERROR = -2131,
    /// \brief A function call was associated with a camera description, that is invalid.
    /**
     *  One possible reason might be, that the camera description has been deleted(driver closed?).
     *
     *  \b [-2132]
     */
    DMR_CAMERA_DESCRIPTION_INVALID = -2132,
    /// \brief A suitable driver library to work with the device manager has been detected, but it is too old to work with this version of the mvDeviceManager library.
    /**
     *  This might happen if two different drivers have been installed on the target system and
     *  one introduces a newer version of the device manager that is not compatible with the older
     *  driver installed on the system. In this case this error message will be written into the
     *  log-file together with the name of the library that is considered to be too old.
     *
     *  The latest drivers will always be available online under <b>www.matrix-vision.de</b>. There
     *  will always be an updated version of the library considered to be too old for download from
     *  here.
     *
     *  \b [-2133]
     */
    DMR_NEWER_LIBRARY_REQUIRED = -2133,
    /// \brief A general timeout occurred.
    /**
     *  This is the typical result of functions that wait for some condition to be met with a timeout
     *  among their parameters.
     *
     *  More information can be found in the *.log-file or the debug output.
     *
     *  \b [-2134]
     */
    DMR_TIMEOUT = -2134,
    /// \brief A wait operation has been aborted.
    /**
     *  This e.g. might occur if the user waited for some message to be returned by the driver and the
     *  device driver has been closed within another thread. In order to inform the user that this waiting operation
     *  terminated in an unusual wait, <b>mvIMPACT::acquire::DMR_WAIT_ABANDONED</b> will be returned then.
     *
     *  \b [-2135]
     */
    DMR_WAIT_ABANDONED = -2135,
    /// \brief The execution of a method object or reading/writing to a feature failed.
    /**
     *  More information can be found in the log-file.
     *
     *  \b [-2136]
     */
    DMR_EXECUTION_FAILED = -2136,
    /// \brief This request is currently used by the driver
    /**
     *  This error may occur if the user tries to send a certain request object to the driver by a call to the
     *  corresponding image request function.
     *
     *  \b [-2137]
     */
    DEV_REQUEST_ALREADY_IN_USE = -2137,
    /// \brief A request has been configured to use a user supplied buffer, but the buffer pointer associated with the request is invalid.
    /**
     *  \b [-2138]
     */
    DEV_REQUEST_BUFFER_INVALID = -2138,
    /// \brief A request has been configured to use a user supplied buffer, but the buffer pointer associated with the request has an incorrect alignment.
    /**
     *  Certain devices need aligned memory to perform efficiently thus when a user supplied buffer shall be used to
     *  capture data into this buffer must follow these alignment constraints
     *
     *  \b [-2139]
     */
    DEV_REQUEST_BUFFER_MISALIGNED = -2139,
    /// \brief The requested access to a device could not be granted.
    /**
     *  This might e.g. happen if an application tries to access a device exclusively that is already open in another
     *  process. This could also happen if a network device has already been opened with control access from another system
     *  and the current system also tries to establish control access to the device.
     *
     *  \b [-2140]
     */
    DEV_ACCESS_DENIED = -2140,
    /// \brief A preload condition for loading a device driver failed.
    /**
     *  Certain device drivers may depend on certain changes applied to the system in order to operate correctly.
     *  E.g. a device driver might need a certain environment variable to exist. When the device manager tries
     *  to load a device driver it performs some basic checks to detect problems like this. When one of these checks
     *  fails the device manager will not try to load the device driver and an error message will be written
     *  to the selected log outputs.
     *
     *  \b [-2141]
     */
    DMR_PRELOAD_CHECK_FAILED = -2141,
    /// \brief One or more of the camera descriptions parameters are invalid for the grabber it is used with.
    /**
     *  There are multiple reasons for this error code. Detailed information can be found in the *.log-file.
     *
     *  <b>POSSIBLE CAUSES:</b>
     *
     *  - The TapsXGeometry or TapsYGeometry parameter of the selected camera description cannot be used with a user defined AOI.
     *  - A scan standard has been selected, that is not supported by this device.
     *  - An invalid scan rate has been selected.
     *  - ...
     *
     *  This error code will be returned by frame grabbers only.
     *
     *  \b [-2142]
     */
    DMR_CAMERA_DESCRIPTION_INVALID_PARAMETER = -2142,
    /// \brief A general error returned whenever there has been a problem with accessing a file.
    /**
     *  There can be multiple reasons for this error and a detailed error message will be sent to the log-output
     *  whenever this error code is returned.
     *
     *  <b>POSSIBLE CAUSES:</b>
     *
     *  - The driver tried to modify a file, for which it has no write access
     *  - The driver tried to read from a file, for which it has no read access
     *  - ...
     *
     *  \b [-2143]
     */
    DMR_FILE_ACCESS_ERROR = -2143,
    /// \brief An error returned when the user application attempts to operate on an invalid queue.
    /**
     *  \b [-2144]
     */
    DMR_INVALID_QUEUE_SELECTION = -2144,
    /// \brief An error returned when the user application attempts to start the acquisition engine at a
    /// time, where it is already running.
    /**
     *  \b [-2145]
     */
    DMR_ACQUISITION_ENGINE_BUSY = -2145,
    // If new error codes must be added this happens HERE!
    // When adding a new value here NEVER forget to update the internal string AND/OR exception table!
#if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
    /// \brief Needed for compile time checks for invalid error code values
    DMR_PSEUDO_LAST_ASSIGNED_ERROR_CODE,
    /// \brief A dummy constant to mark the last valid error code for device and device manager related errors.
    DMR_LAST_ASSIGNED_ERROR_CODE = DMR_PSEUDO_LAST_ASSIGNED_ERROR_CODE - 2,
#endif // #if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
    /// \brief Defines the last valid error code value for device and device manager related errors.
    /**
     *  \b [-2199]
     */
    DMR_LAST_VALID_ERROR_CODE = -2199
};

#ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief The fieldgate is used to detect the field ( odd or even ) for interlaced video signals.
/// \ingroup DeviceSpecificInterface
enum TFieldGateMode
//-----------------------------------------------------------------------------
{
    /// \brief Fieldgate starts at 1/3 of a line and ends at 2/3 of a line.
    efmAuto,
    /// \brief FieldGateStart and FieldGateWidth can be set in pixels.
    efmUser
};
#endif // IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION

//-----------------------------------------------------------------------------
/// \brief Defines valid modes for the flat field correction.
/// \ingroup CommonInterface
enum TFlatFieldFilterCorrectionMode
//-----------------------------------------------------------------------------
{
    /// \brief The default flat field correction is used.
    ffcmDefault = 0,
    /// \brief The flat field correction with clipping compensation is used. This mode prevents
    /// clipping artifacts when overexposing the image, but may cause missing codes in the histogram
    /// and a brighter image.
    ffcmBrightPreserving
};

//-----------------------------------------------------------------------------
/// \brief Defines valid modes for the flat field filter.
/// \ingroup CommonInterface
enum TFlatFieldFilterMode
//-----------------------------------------------------------------------------
{
    /// \brief The filter is switched off.
    fffmOff = 0,
    /// \brief The filter is switched on.
    fffmOn,
    /// \brief The next selected number of images will be taken for calculating the flat field correction image.
    /**
     *  In this mode after the correction image has been calculated the mode will automatically switch back to
     *  <b>mvIMPACT::acquire::fffmOff</b>
     */
    fffmCalibrateFlatField,
    /// \brief In this mode whenever reaching this filter, the captured image will be replaced by the
    /// last correction image, that has been created as a result of the filter being calibrated.
    fffmTransmitCorrectionImage
};

//-----------------------------------------------------------------------------
/// \brief Defines valid \b Device HW update results.
/**
 *  This defines valid result e.g. of a user executed firmware update.
 */
/// \ingroup CommonInterface
enum THWUpdateResult
//-----------------------------------------------------------------------------
{
    /// \brief No update has been performed for this <b>mvIMPACT::acquire::Device</b>.
    /**
     *  No update has been performed in the current process since this device driver
     *  has been loaded in the current process address space.
     */
    urNoUpdatePerformed = 0,
    /// \brief The <b>mvIMPACT::acquire::Device</b> is currently updating firmware.
    urUpdateFW,
    /// \brief The <b>mvIMPACT::acquire::Device</b> indicates an error during updating firmware.
    urUpdateFWError,
    /// \brief The requested update couldn't be performed as the device is already in use.
    /**
     *  If another (or even the same) process uses the device, this hardware update can't be performed.
     *  To perform the requested update this device needs to be closed.
     */
    urDevAlreadyInUse,
    /// \brief The <b>mvIMPACT::acquire::Device</b> indicates that the firmware has been updated successfully.
    urUpdateFWOK,
    /// \brief The <b>mvIMPACT::acquire::Device</b> is currently setting device ID.
    urSetDevID,
    /// \brief The <b>mvIMPACT::acquire::Device</b> signalled an error when setting device ID.
    urSetDevIDError,
    /// \brief An invalid device ID has been specified.
    /**
     *  Valid device ID lie within 0 and 250 including the upper and lower limit.
     */
    urSetDevIDInvalidID,
    /// \brief The <b>mvIMPACT::acquire::Device</b> has successfully been assigned a new ID.
    urSetDevIDOK,
    /// \brief Size Error in writing User Data to <b>mvIMPACT::acquire::Device</b> .
    urSetUserDataSizeError,
    /// \brief Write Error in writing User Data to <b>mvIMPACT::acquire::Device</b> .
    urSetUserDataWriteError,
    /// \brief Writing user data to <b>mvIMPACT::acquire::Device</b> was successful.
    urSetUserDataWriteOK,
    /// \brief Reading user data from an <b>mvIMPACT::acquire::Device</b> failed.
    urGetUserDataReadError,
    /// \brief The <b>mvIMPACT::acquire::Device</b> indicates an error during verifying firmware.
    urVerifyFWError,
    /// \brief The <b>mvIMPACT::acquire::Device</b> indicates that the firmware has been verified successfully.
    urVerifyFWOK
};

//-----------------------------------------------------------------------------
/// \brief Valid I2C operation modes.
/// \ingroup DeviceSpecificInterface
enum TI2COperationMode
//-----------------------------------------------------------------------------
{
    /// \brief Selects I2C read access.
    I2ComRead = 0,
    /// \brief Selects I2C write access.
    I2ComWrite
};

//-----------------------------------------------------------------------------
/// \brief Valid I2C operation status values.
/// \ingroup DeviceSpecificInterface
enum TI2COperationStatus
//-----------------------------------------------------------------------------
{
    /// \brief The last I2C operation was successful.
    I2CosSuccess = 0,
    /// \brief The last I2C operation did fail. The log-file might contain additional information
    I2CosFailure,
    /// \brief During the execution of the last I2C operation an invalid device address was specified.
    I2CosInvalidDeviceAddress,
    /// \brief During the execution of the last I2C operation an invalid device sub-address was specified.
    /**
     *  This can either be caused by an invalid address or by an invalid address width.
     */
    I2CosInvalidDeviceSubAddress,
    /// \brief During the execution of the last I2C operation too much data was either requested or sent.
    I2CosTooMuchData,
    /// \brief During the execution of the last I2C operation the amount of data requested or sent was too small.
    I2CosNotEnoughData
};

//-----------------------------------------------------------------------------
/// \brief Valid image buffer pixel formats.
/// \ingroup CommonInterface
enum TImageBufferPixelFormat
//-----------------------------------------------------------------------------
{
    /// \brief An unprocessed block of data.
    ibpfRaw = 0,
    /// \brief A single channel 8 bit per pixel format.
    ibpfMono8 = 1,
    /// \brief A single channel 16 bit per pixel format.
    ibpfMono16 = 2,
    /// \brief A three channel RGB image with 32 bit per pixel containing one fill byte per pixel.
    /**
     *  This is an interleaved pixel format suitable for most display functions. The data
     *  is stored pixel-wise. The memory layout of the pixel data is like this:
     *
     * \code
     *  4 bytes             4 bytes             etc.
     *  B(1) G(1) R(1) A(1) B(2) G(2) R(2) A(2) etc.
     *  .......................................
     *                      B(n) G(n) R(n) A(n)
     * \endcode
     *
     *  So the first byte in memory is the first pixels blue component. <b>ImageBuffer::vpData</b> will therefore
     *  point to B(1) when using a byte pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    ibpfRGBx888Packed = 3,
    /// \brief This is a YUV422 packed image with 32 bit for a pair of pixels.
    /**
     *  This format uses 2:1 horizontal downsampling, which means that the Y component is
     *  sampled at each pixel, while U(Cb) and V(Cr) components are sampled every 2 pixels in
     *  horizontal direction. If each component takes 8 bits, the pair of pixels requires 32 bits.
     *
     *  Two consecutive pixels (32 bit, 0xaabbccdd ) contain 8 bit luminance of pixel 1(aa),
     *  8 bit chrominance blue of pixel 1 and 2(bb), 8 bit luminance of pixel 2(cc) and finally 8 bit chrominance red of pixels 1 and 2(dd).
     *
     *  Thus in memory the data will be stored like this:
     *
     * \code
     *  4 bytes                   4 bytes                         etc.
     *  Y(1) Cb(1,2) Y(2) Cr(1,2) Y(3)   Cb(3,4)   Y(4) Cr(3,4)   etc.
     *  ..........................Y(n-1) Cb(n-1,n) Y(n) Cr(n-1,n)
     * \endcode
     *
     *  So the first byte in memory is the first pixels luminance component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Y(1) when using a byte pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    ibpfYUV422Packed = 4,
    /// \brief The image will be transferred as an RGB image in planar format.
    /**
     *  This is a format best suitable for most image processing functions.
     *  The image will be converted into four planes(a plane for each color component and one
     *  alpha plane).
     *
     * \code
     *  R(1) R(2) R(3) R(4) etc.
     *  ...................
     *  .............. R(n)
     *  G(1) G(2) G(3) G(4) etc.
     *  ...................
     *  .............. G(n)
     *  B(1) B(2) B(3) B(4) etc.
     *  ...................
     *  .............. B(n)
     *  A(1) A(2) A(3) A(4) etc.
     *  ...................
     *  .............. A(n)
     * \endcode
     *
     *  So the first byte in memory is the first pixels red component. <b>ImageBuffer::vpData</b> will therefore
     *  point to R(1) when using a byte pointer.
     */
    ibpfRGBx888Planar = 5,
    /// \brief A single channel 10 bit per pixel format.
    /**
     *  Each pixel in this format consumes 2 bytes of memory. The lower 10 bit of this 2 bytes will contain valid data.
     */
    ibpfMono10 = 6,
    /// \brief A single channel 12 bit per pixel format.
    /**
     *  Each pixel in this format consumes 2 bytes of memory. The lower 12 bit of this 2 bytes will contain valid data.
     */
    ibpfMono12 = 7,
    /// \brief A single channel 14 bit per pixel format.
    /**
     *  Each pixel in this format consumes 2 bytes of memory. The lower 14 bit of this 2 bytes will contain valid data.
     */
    ibpfMono14 = 8,
    /// \brief The image will be transferred as an RGB image with 24 bit per pixel.
    /**
     *  This is an interleaved pixel format suitable for most display and processing functions.
     *  The data is stored pixel-wise:
     *
     * \code
     *  3 bytes        3 bytes        3 bytes      etc.
     *  B(1)G(1)R(1)   B(2)G(2)R(2)   B(3)G(3)R(3) etc.
     *  ..........................................
     *  ...........................   B(n)G(n)R(n)
     * \endcode
     *
     *  So the first byte in memory is the first pixels blue component. <b>ImageBuffer::vpData</b> will therefore
     *  point to B(1) when using a byte pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    ibpfRGB888Packed = 9,
    /// \brief This is a YUV444 planar image with 24 bit per pixels.
    /**
     *  A planar YUV format. In memory the data will be stored plane-wise like this:
     *
     * \code
     *  Y(1)    Y(2)    Y(3)    Y(4) etc.
     *  ............................
     *  ..............  Y(n-1)  Y(n)
     *  Cr(1)   Cr(2)   Cr(3)   Cr(4) etc.
     *  ............................
     *  ..............  Cr(n-1) Cr(n)
     *  Cb(1)   Cb(2)   Cb(3)   Cb(4) etc.
     *  ............................
     *  .............   Cb(n-1) Cb(n)
     * \endcode
     *
     *  So the first byte in memory is the first pixels luminance component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Y(1) when using a byte pointer.
     */
    ibpfYUV444Planar = 10,
    /// \brief A single channel 32 bit per pixel format.
    ibpfMono32 = 11,
    /// \brief This is a YUV422 planar image with 32 bit for a pair of pixels.
    /**
     *  This format uses 2:1 horizontal downsampling, which means that the Y component is
     *  sampled at each pixel, while U(Cb) and V(Cr) components are sampled every 2 pixels in
     *  horizontal direction. If each component takes 8 bits, the pair of pixels requires 32 bits.
     *
     *  In memory the data will be stored like this:
     *
     * \code
     *  Y(1)    Y(2)    Y(3)    Y(4) etc.
     *  ............................
     *  ..............  Y(n-1)  Y(n)
     *  Cr(1,2) Cr(3,4) etc.
     *  ...............
     *  ....... Cr(n/2)
     *  Cb(1,2) Cb(3,4) etc.
     *  ...............
     *  ....... Cb(n/2)
     * \endcode
     *
     *  Thus the Y planes size in bytes equals the sum of the 2 other planes.
     *
     *  So the first byte in memory is the first pixels luminance component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Y(1) when using a byte pointer.
     */
    ibpfYUV422Planar = 12,
    /// \brief The image will be transferred as an RGB image with 30 bit of usable data per pixel.
    /**
     *  This is an interleaved pixel format with 2 bytes per color component.
     *  The data is stored pixel-wise:
     *
     * \code
     *  6 bytes        6 bytes        6 bytes      etc.
     *  B(1)G(1)R(1)   B(2)G(2)R(2)   B(3)G(3)R(3) etc.
     *  ..........................................
     *  ...........................   B(n)G(n)R(n)
     * \endcode
     *
     *  The data of each color component will be LSB aligned, thus the 6 MSB of each 16 bit will
     *  not contain valid data.
     *
     *  So the first 2 bytes in memory are the first pixels blue component. <b>ImageBuffer::vpData</b> will therefore
     *  point to B(1) when using a 16 bit pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    ibpfRGB101010Packed = 13,
    /// \brief The image will be transferred as an RGB image with 36 bit of usable data per pixel.
    /**
     *  This is an interleaved pixel format with 2 bytes per color component.
     *  The data is stored pixel-wise:
     *
     * \code
     *  6 bytes        6 bytes        6 bytes      etc.
     *  B(1)G(1)R(1)   B(2)G(2)R(2)   B(3)G(3)R(3) etc.
     *  ..........................................
     *  ...........................   B(n)G(n)R(n)
     * \endcode
     *
     *  The data of each color component will be LSB aligned, thus the 4 MSB of each 16 bit will
     *  not contain valid data.
     *
     *  So the first 2 bytes in memory are the first pixels blue component. <b>ImageBuffer::vpData</b> will therefore
     *  point to B(1) when using a 16 bit pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    ibpfRGB121212Packed = 14,
    /// \brief The image will be transferred as an RGB image with 42 bit of usable data per pixel.
    /**
     *  This is an interleaved pixel format with 2 bytes per color component.
     *  The data is stored pixel-wise:
     *
     * \code
     *  6 bytes        6 bytes        6 bytes      etc.
     *  B(1)G(1)R(1)   B(2)G(2)R(2)   B(3)G(3)R(3) etc.
     *  ..........................................
     *  ...........................   B(n)G(n)R(n)
     * \endcode
     *
     *  The data of each color component will be LSB aligned, thus the 2 MSB of each 16 bit will
     *  not contain valid data.
     *
     *  So the first 2 bytes in memory are the first pixels blue component. <b>ImageBuffer::vpData</b> will therefore
     *  point to B(1) when using a 16 bit pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    ibpfRGB141414Packed = 15,
    /// \brief The image will be transferred as an RGB image with 48 bit of usable data per pixel.
    /**
     *  This is an interleaved pixel format with 2 bytes per color component.
     *  The data is stored pixel-wise:
     *
     * \code
     *  6 bytes        6 bytes        6 bytes      etc.
     *  B(1)G(1)R(1)   B(2)G(2)R(2)   B(3)G(3)R(3) etc.
     *  ..........................................
     *  ...........................   B(n)G(n)R(n)
     * \endcode
     *
     *  The data of each color component will be LSB aligned.
     *
     *  So the first 2 bytes in memory are the first pixels blue component. <b>ImageBuffer::vpData</b> will therefore
     *  point to B(1) when using a 16 bit pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    ibpfRGB161616Packed = 16,
    /// \brief This is a YUV422 packed image with 32 bit for a pair of pixels.
    /**
     *  This format uses 2:1 horizontal downsampling, which means that the Y component is
     *  sampled at each pixel, while U(Cb) and V(Cr) components are sampled every 2 pixels in
     *  horizontal direction. If each component takes 8 bits, the pair of pixels requires 32 bits.
     *
     *  Two consecutive pixels (32 bit, 0xaabbccdd ) will contain 8 bit chrominance blue of pixel 1 and 2(aa),
     *  8 bit luminance of pixel 1(bb), 8 bit chrominance red of pixel 1 and 2 (cc) and finally 8 bit luminance of pixel 2(dd).
     *
     *  Thus in memory the data will be stored like this:
     *
     * \code
     *  4 bytes                   4 bytes                         etc.
     *  Cb(1,2) Y(1) Cr(1,2) Y(2) Cb(3,4)   Y(3)   Cr(3,4)   Y(4)    etc.
     *  ..........................Cb(n-1,n) Y(n-1) Cr(n-1,n) Y(n)
     * \endcode
     *
     *  So the first byte in memory is the first pixels Cb component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Cb(1,2) when using a byte pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    ibpfYUV422_UYVYPacked = 17,
    /// \brief A single channel 12 bit per pixel packed format.
    /**
     *  This format will use 3 bytes to store 2 12 bit pixel. Every 3 bytes will use the following layout in
     *  memory:
     *
     * \code
     *  3 bytes                                               3 bytes                                               etc.
     *  bits 11..4(1) bits 3..0(1) bits 3..0(2) bits 11..4(2) bits 11..4(3) bits 3..0(3) bits 3..0(4) bits 11..4(4) etc.
     * \endcode
     *
     *  \note
     *  When the width is not divisible by 2 the line pitch of buffer can't be used to calculate line start offsets in a buffer.
     *  In that case something like this can be used to access a certain pixel:
     *
     * \code
     *  //-----------------------------------------------------------------------------
     *  inline unsigned short GetMonoPacked_V2Pixel( const unsigned char* const pBuffer, int pixel, int shift )
     *  //-----------------------------------------------------------------------------
     *  {
     *    int offset = (3*pixel)/2;
     *    if( pixel % 2 )
     *    {
     *      return static_cast<unsigned short>(pBuffer[offset+1] << shift) | static_cast<unsigned short>(pBuffer[offset] >> 4);
     *    }
     *    return static_cast<unsigned short>(pBuffer[offset] << shift) | static_cast<unsigned short>(pBuffer[offset+1] & 0xF);
     *  }
     * \endcode
     */
    ibpfMono12Packed_V2 = 18,
    /// \brief This is a YUV422 packed image with 64 bit for a pair of pixels.
    /**
     *  This format uses 2:1 horizontal downsampling, which means that the Y component is
     *  sampled at each pixel, while U(Cb) and V(Cr) components are sampled every 2 pixels in
     *  horizontal direction. If each component takes 16 bits, the pair of pixels requires 64 bits.
     *
     *  Two consecutive pixels (64 bit, 0xaaaabbbbccccdddd ) contain 10 bit luminance of pixel 1(aaaa),
     *  10 bit chrominance blue of pixel 1 and 2(bbbb), 10 bit luminance of pixel 2(cccc) and finally 10 bit chrominance red of pixels 1 and 2(dddd).
     *  The upper 6 bits of each component will be 0.
     *
     *  Thus in memory the data will be stored like this:
     *
     * \code
     *  8 bytes                   8 bytes                         etc.
     *  Y(1) Cb(1,2) Y(2) Cr(1,2) Y(3)   Cb(3,4)   Y(4) Cr(3,4)   etc.
     *  ..........................Y(n-1) Cb(n-1,n) Y(n) Cr(n-1,n)
     * \endcode
     *
     *  So the first 2 bytes in memory are the first pixels luminance component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Y(1) when using a 16 bit pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    ibpfYUV422_10Packed = 20,
    /// \brief This is a YUV422 packed image with 64 bit for a pair of pixels.
    /**
     *  This format uses 2:1 horizontal downsampling, which means that the Y component is
     *  sampled at each pixel, while U(Cb) and V(Cr) components are sampled every 2 pixels in
     *  horizontal direction. If each component takes 16 bits, the pair of pixels requires 64 bits.
     *
     *  Two consecutive pixels (64 bit, 0xaaaabbbbccccdddd ) will contain 10 bit chrominance blue of pixel 1 and 2(aaaa),
     *  10 bit luminance of pixel 1(bbbb), 10 bit chrominance red of pixel 1 and 2 (cccc) and finally 10 bit luminance of pixel 2(dddd).
     *  The upper 6 bits of each component will be 0.
     *
     *  Thus in memory the data will be stored like this:
     *
     * \code
     *  8 bytes                   8 bytes                         etc.
     *  Cb(1,2) Y(1) Cr(1,2) Y(2) Cb(3,4)   Y(3)   Cr(3,4)   Y(4)    etc.
     *  ..........................Cb(n-1,n) Y(n-1) Cr(n-1,n) Y(n)
     * \endcode
     *
     *  So the first 2 bytes in memory are the first pixels luminance component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Cb(1,2) when using a 16 bit pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    ibpfYUV422_UYVY_10Packed = 21,
    /// \brief The image will be transferred as an RGB image with 24 bit per pixel.
    /**
     *  This is an interleaved pixel format suitable for most processing functions. Most
     *  blit/display function however will expect ibpfRGB888Packed.
     *  The data is stored pixel-wise:
     *
     * \code
     *  3 bytes        3 bytes        3 bytes      etc.
     *  R(1)G(1)B(1)   R(2)G(2)B(2)   R(3)G(3)B(3) etc.
     *  ..........................................
     *  ...........................   R(n)G(n)B(n)
     * \endcode
     *
     *  So the first byte in memory is the first pixels red component. <b>ImageBuffer::vpData</b> will therefore
     *  point to R(1) when using a byte pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    ibpfBGR888Packed = 22,
    /// \brief A 10 bit per color component RGB packed format.
    /**
     *  This format will use 4 bytes to store one 10 bit per color component RGB pixel. The following memory layout is
     *  used for each pixel:
     *
     * \code
     *  byte 0   | byte 1   | byte 2   | byte 3   |
     *  0      7 | 890....5 | 6..90..3 | 4    9xx |
     *  RRRRRRRR | RRGGGGGG | GGGGBBBB | BBBBBB   |
     * \endcode
     *
     *  \note
     *  Access to a certain pixel can e.g. be implemented like this:
     *
     * \code
     *  //-----------------------------------------------------------------------------
     *  // slow version
     *  inline void GetBGR101010Packed_V2Pixel( void* p, const int pitch, int x, int y, unsigned short& red, unsigned short& green, unsigned short& blue )
     *  //-----------------------------------------------------------------------------
     *  {
     *    unsigned int* pSrc = reinterpret_cast<unsigned int*>(static_cast<unsigned char*>(p) + y * pitch) + x;
     *    red   = static_cast<unsigned short>( (*pSrc)         & 0x3FF);
     *    green = static_cast<unsigned short>(((*pSrc) >> 10 ) & 0x3FF);
     *    blue  = static_cast<unsigned short>(((*pSrc) >> 20 ) & 0x3FF);
     *  }
     *
     *  //-----------------------------------------------------------------------------
     *  // faster version
     *  inline void GetBGR101010Packed_V2Pixel( unsigned int pixel, unsigned short& red, unsigned short& green, unsigned short& blue )
     *  //-----------------------------------------------------------------------------
     *  {
     *    red   = static_cast<unsigned short>(  pixel         & 0x3FF);
     *    green = static_cast<unsigned short>(( pixel >> 10 ) & 0x3FF);
     *    blue  = static_cast<unsigned short>(( pixel >> 20 ) & 0x3FF);
     *  }
     * \endcode
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    ibpfBGR101010Packed_V2 = 23,
    /// \brief The image will be transferred as an YUV image with 24 bit per pixel.
    /**
     *  This is an interleaved pixel format.
     *
     *  The data is stored pixel-wise:
     *
     * \code
     *  3 bytes        3 bytes        3 bytes      etc.
     *  Cb(1)Y(1)Cr(1) Cb(2)Y(2)Cr(2) Cb(3)Y(3)Cr(3) etc.
     *  ..........................................
     *  ...........................   Cb(n)Y(n)Cr(n)
     * \endcode
     *
     *  So the first byte in memory is the first pixels Cb component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Cb(1) when using a byte pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    ibpfYUV444_UYVPacked = 24,
    /// \brief The image will be transferred as an YUV image with 30 bit of usable data per pixel.
    /**
     *  This is an interleaved pixel format with 2 bytes per color component.
     *  The data is stored pixel-wise:
     *
     * \code
     *  6 bytes        6 bytes        6 bytes      etc.
     *  Cb(1)Y(1)Cr(1) Cb(2)Y(2)Cr(2) Cb(3)Y(3)Cr(3) etc.
     *  ..........................................
     *  ...........................   Cb(n)Y(n)Cr(n)
     * \endcode
     *
     *  The data of each color component will be LSB aligned, thus the 6 MSB of each 16 bit will
     *  not contain valid data.
     *
     *  So the first byte in memory is the first pixels Cb component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Cb(1) when using a 16 bit pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    ibpfYUV444_UYV_10Packed = 25,
    /// \brief The image will be transferred as an YUV image with 24 bit per pixel.
    /**
     *  This is an interleaved pixel format.
     *
     *  The data is stored pixel-wise:
     *
     * \code
     *  3 bytes        3 bytes        3 bytes      etc.
     *  Y(1)Cb(1)Cr(1) Y(2)Cb(2)Cr(2) Y(3)Cb(3)Cr(3) etc.
     *  ..........................................
     *  ...........................   Y(n)Cb(n)Cr(n)
     * \endcode
     *
     *  So the first byte in memory is the first pixels luminance component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Y(1) when using a byte pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    ibpfYUV444Packed = 26,
    /// \brief The image will be transferred as an YUV image with 30 bit of usable data per pixel.
    /**
     *  This is an interleaved pixel format with 2 bytes per color component.
     *  The data is stored pixel-wise:
     *
     * \code
     *  6 bytes        6 bytes        6 bytes      etc.
     *  Y(1)Cb(1)Cr(1) Y(2)Cb(2)Cr(2) Y(3)Cb(3)Cr(3) etc.
     *  ..........................................
     *  ...........................   Y(n)Cb(n)Cr(n)
     * \endcode
     *
     *  The data of each color component will be LSB aligned, thus the 6 MSB of each 16 bit will
     *  not contain valid data.
     *
     *  So the first byte in memory is the first pixels luminance component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Y(1) when using a 16 bit pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    ibpfYUV444_10Packed = 27,
    /// \brief A single channel 12 bit per pixel packed format.
    /**
     *  This format will use 3 bytes to store 2 12 bit pixel. Every 3 bytes will use the following layout in
     *  memory:
     *
     * \code
     *  3 bytes                                               3 bytes                                               etc.
     *  bits 0..7(1) bits 8..11(1) bits 0..3(2) bits 4..11(2) bits 0..7(3) bits 8..11(3) bits 0..3(4) bits 4..11(4) etc.
     * \endcode
     *
     *  \note
     *  When the width is not divisible by 2 the line pitch of buffer can't be used to calculate line start offsets in a buffer.
     *  In that case something like this can be used to access a certain pixel:
     *
     * \code
     *  //-----------------------------------------------------------------------------
     *  inline unsigned short GetMono12Packed_V1Pixel( const unsigned char* const pBuffer, int pixel )
     *  //-----------------------------------------------------------------------------
     *  {
     *    const int offset = pixel + pixel/2;
     *    if( pixel % 2 )
     *    {
     *      return static_cast<unsigned short>(pBuffer[offset] >> 4) | static_cast<unsigned short>(pBuffer[offset+1] << 4);
     *    }
     *    return static_cast<unsigned short>(pBuffer[offset]) | static_cast<unsigned short>((pBuffer[offset+1] & 0xF) << 8);
     *  }
     * \endcode
     */
    ibpfMono12Packed_V1 = 28,
    /// \brief This is a YUV411 packed image with 48 bits for four pixels.
    /**
     *  This format uses 4:1 horizontal downsampling, which means that the Y component is
     *  sampled at each pixel, while U(Cb) and V(Cr) components are sampled every 4 pixels in
     *  horizontal direction. If each component takes 8 bits, four pixels require 48 bits.
     *
     *  Four consecutive pixels (48 bit, 0xaabbccddeeff ) contain 8 bit chrominance blue of pixels 1, 2, 3 and 4(aa),
     *  8 bit luminance of pixel 1(bb),8 bit luminance of pixel 2(cc), 8 bit chrominance red of pixels 1, 2, 3 and 4(dd),
     *  8 bit luminance of pixel 3(ee) and finally 8 bit luminance of pixel 4(ff).
     *
     *  Thus in memory the data will be stored like this:
     *
     * \code
     *  6 bytes                                     6 bytes                                     etc.
     *  Cb(1,2,3,4) Y(1) Y(2) Cr(1,2,3,4) Y(3) Y(4) Cb(5,6,7,8) Y(5) Y(6) Cr(5,6,7,8) Y(7) Y(8) etc.
     *  ..................                          Cb(n,n+1,n+2,n+3) Y(n) Y(n+1) Cr(n,n+1,n+2,n+3) Y(n+2) Y(n+3)
     * \endcode
     *
     *  So the first byte in memory is the chrominance blue component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Cb when using a byte pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    ibpfYUV411_UYYVYY_Packed = 29,
    /// \brief The driver will decide which format will be used.
    ibpfAuto = -1
};

//------------------------------------------------------------------------------
/// \brief Valid image buffer format reinterpreter modes.
/// \ingroup CommonInterface
enum TImageBufferFormatReinterpreterMode // dotNETReplacement=ibpf;TImageBufferPixelFormat.ibpf
//------------------------------------------------------------------------------
{
    /// \brief Reinterpret <b>mvIMPACT::acquire::ibpfMono8</b> as <b>mvIMPACT::acquire::ibpfRGB888Packed</b>.
    /**
     * This will effectively divide the width by 3 but preserve the original line pitch.
     */
    ibfrmMono8_To_RGB888Packed = ibpfMono8 << 16 | ibpfRGB888Packed,
    /// \brief Reinterpret <b>mvIMPACT::acquire::ibpfMono8</b> as <b>mvIMPACT::acquire::ibpfBGR888Packed</b>.
    /**
     * This will effectively divide the width by 3 but preserve the original line pitch.
     */
    ibfrmMono8_To_BGR888Packed = ibpfMono8 << 16 | ibpfBGR888Packed,
    /// \brief Reinterpret <b>mvIMPACT::acquire::ibpfMono10</b> as <b>mvIMPACT::acquire::ibpfRGB101010Packed</b>.
    /**
     * This will effectively divide the width by 3 but preserve the original line pitch.
     */
    ibfrmMono10_To_RGB101010Packed = ibpfMono10 << 16 | ibpfRGB101010Packed,
    /// \brief Reinterpret <b>mvIMPACT::acquire::ibpfMono12</b> as <b>mvIMPACT::acquire::ibpfRGB121212Packed</b>.
    /**
     * This will effectively divide the width by 3 but preserve the original line pitch.
     */
    ibfrmMono12_To_RGB121212Packed = ibpfMono12 << 16 | ibpfRGB121212Packed,
    /// \brief Reinterpret <b>mvIMPACT::acquire::ibpfMono14</b> as <b>mvIMPACT::acquire::ibpfRGB141414Packed</b>.
    /**
     * This will effectively divide the width by 3 but preserve the original line pitch.
     */
    ibfrmMono14_To_RGB141414Packed = ibpfMono14 << 16 | ibpfRGB141414Packed,
    /// \brief Reinterpret <b>mvIMPACT::acquire::ibpfMono16</b> as <b>mvIMPACT::acquire::ibpfRGB161616Packed</b>.
    /**
     * This will effectively divide the width by 3 but preserve the original line pitch.
     */
    ibfrmMono16_To_RGB161616Packed = ibpfMono16 << 16 | ibpfRGB161616Packed
};

//-----------------------------------------------------------------------------
/// \brief Defines the pixel format of the result image.
/// \ingroup CommonInterface
enum TImageDestinationPixelFormat
//-----------------------------------------------------------------------------
{
    /// \brief The driver will decide which destination format will be used.
    idpfAuto = 0,
    /// \brief The image will be transferred as an unprocessed block of data.
    idpfRaw = 1,
    /// \brief The image will be transferred as a mono channel 8 bit per pixel image.
    idpfMono8 = 2,
    /// \brief The image will be transferred as an RGB image with 32 bit per pixel containing one fill byte per pixel.
    /**
     *  This is an interleaved pixel format suitable for most display functions. The data
     *  is stored pixel-wise. When accessed 4-byte wise the data layout in memory can be
     *  interpreted like this (starting with the MSB):
     *
     * \code
     *  4 bytes             4 bytes             etc.
     *  B(1) G(1) R(1) A(1) B(2) G(2) R(2) A(2) etc.
     *  .......................................
     *                      B(n) G(n) R(n) A(n)
     * \endcode
     *
     *  So the first byte in memory is the first pixels blue component. <b>ImageBuffer::vpData</b> will therefore
     *  point to B(1) when using a byte pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    idpfRGBx888Packed = 3,
    /// \brief This is a YUV422 packed image with 32 bit for a pair of pixels.
    /**
     *  This format uses 2:1 horizontal downsampling, which means that the Y component is
     *  sampled at each pixel, while U(Cb) and V(Cr) components are sampled every 2 pixels in
     *  horizontal direction. If each component takes 8 bits, the pair of pixels requires 32 bits.
     *
     *  Two consecutive pixels (32 bit, 0xaabbccdd ) contain 8 bit luminance of pixel 1(aa),
     *  8 bit chrominance blue of pixel 1 and 2(bb), 8 bit luminance of pixel 2(cc) and finally 8 bit chrominance red of pixels 1 and 2(dd).
     *
     *  Thus in memory the data will be stored like this:
     *
     * \code
     *  4 bytes                   4 bytes                         etc.
     *  Y(1) Cb(1,2) Y(2) Cr(1,2) Y(3)   Cb(3,4)   Y(4) Cr(3,4)   etc.
     *  ..........................Y(n-1) Cb(n-1,n) Y(n) Cr(n-1,n)
     * \endcode
     *
     *  So the first byte in memory is the first pixels luminance component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Y(1) when using a byte pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    idpfYUV422Packed = 4,
    /// \brief The image will be transferred as an RGB image in planar format.
    /**
     *  This is a format best suitable for most image processing functions.
     *  The image will be converted into four planes(a plane for each color component and one
     *  alpha plane).
     *
     * \code
     *  R(1) R(2) R(3) R(4) etc.
     *  ...................
     *  .............. R(n)
     *  G(1) G(2) G(3) G(4) etc.
     *  ...................
     *  .............. G(n)
     *  B(1) B(2) B(3) B(4) etc.
     *  ...................
     *  .............. B(n)
     *  A(1) A(2) A(3) A(4) etc.
     *  ...................
     *  .............. A(n)
     * \endcode
     *
     *  So the first byte in memory is the first pixels red component. <b>ImageBuffer::vpData</b> will therefore
     *  point to R(1) when using a byte pointer.
     */
    idpfRGBx888Planar = 5,
    /// \brief The image will be transferred as a mono channel 10 bit per pixel image.
    /**
     *  Each pixel in this format consumes 2 bytes of memory. The lower 10 bit of this 2 bytes will contain valid data.
     */
    idpfMono10 = 6,
    /// \brief The image will be transferred as a mono channel 12 bit per pixel image.
    /**
     *  Each pixel in this format consumes 2 bytes of memory. The lower 12 bit of this 2 bytes will contain valid data.
     */
    idpfMono12 = 7,
    /// \brief The image will be transferred as a mono channel 14 bit per pixel image.
    /**
     *  Each pixel in this format consumes 2 bytes of memory. The lower 14 bit of this 2 bytes will contain valid data.
     */
    idpfMono14 = 8,
    /// \brief The image will be transferred as a mono channel 16 bit per pixel image.
    idpfMono16 = 9,
    /// \brief The image will be transferred as an RGB image with 24 bit per pixel.
    /**
     *  This is an interleaved pixel format suitable for most display and processing functions.
     *  The data is stored pixel-wise:
     *
     * \code
     *  3 bytes        3 bytes        3 bytes      etc.
     *  B(1)G(1)R(1)   B(2)G(2)R(2)   B(3)G(3)R(3) etc.
     *  ..........................................
     *  ...........................   B(n)G(n)R(n)
     * \endcode
     *
     *  So the first byte in memory is the first pixels blue component. <b>ImageBuffer::vpData</b> will therefore
     *  point to B(1) when using a byte pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    idpfRGB888Packed = 10,
    /// \brief The image will be transferred as a YUV422 image with 16 bit per pixel.
    /**
     *  This format uses 2:1 horizontal downsampling, which means that the Y component is
     *  sampled at each pixel, while U(Cb) and V(Cr) components are sampled every 2 pixels in
     *  horizontal direction. If each component takes 8 bits, the pair of pixels requires 32 bits.
     *
     *  In memory the data will be stored like this:
     *
     * \code
     *  Y(1)    Y(2)    Y(3)    Y(4) etc.
     *  ............................
     *  ..............  Y(n-1)  Y(n)
     *  Cr(1,2) Cr(3,4) etc.
     *  ...............
     *  ....... Cr(n/2)
     *  Cb(1,2) Cb(3,4) etc.
     *  ...............
     *  ....... Cb(n/2)
     * \endcode
     *
     *  Thus the Y planes size in bytes equals the sum of the 2 other planes.
     *
     *  So the first byte in memory is the first pixels luminance component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Y(1) when using a byte pointer.
     */
    idpfYUV422Planar = 13,
    /// \brief The image will be transferred as an RGB image with 30 bit of usable data per pixel.
    /**
     *  This is an interleaved pixel format with 2 bytes per color component.
     *  The data is stored pixel-wise:
     *
     * \code
     *  6 bytes        6 bytes        6 bytes      etc.
     *  B(1)G(1)R(1)   B(2)G(2)R(2)   B(3)G(3)R(3) etc.
     *  ..........................................
     *  ...........................   B(n)G(n)R(n)
     * \endcode
     *
     *  The data of each color component will be LSB aligned, thus the 6 MSB of each 16 bit will
     *  not contain valid data.
     *
     *  So the first byte in memory is the first pixels blue component. <b>ImageBuffer::vpData</b> will therefore
     *  point to B(1) when using a 16 bit pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    idpfRGB101010Packed = 14,
    /// \brief The image will be transferred as an RGB image with 36 bit of usable data per pixel.
    /**
     *  This is an interleaved pixel format with 2 bytes per color component.
     *  The data is stored pixel-wise:
     *
     * \code
     *  6 bytes        6 bytes        6 bytes      etc.
     *  B(1)G(1)R(1)   B(2)G(2)R(2)   B(3)G(3)R(3) etc.
     *  ..........................................
     *  ...........................   B(n)G(n)R(n)
     * \endcode
     *
     *  The data of each color component will be LSB aligned, thus the 4 MSB of each 16 bit will
     *  not contain valid data.
     *
     *  So the first byte in memory is the first pixels blue component. <b>ImageBuffer::vpData</b> will therefore
     *  point to B(1) when using a 16 bit pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    idpfRGB121212Packed = 15,
    /// \brief The image will be transferred as an RGB image with 42 bit of usable data per pixel.
    /**
     *  This is an interleaved pixel format with 2 bytes per color component.
     *  The data is stored pixel-wise:
     *
     * \code
     *  6 bytes        6 bytes        6 bytes      etc.
     *  B(1)G(1)R(1)   B(2)G(2)R(2)   B(3)G(3)R(3) etc.
     *  ..........................................
     *  ...........................   B(n)G(n)R(n)
     * \endcode
     *
     *  The data of each color component will be LSB aligned, thus the 2 MSB of each 16 bit will
     *  not contain valid data.
     *
     *  So the first byte in memory is the first pixels blue component. <b>ImageBuffer::vpData</b> will therefore
     *  point to B(1) when using a 16 bit pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    idpfRGB141414Packed = 16,
    /// \brief The image will be transferred as an RGB image with 48 bit of usable data per pixel.
    /**
     *  This is an interleaved pixel format with 2 bytes per color component.
     *  The data is stored pixel-wise:
     *
     * \code
     *  6 bytes        6 bytes        6 bytes      etc.
     *  B(1)G(1)R(1)   B(2)G(2)R(2)   B(3)G(3)R(3) etc.
     *  ..........................................
     *  ...........................   B(n)G(n)R(n)
     * \endcode
     *
     *  The data of each color component will be LSB aligned.
     *
     *  So the first byte in memory is the first pixels blue component. <b>ImageBuffer::vpData</b> will therefore
     *  point to B(1) when using a 16 bit pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    idpfRGB161616Packed = 17,
    /// \brief This is a YUV422 packed image with 32 bit for a pair of pixels.
    /**
     *  This format uses 2:1 horizontal downsampling, which means that the Y component is
     *  sampled at each pixel, while U(Cb) and V(Cr) components are sampled every 2 pixels in
     *  horizontal direction. If each component takes 8 bits, the pair of pixels requires 32 bits.
     *
     *  Two consecutive pixels (32 bit, 0xaabbccdd ) will contain 8 bit chrominance blue of pixel 1 and 2(aa),
     *  8 bit luminance of pixel 1(bb), 8 bit chrominance red of pixel 1 and 2 (cc) and finally 8 bit luminance of pixel 2(dd).
     *
     *  Thus in memory the data will be stored like this:
     *
     * \code
     *  4 bytes                   4 bytes                         etc.
     *  Cb(1,2) Y(1) Cr(1,2) Y(2) Cb(3,4)   Y(3)   Cr(3,4)   Y(4)    etc.
     *  ..........................Cb(n-1,n) Y(n-1) Cr(n-1,n) Y(n)
     * \endcode
     *
     *  So the first byte in memory is the first pixels Cb component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Cb(1,2) when using a byte pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    idpfYUV422_UYVYPacked = 18,
    /// \brief A single channel 12 bit per pixel packed format.
    /**
     *  This format will use 3 bytes to store 2 12 bit pixel. Every 3 bytes will use the following layout in
     *  memory:
     *
     * \code
     *  3 bytes                                               3 bytes                                               etc.
     *  bits 11..4(1) bits 3..0(1) bits 3..0(2) bits 11..4(2) bits 11..4(3) bits 3..0(3) bits 3..0(4) bits 11..4(4) etc.
     * \endcode
     *
     *  \note
     *  When the width is not divisible by 2 the line pitch of buffer can't be used to calculate line start offsets in a buffer.
     *  In that case something like this can be used to access a certain pixel:
     *
     * \code
     *  //-----------------------------------------------------------------------------
     *  inline unsigned short GetMonoPacked_V2Pixel( const unsigned char* const pBuffer, int pixel, int shift )
     *  //-----------------------------------------------------------------------------
     *  {
     *    int offset = (3*pixel)/2;
     *    if( pixel % 2 )
     *    {
     *      return static_cast<unsigned short>(pBuffer[offset+1] << shift) | static_cast<unsigned short>(pBuffer[offset] >> 4);
     *    }
     *    return static_cast<unsigned short>(pBuffer[offset] << shift) | static_cast<unsigned short>(pBuffer[offset+1] & 0xF);
     *  }
     * \endcode
     */
    idpfMono12Packed_V2 = 19,
    /// \brief This is a YUV422 packed image with 64 bit for a pair of pixels.
    /**
     *  This format uses 2:1 horizontal downsampling, which means that the Y component is
     *  sampled at each pixel, while U(Cb) and V(Cr) components are sampled every 2 pixels in
     *  horizontal direction. If each component takes 16 bits, the pair of pixels requires 64 bits.
     *
     *  Two consecutive pixels (64 bit, 0xaaaabbbbccccdddd ) contain 10 bit luminance of pixel 1(aaaa),
     *  10 bit chrominance blue of pixel 1 and 2(bbbb), 10 bit luminance of pixel 2(cccc) and finally 10 bit chrominance red of pixels 1 and 2(dddd).
     *  The upper 6 bits of each component will be 0.
     *
     *  Thus in memory the data will be stored like this:
     *
     * \code
     *  8 bytes                   8 bytes                         etc.
     *  Y(1) Cb(1,2) Y(2) Cr(1,2) Y(3)   Cb(3,4)   Y(4) Cr(3,4)   etc.
     *  ..........................Y(n-1) Cb(n-1,n) Y(n) Cr(n-1,n)
     * \endcode
     *
     *  So the first 2 bytes in memory are the first pixels luminance component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Y(1) when using a 16 bit pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    idpfYUV422_10Packed = 20,
    /// \brief This is a YUV422 packed image with 64 bit for a pair of pixels.
    /**
     *  This format uses 2:1 horizontal downsampling, which means that the Y component is
     *  sampled at each pixel, while U(Cb) and V(Cr) components are sampled every 2 pixels in
     *  horizontal direction. If each component takes 16 bits, the pair of pixels requires 64 bits.
     *
     *  Two consecutive pixels (64 bit, 0xaaaabbbbccccdddd ) will contain 10 bit chrominance blue of pixel 1 and 2(aaaa),
     *  10 bit luminance of pixel 1(bbbb), 10 bit chrominance red of pixel 1 and 2 (cccc) and finally 10 bit luminance of pixel 2(dddd).
     *  The upper 6 bits of each component will be 0.
     *
     *  Thus in memory the data will be stored like this:
     *
     * \code
     *  8 bytes                   8 bytes                         etc.
     *  Cb(1,2) Y(1) Cr(1,2) Y(2) Cb(3,4)   Y(3)   Cr(3,4)   Y(4)    etc.
     *  ..........................Cb(n-1,n) Y(n-1) Cr(n-1,n) Y(n)
     * \endcode
     *
     *  So the first 2 bytes in memory are the first pixels luminance component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Cb(1,2) when using a 16 bit pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    idpfYUV422_UYVY_10Packed = 21,
    /// \brief The image will be transferred as an RGB image with 24 bit per pixel.
    /**
     *  This is an interleaved pixel format suitable for most processing functions. Most
     *  blit/display function however will expect idpfRGB888Packed.
     *  The data is stored pixel-wise:
     *
     * \code
     *  3 bytes        3 bytes        3 bytes      etc.
     *  R(1)G(1)B(1)   R(2)G(2)B(2)   R(3)G(3)B(3) etc.
     *  ..........................................
     *  ...........................   R(n)G(n)B(n)
     * \endcode
     *
     *  So the first byte in memory is the first pixels red component. <b>ImageBuffer::vpData</b> will therefore
     *  point to R(1) when using a byte pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    idpfBGR888Packed = 22,
    /// \brief A 10 bit per color component RGB packed format.
    /**
     *  This format will use 4 bytes to store one 10 bit per color component RGB pixel. The following memory layout is
     *  used for each pixel:
     *
     * \code
     *  byte 0   | byte 1   | byte 2   | byte 3   |
     *  0      7 | 890....5 | 6..90..3 | 4    9xx |
     *  RRRRRRRR | RRGGGGGG | GGGGBBBB | BBBBBB   |
     * \endcode
     *
     *  \note
     *  Access to a certain pixel can e.g. be implemented like this:
     *
     * \code
     *  //-----------------------------------------------------------------------------
     *  // slow version
     *  inline void GetBGR101010Packed_V2Pixel( void* p, const int pitch, int x, int y, unsigned short& red, unsigned short& green, unsigned short& blue )
     *  //-----------------------------------------------------------------------------
     *  {
     *    unsigned int* pSrc = reinterpret_cast<unsigned int*>(static_cast<unsigned char*>(p) + y * pitch) + x;
     *    red   = static_cast<unsigned short>( (*pSrc)         & 0x3FF);
     *    green = static_cast<unsigned short>(((*pSrc) >> 10 ) & 0x3FF);
     *    blue  = static_cast<unsigned short>(((*pSrc) >> 20 ) & 0x3FF);
     *  }
     *
     *  //-----------------------------------------------------------------------------
     *  // faster version
     *  inline void GetBGR101010Packed_V2Pixel( unsigned int pixel, unsigned short& red, unsigned short& green, unsigned short& blue )
     *  //-----------------------------------------------------------------------------
     *  {
     *    red   = static_cast<unsigned short>(  pixel         & 0x3FF);
     *    green = static_cast<unsigned short>(( pixel >> 10 ) & 0x3FF);
     *    blue  = static_cast<unsigned short>(( pixel >> 20 ) & 0x3FF);
     *  }
     * \endcode
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    idpfBGR101010Packed_V2 = 23,
    /// \brief The image will be transferred as an YUV image with 24 bit per pixel.
    /**
     *  This is an interleaved pixel format.
     *
     *  The data is stored pixel-wise:
     *
     * \code
     *  3 bytes        3 bytes        3 bytes      etc.
     *  Cb(1)Y(1)Cr(1) Cb(2)Y(2)Cr(2) Cb(3)Y(3)Cr(3) etc.
     *  ..........................................
     *  ...........................   Cb(n)Y(n)Cr(n)
     * \endcode
     *
     *  So the first byte in memory is the first pixels Cb component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Cb(1) when using a byte pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    idpfYUV444_UYVPacked = 24,
    /// \brief The image will be transferred as an YUV image with 30 bit of usable data per pixel.
    /**
     *  This is an interleaved pixel format with 2 bytes per color component.
     *  The data is stored pixel-wise:
     *
     * \code
     *  6 bytes        6 bytes        6 bytes      etc.
     *  Cb(1)Y(1)Cr(1) Cb(2)Y(2)Cr(2) Cb(3)Y(3)Cr(3) etc.
     *  ..........................................
     *  ...........................   Cb(n)Y(n)Cr(n)
     * \endcode
     *
     *  The data of each color component will be LSB aligned, thus the 6 MSB of each 16 bit will
     *  not contain valid data.
     *
     *  So the first byte in memory is the first pixels Cb component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Cb(1) when using a 16 bit pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    idpfYUV444_UYV_10Packed = 25,
    /// \brief The image will be transferred as an YUV image with 24 bit per pixel.
    /**
     *  This is an interleaved pixel format.
     *
     *  The data is stored pixel-wise:
     *
     * \code
     *  3 bytes        3 bytes        3 bytes      etc.
     *  Y(1)Cb(1)Cr(1) Y(2)Cb(2)Cr(2) Y(3)Cb(3)Cr(3) etc.
     *  ..........................................
     *  ...........................   Y(n)Cb(n)Cr(n)
     * \endcode
     *
     *  So the first byte in memory is the first pixels luminance component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Y(1) when using a byte pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    idpfYUV444Packed = 26,
    /// \brief The image will be transferred as an YUV image with 30 bit of usable data per pixel.
    /**
     *  This is an interleaved pixel format with 2 bytes per color component.
     *  The data is stored pixel-wise:
     *
     * \code
     *  6 bytes        6 bytes        6 bytes      etc.
     *  Y(1)Cb(1)Cr(1) Y(2)Cb(2)Cr(2) Y(3)Cb(3)Cr(3) etc.
     *  ..........................................
     *  ...........................   Y(n)Cb(n)Cr(n)
     * \endcode
     *
     *  The data of each color component will be LSB aligned, thus the 6 MSB of each 16 bit will
     *  not contain valid data.
     *
     *  So the first byte in memory is the first pixels luminance component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Y(1) when using a 16 bit pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    idpfYUV444_10Packed = 27,
    /// \brief A single channel 12 bit per pixel packed format.
    /**
     *  This format will use 3 bytes to store 2 12 bit pixel. Every 3 bytes will use the following layout in
     *  memory:
     *
     * \code
     *  3 bytes                                               3 bytes                                               etc.
     *  bits 0..7(1) bits 8..11(1) bits 0..3(2) bits 4..11(2) bits 0..7(3) bits 8..11(3) bits 0..3(4) bits 4..11(4) etc.
     * \endcode
     *
     *  \note
     *  When the width is not divisible by 2 the line pitch of buffer can't be used to calculate line start offsets in a buffer.
     *  In that case something like this can be used to access a certain pixel:
     *
     * \code
     *  //-----------------------------------------------------------------------------
     *  inline unsigned short GetMono12Packed_V1Pixel( const unsigned char* const pBuffer, int pixel )
     *  //-----------------------------------------------------------------------------
     *  {
     *    const int offset = pixel + pixel/2;
     *    if( pixel % 2 )
     *    {
     *      return static_cast<unsigned short>(pBuffer[offset] >> 4) | static_cast<unsigned short>(pBuffer[offset+1] << 4);
     *    }
     *    return static_cast<unsigned short>(pBuffer[offset]) | static_cast<unsigned short>((pBuffer[offset+1] & 0xF) << 8);
     *  }
     * \endcode
     */
    idpfMono12Packed_V1 = 28,
    /// \brief This is a YUV411 packed image with 48 bits for four pixels.
    /**
     *  This format uses 4:1 horizontal downsampling, which means that the Y component is
     *  sampled at each pixel, while U(Cb) and V(Cr) components are sampled every 4 pixels in
     *  horizontal direction. If each component takes 8 bits, four pixels require 48 bits.
     *
     *  Four consecutive pixels (48 bit, 0xaabbccddeeff ) contain 8 bit chrominance blue of pixels 1, 2, 3 and 4(aa),
     *  8 bit luminance of pixel 1(bb),8 bit luminance of pixel 2(cc), 8 bit chrominance red of pixels 1, 2, 3 and 4(dd),
     *  8 bit luminance of pixel 3(ee) and finally 8 bit luminance of pixel 4(ff).
     *
     *  Thus in memory the data will be stored like this:
     *
     * \code
     *  6 bytes                                     6 bytes                                     etc.
     *  Cb(1,2,3,4) Y(1) Y(2) Cr(1,2,3,4) Y(3) Y(4) Cb(5,6,7,8) Y(5) Y(6) Cr(5,6,7,8) Y(7) Y(8) etc.
     *  ..................                          Cb(n,n+1,n+2,n+3) Y(n) Y(n+1) Cr(n,n+1,n+2,n+3) Y(n+2) Y(n+3)
     * \endcode
     *
     *  So the first byte in memory is the chrominance blue component. <b>ImageBuffer::vpData</b> will therefore
     *  point to Cb when using a byte pointer.
     *
     * \sa \ref Channel_Split_PackedToPlanar
     */
    idpfYUV411_UYYVYY_Packed = 29
};

//-----------------------------------------------------------------------------
/// \brief Defines valid filters which can be applied to the captured image before it is transferred to the user.
/// \ingroup CommonInterface
enum TImageProcessingFilter
//-----------------------------------------------------------------------------
{
    /// \brief No filter function will be applied to the image.
    ipfOff = 0,
    /// \brief A sharpen filter will be applied to the image.
    ipfSharpen
};

//-----------------------------------------------------------------------------
/// \brief Defines valid modes the internal image processing algorithms can be operated in.
/// \ingroup CommonInterface
enum TImageProcessingOptimization
//-----------------------------------------------------------------------------
{
    /// \brief Will maximize the execution speed. This might result in a higher memory consumption.
    ipoMaximizeSpeed = 0,
    /// \brief Will minimize the memory footprint. This might result in a higher CPU load.
    /**
     *  \attention This mode will also result in a higher amount of memory allocation and freeing operations
     *  thus if the application itself is working with heap memory a lot the long term effects of heap
     *  fragmentation should be considered!
     */
    ipoMinimizeMemoryUsage = 1
};

//-----------------------------------------------------------------------------
/// \brief Defines the behaviour of an <b>mvIMPACT::acquire::ImageRequestControl</b>.
/// \ingroup CommonInterface
enum TImageRequestControlMode
//-----------------------------------------------------------------------------
{
    /// \brief The standard mode for image requests.
    /**
     *  In this mode one image will be captured from the hardware for each request
     *  that is send to the device driver. The image will be taken with respect to the
     *  current parameters as defined in the setting selected in the corresponding
     *  image request control.
     */
    ircmManual,
    /// \brief Reserved. Currently not implemented.
    ircmLive,
    /// \brief Reserved. Currently not implemented.
    ircmCounting,
    /// \brief In this mode no 'real' image will be captured, but the whole processing chain will be traversed once.
    /**
     *  This mode can be used either to find out what the image format and parameters
     *  after an image capture would be with the current settings or to prepare
     *  the hardware before starting the first image acquisition to save time when
     *  real image data is processed.
     *
     *  When requesting an image in this mode, the corresponding wait function will return
     *  a complete request object with pixel format, dimensions and image buffer that contains
     *  some dummy data.
     */
    ircmTrial,
    /// \brief In this mode no 'real' image will be captured, but the whole processing chain will be traversed once.
    /**
     *  This mode can be used either to find out what the image format and parameters
     *  after an image capture would be with the current settings or to prepare
     *  the hardware before starting the first image acquisition to save time when
     *  real image data is processed.
     *
     *  In this mode, no wait function must be called. When the image request function has
     *  returned successfully, the current destination buffer layout will be available as part
     *  of the general information properties.
     */
    ircmUpdateBufferLayout
};

//-----------------------------------------------------------------------------
/// \brief Defines the type of camera sensor.
/// \ingroup DeviceSpecificInterface
enum TInfoSensorColorMode
//-----------------------------------------------------------------------------
{
    /// \brief This is an unknown type of sensor.
    iscmUnknown = 0,
    /// \brief This is a mono sensor.
    iscmMono,
    /// \brief This is a Bayer color sensor.
    iscmBayer,
    /// \brief This is a color sensor.
    iscmColor,
    /// \brief This is a sensor sensitive in the near IF spectrum only.
    iscmNIR
};

//-----------------------------------------------------------------------------
/// \brief Defines the bayer pattern of the sensor.
/// \ingroup DeviceSpecificInterface
enum TInfoSensorColorPattern
//-----------------------------------------------------------------------------
{
    /// \brief This sensor starts to transmit a green pixel from a green and red line.
    /**
     *  The raw image therefore is structured like this:
     *
     *  GRGRGRGRGRGRG etc. \n
     *  BGBGBGBGBGBGB etc. \n
     *  GRGRGRGRGRGRG etc. \n
     *  etc. \n
     */
    iscpGreenRed,
    /// \brief This sensor starts to transmit a red pixel from a green and red line.
    /**
     *  The raw image therefore is structured like this:
     *
     *  RGRGRGRGRGRGR etc. \n
     *  GBGBGBGBGBGBG etc. \n
     *  RGRGRGRGRGRGR etc. \n
     *  etc. \n
     */
    iscpRedGreen,
    /// \brief This sensor starts to transmit a green pixel from a green and blue line.
    /**
     *  The raw image therefore is structured like this:
     *
     *  GBGBGBGBGBGBG etc. \n
     *  RGRGRGRGRGRGR etc. \n
     *  GBGBGBGBGBGBG etc. \n
     *  etc. \n
     */
    iscpBlueGreen,
    /// \brief This sensor starts to transmit a blue pixel from a green and blue line.
    /**
     *  The raw image therefore is structured like this:
     *
     *  BGBGBGBGBGBGB etc. \n
     *  GRGRGRGRGRGRG etc. \n
     *  BGBGBGBGBGBGB etc. \n
     *  etc. \n
     */
    iscpGreenBlue,
    /// \brief Nothing is known about the way the sensor transmits data.
    iscpUnknown
};

//-----------------------------------------------------------------------------
/// \brief Defines the type of camera sensor.
/// \ingroup DeviceSpecificInterface
enum TInfoSensorType
//-----------------------------------------------------------------------------
{
    /// \brief This is an unknown type of sensor.
    istUnknown = 0,
    /// \brief This is a CCD sensor.
    istCCD = 0x1,
    /// \brief This is a CMOS sensor.
    istCMOS = 0x2
};

//-----------------------------------------------------------------------------
/// \brief Defines how to handle interlaced image data.
/**
 *  Image data might be transmitted as fields. These later can either be combined
 *  back into a full frame or can be handled individually.
 */
/// \ingroup DeviceSpecificInterface
enum TInterlacedMode
//-----------------------------------------------------------------------------
{
    /// \brief Enable the interlaced function.
    /**
     *  The device will re-construct the interlaced data into a full frame.
     *  InvInterlaced/Interlaced is controlled by the camera parameter.
     */
    imOn = 0,
    /// \brief Disable the interlaced function.
    imOff = 1
};

#ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief Currently available for mvTITAN/mvGAMMA-CL.
/**
 *  If <b>mvIMPACT::acquire::lcOn</b> is used
 *  \if DOXYGEN_C_DOCUMENTATION
 *  <b>mvIMPACT::acquire::RequestInfo::lineCounter</b>
 *  \else
 *  <b>mvIMPACT::acquire::Request::infoLineCounter</b>
 *  \endif
 *  will contain the overall line count.
 *
 *  <b>mvTITAN/mvGAMMA-CL</b>: The counter is implemented in the hardware. All incoming lines will be counted.
 *  A detected signal on the trigger input will reset the counter. In addition to the result
 *  the line count will be encoded in bit 0 of the first 32 Words (2-byte) of every line (watermark).
 *
 *  To decode the line counter from a line of image data something like this is needed(pseudo-code):
 *
 * \code
 *  unsigned integer getWatermark( pointer pData )
 *  {
 *    unsigned integer result = 0
 *    do
 *    {
 *      result = result OR ( pData[i multiplied by 2] AND 0x1 ) shift_left_by(i)
 *      i + 1
 *    } while( i < 32 )
 *    return result
 *  }
 *  \endcode
 */
/// \ingroup DeviceSpecificInterface
enum TLineCounter
//-----------------------------------------------------------------------------
{
    /// \brief Disables line counter.
    lcOff = 0,
    /// \brief Enables line counter.
    lcOn = 1
};
#endif // IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION

//-----------------------------------------------------------------------------
/// \brief Defines valid LUT(<b>L</b>ook<b>U</b>p <b>T</b>able) gamma modes.
/// \ingroup CommonInterface
enum TLUTGammaMode
//-----------------------------------------------------------------------------
{
    /// \brief Default gamma mode.
    /**
     *  Maps an image by applying intensity transformation with gamma correction to the complete intensity range of the LUT.
     */
    LUTgmStandard,
    /// \brief Maps an image by applying a linear interpolation in the lower intensity range of the LUT and an intensity transformation with gamma correction to the upper intensity range of the LUT.
    LUTgmLinearStart
};

//-----------------------------------------------------------------------------
/// \brief Defines valid LUT(<b>L</b>ook<b>U</b>p <b>T</b>able) implementations.
/// \ingroup CommonInterface
enum TLUTImplementation
//-----------------------------------------------------------------------------
{
    /// \brief The mapping of the image data will be done in hardware.
    /**
     *  This feature will no be available for every device.
     */
    LUTiHardware,
    /// \brief The mapping of the image data will be done with a optimized software algorithm.
    LUTiSoftware
};

//-----------------------------------------------------------------------------
/// \brief Defines valid LUT(<b>L</b>ook<b>U</b>p <b>T</b>able) interpolation modes.
/// \ingroup CommonInterface
enum TLUTInterpolationMode
//-----------------------------------------------------------------------------
{
    /// \brief Maps an image by applying intensity transformation based on a set of given threshold values.
    LUTimThreshold,
    /// \brief Maps an image by applying intensity transformation with linear interpolation.
    LUTimLinear,
    /// \brief Maps an image by applying intensity transformation with cubic interpolation.
    LUTimCubic
};

//-----------------------------------------------------------------------------
/// \brief Defines valid LUT(<b>L</b>ook<b>U</b>p <b>T</b>able) mapping modes.
/// \ingroup CommonInterface
enum TLUTMapping // uint_type
//-----------------------------------------------------------------------------
{
    /// \brief 8 bit input data will be mapped to 8 bit output data.
    LUTm8To8   = (  8 << 16 ) | 8,
    /// \brief 10 bit input data will be mapped to 8 bit output data.
    LUTm10To8  = ( 10 << 16 ) | 8,
    /// \brief 10 bit input data will be mapped to 10 bit output data.
    LUTm10To10 = ( 10 << 16 ) | 10,
    /// \brief 12 bit input data will be mapped to 10 bit output data.
    LUTm12To10 = ( 12 << 16 ) | 10,
    /// \brief 12 bit input data will be mapped to 12 bit output data.
    LUTm12To12 = ( 12 << 16 ) | 12,
    /// \brief 14 bit input data will be mapped to 14 bit output data.
    LUTm14To14 = ( 14 << 16 ) | 14,
    /// \brief 16 bit input data will be mapped to 16 bit output data.
    LUTm16To16 = ( 16 << 16 ) | 16
};

//-----------------------------------------------------------------------------
/// \brief Defines valid LUT(<b>L</b>ook<b>U</b>p <b>T</b>able) modes.
/// \ingroup CommonInterface
enum TLUTMode
//-----------------------------------------------------------------------------
{
    /// \brief Maps an image by applying interpolated intensity transformation between a set of given sampling points.
    LUTmInterpolated,
    /// \brief Maps an image by applying intensity transformation with gamma correction.
    LUTmGamma,
    /// \brief Maps an image by applying intensity transformation.
    LUTmDirect
};

//-----------------------------------------------------------------------------
/// \brief Defines valid modes to operate the memory manager in.
/// \ingroup CommonInterface
enum TMemoryManagerMode
//-----------------------------------------------------------------------------
{
    /// \brief Automatic mode.
    /**
     *  In this mode the DMA memory is only used as intermediate buffer. The user has no direct access to it
     *  instead he get always a copy of the image that resides on the heap. Internally the DMA memory is organized as
     *  ring buffer. It decouples the autonomous grabbing of the board from the application. The size of the
     *  memory should be big enough to hold as many images as requests are used in the application.
     */
    mmmAuto = 0,
    /// \brief Pool Mode
    /**
     *  This mode allows direct access to the DMA memory. So its not necessary for the driver to make copies
     *  of the images. This improves the performance of the system. But there is one disadvantage: The
     *  partitioning of the DMA memory is fixed and has to be done by the user. The block size must be set
     *  to the image size in bytes. Additional the block count must be set. Before these parameters can be
     *  changed it must be sure that all ImageBuffers are returned and the grabber is stopped.
     */
    mmmPool = 1
};

//-----------------------------------------------------------------------------
/// \brief Defines the pool mode of memory manager.
/// \ingroup CommonInterface
enum TMemoryManagerPoolMode
//-----------------------------------------------------------------------------
{
    /// \brief Dont use Pool
    mmpmOff = 0,
    /// \brief Use Pool in Manual Mode
    mmpmFixed = 1,
    /// \brief Use Pool in Automatic Mode
    mmpmAuto = 2
};

//-----------------------------------------------------------------------------
/// \brief Defines valid mirror modes.
/**
 *  These enumeration values may be 'ored' together.
 */
/// \ingroup CommonInterface
enum TMirrorMode // flags_attribute, uint_type
//-----------------------------------------------------------------------------
{
    /// \brief No Mirroring.
    mmOff = 0,
    /// \brief The resulting image will be flipped around a horizontal axis.
    mmTopDown = 0x1,
    /// \brief The resulting image will be flipped around a vertical axis.
    mmLeftRight = 0x2,
    /// \brief The resulting image will be both around a horizontal and vertical axis.
    mmTopDownAndLeftRight = mmTopDown | mmLeftRight
};

//-----------------------------------------------------------------------------
/// \brief Defines valid mirror operation modes.
/// \ingroup CommonInterface
enum TMirrorOperationMode
//-----------------------------------------------------------------------------
{
    /// \brief There will be a single mode option only and this mode will be applied to all channels
    /// of the image.
    momGlobal,
    /// \brief The mirror mode can be selected for differently for each channel of the image.
    momChannelBased
};

#ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief Defines valid modes for the handling of the device' on board memory (if available)
/// \ingroup DeviceSpecificInterface
enum TOnBoardMemoryMode
//-----------------------------------------------------------------------------
{
    /// \brief The device will work with reasonable default values.
    /**
     *  This option will be the right choice for most of the user.
     */
    obmmDefault,
    /// \brief The user can define how the on board memory of the device will be used.
    /**
     *  This is for advanced user only and will not be necessary in most of
     *  the cases.
     */
    obmmUser
};
#endif // IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION

//-----------------------------------------------------------------------------
/// \brief Defines valid pulse start trigger values.
/// \ingroup DeviceSpecificInterface
enum TPulseStartTrigger
//-----------------------------------------------------------------------------
{
    /// \brief Changes on one or more digital inputs will trigger the output of the pulse or pulse sequence.
    pstDigitalSignal = 0,
    /// \brief The output of a pulse or pulse sequence will be done periodically.
    pstPeriodically,
    /// \brief The output of a rotary decoder will trigger the output of the pulse or pulse sequence.
    pstRotaryDecoder
};

//-----------------------------------------------------------------------------
/// \brief Defines valid image modes for request objects
/// \ingroup CommonInterface
enum TRequestImageMemoryMode
//-----------------------------------------------------------------------------
{
    /// \brief Automatic mode.
    /**
     *  In this mode the driver will decide what kind of memory will be used,
     *  when it will be allocated and when it will be freed.
     */
    rimmAuto,
    /// \brief User supplied memory mode.
    /**
     *  A request in this mode can capture data directly into a user supplied
     *  buffer.
     *
     *  The user can assign a buffer to each request that has been set into this
     *  mode. However some devices require the capture memory to be aligned thus
     *  then the buffer supplied by the user must be aligned to the requirements
     *  of the driver as well. To find out, which alignment is needed, the property
     *  \a captureBufferAlignment must be queried.
     */
    rimmUser
};

//-----------------------------------------------------------------------------
/// \brief Defines valid result of an image request.
/**
 *  Whenever during the processing of the capture parameters but well before the actual
 *  image capture and error is detected the MSB of this enumeration will be set to 1.
 *  In this case almost every time the current input parameters can't lead to a
 *  correct image and have to be changed.
 */
/// \ingroup CommonInterface
enum TRequestResult // uint_type
//-----------------------------------------------------------------------------
{
    /// \brief This image request has been processed successfully.
    rrOK = 0,
    /// \brief This image request resulted in a timeout. No image has been captured during the allowed period of time.
    rrTimeout = 1,
    /// \brief An error occurred during the processing of this request.
    /**
     *  \b mvBlueFOX \b specific:
     *  This error typically results in some kind of USB transmission problem. The log-file will contain
     *  more information in that case.
     */
    rrError = 2,
    /// \brief This request has been aborted either because there are no free internal buffers or the user itself caused this abort e.g. by clearing the request queue.
    rrRequestAborted = 3,
    /// \brief An incomplete frame was transferred.
    /**
     *  This can have several reasons, however the one most likely is that the transfer channel couldn't cope with
     *  the amount of data that was transmitted resulting in parts of the frame or in the worst case the complete
     *  frame being lost.
     *
     *  This e.g. might happen if several network devices transmit at the same time or a single device (e.g. connected
     *  to a PCI bus transfers more data then the PCI bus can pass to the receiving end until a temporary buffer on the
     *  device runs full. The log output will contain additional information.
     *
     *  If the information is available the property 'MissingData_pc' belonging to that request will contain information
     *  about the amount of data missing. Also some of the statistical properties will provide hints about how much
     *  data is lost. E.g. the properties 'MissingPacktesRecovered', 'RetransmitCount' and 'MissingDataAverage_pc' might
     *  be of interest here. Please note that not every property is supported by every device.
     */
    rrFrameIncomplete = 4,
    /// \brief The access to the device has been lost.
    /**
     *  In this case no further access to the device will succeed. Only closing and re-opening the device
     *  will fix this problem. There can be numerous reasons for this error to occur, however the most likely one
     *  is that a device, that a timeout register inside the device, that needs to be refreshed constantly by
     *  the driver hasn't been refreshed during the timeout period. In this case the device will disconnect
     *  itself from the driver. This e.g. can happen if a network device is used and the application is operated in
     *  debug mode. For debugging the corresponding timeout register must be set to an appropriate value.
     */
    rrDeviceAccessLost = 5,
    /// \brief A complete buffer has been delivered, but it did fail to pass the internal validation check.
    /**
     *  This e.g. might happen with drivers that transmit buffers that contain more than a pure block of pixel
     *  data. Examples for this might be run-length encoded images, or buffers with additional information
     *  somewhere in the buffer that will be interpreted by the device driver. This error is most likely a
     *  result of a device that doesn't transfer data in the requested format. The log output will contain
     *  additional information.
     */
    rrInconsistentBufferContent = 6,
    /// \brief The device has reported that an image acquisition did fail on the device side thus <b>BEFORE</b> the data transfer.
    /**
     *  This e.g. might happen if a device is running low on local memory or because of some other problem detected
     *  on the device itself. This result status is just meant for information. The associated buffer will not contain
     *  valid image data.
     */
    rrFrameCorrupt = 7,
    /// \brief This request is not processible.
    /**
     *  If this flag (the MSB) is set this either indicates that the current input parameters
     *  can't be used to capture an image (in that case the result will not be the MSB alone)
     *  or that an internal error occurred during the process of this request.
     */
    rrUnprocessibleRequest = 0x80000000,
    /// \brief No free buffer available to process this request.
    /**
     *  To get more memory either some old requests should be unlocked or the size of the
     *  DMA memory (frame grabbers only) could be increased using the tools provided.
     */
    rrNoBufferAvailable = rrUnprocessibleRequest | 1,
    /// \brief There is not enough memory available to the driver to process the current image request.
    /**
     *  To get more memory either some old requests should be unlocked or the size of the
     *  DMA memory (frame grabbers only) could be increased using the tools provided.
     *
     *  Another possibility might be, that the process currently hosting the application cannot
     *  map all the capture memory requested by the application. In this case adding more memory to
     *  the system might solve the problem. Please note that when running on a 32 bit system no
     *  more than 2 GB of RAM can be used by a single process, thus applications demanding a lot
     *  of memory might still not run then. In this case only reducing the number of request buffers
     *  will help.
     */
    rrNotEnoughMemory = rrUnprocessibleRequest | 2,
    // Don't recycle these values
    // rrScanStandardNotSupported = rrUnprocessibleRequest | 3,
    // rrScanRateInvalid = rrUnprocessibleRequest | 4,
    /// \brief The current camera description is not supported by the capture device.
    /**
     *  This error code currently is relevant for frame grabbers only and might occur e.g.
     *  when selecting a <b>MEDIUM CameraLink&reg;</b> camera description for a grabber,
     *  that only supports <b>BASE</b> cameras.
     */
    rrCameraNotSupported = rrUnprocessibleRequest | 5,
    // Don't recycle this value
    // rrCameraUserAOINotSupported = rrUnprocessibleRequest | 6,
    /// \brief The device does not support capturing data in the current configuration.
    /**
     *  This error code will occur if a request has been sent to a device that does not
     *  support the acquisition of data. This can e.g. be the case
     *
     *  - for GEV or U3V devices that do \b NOT support at least 1 streaming channel
     *  - for U3V devices that have been opened with <b>mvIMPACT::acquire::damRead</b> access
     */
    rrDataAcquisitionNotSupported = rrUnprocessibleRequest | 7
};

//-----------------------------------------------------------------------------
/// \brief Defines the current state of this <b>mvIMPACT::acquire::Request</b>.
/// \ingroup CommonInterface
enum TRequestState
//-----------------------------------------------------------------------------
{
    /// \brief This <b>mvIMPACT::acquire::Request</b> is currently unused.
    rsIdle,
    /// \brief This <b>mvIMPACT::acquire::Request</b> has been send into the drivers image request queue and currently wait to be processed.
    rsWaiting,
    /// \brief This <b>mvIMPACT::acquire::Request</b> is currently being processed.
    rsCapturing,
    /// \brief This <b>mvIMPACT::acquire::Request</b> has been processed.
    /**
     *  The user is now responsible for this request. Before this <b>mvIMPACT::acquire::Request</b> is not unlocked
     *  again it can't be used by the driver. A <b>mvIMPACT::acquire::Request</b> in this state can safely be processed
     *  by the user. Its data will remain valid until either the <b>mvIMPACT::acquire::Request</b> is unlocked by
     *  the user or the device is closed.
     */
    rsReady,
    /// \brief This <b>mvIMPACT::acquire::Request</b> is currently in configuration mode.
    /**
     *  Within this mode certain properties of the request object will become writeable, which
     *  e.g. will allow the user to pass a capture buffer to the request object.
     */
    rsBeingConfigured
};

//-----------------------------------------------------------------------------
/// \brief Defines valid RTCtrl Modes.
/// \ingroup DeviceSpecificInterface
enum TRTCtrlModes
//-----------------------------------------------------------------------------
{
    /// \brief RTC switched off and editable.
    rtctrlModeStop,
    /// \brief RTC switched on and NOT editable.
    rtctrlModeRun,
    /// \brief RTC switched on and restart after changes.
    rtctrlModeRunRestart
};

//-----------------------------------------------------------------------------
/// \brief Defines valid RTProg OpCodes.
/// \ingroup DeviceSpecificInterface
enum TRTProgOpCodes
//-----------------------------------------------------------------------------
{
    /// \brief Do nothing.
    rtctrlProgNop,
    /// \brief Set digital outputs.
    rtctrlProgSetDigout,
    /// \brief Wait for digital inputs.
    rtctrlProgWaitDigin,
    /// \brief Wait for n clocks.
    rtctrlProgWaitClocks,
    /// \brief Jump to location.
    rtctrlProgJumpLoc,
    /// \brief Set internal trigger signal of the sensor controller.
    rtctrlProgTriggerSet,
    /// \brief Reset internal trigger signal of the sensor controller.
    rtctrlProgTriggerReset,
    /// \brief Set internal expose signal of the sensor controller.
    rtctrlProgExposeSet,
    /// \brief Reset internal expose signal of the sensor controller.
    rtctrlProgExposeReset,
    /// \brief Reset internal sensor frame counter.
    rtctrlProgFrameNrReset,
    /// \brief Jump to location if a certain register contains zero.
    rtctrlProgJumpLocOnZero,
    /// \brief Jump to location if a certain register differs from zero.
    rtctrlProgJumpLocOnNotZero,
    /// \brief Set a registers value.
    rtctrlProgRegisterSet,
    /// \brief Add a constant value to a register.
    rtctrlProgRegisterAdd,
    /// \brief Subtract a constant value from a register.
    rtctrlProgRegisterSub
};

//-----------------------------------------------------------------------------
/// \brief Defines valid scaler interpolation modes.
/// \ingroup CommonInterface
enum TScalerInterpolationMode
//-----------------------------------------------------------------------------
{
    /// \brief Nearest neighbour interpolation (default).
    simNearestNeighbor,
    /// \brief Linear interpolation.
    simLinear,
    /// \brief Cubic interpolation.
    simCubic
};

//-----------------------------------------------------------------------------
/// \brief Defines valid scaler modes.
/// \ingroup CommonInterface
enum TScalerMode
//-----------------------------------------------------------------------------
{
    /// \brief The scaler is switched off (default).
    smOff,
    /// \brief The scaler is switched on.
    smOn
};

#ifndef IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief Analogue grabbers generate its scan clock on different ways.
/// \ingroup DeviceSpecificInterface
enum TScanClock
//-----------------------------------------------------------------------------
{
    /// \brief The cameras clock signal is used.
    /**
     *  If the property \a pixelClockOutput in the camera description is either set to
     *  <b>mvIMPACT::acquire::ceseFallingEdge</b> or
     *  <b>mvIMPACT::acquire::ceseRisingEdge</b>.
     *  Otherwise <b>mvIMPACT::acquire::scAnalogue</b> is used for <b>mvTITAN-RGB</b>
     *  and <b>mvTITAN-G1</b> devices and <b>mvIMPACT::acquire::scDigital</b> for
     *  <b>mvGAMMA-G</b> devices. Other devices currently do not support this feature.
     */
    scAuto,
    /// \brief The scan clock is generated by genlocking on horizontal sync.(HD) signal.
    /**
     *  <b>ADVANTAGES:</b> \n
     *  - very small jitter (typically around some 100 pico seconds) -> suitable for high pixel clock (>20Mhz)
     *  - for matching HD freq. values (with respect to the signal send by the camera) this will produce
     *  results almost as good as when working with an external clock signal(less scan artifacts)
     *
     *  <b>DISADVANTAGES:</b> \n
     *  - slow reaction time -> not suitable for fast channel switching
     *  - not suitable for signals with a pixel clock below 12 MHz
     */
    scAnalogue,
    /// \brief The scan clock is generated digitally.
    /**
     *  <b>ADVANTAGE:</b> \n
     *  - locked after a single line, therefore this mode is very useful for fast channel switching
     *
     *  <b>DISADVANTAGE:</b> \n
     *  - bigger jitter as the analogue mode(<10ns), therefore not suitable for cameras with a pixel clock higher then about 20Mhz
     */
    scDigital
};

//-----------------------------------------------------------------------------
/// \brief Defines valid scan modes for standard cameras.
/// \ingroup DeviceSpecificInterface
enum TScanStandard
//-----------------------------------------------------------------------------
{
    /// \brief 720 x 576 Pixels for 50 Hz standard cameras, 720 x 480 Pixels for 60 Hz standard cameras
    ssITU601,
    /// \brief 768 x 576 Pixels for 50 Hz standard cameras, 640 x 480 Pixels for 60 Hz standard cameras
    ssSquare,
    /// \brief The user can define scan rate and camera AOI
    ssUser
};
#endif // IGNORE_MVGRABBER_SPECIFIC_DOCUMENTATION

//-----------------------------------------------------------------------------
/// \brief Defines valid thread priorities.
/// \ingroup CommonInterface
enum TThreadPriority
//-----------------------------------------------------------------------------
{
    /// \brief Idle thread priority.
    tpIdle,
    /// \brief Lowest thread priority.
    tpLowest,
    /// \brief Below normal thread priority.
    tpBelowNormal,
    /// \brief Normal thread priority.
    tpNormal,
    /// \brief Above normal thread priority.
    tpAboveNormal,
    /// \brief Highest priority.
    tpHighest,
    /// \brief time critical thread priority.
    tpTimeCritical
};

//-----------------------------------------------------------------------------
/// \brief Defines a trigger moment for a digital signal.
/**
 *  This can e.g. be the moment a signal connected to a device changes it state
 *  or reaches a certain state.
 */
/// \ingroup DeviceSpecificInterface
enum TTriggerMoment
//-----------------------------------------------------------------------------
{
    /// \brief A falling edge will trigger the event.
    tmOnFallingEdge = 0,
    /// \brief A rising edge will trigger the event.
    tmOnRisingEdge
};

//-----------------------------------------------------------------------------
/// \brief Defines valid flags for controlling the user access rights to the user data that can be stored in the devices non-volatile memory.
/// \ingroup CommonInterface
enum TUserDataAccessRight // flags_attribute, uint_type
//-----------------------------------------------------------------------------
{
    /// \brief The user has read rights for this entry.
    udarRead = 0x1,
    /// \brief The user has principle write rights for this entry.
    /**
     *  If <b>mvIMPACT::acquire::udarPassword</b> is not set for this entry or
     *  the corresponding password has been set correctly, the user can modify the
     *  corresponding entry.
     */
    udarWrite = 0x2,
    /// \brief Just combines <b>mvIMPACT::acquire::udarRead</b> and <b>mvIMPACT::acquire::udarWrite</b>.
    udarRW = udarRead | udarWrite,
    /// \brief A password is needed to modify this entry.
    /**
     *  Even if <b>mvIMPACT::acquire::udarWrite</b> is specified the user can only modify this entry
     *  if the correct password has been set.
     */
    udarPassword = 0x4,
    /// \brief Combines all other flags.
    udarFull = udarRW | udarPassword
};

//-----------------------------------------------------------------------------
/// \brief Defined valid values for the behaviour of the user data when a device has been disconnected and reconnected within a running process.
/// \ingroup CommonInterface
enum TUserDataReconnectBehaviour
//-----------------------------------------------------------------------------
{
    /// \brief Keep the data currently buffered in the properties describing the user data.
    /**
     *  When the user data has been modified on another machine this
     *  will result in a loss of that data once this buffered data is written back
     *  to the devices non-volatile memory.
     */
    udrbKeepCachedData,
    /// \brief Updates the properties describing the user data with the fresh data as read from the devices non-volatile memory.
    /**
     *  This might result in the loss of data that has been edited but <b>NOT</b> written
     *  to the devices non-volatile memory if this data differs from the current
     *  data stored in the devices non-volatile memory.
     */
    udrbUpdateFromDeviceData
};

//-----------------------------------------------------------------------------
/// \brief Defines valid video standards that might be supported by a video capture device.
/// \ingroup CommonInterface
enum TVideoStandard
//-----------------------------------------------------------------------------
{
    /// \brief CCIR video signal: Grey, 50 fields per second, 625 lines.
    vsCCIR,
    /// \brief RS 170 video signal: Grey, 60 fields per second, 525 lines.
    vsRS170,
    /// \brief PAL video signal: Color, 50 fields per second, 625 lines.
    vsPALBGH,
    /// \brief NTSC video signal: Color, 60 fields per second, 525 lines.
    vsNTSCM,
    /// \brief SDI video signal: 60 fields per second, 480 lines, interlaced.
    vsSDI480i,
    /// \brief SDI video signal: 50 fields per second, 576 lines, interlaced.
    vsSDI576i,
    /// \brief SDI video signal: Different frame rates, 720 lines, progressive.
    vsSDI720p,
    /// \brief SDI video signal: Different frame rates, 1080 lines, interlaced.
    vsSDI1080i,
    /// \brief SDI video signal: Different frame rates, 1080 lines, progressive.
    vsSDI1080p
};

#ifndef IGNORE_MVVIRTUALDEVICE_SPECIFIC_DOCUMENTATION
//-----------------------------------------------------------------------------
/// \brief Defines valid image types used when capturing data from a certain directory.
/**
 *  These enums may be 'ored' together.
 */
/// \ingroup DeviceSpecificInterface
enum TVirtualDeviceImageType // flags_attribute, uint_type
//-----------------------------------------------------------------------------
{
    /// \brief Will capture none of the recognized image formats
    vditNone = 0x00000000,
    /// \brief Will capture BMP files.
    vditBMP = 0x000000001,
    /// \brief Will capture PGM files.
    vditPGM = 0x000000002,
    /// \brief Will capture PNG files.
    ///
    /// \note
    /// This requires the FreeImage (see http://freeimage.sourceforge.net/) library being present on the target system.
    vditPNG = 0x000000004,
    /// \brief Will capture JPG files.
    ///
    /// \note
    /// This requires the FreeImage (see http://freeimage.sourceforge.net/) library being present on the target system.
    vditJPG = 0x000000008,
    /// \brief Will capture TIFF files.
    ///
    /// \note
    /// This requires the FreeImage (see http://freeimage.sourceforge.net/) library being present on the target system.
    vditTIFF = 0x000000010,
    /// \brief Will capture all supported image formats.
    vditALL = vditBMP | vditPGM | vditPNG | vditJPG | vditTIFF
};

//-----------------------------------------------------------------------------
/// \brief Defines valid test modes for virtual devices.
/// \ingroup DeviceSpecificInterface
enum TVirtualDeviceTestMode
//-----------------------------------------------------------------------------
{
    /// \brief Will generate a moving test pattern with pixel format <b>mvIMPACT::acquire::ibpfRGBx888Packed</b>.
    vdtmMovingRGBx888PackedImage,
    /// \brief Will generate a moving test pattern with pixel format <b>mvIMPACT::acquire::ibpfRGB888Packed</b>.
    vdtmMovingRGB888PackedImage,
    /// \brief Will generate a moving test pattern with pixel format <b>mvIMPACT::acquire::ibpfRGBx888Planar</b>.
    vdtmMovingRGBx888PlanarImage,
    /// \brief Will generate a moving horizontal test pattern with a mono pixel format.
    vdtmMovingMonoRamp,
    /// \brief Will generate a moving test pattern with pixel format <b>mvIMPACT::acquire::ibpfYUV422Packed</b> or <b>mvIMPACT::acquire::ibpfYUV422_10Packed</b> depending on the value of the 'ChannelBitDepth' property.
    vdtmMovingYUV422PackedRamp,
    /// \brief Will generate a moving test pattern with pixel format <b>mvIMPACT::acquire::ibpfYUV422Planar</b>.
    vdtmMovingYUV422PlanarRamp,
    /// \brief Will generate a moving test pattern with pixel format <b>mvIMPACT::acquire::ibpfRGB101010Packed</b>.
    vdtmMovingRGB101010PackedImage,
    /// \brief Will generate a moving test pattern with pixel format <b>mvIMPACT::acquire::ibpfRGB121212Packed</b>.
    vdtmMovingRGB121212PackedImage,
    /// \brief Will generate a moving test pattern with pixel format <b>mvIMPACT::acquire::ibpfRGB141414Packed</b>.
    vdtmMovingRGB141414PackedImage,
    /// \brief Will generate a moving test pattern with pixel format <b>mvIMPACT::acquire::ibpfRGB161616Packed</b>.
    vdtmMovingRGB161616PackedImage,
    /// \brief Will generate a moving bayer test pattern.
    vdtmMovingBayerDataRamp,
    /// \brief Will generate a still bayer test pattern that can be used for white balancing.
    vdtmBayerWhiteBalanceTestImage,
    /// \brief Will capture images from a user supplied directory.
    vdtmImageDirectory,
    /// \brief Will generate a still 8 bit bayer test pattern for leaky pixel calibration.
    vdtmLeakyPixelTestImageMono8Bayer,
    /// \brief Will generate a moving test pattern with pixel format <b>mvIMPACT::acquire::ibpfYUV422_UYVYPacked</b> or <b>mvIMPACT::acquire::ibpfYUV422_UYVY_10Packed</b> depending on the value of the 'ChannelBitDepth' property.
    vdtmMovingYUV422_UYVYPackedRamp,
    /// \brief Will generate a horizontal mono ramp.
    vdtmHorizontalMonoRamp,
    /// \brief Will generate a vertical mono ramp.
    vdtmVerticalMonoRamp,
    /// \brief Will generate a moving vertical mono ramp.
    vdtmMovingVerticalMonoRamp,
    /// \brief Will generate a horizontal mono ramp with pixel format <b>mvIMPACT::acquire::ibpfMono12Packed_V2</b>.
    vdtmHorizontalMono12Packed_V2Ramp,
    /// \brief Will generate a moving test pattern with pixel format <b>mvIMPACT::acquire::ibpfBGR888Packed</b>.
    vdtmMovingBGR888PackedImage,
    /// \brief Will generate a moving test pattern with pixel format <b>mvIMPACT::acquire::ibpfYUV444Packed</b> or <b>mvIMPACT::acquire::ibpfYUV444_10Packed</b> depending on the value of the 'ChannelBitDepth' property.
    vdtmMovingYUV444PackedRamp,
    /// \brief Will generate a moving test pattern with pixel format <b>mvIMPACT::acquire::ibpfYUV444_UYVPacked</b> or <b>mvIMPACT::acquire::ibpfYUV444_UYV_10Packed</b> depending on the value of the 'ChannelBitDepth' property.
    vdtmMovingYUV444_UYVPackedRamp,
    /// \brief Will generate a moving test pattern with pixel format <b>mvIMPACT::acquire::ibpfBGR101010Packed_V2</b>.
    vdtmMovingBGRPacked_V2Image,
    /// \brief Will just allocate but not initialize a mono buffer.
    vdtmEmptyMonoBuffer,
    /// \brief Will generate a horizontal mono ramp with pixel format <b>mvIMPACT::acquire::ibpfMono12Packed_V1</b>.
    vdtmHorizontalMono12Packed_V1Ramp,
    /// \brief Will generate a horizontal Bayer ramp with pixel format <b>mvIMPACT::acquire::ibpfMono12Packed_V1</b>.
    vdtmHorizontalBayer12Packed_V1Ramp,
    /// \brief Will generate a horizontal Bayer ramp with pixel format <b>mvIMPACT::acquire::ibpfMono12Packed_V2</b>.
    vdtmHorizontalBayer12Packed_V2Ramp,
    /// \brief Will generate a moving test pattern with pixel format <b>mvIMPACT::acquire::ibpfYUV411_UYYVYY_Packed</b>.
    vdtmMovingYUV411_UYYVYY_PackedRamp
};
#endif // #ifndef IGNORE_MVVIRTUALDEVICE_SPECIFIC_DOCUMENTATION

//-----------------------------------------------------------------------------
/// \brief Defines valid white balance calibration modes.
/// \ingroup CommonInterface
enum TWhiteBalanceCalibrationMode
//-----------------------------------------------------------------------------
{
    /// \brief Do not perform calibration, current values will be used.
    wbcmOff = 0,
    /// \brief Use the next image to perform the white balance calibration.
    /**
     *  This is defined for bayer color sensors only.
     */
    wbcmNextFrame,
    /// \brief Do a continuous white balance calibration.
    wbcmContinuous
};

//-----------------------------------------------------------------------------
/// \brief Defines valid parameter sets selectable via the \a WhiteBalance property.
/// \ingroup CommonInterface
enum TWhiteBalanceParameter
//-----------------------------------------------------------------------------
{
    /// \brief A set of constant parameters optimised for scenes illuminated by tungsten light sources.
    wbpTungsten = 0,
    /// \brief A set of constant parameters optimised for scenes illuminated by halogen light sources.
    wbpHalogen,
    /// \brief A set of constant parameters optimised for scenes illuminated by fluorescent light sources.
    wbpFluorescent,
    /// \brief A set of constant parameters optimised for scenes illuminated by day light.
    wbpDayLight,
    /// \brief A set of constant parameters optimised for scenes illuminated by photo flash light sources.
    wbpPhotoFlash,
    /// \brief A set of constant parameters optimised for scenes illuminated by day light and perfect weather.
    wbpBlueSky,
    /// \brief A parameter set which can be modified by the user.
    wbpUser1,
    /// \brief A parameter set which can be modified by the user.
    wbpUser2,
    /// \brief A parameter set which can be modified by the user.
    wbpUser3,
    /// \brief A parameter set which can be modified by the user.
    wbpUser4
};

#if !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)
typedef enum TAcquisitionField TAcquisitionField;
typedef enum TAcquisitionMode TAcquisitionMode;
typedef enum TAcquisitionStartStopBehaviour TAcquisitionStartStopBehaviour;
typedef enum TAoiMode TAoiMode;
typedef enum TAutoControlMode TAutoControlMode;
typedef enum TAutoControlSpeed TAutoControlSpeed;
typedef enum TAutoExposureControl TAutoExposureControl;
typedef enum TAutoGainControl TAutoGainControl;
typedef enum TAutoOffsetCalibration TAutoOffsetCalibration;
typedef enum TBayerConversionMode TBayerConversionMode;
typedef enum TBayerMosaicParity TBayerMosaicParity;
typedef enum TBayerWhiteBalanceResult TBayerWhiteBalanceResult;
typedef enum TBlueFOXDigitalInputThreshold TBlueFOXDigitalInputThreshold;
typedef enum TBlueFOXFooterMode TBlueFOXFooterMode;
typedef enum TBlueFOXInfoSensorCapabilities TBlueFOXInfoSensorCapabilities;
typedef enum TBlueFOXKernelDriver TBlueFOXKernelDriver;
typedef enum TBlueFOXOffsetAutoBlackSpeed TBlueFOXOffsetAutoBlackSpeed;
typedef enum TBlueFOXSensorTiming TBlueFOXSensorTiming;
typedef enum TBlueFOXTransferSize TBlueFOXTransferSize;
typedef enum TBoolean TBoolean;
typedef enum TCameraAoiMode TCameraAoiMode;
typedef enum TCameraBinningMode TCameraBinningMode;
typedef enum TCameraDataFormat TCameraDataFormat;
typedef enum TCameraExposeMode TCameraExposeMode;
typedef enum TCameraExternalSyncEdge TCameraExternalSyncEdge;
typedef enum TCameraExternalSyncOutput TCameraExternalSyncOutput;
typedef enum TCameraFlashMode TCameraFlashMode;
typedef enum TCameraFlashType TCameraFlashType;
typedef enum TCameraHDRMode TCameraHDRMode;
typedef enum TCameraInterlacedType TCameraInterlacedType;
typedef enum TCameraLinkDataValidMode TCameraLinkDataValidMode;
typedef enum TCameraOutput TCameraOutput;
typedef enum TCameraPixelClock TCameraPixelClock;
typedef enum TCameraScanMode TCameraScanMode;
typedef enum TCameraSerialPortBaudRate TCameraSerialPortBaudRate;
typedef enum TCameraShutterMode TCameraShutterMode;
typedef enum TCameraTapsXGeometry TCameraTapsXGeometry;
typedef enum TCameraTapsYGeometry TCameraTapsYGeometry;
typedef enum TCameraTestMode TCameraTestMode;
typedef enum TCameraTriggerMode TCameraTriggerMode;
typedef enum TCameraTriggerSource TCameraTriggerSource;
typedef enum TChannelSplitMode TChannelSplitMode;
typedef enum TClampMode TClampMode;
typedef enum TColorTwistInputCorrectionMatrixMode TColorTwistInputCorrectionMatrixMode;
typedef enum TColorTwistOutputCorrectionMatrixMode TColorTwistOutputCorrectionMatrixMode;
typedef enum TColorProcessingMode TColorProcessingMode;
typedef enum TDarkCurrentFilterMode TDarkCurrentFilterMode;
typedef enum TDefectivePixelsFilterMode TDefectivePixelsFilterMode;
typedef enum TDeviceAccessMode TDeviceAccessMode;
typedef enum TDeviceAdvancedOptions TDeviceAdvancedOptions;
typedef enum TDeviceCapability TDeviceCapability;
typedef enum TDeviceClass TDeviceClass;
typedef enum TDeviceDigitalOutputMode TDeviceDigitalOutputMode;
typedef enum TDeviceEventMode TDeviceEventMode;
typedef enum TDeviceEventType TDeviceEventType;
typedef enum TDeviceImageTrigger TDeviceImageTrigger;
typedef enum TDeviceInterfaceLayout TDeviceInterfaceLayout;
typedef enum TDeviceLoadSettings TDeviceLoadSettings;
typedef enum TDevicePowerMode TDevicePowerMode;
typedef enum TDeviceScanRateMode TDeviceScanRateMode;
typedef enum TDeviceSignalOutputStartEvent TDeviceSignalOutputStartEvent;
typedef enum TDeviceState TDeviceState;
typedef enum TDeviceSyncOutMode TDeviceSyncOutMode;
typedef enum TDeviceTriggerInterface TDeviceTriggerInterface;
typedef enum TDeviceTriggerMode TDeviceTriggerMode;
typedef enum TDeviceTriggerOverlap TDeviceTriggerOverlap;
typedef enum TDigIOState TDigIOState;
typedef enum TDigitalIOMeasurementMode TDigitalIOMeasurementMode;
typedef enum TDigitalIOMeasurementSource TDigitalIOMeasurementSource;
typedef enum TDigitalOutputControlMode TDigitalOutputControlMode;
typedef enum TDigitalSignal TDigitalSignal;
typedef enum TDMR_ERROR TDMR_ERROR;
typedef enum TFieldGateMode TFieldGateMode;
typedef enum TFlatFieldFilterCorrectionMode TFlatFieldFilterCorrectionMode;
typedef enum TFlatFieldFilterMode TFlatFieldFilterMode;
typedef enum THWUpdateResult THWUpdateResult;
typedef enum TI2COperationMode TI2COperationMode;
typedef enum TI2COperationStatus TI2COperationStatus;
typedef enum TImageBufferFormatReinterpreterMode TImageBufferFormatReinterpreterMode;
typedef enum TImageBufferPixelFormat TImageBufferPixelFormat;
typedef enum TImageDestinationPixelFormat TImageDestinationPixelFormat;
typedef enum TImageProcessingFilter TImageProcessingFilter;
typedef enum TImageProcessingOptimization TImageProcessingOptimization;
typedef enum TImageRequestControlMode TImageRequestControlMode;
typedef enum TInfoSensorColorMode TInfoSensorColorMode;
typedef enum TInfoSensorColorPattern TInfoSensorColorPattern;
typedef enum TInfoSensorType TInfoSensorType;
typedef enum TInterlacedMode TInterlacedMode;
typedef enum TLineCounter TLineCounter;
typedef enum TLUTGammaMode TLUTGammaMode;
typedef enum TLUTImplementation TLUTImplementation;
typedef enum TLUTInterpolationMode TLUTInterpolationMode;
typedef enum TLUTMapping TLUTMapping;
typedef enum TLUTMode TLUTMode;
typedef enum TMemoryManagerMode TMemoryManagerMode;
typedef enum TMemoryManagerPoolMode TMemoryManagerPoolMode;
typedef enum TMirrorMode TMirrorMode;
typedef enum TMirrorOperationMode TMirrorOperationMode;
typedef enum TOnBoardMemoryMode TOnBoardMemoryMode;
typedef enum TPulseStartTrigger TPulseStartTrigger;
typedef enum TRequestImageMemoryMode TRequestImageMemoryMode;
typedef enum TRequestResult TRequestResult;
typedef enum TRequestState TRequestState;
typedef enum TRTCtrlModes TRTCtrlModes;
typedef enum TRTProgOpCodes TRTProgOpCodes;
typedef enum TScalerInterpolationMode TScalerInterpolationMode;
typedef enum TScalerMode TScalerMode;
typedef enum TScanClock TScanClock;
typedef enum TScanStandard TScanStandard;
typedef enum TThreadPriority TThreadPriority;
typedef enum TTriggerMoment TTriggerMoment;
typedef enum TUserDataAccessRight TUserDataAccessRight;
typedef enum TUserDataReconnectBehaviour TUserDataReconnectBehaviour;
typedef enum TVideoStandard TVideoStandard;
typedef enum TVirtualDeviceImageType TVirtualDeviceImageType;
typedef enum TVirtualDeviceTestMode TVirtualDeviceTestMode;
typedef enum TWhiteBalanceCalibrationMode TWhiteBalanceCalibrationMode;
typedef enum TWhiteBalanceParameter TWhiteBalanceParameter;
#endif // DOXYGEN_SHOULD_SKIP_THIS && WRAP_ANY

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
#       ifdef __BORLANDC__
#           pragma option pop
#       endif // __BORLANDC__
#   endif // _WIN32
#endif // !defined(DOXYGEN_SHOULD_SKIP_THIS) && !defined(WRAP_ANY)

#endif // mvDriverBaseEnumsH
