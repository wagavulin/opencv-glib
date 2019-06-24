#include <opencv-glib/persistence.hpp>

G_BEGIN_DECLS

typedef struct {
  std::shared_ptr<cv::FileStorage> file_storage;
} GCVFileStoragePrivate;

G_DEFINE_TYPE_WITH_PRIVATE(GCVFileStorage, gcv_file_storage, G_TYPE_OBJECT)

#define GCV_FILE_STORAGE_GET_PRIVATE(obj)              \
  (G_TYPE_INSTANCE_GET_PRIVATE((obj),                  \
                               GCV_TYPE_FILE_STORAGE,  \
                               GCVFileStoragePrivate))

enum {
  PROP_0,
  PROP_FILE_STORAGE
};

static void
gcv_file_storage_finalize(GObject *object)
{
  auto priv = GCV_FILE_STORAGE_GET_PRIVATE(object);

  priv->file_storage = nullptr;

  G_OBJECT_CLASS(gcv_file_storage_parent_class)->finalize(object);
}

static void
gcv_file_storage_set_property(GObject *object,
                              guint prop_id,
                              const GValue *value,
                              GParamSpec *pspec)
{
  auto priv = GCV_FILE_STORAGE_GET_PRIVATE(object);

  switch (prop_id) {
  case PROP_FILE_STORAGE:
    priv->file_storage = *static_cast<std::shared_ptr<cv::FileStorage> *>(g_value_get_pointer(value));
    break;
  default:
    G_OBJECT_WARN_INVALID_PROPERTY_ID(object, prop_id, pspec);
    break;
  }
}

static void
gcv_file_storage_init(GCVFileStorage *object)
{
}

static void
gcv_file_storage_class_init(GCVFileStorageClass *klass)
{
  GParamSpec *spec;

  auto gobject_class = G_OBJECT_CLASS(klass);

  gobject_class->finalize = gcv_file_storage_finalize;
  gobject_class->set_property = gcv_file_storage_set_property;

  spec = g_param_spec_pointer("file-storage",
                              "File storage",
                              "The raw std::shared<cv::FileStorage> *",
                              static_cast<GParamFlags>(G_PARAM_WRITABLE |
                                                       G_PARAM_CONSTRUCT_ONLY));
  g_object_class_install_property(gobject_class, PROP_FILE_STORAGE, spec);
}

GCVFileStorage *
gcv_file_storage_new()
{
  //auto cv_file_storage = std::make_shared<cv::FileStorage>();
  auto cv_file_storage = std::make_shared<cv::FileStorage>("hoge.yml", cv::FileStorage::WRITE);
  // Todo: ここはgcv_camera_new()を参考。
  return gcv_file_storage_new_raw(&cv_file_storage);
}

gboolean
gcv_file_storage_is_opened(GCVFileStorage *file_storage)
{
  auto priv = GCV_FILE_STORAGE_GET_PRIVATE(file_storage);
  auto cv_file_storage = priv->file_storage;
  return cv_file_storage->isOpened();
}

G_END_DECLS

GCVFileStorage *
gcv_file_storage_new_raw(std::shared_ptr<cv::FileStorage> *cv_file_storage)
{
auto file_storage = g_object_new(GCV_TYPE_FILE_STORAGE,
                                 "file-storage", cv_file_storage,
                                 NULL);
  return GCV_FILE_STORAGE(file_storage);
}

std::shared_ptr<cv::FileStorage>
gcv_file_storage_get_raw(GCVFileStorage *file_storage)
{
  auto priv = GCV_FILE_STORAGE_GET_PRIVATE(file_storage);
  return priv->file_storage;
}
