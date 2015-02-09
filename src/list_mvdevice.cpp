#include <iostream>
#include <boost/program_options.hpp>

#ifndef linux
#define linux
#endif
#include "mvIMPACT_CPP/mvIMPACT_acquire.h"

using namespace mvIMPACT::acquire;
namespace bpo = boost::program_options;

void PrintDeviceDetails(const Device* device) {
  std::cout << "Serial: " << device->serial.read()
            << ", Version: " << device->deviceVersion.read()
            << ", Family: " << device->family.read()
            << ", Firmware: " << device->firmwareVersion.read()
            << ", Product: " << device->product.read() << std::endl;
}

void PrintUsage() {
  std::cout << "list_mvdevice is a command line tool"
               " that will list all the available matrix vision devices.\n\n"
            << "usage:\n"
            << "  list_mvdevice [options]\n"
            << "  rosrun bluefox3 list_mvdevice [options]\n\n";
}

void PrintOption(const bpo::options_description& opt_desc) {
  std::cout << opt_desc << "\n";
}

int main(int argc, char** argv) {
  // Parse command line options
  bpo::options_description opt_desc("Options");
  opt_desc.add_options()("help", "Show help text.")("open",
                                                    "Try opening devcie.");
  bpo::variables_map var_map;
  try {
    bpo::store(bpo::parse_command_line(argc, argv, opt_desc), var_map);
    bpo::notify(var_map);
  } catch (const std::exception& e) {
    std::cout << e.what() << "\n\n";
    PrintUsage();
    PrintOption(opt_desc);
    return 1;
  }

  // Handle all options
  if (var_map.count("help")) {
    PrintUsage();
    PrintOption(opt_desc);
    return 0;
  }

  bool open_device{false};
  if (var_map.count("open")) {
    open_device = true;
  }

  // Creating device manager
  DeviceManager device_manager;
  const auto device_count = device_manager.deviceCount();
  if (device_count == 0) {
    std::cout << "*** Error: No MATRIX VISION device found! Unable to continue!"
              << std::endl;
    return 1;
  }

  std::cout << "Have found " << device_count << " devices on this platform!"
            << std::endl;

  // List all devices found
  for (decltype(device_manager.deviceCount()) i = 0; i < device_count; ++i) {
    auto* device = device_manager[i];
    if (!device) {
      std::cout << "*** Error: Not a valid device" << std::endl;
      continue;
    }
    std::cout << "[" << i << "] ";
    PrintDeviceDetails(device);
    if (open_device) {
      try {
        device->open();
        std::cout << "Successfully opened device: " << device->serial.read()
                  << std::endl;
      } catch (const ImpactAcquireException& iae) {
        std::cout << "*** Error: An error occurred while opening the "
                     "device(error code: " << iae.getErrorCode() << ")."
                  << std::endl;
      }
    }
  }
}
