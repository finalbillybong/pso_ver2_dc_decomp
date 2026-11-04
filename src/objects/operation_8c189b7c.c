#include "src/include/classes/TNowLoading.h"
typedef struct S_L8c46ee84 S_L8c46ee84;
typedef struct Frame Frame;
typedef struct TNowLoading_p20 TNowLoading_p20;
typedef struct TNowLoading_p24 TNowLoading_p24;
typedef struct TNowLoading_p28 TNowLoading_p28;
typedef struct TNowLoading_p2c TNowLoading_p2c;
struct S_L8c46ee84 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
extern int g_8c46ee80;
extern S_L8c46ee84 g_8c46ee84;
extern void call_8c0a7608(void *, void *);
void TNowLoading_update_8c189b7c(TNowLoading *o)
{
    Frame frame;
    if (g_8c46ee80 == 0) {
        o->f30 = (&g_8c46ee84)->f00 + (&g_8c46ee84)->f0c * 100.0f;
        o->f34 = (&g_8c46ee84)->f04 + (&g_8c46ee84)->f10 * 100.0f;
        o->f38 = (&g_8c46ee84)->f08 + (&g_8c46ee84)->f14 * 100.0f;
        if (o->f20 != 0) {
            call_8c0a7608((void *)(o->f20), (void *)(&o->f30));
        }
        if (o->f24 != 0) {
            call_8c0a7608((void *)(o->f24), (void *)(&o->f30));
        }
        if (o->f28 != 0) {
            call_8c0a7608((void *)(o->f28), (void *)(&o->f30));
        }
        if (o->f2c == 0) {
            return;
        }
        call_8c0a7608((void *)(o->f2c), (void *)(&o->f30));
        return;
    }
    (&frame)->f00 = (&g_8c46ee84)->f00 + (&g_8c46ee84)->f0c * 100.0f;
    (&frame)->f04 = (&g_8c46ee84)->f04 + (&g_8c46ee84)->f10 * 100.0f;
    (&frame)->f08 = (&g_8c46ee84)->f08 + (&g_8c46ee84)->f14 * 100.0f;
    if (o->f20 != 0) {
        call_8c0a7608((void *)(o->f20), (void *)(&frame));
    }
    if (o->f24 != 0) {
        call_8c0a7608((void *)(o->f24), (void *)(&frame));
    }
    if (o->f28 != 0) {
        call_8c0a7608((void *)(o->f28), (void *)(&frame));
    }
    if (o->f2c != 0) {
        call_8c0a7608((void *)(o->f2c), (void *)(&frame));
    }
}
