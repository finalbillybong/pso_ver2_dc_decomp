#include "src/include/classes/TObjEZBoneRotBase.h"
typedef struct TObjEZBoneRotBase_p24 TObjEZBoneRotBase_p24;
typedef struct Arg0_24_10 Arg0_24_10;
typedef struct S_vv2 S_vv2;
struct TObjEZBoneRotBase_p24 {
    char unknown0[0x10];
    Arg0_24_10 *f10;
};
struct S_vv2 {
    int f00;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern void operation_8c08b3a0(void *, int);
TObjEZBoneRotBase *TObjEZBoneRotBase_ctor_8c08b2d8(TObjEZBoneRotBase *o, int a1, int a2, int a3)
{
    TObjEZBoneRotBase **home = &o;
    S_vv2 *v2;
    int v3;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c2652c0;
    o->tag = (int)(*(int *)0x8c300230);
    o->size = 0x9c;
    o->f20 = a2;
    o->f24 = (TObjEZBoneRotBase_p24 *)a3;
    {
        TObjEZBoneRotBase *base = o;
        v3 = 0;
        v2 = (S_vv2 *)base->f24->f10;
        while (v2->f00 >= 0) {
            v2 = (S_vv2 *)((char *)v2 + 16);
            v3++;
        }
        operation_8c08b3a0((void *)base, v3);
    }
    o->f88 = 0;
    o->f98 = 0.0f;
    return o;
}
