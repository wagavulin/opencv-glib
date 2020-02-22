#include <opencv-glib/array-of-point-arrays.hpp>
#include <opencv-glib/point-array.hpp>

G_BEGIN_DECLS

/**
 * SECTION: array-of-point-arrays
 * @title: ArrayOfPointArrays class
 * @include: opencv-glib/opencv-glib.h
 *
 * #GCVArrayOfPointArrays is an array of point class.
 *
 * Since: 1.0.3
 */

typedef struct {
  std::vector<GCVPointArray*> point_arrays_vector;
  gint dummy;
} GCVArrayOfPointArraysPrivate;

G_DEFINE_TYPE_WITH_PRIVATE(GCVArrayOfPointArrays, gcv_array_of_point_arrays, G_TYPE_OBJECT)

#define GCV_ARRAY_OF_POINT_ARRAYS_GET_PRIVATE(object)           \
  static_cast<GCVArrayOfPointArraysPrivate *>(                \
    gcv_array_of_point_arrays_get_instance_private(             \
      GCV_ARRAY_OF_POINT_ARRAYS(object)))

enum {
  //PROP_POINTS = 1
  PROP_DUMMY = 1
};

static void
gcv_array_of_point_arrays_finalize(GObject *object)
{
  //auto priv = GCV_ARRAY_OF_POINT_ARRAYS_GET_PRIVATE(object);

  //priv->points = std::vector<cv::Point>();

  G_OBJECT_CLASS(gcv_array_of_point_arrays_parent_class)->finalize(object);
}

static void
gcv_array_of_point_arrays_set_property(GObject *object,
                             guint prop_id,
                             const GValue *value,
                             GParamSpec *pspec)
{
  //auto priv = GCV_ARRAY_OF_POINT_ARRAYS_GET_PRIVATE(object);

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
gcv_array_of_point_arrays_init(GCVArrayOfPointArrays *object)
{
}

static void
gcv_array_of_point_arrays_class_init(GCVArrayOfPointArraysClass *klass)
{
  GParamSpec *spec;

  auto gobject_class = G_OBJECT_CLASS(klass);

  gobject_class->finalize     = gcv_array_of_point_arrays_finalize;
  gobject_class->set_property = gcv_array_of_point_arrays_set_property;
#if 0
  spec = g_param_spec_pointer("array_of_point_arrays",
                              "ArrayOfPointArrays",
                              "The raw std::shared<cv::ArrayOfPointArrays> *",
                              static_cast<GParamFlags>(G_PARAM_WRITABLE |
                                                       G_PARAM_CONSTRUCT_ONLY));
  g_object_class_install_property(gobject_class, PROP_POINTS, spec);
#endif
  spec = g_param_spec_int("array_of_point_arrays",
                          "ArrayOfPointArrays",
                          "The dummy value",
                          0, 100, 10,
                          static_cast<GParamFlags>(G_PARAM_WRITABLE |
                                                   G_PARAM_CONSTRUCT_ONLY));
  g_object_class_install_property(gobject_class, PROP_DUMMY, spec);
}

/**
 * gcv_array_of_point_arrays_new:
 * @points: (array length=n_points): An array of #GCVPoint.
 * @n_points: Number of @points.
 *
 * Returns: A newly created #GCVArrayOfPointArrays.
 *
 * Since: 1.0.3
 */
GCVArrayOfPointArrays *
gcv_array_of_point_arrays_new(GCVPoint **points, gint n_points)
{
#if 0
  std::vector<cv::Point> v_points;
  for (gint i = 0; i < n_points; ++i) {
    auto cv_point = gcv_point_get_raw(points[i]);
    v_points.push_back(*cv_point);
  }
  return gcv_array_of_point_arrays_new_raw(v_points);
#endif
  return nullptr;
}

/**
 * gcv_array_of_point_arrays_new_empty:
 *
 * Returns: A newly created empty #GCVArrayOfPointArrays.
 *
 * Since: 1.0.3
 */
GCVArrayOfPointArrays *
gcv_array_of_point_arrays_new_empty(void)
{
  //return gcv_array_of_point_arrays_new_raw(std::vector<cv::Point>());
  return nullptr;
}

G_END_DECLS

GCVArrayOfPointArrays *
gcv_array_of_point_arrays_new_raw(std::vector<cv::Point> points)
{
  auto array_of_point_arrays = g_object_new(GCV_TYPE_ARRAY_OF_POINT_ARRAYS, NULL);
  auto priv = GCV_ARRAY_OF_POINT_ARRAYS_GET_PRIVATE(array_of_point_arrays);
  priv->points = points;
  return GCV_ARRAY_OF_POINT_ARRAYS(array_of_point_arrays);
}

std::vector<cv::Point>
gcv_array_of_point_arrays_get_raw(GCVArrayOfPointArrays *array_of_point_arrays)
{
  auto priv = GCV_ARRAY_OF_POINT_ARRAYS_GET_PRIVATE(array_of_point_arrays);
  return priv->points;
}
