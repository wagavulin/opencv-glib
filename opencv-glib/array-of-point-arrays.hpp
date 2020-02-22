#pragma once

#include <vector>

#include <opencv2/core/types.hpp>

#include <opencv-glib/array-of-point-arrays.h>

GCVArrayOfPointArrays *gcv_array_of_point_arrays_new_raw(std::vector<GCVPointArray*> point_arrays_vector);
std::vector<GCVPointArray *> gcv_array_of_point_arrays_get_raw(GCVArrayOfPointArrays *point_arrays);
