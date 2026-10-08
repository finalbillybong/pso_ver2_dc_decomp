#include "src/include/effect_view.h"
#define lookup_at ((EffectLookup *(*)(unsigned int))0x8c021ef8)
#define set_view_at ((void (*)(float *,float *,int))0x8c0a6c34)
/* Keep the nullable lookup and observed half-turn addition. */
void forward_effect_view(float *position, float *target)
{
    EffectLookup *object = lookup_at(*(unsigned int *)0x8c418248);
    if (object)
        set_view_at(position, target, object->angle + 0x8000);
}
