#include <opencv-glib/rotated-rectangle.hpp>
#include <opencv-glib/point.hpp>
#include <opencv-glib/size.hpp>

G_BEGIN_DECLS

/**
 * SECTION: rotated-rectangle
 * @title: RotatedRectangle class
 * @include: opencv-glib/opencv-glib.h
 *
 * #GCVRectangle is a rotated-rectangle class.
 *
 * Since: 1.0.2
 */

typedef struct {
  std::shared_ptr<cv::RotatedRect> rotated_rectangle;
} GCVRotatedRectanglePrivate;

G_DEFINE_TYPE_WITH_PRIVATE(GCVRotatedRectangle, gcv_rotated_rectangle, G_TYPE_OBJECT)

#define GCV_ROTATED_RECTANGLE_GET_PRIVATE(obj)                  \
  (G_TYPE_INSTANCE_GET_PRIVATE((obj),                           \
                               GCV_TYPE_ROTATED_RECTANGLE,      \
                               GCVRotatedRectanglePrivate))

enum {
  PROP_ROTATED_RECTANGLE = 1,
  PROP_CENTER
};

static void
gcv_rotated_rectangle_finalize(GObject *object)
{
  auto priv = GCV_ROTATED_RECTANGLE_GET_PRIVATE(object);

  priv->rotated_rectangle = nullptr;

  G_OBJECT_CLASS(gcv_rotated_rectangle_parent_class)->finalize(object);
}

static void
gcv_rotated_rectangle_set_property(GObject *object,
                                   guint prop_id,
                                   const GValue *value,
                                   GParamSpec *pspec)
{
  auto priv = GCV_ROTATED_RECTANGLE_GET_PRIVATE(object);

  switch (prop_id) {
  case PROP_ROTATED_RECTANGLE:
    priv->rotated_rectangle =
      *static_cast<std::shared_ptr<cv::RotatedRect> *>(g_value_get_pointer(value));
    break;
  default:
    G_OBJECT_WARN_INVALID_PROPERTY_ID(object, prop_id, pspec);
    break;
  }
}

static void
gcv_rotated_rectangle_init(GCVRotatedRectangle *object)
{
}

static void
gcv_rotated_rectangle_class_init(GCVRotatedRectangleClass *klass)
{
  GParamSpec *spec;

  auto gobject_class = G_OBJECT_CLASS(klass);

  gobject_class->finalize     = gcv_rotated_rectangle_finalize;
  gobject_class->set_property = gcv_rotated_rectangle_set_property;

  spec = g_param_spec_pointer("rotated-rectangle",
                              "Rotated rectangle",
                              "The raw std::shared<cv::RotatedRect> *",
                              static_cast<GParamFlags>(G_PARAM_WRITABLE |
                                                       G_PARAM_CONSTRUCT_ONLY));
  g_object_class_install_property(gobject_class, PROP_ROTATED_RECTANGLE, spec);
}

/**
 * gcv_rotated_rectangle_new:
 * @center: A point value of the mass center
 * @size: A size value of the width and height
 * @angle: A rotation angle of the new rectangle (in a clockwise direction)
 *
 * Returns: A newly created #GCVRotatedRectangle.
 *
 * Since: 1.0.2
 */
GCVRotatedRectangle *
gcv_rotated_rectangle_new(GCVPoint *center, GCVSize *size, gfloat angle)
{
  auto cv_point = gcv_point_get_raw(center);
  auto cv_size = gcv_size_get_raw(size);
  auto cv_rotated_rectangle = std::make_shared<cv::RotatedRect>(*cv_point, *cv_size, angle);
  return gcv_rotated_rectangle_new_raw(&cv_rotated_rectangle);
}

/**
 * gcv_rotated_rectangle_new_empty:
 *
 * Returns: A newly created empty #GCVRotatedRectangle.
 *
 * Since: 1.0.2
 */
GCVRotatedRectangle *
gcv_rotated_rectangle_new_empty(void)
{
  auto cv_rotated_rectangle = std::make_shared<cv::RotatedRect>();
  return gcv_rotated_rectangle_new_raw(&cv_rotated_rectangle);
}

GCVPoint *
gcv_rotated_rectangle_get_center(GCVRotatedRectangle *rotated_rectangle)
{
  auto cv_rotated_rectangle = gcv_rotated_rectangle_get_raw(rotated_rectangle);
  auto cv_center = cv_rotated_rectangle->center;
  GCVPoint *center = gcv_point_new(cv_center.x, cv_center.y);
  return center;
}

void
gcv_rotated_rectangle_set_center(GCVRotatedRectangle *rotated_rectangle, GCVPoint *center)
{
  auto cv_rotated_rectangle = gcv_rotated_rectangle_get_raw(rotated_rectangle);
  cv_rotated_rectangle->center.x = gcv_point_get_x(center);
  cv_rotated_rectangle->center.y = gcv_point_get_y(center);
}

GCVSize *
gcv_rotated_rectangle_get_size(GCVRotatedRectangle *rotated_rectangle)
{
  return nullptr;
}

void
gcv_rotated_rectangle_set_size(GCVRotatedRectangle *rotated_rectangle, GCVSize *size)
{
}

gfloat
gcv_rotated_rectangle_get_angle(GCVRotatedRectangle *rotated_rectangle)
{
  return 0.0f;
}

void
gcv_rotated_rectangle_set_angle(GCVRotatedRectangle *rotated_rectangle, gfloat angle)
{
}

G_END_DECLS

GCVRotatedRectangle *
gcv_rotated_rectangle_new_raw(std::shared_ptr<cv::RotatedRect> *cv_rotated_rectangle)
{
  auto rotated_rectangle = g_object_new(GCV_TYPE_ROTATED_RECTANGLE,
                                        "rotated-rectangle", cv_rotated_rectangle,
                                        NULL);
  return GCV_ROTATED_RECTANGLE(rotated_rectangle);
}

std::shared_ptr<cv::RotatedRect>
gcv_rotated_rectangle_get_raw(GCVRotatedRectangle *rotated_rectangle)
{
  auto priv = GCV_ROTATED_RECTANGLE_GET_PRIVATE(rotated_rectangle);
  return priv->rotated_rectangle;
}
