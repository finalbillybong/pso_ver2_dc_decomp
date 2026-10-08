/* Provisional address-based name; preserve observed guards, offsets and call order. */
#include "src/include/base_child_virtual.h"
#define query_at ((BaseChildParentState *(*)(void *))0x8c0744dc)
#define add_at ((void (*)(Vector3 *,Vector3 *))0x8c3bdf60)
#define position_at ((void (*)(BaseChildLink *,Vector3 *))0x8c246154)
extern "C" void operation_1abbcc(BaseChildView *o){
    BaseChildParentState *parent=query_at(o->parent);
    if(!parent){
        o->flags|=16;
        o->flags|=1;
        return;
    }
    if(parent->mode!=2){
        o->flags|=16;
        o->flags|=1;
        return;
    }
    o->flags&=~16;
    add_at(&o->position,&o->velocity);
    if(o->linked)position_at(o->linked,&o->position);
    o->update();
    o->remaining-=1.0f;
    if(!(o->remaining>0.0f))o->flags|=1;
}
