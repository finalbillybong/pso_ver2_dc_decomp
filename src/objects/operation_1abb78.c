/* Provisional address-based name; preserve observed guards, offsets and call order. */
#include "src/include/base_child.h"
#define base_at ((void (*)(BaseChild *,int))0x8c03311c)
#define free_at ((void (*)(void *,BaseChild *))0x8c122774)
BaseChild *operation_1abb78(BaseChild *o,short release){
    if(o){
        o->dispatch=(void *)0x8c2748d4;
        if(o->linked)o->linked->flags|=1;
        base_at(o,0);
        if(release>0)free_at(*(void **)0x8c4d97e0,o);
    }
    return o;
}
