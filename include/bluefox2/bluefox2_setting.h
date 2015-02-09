#ifndef BLUEFOX2_SETTINGS_H_
#define BLUEFOX2_SETTINGS_H_

#include <iostream>

#ifndef linux
#define linux
#endif
#include <mvIMPACT_CPP/mvIMPACT_acquire.h>

#include <bluefox2/Bluefox2DynConfig.h>

namespace bluefox2 {

template <typename T>
T Clamp(const T& value, const T& low, const T& high) {
  return std::max(low, std::min(high, value));
}

template <typename PropertyType, typename ValueType>
ValueType ClampProperty(const PropertyType& prop, ValueType& value) {
  return Clamp(value, prop.getMinValue(), prop.getMaxValue());
}

template <typename PropertyType, typename ValueType>
void ClampProperty(const PropertyType& prop, ValueType* value) {
  *value = Clamp(*value, prop.getMinValue(), prop.getMaxValue());
}

template <class PropertyType, class ValueType>
bool WriteProperty(const PropertyType& property, ValueType& value) {
  // Check if it's possible to write to this property
  if (!(property.isWriteable() && property.isVisible())) {
    std::cout << property.readS() << " not writeable and visible" << std::endl;
    return false;
  }

  if (property.hasMaxValue() && property.hasMinValue()) {
    // This modifies value so that the dynamic reconfigure gets updated
    value = ClampProperty(property, value);
  }
  property.write(value);
  return true;
}

/**
 * @brief PixelFormatToEncoding Convert pixel format to image encoding
 * @param pixel_format mvIMPACT ImageBufferPixelFormat
 * @return Image encoding
 */
std::string PixelFormatToEncoding(
    const mvIMPACT::acquire::TImageBufferPixelFormat& pixel_format);

/**
 * @brief BayerPatternToEncoding Convert bayer pattern to image encoding
 * @param bayer_pattern mvIMPACT BayerMosaicParity
 * @param bytes_per_pixel Number of bytes per pixel
 * @return Image encoding
 */
std::string BayerPatternToEncoding(
    const mvIMPACT::acquire::TBayerMosaicParity& bayer_pattern,
    unsigned int bytes_per_pixel);

double PixelClockToFrameRate(int pclk_khz, double width, double height,
                             double expose_us);
}  // namespace bluefox2

#endif  // BLUEFOX2_SETTINGS_H_
