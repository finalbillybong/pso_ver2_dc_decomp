#include "src/include/classes/TAdFloorLoad.h"
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct TAdFloorLoad_p20 TAdFloorLoad_p20;
typedef struct TAdFloorLoad_p24 TAdFloorLoad_p24;
typedef struct TAdFloorLoad_p28 TAdFloorLoad_p28;
typedef struct S_vv1 S_vv1;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
struct S_vv1 {
    char unknown0[0x90];
    float f90;
    float f94;
    float f98;
};
extern S_g8c46ee80 *g_8c46ee80;
extern void call_8c0a7608(void *, void *);
void TAdFloorLoad_update_8c207a0c(TAdFloorLoad *o)
{
    Frame frame;
    S_vv1 *v1;
    v1 = (S_vv1 *)g_8c46ee80;
    if (v1 == 0) {
        if (o->f20 != 0) {
            call_8c0a7608((void *)(o->f20), (void *)(&o->f2c));
        }
        if (o->f24 != 0) {
            call_8c0a7608((void *)(o->f24), (void *)(&o->f2c));
        }
        if (o->f28 == 0) {
            return;
        }
        call_8c0a7608((void *)(o->f28), (void *)(&o->f38));
        return;
    }
    (&frame)->f0c = v1->f90 + o->f2c;
    (&frame)->f10 = v1->f94 + o->f30;
    (&frame)->f14 = v1->f98 + o->f34;
    (&frame)->f00 = v1->f90 + o->f38;
    (&frame)->f04 = v1->f94 + o->f3c;
    (&frame)->f08 = v1->f98 + o->f40;
    if (o->f20 != 0) {
        call_8c0a7608((void *)(o->f20), (void *)(&(&frame)->f0c));
    }
    if (o->f24 != 0) {
        call_8c0a7608((void *)(o->f24), (void *)(&(&frame)->f0c));
    }
    if (o->f28 != 0) {
        call_8c0a7608((void *)(o->f28), (void *)(&frame));
    }
}
