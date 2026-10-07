#include "src/include/object_effect_view.h"

#define lookup_at ((unsigned int (*)(unsigned int, unsigned int))0x8c24e644)
#define emit_at ((int (*)(unsigned int, Vector3 *, int, unsigned int))0x8c05fbf8)
extern void post_emit_at(int);

void operation_37d04(ObjectEffectView *object) {
    unsigned int kind = lookup_at(0x3000c, object->context_38c);
    emit_at(kind, &object->position, 0, 0);
    post_emit_at(-768);
}
