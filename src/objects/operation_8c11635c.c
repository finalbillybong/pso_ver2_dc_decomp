#include "src/include/classes/TFogEditor.h"
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Arg0_548 Arg0_548;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern S_L8c41cba0 g_8c41cba0;
extern void call_8c122494(void *, void *);
extern void call_8c1221b4(void);
void operation_8c11635c(TFogEditor *o)
{
    char *v7;
    if (o->field540 == 0) {
        if (o->field544 == 0) {
            if (((*(int *)((char *)&g_8c41cba0.f28 + (o->mode * 0x3c)) & 4)) == 0) {
                return;
            }
            o->field544 = 1;
            return;
        }
        v7 = (char *)*(int *)((char *)&g_8c41cba0.f28 + (o->mode * 0x3c));
        if ((((int)(v7) & 4)) != 0) {
            o->field544 = 0;
            call_8c122494((void *)(o->field548), (void *)(((char *)o + 0x3c)));
            call_8c1221b4();
            return;
        }
        if ((((int)(v7) & 0x400)) != 0) {
            o->field544 = 0;
        }
    }
}
