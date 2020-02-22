#pragma once

#include <vector>

#include <opencv2/core/types.hpp>

#include <opencv-glib/point-array.h>

GCVPointArray *gcv_point_array_new_raw(std::vector<cv::Point> points);
std::vector<cv::Point> gcv_point_array_get_raw(GCVPointArray *point_array);
