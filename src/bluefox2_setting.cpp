#include "bluefox2/bluefox2_setting.h"
#include <sensor_msgs/image_encodings.h>

using namespace mvIMPACT::acquire;
using namespace sensor_msgs::image_encodings;

namespace bluefox2 {

std::string PixelFormatToEncoding(const TImageBufferPixelFormat& pixel_format) {
  using namespace sensor_msgs::image_encodings;
  switch (pixel_format) {
    case ibpfMono8:
      return MONO8;
    case ibpfMono16:
      return MONO16;
    case ibpfRGB888Packed:
      return BGR8;
    case ibpfRGB161616Packed:
      return BGR16;
    case ibpfRGBx888Packed:
      return BGRA8;
    case ibpfAuto:
      return "auto";
    default:
      return MONO8;
  }
}

std::string BayerPatternToEncoding(const TBayerMosaicParity& bayer_pattern,
                                   unsigned int bytes_per_pixel) {
  using namespace sensor_msgs::image_encodings;
  if (bytes_per_pixel == 1) {
    switch (bayer_pattern) {
      case bmpRG:
        return BAYER_RGGB8;
      case bmpGB:
        return BAYER_GBRG8;
      case bmpGR:
        return BAYER_GRBG8;
      case bmpBG:
        return BAYER_BGGR8;
      default:
        return MONO8;
    }
  } else if (bytes_per_pixel == 2) {
    switch (bayer_pattern) {
      case bmpRG:
        return BAYER_RGGB16;
      case bmpGB:
        return BAYER_GBRG16;
      case bmpGR:
        return BAYER_GRBG16;
      case bmpBG:
        return BAYER_BGGR16;
      default:
        return MONO16;
    }
  }

  return "";
}

double PixelClockToFrameRate(int pclk_khz, double width, double height,
                             double expose_us) {
  static const double kTriggerPulseWidthUs = 200;
  double frame_time_us = (width + 94) * (height + 45) / pclk_khz * 1e3;
  return 1e6 / (frame_time_us + expose_us + kTriggerPulseWidthUs);
}

}  // namespace bluefox2
