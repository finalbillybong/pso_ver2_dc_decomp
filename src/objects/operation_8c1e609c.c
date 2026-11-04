#include "src/include/classes/TAdSEGAlogo.h"
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c1848e0(int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void initialize_color_fall(int, void *, void *);
TAdSEGAlogo *TAdSEGAlogo_ctor_8c1e609c(TAdSEGAlogo *o, int a1)
{
    TAdSEGAlogo **home = &o;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c277ef0;
    o->tag = (int)(*(int *)0x8c32bda0);
    o->size = 0x24;
    o->f20 = 0;
    *(char *)0x8c4e30e4 = 0;
    call_8c1848e0(0);
    t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
    if (t1 != 0) {
        initialize_color_fall(t1, (void *)(*(S_g8c44be84 **)0x8c44be84), (void *)((void *)0x8c1e6268));
    }
    return o;
}
