/*
* Brian R Taylor
* brian.taylor@bolderflight.com
* 
* Copyright (c) 2022 Bolder Flight Systems Inc
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the “Software”), to
* deal in the Software without restriction, including without limitation the
* rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
* sell copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
* IN THE SOFTWARE.
*/

#include "utils.h"  // NOLINT
#include "eigen.h"  // NOLINT

namespace bfs {

void EigenToArray(const Eigen::Vector3f &vec, float arr[3]) {
  if (!arr) {return;}
  for (std::size_t i = 0; i < 3; i++) {
    arr[i] = vec[i];
  }
}
void EigenToArray(const Eigen::Matrix3f &mat, float arr[3][3]) {
  if (!arr) {return;}
  for (std::size_t i = 0; i < 3; i++) {
    for (std::size_t j = 0; j < 3; j++) {
      arr[i][j] = mat(i, j);
    }
  }
}
void EigenToArray(const Eigen::Vector3d &vec, double arr[3]) {
  if (!arr) {return;}
  for (std::size_t i = 0; i < 3; i++) {
    arr[i] = vec[i];
  }
}
void EigenToArray(const Eigen::Matrix3d &mat, double arr[3][3]) {
  if (!arr) {return;}
  for (std::size_t i = 0; i < 3; i++) {
    for (std::size_t j = 0; j < 3; j++) {
      arr[i][j] = mat(i, j);
    }
  }
}
std::array<float, 3> EigenToArray(const Eigen::Vector3f &vec) {
  std::array<float, 3> arr;
  for (std::size_t i = 0; i < 3; i++) {
    arr[i] = vec[i];
  }
  return arr;
}
std::array<std::array<float, 3>, 3> EigenToArray(const Eigen::Matrix3f &mat) {
  std::array<std::array<float, 3>, 3> arr;
  for (std::size_t i = 0; i < 3; i++) {
    for (std::size_t j = 0; j < 3; j++) {
      arr[i][j] = mat(i, j);
    }
  }
  return arr;
}
std::array<double, 3> EigenToArray(const Eigen::Vector3d &vec) {
  std::array<double, 3> arr;
  for (std::size_t i = 0; i < 3; i++) {
    arr[i] = vec[i];
  }
  return arr;
}
std::array<std::array<double, 3>, 3> EigenToArray(const Eigen::Matrix3d &mat) {
  std::array<std::array<double, 3>, 3> arr;
  for (std::size_t i = 0; i < 3; i++) {
    for (std::size_t j = 0; j < 3; j++) {
      arr[i][j] = mat(i, j);
    }
  }
  return arr;
}
Eigen::Vector3f ArrayToEigen(float arr[3]) {
  Eigen::Vector3f vec;
  for (std::size_t i = 0; i < 3; i++) {
    vec[i] = arr[i];
  }
  return vec;
}
Eigen::Matrix3f ArrayToEigen(float arr[3][3]) {
  Eigen::Matrix3f mat;
  for (std::size_t i = 0; i < 3; i++) {
    for (std::size_t j = 0; j < 3; j++) {
      mat(i, j) = arr[i][j];
    }
  }
  return mat;
}
Eigen::Vector3d ArrayToEigen(double arr[3]) {
  Eigen::Vector3d vec;
  for (std::size_t i = 0; i < 3; i++) {
    vec[i] = arr[i];
  }
  return vec;
}
Eigen::Matrix3d ArrayToEigen(double arr[3][3]) {
  Eigen::Matrix3d mat;
  for (std::size_t i = 0; i < 3; i++) {
    for (std::size_t j = 0; j < 3; j++) {
      mat(i, j) = arr[i][j];
    }
  }
  return mat;
}
Eigen::Vector3f ArrayToEigen(const std::array<float, 3> &arr) {
  Eigen::Vector3f vec;
  for (std::size_t i = 0; i < 3; i++) {
    vec[i] = arr[i];
  }
  return vec;
}
Eigen::Matrix3f ArrayToEigen(const std::array<std::array<float, 3>, 3> &arr) {
  Eigen::Matrix3f mat;
  for (std::size_t i = 0; i < 3; i++) {
    for (std::size_t j = 0; j < 3; j++) {
      mat(i, j) = arr[i][j];
    }
  }
  return mat;
}
Eigen::Vector3d ArrayToEigen(const std::array<double, 3> &arr) {
  Eigen::Vector3d vec;
  for (std::size_t i = 0; i < 3; i++) {
    vec[i] = arr[i];
  }
  return vec;
}
Eigen::Matrix3d ArrayToEigen(const std::array<std::array<double, 3>, 3> & arr) {
  Eigen::Matrix3d mat;
  for (std::size_t i = 0; i < 3; i++) {
    for (std::size_t j = 0; j < 3; j++) {
      mat(i, j) = arr[i][j];
    }
  }
  return mat;
}

}  // namespace bfs
