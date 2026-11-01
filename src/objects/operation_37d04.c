#include "src/include/object_effect_view.h"

#define lookup_at ((unsigned int (*)(unsigned int, unsigned int))0x8c24e644)
#define play_se_8c05fbf8 ((int (*)(unsigned int, Vector3 *, int, unsigned int))0x8c05fbf8)
extern void post_emit_at(int);

void TObjEneShark_v96_8c037d04(ObjectEffectView *object) {
    unsigned int kind = lookup_at(0x3000c, object->context_38c);
    play_se_8c05fbf8(kind, &object->position, 0, 0);
    post_emit_at(-768);
}
