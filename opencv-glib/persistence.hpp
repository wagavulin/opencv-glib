#pragma once

#include <memory>

#include <opencv2/core.hpp>

#include <opencv-glib/persistence.h>

GCVFileStorage *
gcv_file_storage_new_raw(std::shared_ptr<cv::FileStorage> *cv_file_storage);
std::shared_ptr<cv::FileStorage>
gcv_file_storage_get_raw(GCVFileStorage *file_storage);
