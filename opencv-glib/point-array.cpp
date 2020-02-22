#include <opencv-glib/point-array.hpp>
#include <opencv-glib/point.hpp>

G_BEGIN_DECLS

/**
 * SECTION: point-array
 * @title: PointArray class
 * @include: opencv-glib/opencv-glib.h
 *
 * #GCVPointArray is an array of point class.
 *
 * Since: 1.0.3
 */

typedef struct {
  std::vector<cv::Point> points;
  gint dummy;
} GCVPointArrayPrivate;

G_DEFINE_TYPE_WITH_PRIVATE(GCVPointArray, gcv_point_array, G_TYPE_OBJECT)

#define GCV_POINT_ARRAY_GET_PRIVATE(object)           \
  static_cast<GCVPointArrayPrivate *>(                \
    gcv_point_array_get_instance_private(             \
      GCV_POINT_ARRAY(object)))

enum {
  //PROP_POINTS = 1
  PROP_DUMMY = 1
};

static void
gcv_point_array_finalize(GObject *object)
{
  //auto priv = GCV_POINT_ARRAY_GET_PRIVATE(object);

  //priv->points = std::vector<cv::Point>();

  G_OBJECT_CLASS(gcv_point_array_parent_class)->finalize(object);
}

static void
gcv_point_array_set_property(GObject *object,
                             guint prop_id,
                             const GValue *value,
                             GParamSpec *pspec)
{
  //auto priv = GCV_POINT_ARRAY_GET_PRIVATE(object);

  switch (prop_id) {
  //case PROP_POINTS:
  //  break;
  case PROP_DUMMY:
    break;
  default:
    G_OBJECT_WARN_INVALID_PROPERTY_ID(object, prop_id, pspec);
    break;
  }
}

static void
gcv_point_array_init(GCVPointArray *object)
{
}

static void
gcv_point_array_class_init(GCVPointArrayClass *klass)
{
  GParamSpec *spec;

  auto gobject_class = G_OBJECT_CLASS(klass);

  gobject_class->finalize     = gcv_point_array_finalize;
  gobject_class->set_property = gcv_point_array_set_property;
#if 0
  spec = g_param_spec_pointer("point_array",
                              "PointArray",
                              "The raw std::shared<cv::PointArray> *",
                              static_cast<GParamFlags>(G_PARAM_WRITABLE |
                                                       G_PARAM_CONSTRUCT_ONLY));
  g_object_class_install_property(gobject_class, PROP_POINTS, spec);
#endif
  spec = g_param_spec_int("point_array",
                          "PointArray",
                          "The dummy value",
                          0, 100, 10,
                          static_cast<GParamFlags>(G_PARAM_WRITABLE |
                                                   G_PARAM_CONSTRUCT_ONLY));
  g_object_class_install_property(gobject_class, PROP_DUMMY, spec);
}

/**
 * gcv_point_array_new:
 * @points: (array length=n_points): An array of #GCVPoint.
 * @n_points: Number of @points.
 *
 * Returns: A newly created #GCVPointArray.
 *
 * Since: 1.0.3
 */
GCVPointArray *
gcv_point_array_new(GCVPoint **points, gint n_points)
{
  std::vector<cv::Point> v_points;
  for (gint i = 0; i < n_points; ++i) {
    auto cv_point = gcv_point_get_raw(points[i]);
    v_points.push_back(*cv_point);
  }
  return gcv_point_array_new_raw(v_points);
}

/**
 * gcv_point_array_new_empty:
 *
 * Returns: A newly created empty #GCVPointArray.
 *
 * Since: 1.0.3
 */
GCVPointArray *
gcv_point_array_new_empty(void)
{
  return gcv_point_array_new_raw(std::vector<cv::Point>());
}

G_END_DECLS

GCVPointArray *
gcv_point_array_new_raw(std::vector<cv::Point> points)
{
  auto point_array = g_object_new(GCV_TYPE_POINT_ARRAY, NULL);
  auto priv = GCV_POINT_ARRAY_GET_PRIVATE(point_array);
  priv->points = points;
  return GCV_POINT_ARRAY(point_array);
}

std::vector<cv::Point>
gcv_point_array_get_raw(GCVPointArray *point_array)
{
  auto priv = GCV_POINT_ARRAY_GET_PRIVATE(point_array);
  return priv->points;
}
