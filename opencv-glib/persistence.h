#pragma once

#include <glib-object.h>

G_BEGIN_DECLS

#define GCV_TYPE_FILE_STORAGE (gcv_file_storage_get_type())
G_DECLARE_DERIVABLE_TYPE(GCVFileStorage,
                         gcv_file_storage,
                         GCV,
                         FILE_STORAGE,
                         GObject)
struct _GCVFileStorageClass
{
  GObjectClass parent_class;
};

GCVFileStorage *gcv_file_storage_new();
gboolean gcv_file_storage_is_opened(GCVFileStorage *file_storage);

G_END_DECLS
