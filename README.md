[![Pipeline](https://gitlab.com/bolderflight/software/utils/badges/main/pipeline.svg)](https://gitlab.com/bolderflight/software/utils/) [![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

![Bolder Flight Systems Logo](img/logo-words_75.png) &nbsp; &nbsp; ![Arduino Logo](img/arduino_logo_75.png)

# Utils
Commonly used utility functions, compatible with Arduino ARM and CMake build systems.
   * [License](LICENSE.md)
   * [Changelog](CHANGELOG.md)
   * [Contributing guide](CONTRIBUTING.md)

# Description
This library is a collection of commonly used functions that do not fit elsewhere.

# Installation

## Arduino
Use the Arduino Library Manager to install this library or clone to your Arduino/libraries folder. In addition, the [Bolder Flight Systems Eigen library](https://github.com/bolderflight/eigen) must be installed. This library is added as:

```C++
#include "utils.h"
```

Example Arduino executables are located in: *examples/arduino/*. Teensy 3.x, 4.x, and LC devices are used for testing under Arduino and this library should be compatible with other Arduino ARM devices. This library is **not** expected to work with AVR devices.

## CMake
CMake is used to build this library, which is exported as a library target called *utils*. The header is added as:

```C++
#include "utils.h"
```

The library can be also be compiled stand-alone using the CMake idiom of creating a *build* directory and then, from within that directory issuing:

```
cmake ..
make
```

This will build the library, example executables, and unit tests.

# Namespace
This library is within the namespace *bfs*.

# Functions

## Eigen to and from Array
The following functions convert between *Eigen::Vector3f*, *Eigen::Vector3d*, *Eigen::Matrix3f*, *Eigen::Matrix3d* and similarly sized C and C++ style arrays.

**void EigenToArray(const Eigen::Vector3f &vec, float arr[3])** Converts *Eigen::Vector3f* to a C style array.

**void EigenToArray(const Eigen::Matrix3f &mat, float arr[3][3])** Converts *Eigen::Matrix3f* to a C style array.

**void EigenToArray(const Eigen::Vector3d &vec, double arr[3])** Converts *Eigen::Vector3d* to a C style array.

**void EigenToArray(const Eigen::Matrix3d &mat, double arr[3][3])** Converts *Eigen::Matrix3d* to a C style array.

**std::array<float, 3> EigenToArray(const Eigen::Vector3f &vec)** Converts *Eigen::Vector3f* to a C++ style array.

**std::array<std::array<float, 3>, 3> EigenToArray(const Eigen::Matrix3f &mat)** Converts *Eigen::Matrix3f* to a C++ style array.

**std::array<double, 3> EigenToArray(const Eigen::Vector3d &vec)** Converts *Eigen::Vector3d* to a C++ style array.

**std::array<std::array<double, 3>, 3> EigenToArray(const Eigen::Matrix3d &mat)** Converts *Eigen::Matrix3d* to a C++ style array
.
**Eigen::Vector3f ArrayToEigen(float arr[3])** Converts C style array to *Eigen::Vector3f*.

**Eigen::Matrix3f ArrayToEigen(float arr[3][3])** Converts C style array to *Eigen::Matrix3f*.

**Eigen::Vector3d ArrayToEigen(double arr[3])** Converts C style array to *Eigen::Vector3d*.

**Eigen::Matrix3d ArrayToEigen(double arr[3][3])** Covnerts C style array to *Eigen::Matrix3d*.

**Eigen::Vector3f ArrayToEigen(const std::array<float, 3> &arr)** Converts C++ style array to *Eigen::Vector3f*.

**Eigen::Matrix3f ArrayToEigen(const std::array<std::array<float, 3>, 3> &arr)** Converts C++ style array to *Eigen::Matrix3f*.

**Eigen::Vector3d ArrayToEigen(const std::array<double, 3> &arr)** Converts C++ style array to *Eigen::Vector3d*.

**Eigen::Matrix3d ArrayToEigen(const std::array<std::array<double, 3>, 3> & arr)** Covnerts C++ style array to *Eigen::Matrix3d*.

