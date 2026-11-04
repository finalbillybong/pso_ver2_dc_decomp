#include "src/include/classes/TItemWpnRocketPunch.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x18];
    int f18;
};
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TItemTimer_ctor_8c1ab01c(void *, int, int, int);
extern "C" void operation_8c23f9e8();
extern "C" void TItemWpnRocketPunch_v49_8c23f8ec(TItemWpnRocketPunch *o)
{
    S_vv1 *v1;
    int v2;
    int t1;
    int t2;
    if (o->f13c != 0) {
        v1 = (S_vv1 *)((int)o->f13c + 0x754);
        if (v1->f18 == 0) {
            v2 = (int)0;
            while (v2 != 2) {
                v1->f18 += 1;
                v2 = (int)(v2 + 1);
            }
            *(int *)((char *)o + 0x234) |= 2;
            if (o != 0) {
                t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
                if (t1 != 0) {
                    TItemTimer_ctor_8c1ab01c((void *)t1, (int)o, (int)operation_8c23f9e8, 0x3c);
                }
            }
            o->f234 |= 4;
            t2 = o->v48(((char *)o + 0x238), 0, 0, 1);
            if (t2 == 1) {
                o->f234 &= -5;
                o->v48(((char *)o + 0x244), 0, 0, 0);
                return;
            }
            o->f234 &= -5;
            o->v48(((char *)o + 0x244), 0, 0, 1);
        }
    }
}
