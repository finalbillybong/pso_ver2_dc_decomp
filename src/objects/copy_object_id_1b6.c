#include "src/include/object_id_fields.h"

#define set_id_at ((void (*)(ObjectIdFields *, short))0x8c04ab1c)

void copy_object_id_1b6(ObjectIdFields *object, ObjectIdSource *source) {
    if (source) set_id_at(object, source->id_20);
}
