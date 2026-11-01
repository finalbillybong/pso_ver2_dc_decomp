/* Provisional address-based name; preserve observed guards, offsets and call order. */
#include "src/include/base_child.h"
#define TItemShoot_ctor_8c1aba3c ((void (*)(BaseChild *,BaseChildParent *,Vector3 *,Vector3 *,float))0x8c1aba3c)
#define signed_sqrt_8c37f6c0 ((float (*)(float))0x8c37f6c0)
extern float angle_at(float,float);
BaseChild *TItemShootModel_ctor_8c1abe00(BaseChild *o,BaseChildParent *parent,Vector3 *position,Vector3 *direction,float value){
    TItemShoot_ctor_8c1aba3c(o,parent,position,direction,value);
    o->dispatch=(void *)0x8c2748b4;
    o->tag=*(unsigned int *)0x8c324f8c;
    o->size=100;
    o->mesh=parent->mesh;
    o->matrix=parent->matrix;
    if(o->velocity.y!=0.0f){
        o->angle_x=-(int)(angle_at(o->velocity.y,signed_sqrt_8c37f6c0(o->velocity.x*o->velocity.x+o->velocity.z*o->velocity.z))*65536.0f/6.283184051513671875f);
        o->angle_z=0;
    }
    else{
        o->angle_z=0;
        o->angle_x=0;
    }
    {
        /* Address exposure preserves the observed stack-resident parameter. */
        BaseChild **self=&o;
        (void)self;
        return o;
    }
}
