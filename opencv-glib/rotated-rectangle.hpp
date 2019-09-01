#pragma once

#include <memory>

#include <opencv2/core/types.hpp>

#include <opencv-glib/rotated-rectangle.h>

GCVRotatedRectangle *gcv_rotated_rectangle_new_raw(std::shared_ptr<cv::RotatedRect> *cv_rotated_rectangle);
std::shared_ptr<cv::RotatedRect> gcv_rotated_rectangle_get_raw(GCVRotatedRectangle *rotated_rectangle);
