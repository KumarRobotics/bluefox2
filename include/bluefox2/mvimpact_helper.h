#ifndef BLUEFOX2_MVIMPACT_HELPER_H_
#define BLUEFOX2_MVIMPACT_HELPER_H_

#ifndef linux
#define linux
#endif
#include "mvIMPACT_CPP/mvIMPACT_acquire.h"

namespace bluefox2 {

/**
 * @brief PrintDeviceDetails Print detials of this device
 * @param device Pointer to Device
 */
void PrintDeviceDetails(const mvIMPACT::acquire::Device *device) noexcept;

/**
 * @brief Clamp
 * @param value
 * @param low
 * @param high
 * @return
 */
template <typename T>
T Clamp(const T &value, const T &low, const T &high) noexcept {
  return std::max(low, std::min(high, value));
}

/**
 * @brief ClampProperty
 * @param prop
 * @param value
 */
template <typename PropertyType, typename T>
void ClampProperty(const PropertyType &prop, T *value) noexcept {
  *value = Clamp(*value, prop.getMinValue(), prop.getMaxValue());
}

/**
 * @brief PixelFormatToEncoding Convert pixel format to image encoding
 * @param pixel_format mvIMPACT ImageBufferPixelFormat
 * @return Image encoding
 */
std::string PixelFormatToEncoding(
    const mvIMPACT::acquire::TImageBufferPixelFormat &pixel_format) noexcept;

/**
 * @brief BayerPatternToEncoding Convert bayer pattern to image encoding
 * @param bayer_pattern mvIMPACT BayerMosaicParity
 * @param bytes_per_pixel Number of bytes per pixel
 * @return Image encoding
 */
std::string BayerPatternToEncoding(
    const mvIMPACT::acquire::TBayerMosaicParity &bayer_pattern,
    unsigned int bytes_per_pixel) noexcept;

double PixelClockToFrameRate(int pclk_khz, double width, double height,
                             double expose_us) noexcept;

bool IsColorSupported(const mvIMPACT::acquire::InfoBlueDevice *bf_info);

}  // namespace bluefox2

#endif  // BLUEFOX2_MVIMPACT_HELPER_H_
