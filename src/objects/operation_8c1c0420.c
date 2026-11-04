#include "src/include/classes/TOExplosiveMachine.h"
typedef struct S_g8c44be98 S_g8c44be98;
extern void TObjectShared_ctor_8c01d1ec(TOExplosiveMachine *, void *);
TOExplosiveMachine *TOExplosiveMachine_ctor_8c1c0420(TOExplosiveMachine *o)
{
    int v1;
    TObjectShared_ctor_8c01d1ec(o, (void *)(*(S_g8c44be98 **)0x8c44be98));
    o->dispatch = (void *)0x8c27589c;
    o->tag = (int)(*(int *)0x8c328724);
    o->size = 0xb0;
    o->f94 = 500.0f;
    o->f98 = 0.0f;
    o->f9c = o->f6c + 30.0f;
    v1 = (int)0;
    while (2 > v1) {
        *(int *)((char *)((char *)o + 0xa0) + (v1 << 2)) = 0;
        *(int *)((char *)((char *)o + 0xa8) + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    return o;
}
