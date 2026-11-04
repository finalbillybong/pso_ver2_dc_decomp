#include "src/include/classes/TObjEZBoneRotPlayer.h"
typedef struct TObjEZBoneRotPlayer_p9c TObjEZBoneRotPlayer_p9c;
struct TObjEZBoneRotPlayer_p9c {
    char unknown0[0x64];
    int f64;
};
extern void TObjEZBoneRotBase_ctor_8c08b2d8(void);
TObjEZBoneRotPlayer *TObjEZBoneRotPlayer_ctor_8c08b584(TObjEZBoneRotPlayer *o, int a1)
{
    TObjEZBoneRotBase_ctor_8c08b2d8();
    o->dispatch = (void *)0x8c2652a4;
    o->tag = (int)(*(int *)0x8c300234);
    o->size = 0xa4;
    o->f9c = (TObjEZBoneRotPlayer_p9c *)a1;
    o->fa0 = (int)(o->f9c->f64);
    return o;
}
