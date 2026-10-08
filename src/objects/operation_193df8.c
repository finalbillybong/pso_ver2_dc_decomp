/* Provisional address-based name; preserve owner state transitions, repeated loads and signed cleanup conditions. */
#include "src/include/resource_task_owner.h"
#define texture_release_at ((void (*)(void *))0x8c033c68)
#define base_destroy_at ((void (*)(ResourceTaskOwner *,short))0x8c03311c)
#define free_at ((void (*)(void *,ResourceTaskOwner *))0x8c122774)
static inline int owns(ResourceTaskState *r){
    return (r->flags&4)!=0;
}
ResourceTaskOwner *operation_193df8(ResourceTaskOwner *o,short release){
    if(o){
        o->dispatch=(void *)0x8c2727c8;
        switch(o->state){
            case 2:
            {
                ResourceTaskState *r=*(ResourceTaskState **)0x8c4dc31c;
                if(owns(r)!=0){
                    *(int *)0x8c4dc2f8=0;
                    r->flags&=~4;
                }
                r->state=0;
                r->flags=0;
                break;
            }
            case 3:
            {
                ResourceTaskState *r=*(ResourceTaskState **)0x8c4dc318;
                if(owns(r)!=0){
                    *(int *)0x8c4dc2f8=0;
                    r->flags&=~4;
                }
                r->state=0;
                r->flags=0;
                break;
            }
        }
        if(o->textures&&((ResourceResidentView *)o->textures)->data->resident)texture_release_at(o->textures);
        base_destroy_at(o,0);
        if(release>0)free_at(*(void **)0x8c4d97e0,o);
    }
    return o;
}
