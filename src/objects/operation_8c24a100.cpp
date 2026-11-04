#include "src/include/object_vtable.h"
#include "src/include/classes/TObjCamera.h"
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c510ee0 S_g8c510ee0;
typedef struct S_g8c510ee0_430 S_g8c510ee0_430;
typedef struct S_g8c510ee0_430_4 S_g8c510ee0_430_4;
struct Frame {
    Block20 f04;
};
struct S_g8c510ee0 {
    char unknown0[0x430];
    S_g8c510ee0_430 *f430;
};
struct S_g8c510ee0_430 {
    char unknown0[0x4];
    S_g8c510ee0_430_4 *f04;
};
struct S_g8c510ee0_430_4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c33b230;
extern Block20 g_8c33b234;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c510ee0 *g_8c510ee0;
extern "C" void operation_8c0ee870(void *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TEffStarLight2D_ctor_8c245d6c(void *, void *, void *, int);
extern "C" void call_8c24a610(TObjCamera *);
extern "C" TObjCamera *TObjCamera_ctor_8c24a100(TObjCamera *o, int a1, int a2)
{
    Frame frame;
    TObjCamera **home = &o;
    int v5;
    int v4;
    int t1;
    (void)home;
    operation_8c0ee870((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c27d6c8;
    o->tag = (int)(g_8c33b230);
    o->size = 0x1e4;
    *(Block20 *)&(&frame)->f04 = *(Block20 *)&g_8c33b234;
    o->v6(a2);
    o->fe8 = 0.0f;
    o->ff0 = 0.8f;
    o->fec = (float)(unsigned int)g_8c510ee0->f430->f04->f04;
    v4 = (int)0x104;
    v5 = (int)0;
    while (8 > v5) {
        t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x50);
        if (t1 != 0) {
            TEffStarLight2D_ctor_8c245d6c((void *)t1, (void *)(((char *)o + 0x3c)), (void *)(&(&frame)->f04), (int)o);
        }
        *(int *)((char *)((char *)((int)o + v4) + 0x0) + (v5 << 2)) = (int)t1;
        v5 = (int)(v5 + 1);
    }
    o->f100 = 0;
    call_8c24a610(o);
    return o;
}
