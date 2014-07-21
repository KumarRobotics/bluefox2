#ifndef BLUEFOX2_CAMERA_H_
#define BLUEFOX2_CAMERA_H_

#include <string>
#include <thread>
#include <memory>
#include <functional>

#include "opencv2/core/core.hpp"

#ifndef linux
#define linux
#endif
#include "mvIMPACT_CPP/mvIMPACT_acquire.h"

namespace bluefox2 {

// Config struct
struct CameraConfig {
  bool color{false};
  int expose{5000};
  bool binning{false};
  double gain{0.0};
};

class Camera {
 public:
  Camera(const std::string &serial);
  Camera(const Camera &) = delete;
  Camera &operator=(const Camera &) = delete;

  const std::string label() const { return label_; }

  std::function<void(const cv::Mat &image)> use_image;

 private:
  void FindDevice(const std::string &serial);

  using ThreadPtr = std::unique_ptr<std::thread>;
  std::string label_{"\033[0;33m[BLFOX]:\033[0, "};
  ThreadPtr image_thread_;
};

}

#endif  // BLUEFOX2_CAMERA_H_
