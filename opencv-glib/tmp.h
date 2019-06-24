typedef enum {
    GCV_FILE_STORAGE_OPEN_FLAG_READ = 0,
    GCV_FILE_STORAGE_OPEN_FLAG_WRITE = 1,
    GCV_FILE_STORAGE_OPEN_FLAG_APPEND = 2,
    GCV_FILE_STORAGE_OPEN_FLAG_MEMORY = 4,
    GCV_FILE_STORAGE_OPEN_FLAG_FORMAT_MASK = (7<<3),
    GCV_FILE_STORAGE_OPEN_FLAG_FORMAT_AUTO = 0,
    GCV_FILE_STORAGE_OPEN_FLAG_FORMAT_XML = (1<<3),
    GCV_FILE_STORAGE_OPEN_FLAG_FORMAT_YAML = (2<<3),
    GCV_FILE_STORAGE_OPEN_FLAG_FORMAT_JSON = (3<<3),
    GCV_FILE_STORAGE_OPEN_FLAG_BASE64 = 64,
    GCV_FILE_STORAGE_OPEN_FLAG_WRITE_BASE64 = GCV_FILE_STORAGE_OPEN_FLAG_BASE64 | GCV_FILE_STORAGE_OPEN_FLAG_WRITE,
} GCVFileStorageOpenFlags;

gboolean gcv_file_storage_open(GCVFileStorage *file_storage,
                               const gchar *filename,
                               GCVFileStorageOpenFlags,
                               const gchar *encoding,
                               GError **error);

gboolean
gcv_file_storage_open(GCVFileStorage *file_storage,
                      const gchar *filename,
                      GCVFileStorageOpenFlags,
                      const gchar *encoding,
                      GError **error)
{
  auto priv = GCV_FILE_STORAGE_GET_PRIVATE(file_storage);
  auto cv_file_storage = priv->file_storage;
  // C++ APIでopenに失敗したとき例外が発生する? その場合はimage.cppのgcv_image_write()のようにtry-catchが必要。
}
