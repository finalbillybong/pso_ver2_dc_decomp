#ifndef PSO_DERIVED_EFFECT_CHILD_H
#define PSO_DERIVED_EFFECT_CHILD_H
#include "src/include/base_child.h"
/* Provisional 104-byte child view; two observed effect slots. */
typedef struct DerivedEffectChild {
    unsigned int tag; unsigned short flags; char unknown06[18]; void *dispatch;
    char unknown1c[2]; unsigned short size; Vector3 position; int angles[3];
    float remaining; Vector3 velocity, initial; BaseChildLink *linked;
    void *parent; void *effects[2]; short effect_flags;
} DerivedEffectChild;
typedef char check_DerivedEffectChild_tag[(unsigned long)&((DerivedEffectChild *)0)->tag == 0 ? 1 : -1];
typedef char check_DerivedEffectChild_flags[(unsigned long)&((DerivedEffectChild *)0)->flags == 4 ? 1 : -1];
typedef char check_DerivedEffectChild_dispatch[(unsigned long)&((DerivedEffectChild *)0)->dispatch == 24 ? 1 : -1];
typedef char check_DerivedEffectChild_size[(unsigned long)&((DerivedEffectChild *)0)->size == 30 ? 1 : -1];
typedef char check_DerivedEffectChild_position[(unsigned long)&((DerivedEffectChild *)0)->position == 32 ? 1 : -1];
typedef char check_DerivedEffectChild_angles[(unsigned long)&((DerivedEffectChild *)0)->angles == 44 ? 1 : -1];
typedef char check_DerivedEffectChild_remaining[(unsigned long)&((DerivedEffectChild *)0)->remaining == 56 ? 1 : -1];
typedef char check_DerivedEffectChild_velocity[(unsigned long)&((DerivedEffectChild *)0)->velocity == 60 ? 1 : -1];
typedef char check_DerivedEffectChild_initial[(unsigned long)&((DerivedEffectChild *)0)->initial == 72 ? 1 : -1];
typedef char check_DerivedEffectChild_linked[(unsigned long)&((DerivedEffectChild *)0)->linked == 84 ? 1 : -1];
typedef char check_DerivedEffectChild_parent[(unsigned long)&((DerivedEffectChild *)0)->parent == 88 ? 1 : -1];
typedef char check_DerivedEffectChild_effects[(unsigned long)&((DerivedEffectChild *)0)->effects == 92 ? 1 : -1];
typedef char check_DerivedEffectChild_effect_flags[(unsigned long)&((DerivedEffectChild *)0)->effect_flags == 100 ? 1 : -1];
typedef char check_DerivedEffectChild_prefix[sizeof(DerivedEffectChild) == 104 ? 1 : -1];
#endif
