#ifndef BLUEFOX2_MVIMPACT_HELPER_H_
#define BLUEFOX2_MVIMPACT_HELPER_H_

#ifndef linux
#define linux
#endif
#include "mvIMPACT_CPP/mvIMPACT_acquire.h"

namespace bluefox2 {

/**
 * @brief PrintDeviceDetails
 * @param device
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
 * @brief PixelFormatToEncoding
 * @param format
 * @return
 */
std::string PixelFormatToEncoding(
    const mvIMPACT::acquire::TImageBufferPixelFormat &format) noexcept;

/**
 * @brief BayerPatternToEncoding
 * @param pattern
 * @param bits
 * @return
 */
std::string BayerPatternToEncoding(
    const mvIMPACT::acquire::TBayerMosaicParity &pattern,
    unsigned int bits) noexcept;

double PixelClockToFrameRate(int pclk_khz, double width, double height,
                             double expose_us) noexcept;
}  // namespace bluefox2

#endif  // BLUEFOX2_MVIMPACT_HELPER_H_
