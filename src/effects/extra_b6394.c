#include "src/include/object.h"
/* Provisional fields; volatile pointer preserves the observed stack reloads. */
typedef struct FourWords { unsigned int a,b,c,d; } FourWords;
typedef struct ThreeWords { unsigned int a,b,c; } ThreeWords;
typedef struct ExtraEffect {
    unsigned char unknown_0[0x18];
    void *vtable;
    unsigned int unknown_1c, duration, field_24;
    FourWords field_28;
    ThreeWords field_38, field_44;
    int field_50;
    float field_54;
    Object *owner;
    float field_5c, field_60;
    unsigned short id;
} ExtraEffect;
typedef char check_extra_duration[((unsigned long)&((ExtraEffect *)0)->duration) == 0x20 ? 1 : -1];
typedef char check_extra_field_28[((unsigned long)&((ExtraEffect *)0)->field_28) == 0x28 ? 1 : -1];
typedef char check_extra_field_38[((unsigned long)&((ExtraEffect *)0)->field_38) == 0x38 ? 1 : -1];
typedef char check_extra_field_44[((unsigned long)&((ExtraEffect *)0)->field_44) == 0x44 ? 1 : -1];
typedef char check_extra_field_50[((unsigned long)&((ExtraEffect *)0)->field_50) == 0x50 ? 1 : -1];
typedef char check_extra_field_54[((unsigned long)&((ExtraEffect *)0)->field_54) == 0x54 ? 1 : -1];
typedef char check_extra_owner[((unsigned long)&((ExtraEffect *)0)->owner) == 0x58 ? 1 : -1];
typedef char check_extra_field_5c[((unsigned long)&((ExtraEffect *)0)->field_5c) == 0x5c ? 1 : -1];
typedef char check_extra_field_60[((unsigned long)&((ExtraEffect *)0)->field_60) == 0x60 ? 1 : -1];
typedef char check_extra_id[((unsigned long)&((ExtraEffect *)0)->id) == 0x64 ? 1 : -1];
#define extra_base_at ((void (*)(ExtraEffect *, int))0x8c0330e4)
#define extra_resolve_at ((void (*)(ThreeWords *, FourWords *, unsigned int))0x8c013bd0)
ExtraEffect *extra_b6394(ExtraEffect *volatile effect, FourWords *a, ThreeWords *b, int duration, Object *owner, int context, float factor)
{
    FourWords temporary;
    extra_base_at(effect, context);
    effect->vtable = (void *)0x8c2660f8;
    effect->field_28 = *a;
    effect->field_38 = *b;
    effect->duration = duration;
    effect->field_50 = 0;
    effect->field_54 = factor;
    effect->owner = owner;
    effect->field_24 = 0;
    effect->field_5c = 1.0f;
    effect->field_60 = 1.0f;
    { ExtraEffect *current = effect; current->id = current->owner->id; }
    { ExtraEffect *current = effect; extra_resolve_at(&current->field_44, &temporary, current->id); }
    return effect;
}
