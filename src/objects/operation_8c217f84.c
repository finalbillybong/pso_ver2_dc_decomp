#include "src/include/classes/TWindowUserSort.h"
typedef struct Arg1 Arg1;
struct Arg1 {
    float f00;
    float f04;
};
extern void initialize_base_8c0db1d0(void *, int);
extern void call_8c0dc854(TWindowUserSort *);
extern void call_8c2180b0(void *, int);
TWindowUserSort *TWindowUserSort_ctor_8c217f84(TWindowUserSort *o, Arg1 *a1, int a2)
{
    TWindowUserSort **home = &o;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c336338));
    o->dispatch = (void *)0x8c278314;
    o->tag = (int)(*(int *)0x8c336230);
    o->size = 0x6c;
    o->f38 = a1->f00;
    o->f3c = a1->f04;
    call_8c0dc854(o);
    o->f68 = a2;
    call_8c2180b0((void *)(((char *)o + 0x2c)), a2);
    return o;
}
