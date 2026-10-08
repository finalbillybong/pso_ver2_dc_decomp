/* Provisional address-based name; preserve observed field accesses and call order. */
#include "src/include/resource_owner.h"
extern void update_at(ResourceOwner *,void *,int);
#define draw_at ((void (*)(ResourceOwner *,int))0x8c076fc8)
void operation_23978c(ResourceOwner *o){
    if(o->target){
        RenderFlags *flags=o->link->next->next->flags;
        if(!o->state)flags->flags|=16;
        update_at(o,o->target,o->part);
        draw_at(o,1);
        if(!o->state)flags->flags&=~16;
    }
}
