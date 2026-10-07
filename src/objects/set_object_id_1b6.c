#include "src/include/object_id_fields.h"

void set_object_id_1b6(ObjectIdFields *object, unsigned short id) {
    if (id != 65535) {
        unsigned int current;
        object->id_1b6 = id;
        current = object->id_1b6;
        if ((unsigned short)current == *(int *)0x8c418248)
            object->id_306 = current;
    }
}
