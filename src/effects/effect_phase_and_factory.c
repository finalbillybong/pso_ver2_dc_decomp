#include "src/include/effect_motion_gate.h"
/* NaN follows the observed unordered comparison into the flag write. */
void check_effect_phase(MotionGate *effect)
{
    if (!(effect->phase < 1.0f))
        effect->flags |= 1;
}
#define heap_alloc_8c122700 ((void *(*)(void *,int))0x8c122700)
extern void initialize_at(void *,void *,void *,void *);
void *create_effect_b314(void *resource,void *position,void *target)
{
    void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e4,0xb4);
    if (effect)
        initialize_at(effect,resource,position,target);
    return effect;
}
