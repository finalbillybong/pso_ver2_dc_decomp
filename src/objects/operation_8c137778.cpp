#include "src/include/classes/TTecSlicer.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TTecSlicer_p108 TTecSlicer_p108;
typedef struct TTecSlicer_p114 TTecSlicer_p114;
typedef struct TTecSlicer_p120 TTecSlicer_p120;
typedef struct TTecSlicer_p28 TTecSlicer_p28;
struct TTecSlicer_p108 {
    char unknown0[0xe4];
    short fe4;
};
extern "C" int lookup_low_id(int);
extern "C" int find_record_8c0744dc(int);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TSlicerHistory_ctor_8c137e08(void *, void *, int, void *);
extern "C" void call_8c137a38(TTecSlicer *);
extern "C" void advance_scaled_position(void *);
extern "C" void operation_8c246154(void *, void *);
extern "C" void TTecSlicer_update_step_8c137c3c(void *);
extern "C" void TTecSlicer_update_8c137778(TTecSlicer *o)
{
    int v22;
    int v63;
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = lookup_low_id((int)(o->f110 & 0xffff));
    o->f10c = (int)t1;
    t2 = find_record_8c0744dc((int)(o->f114));
    o->f108 = (TTecSlicer_p108 *)(int)t2;
    if (o->f108 != 0 && o->f10c != 0) {
        if (o->f108->fe4 == 2) {
            goto L_8c1377ca;
        }
        o->f04 |= 1;
        return;
    }
    o->f04 |= 1;
    return;
L_8c1377ca:;
    o->f04 &= -0x11;
    t3 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x5c);
    if (t3 != 0) {
        TSlicerHistory_ctor_8c137e08((void *)t3, (void *)o, (int)(o->f28), (void *)(((char *)o + 0x124)));
    }
    v22 = (int)(((o->fc0 & 1)) != 0);
    if (v22 == 0) {
        call_8c137a38(o);
    }
    advance_scaled_position((void *)o);
    if (o->child != 0) {
        operation_8c246154((void *)(o->child), (void *)(((char *)o + 0x3c)));
    }
    v63 = (int)(((o->fc0 & 2)) != 0);
    if (v63 != 0) {
        o->f04 |= 1;
        return;
    }
    o->f60 += -0x2aaa;
    TTecSlicer_update_step_8c137c3c((void *)o);
    t4 = o->v11(400.0f, 20.0f);
    if (t4 != 0) {
        o->f04 &= -0x11;
    } else {
        o->f04 |= 0x10;
    }
    o->f108 = (TTecSlicer_p108 *)0;
    o->f10c = 0;
}
