#pragma once

#include <glib-object.h>
#include <opencv-glib/point-array.h>

G_BEGIN_DECLS

#define GCV_TYPE_ARRAY_OF_POINT_ARRAYS (gcv_array_of_point_arrays_get_type())
G_DECLARE_DERIVABLE_TYPE(GCVArrayOfPointArrays,
                         gcv_array_of_point_arrays,
                         GCV,
                         ARRAY_OF_POINT_ARRAYS,
                         GObject)
struct _GCVArrayOfPointArraysClass
{
  GObjectClass parent_class;
};

GCVArrayOfPointArrays *gcv_array_of_point_arrays_new(GCVPointArray **point_arrays, gint n_arrays);
GCVArrayOfPointArrays *gcv_array_of_point_arrays_new_empty(void);

G_END_DECLS
