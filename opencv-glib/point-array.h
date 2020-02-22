#pragma once

#include <glib-object.h>
#include <opencv-glib/point.h>

G_BEGIN_DECLS

#define GCV_TYPE_POINT_ARRAY (gcv_point_array_get_type())
G_DECLARE_DERIVABLE_TYPE(GCVPointArray,
                         gcv_point_array,
                         GCV,
                         POINT_ARRAY,
                         GObject)
struct _GCVPointArrayClass
{
  GObjectClass parent_class;
};

GCVPointArray *gcv_point_array_new(GCVPoint **points, gint n_points);
GCVPointArray *gcv_point_array_new_empty(void);

G_END_DECLS
