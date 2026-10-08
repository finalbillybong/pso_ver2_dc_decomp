/* Provisional address-based name; preserve guards, slot reloads and call order. */
#include "src/include/derived_effect_child.h"
#define destroy_effect_at ((void (*)(void *))0x8c0a7bb0)
#define base_at ((void (*)(DerivedEffectChild *,int))0x8c03311c)
#define free_at ((void (*)(void *,DerivedEffectChild *))0x8c122774)
static inline void destroy_base(DerivedEffectChild *o){
    if(o){
        o->dispatch=(void *)0x8c2748d4;
        if(o->linked)o->linked->flags|=1;
        base_at(o,0);
    }
}
DerivedEffectChild *operation_1abfe8(DerivedEffectChild *o,short release){
    if(o){
        int i;
        o->dispatch=(void *)0x8c274894;
        for (i = 0; i != 2; i++)destroy_effect_at((*(void **)((char *)o->effects+(i<<2))));
        destroy_base(o);
        if(release>0)free_at(*(void **)0x8c4d97e0,o);
    }
    return o;
}
