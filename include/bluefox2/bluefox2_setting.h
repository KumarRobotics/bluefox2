#ifndef BLUEFOX2_SETTING_H_
#define BLUEFOX2_SETTING_H_

#include <iostream>

#ifndef linux
#define linux
#endif
#include <mvIMPACT_CPP/mvIMPACT_acquire.h>

#include <bluefox2/Bluefox2DynConfig.h>

namespace bluefox2 {
using namespace mvIMPACT::acquire;

// Convinient typedefs
template <typename ValueType>
using TranslationDict = std::vector<std::pair<std::string, ValueType>>;

template <typename T1, typename T2>
T1 Clamp(const T1& value, const T2& low, const T2& high) {
  return std::max<T1>(low, std::min<T1>(high, value));
}

template <typename PropertyType, typename ValueType>
ValueType ClampProperty(const PropertyType& prop, const ValueType& value) {
  return Clamp(value, prop.getMinValue(), prop.getMaxValue());
}

/**
 * @brief GetTranslationDict Convenience function to get translation dict
 * @param prop Property
 * @return Translation dict
 */
template <typename PropertyType>
TranslationDict<typename PropertyType::value_type> GetTranslationDict(
    const PropertyType& prop) {
  TranslationDict<typename PropertyType::value_type> dict;
  prop.getTranslationDict(dict);
  return dict;
}

/**
 * @brief PrintTranslationDict
 * @param dict Property's translation table
 */
template <typename ValueType>
void PrintTranslationDict(const TranslationDict<ValueType>& dict) {
  for (const auto& p : dict) {
    std::cout << "[" << p.first << ": " << p.second << "]";
  }
  std::cout << std::endl;
}

/**
 * @brief PixelFormatToEncoding Convert pixel format to image encoding
 * @param pixel_format mvIMPACT ImageBufferPixelFormat
 * @return Image encoding
 */
std::string PixelFormatToEncoding(const TImageBufferPixelFormat& pixel_format);

/**
 * @brief BayerPatternToEncoding Convert bayer pattern to image encoding
 * @param bayer_pattern mvIMPACT BayerMosaicParity
 * @param bytes_per_pixel Number of bytes per pixel
 * @return Image encoding
 */
std::string BayerPatternToEncoding(const TBayerMosaicParity& bayer_pattern,
                                   int bytes_per_pixel);

double PixelClockToFrameRate(int pclk_khz, double width, double height,
                             double expose_us);

template <typename Prop>
void PrintProperty(const Prop& prop) {
  std::cout << "Property name: " << prop.displayName() << "\n";
  if (prop.hasMaxValue()) {
    std::cout << "  Max value: " << prop.getMaxValue() << "\n";
  }
  if (prop.hasMinValue()) {
    std::cout << "  Min value: " << prop.getMinValue() << "\n";
  }
  if (prop.hasStepWidth()) {
    std::cout << "  Step width: " << prop.getStepWidth() << "\n";
  }
  std::cout << "  Writable: " << prop.isWriteable() << "\n";
  std::cout << "  Visible: " << prop.isVisible() << "\n";
  std::cout << "  Valid: " << prop.isValid() << std::endl;
}

// TODO: improve error display
template <typename PropertyType, typename ValueType>
void WriteProperty(const PropertyType& prop, ValueType value) {
  using PropertyValueType = typename PropertyType::value_type;
  // Check if it's possible to write to this property
  if (!(prop.isVisible() && prop.isWriteable() && prop.isValid())) {
    std::cout << prop.name() << ": unable to write to property" << std::endl;
    return;
  }

  // Clamp value to valid range only if it's not an enum
  if (!std::is_enum<PropertyValueType>::value) {
    if (prop.hasMaxValue() && prop.hasMinValue()) {
      value = ClampProperty(prop, value);
    }
  }

  try {
    prop.write(static_cast<PropertyValueType>(value));
  } catch (...) {
    std::cout << prop.name() << ": failed to write to property" << std::endl;
    PrintTranslationDict(GetTranslationDict(prop));
  }
}

template <typename PropertyType, typename ValueType>
void ReadProperty(const PropertyType& prop, ValueType& value) {
  if (!(prop.isValid() && prop.isVisible())) {
    std::cout << prop.name() << ": unable to read from property" << std::endl;
    return;
  }

  try {
    value = static_cast<ValueType>(prop.read());
  } catch (...) {
    std::cout << prop.name() << ": failed to read from property" << std::endl;
  }
}

template <typename PropertyType, typename ValueType>
void WriteAndReadProperty(const PropertyType& prop, ValueType& value) {
  WriteProperty(prop, value);
  ReadProperty(prop, value);
}

}  // namespace bluefox2

#endif  // BLUEFOX2_SETTING_H_
