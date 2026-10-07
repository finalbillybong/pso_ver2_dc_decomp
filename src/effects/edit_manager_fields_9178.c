#include "src/include/effect_manager.h"

extern unsigned char metadata[];
extern void int_edit_at(EffectManager *, int *, void *, int, int);
#define encode_at ((int (*)(int))0x8c0a02f4)

void edit_manager_fields_9178(EffectManager *p) {
    int_edit_at(p, &p->field7c, metadata, p->field80 - 9, 4);
    p->resource->words[5] = encode_at(p->field7c);
}
