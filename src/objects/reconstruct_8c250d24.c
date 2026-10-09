/* Provisional address-based name; preserve observed field accesses and call order. */
#include "src/include/resource_owner.h"
extern int update_at(ResourceOwner *,void *,int);
#define draw_at ((void (*)(ResourceOwner *,int))0x8c076fc8)
void reconstruct_8c250d24(ResourceOwner *o){
    if(o->target){
        RenderFlags *flags=o->link->next->next->flags;
        if(!o->state)flags->flags|=16;
        update_at(o,o->target,o->part);
        draw_at(o,1);
        if(!o->state)flags->flags&=~16;
    }
}
