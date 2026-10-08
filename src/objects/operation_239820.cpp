/* Provisional address-based name; preserve observed calls, guards and offsets. */
#include "src/include/resource_owner_virtual.h"
extern "C" short mode_at(void *);
#define transform_at ((void (*)(ResourceOwnerView *,ResourceTargetView *,int,Vector3 *))0x8c075894)
#define reset_at ((void (*)(ResourceOwnerView *,int))0x8c074ac4)
#define allocate_at ((void *(*)(void *,int))0x8c122700)
extern "C" void delay_at(void *,ResourceOwnerView *,void (*)(ResourceOwnerView *),int);
#define partial_at ((void (*)(ResourceOwnerView *,float))0x8c0765ec)
#define fallback_at ((void (*)(ResourceOwnerView *))0x8c076580)
extern "C" void operation_239820(ResourceOwnerView *o){
    if(mode_at((char *)o->target+0x754)==2){
        transform_at(o,o->target,o->part,&o->position);
        if(o->query()==1 && o->speed>0x1999){
            reset_at(o,0);
            if(o){
                void *p=allocate_at(*(void **)0x8c4d97e0,44);
                if(p)delay_at(p,o,(void (*)(ResourceOwnerView *))0x8c2398fc,30);
            }
            o->state=0;
        }
        else partial_at(o,324.0f);
    }
    else fallback_at(o);
}
