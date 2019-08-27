#pragma once

#include <opencv-glib/point.h>
#include <opencv-glib/size.h>

G_BEGIN_DECLS

#define GCV_TYPE_ROTATED_RECTANGLE (gcv_rotated_rectangle_get_type())
G_DECLARE_DERIVABLE_TYPE(GCVRotatedRectangle,
                         gcv_rotated_rectangle,
                         GCV,
                         ROTATED_RECTANGLE,
                         GObject)
struct _GCVRotatedRectangleClass
{
  GObjectClass parent_class;
};

GCVRotatedRectangle *gcv_rotated_rectangle_new(GCVPoint *center, GCVSize *size, gfloat angle);
GCVRotatedRectangle *gcv_rotated_rectangle_new_empty(void);
GCVPoint *gcv_rotated_rectangle_get_center(GCVRotatedRectangle *rotated_rectangle);
void gcv_rotated_rectangle_set_center(GCVRotatedRectangle *rotated_rectangle, GCVPoint *center);
GCVSize *gcv_rotated_rectangle_get_size(GCVRotatedRectangle *rotated_rectangle);
void gcv_rotated_rectangle_set_size(GCVRotatedRectangle *rotated_rectangle, GCVSize *size);
gfloat gcv_rotated_rectangle_get_angle(GCVRotatedRectangle *rotated_rectangle);
void gcv_rotated_rectangle_set_angle(GCVRotatedRectangle *rotated_rectangle, gfloat angle);

G_END_DECLS
