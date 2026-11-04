#include "src/include/classes/TObjEneRe7BeruraPunch.h"
typedef struct Arg2 Arg2;
struct Arg2 {
    char unknown0[0x20];
    short f20;
};
extern int g_8c309ec8;
extern void call_8c0f3458(TObjEneRe7BeruraPunch *, int, Arg2 *, void *, int);
extern void initialize_object_8c0fbf7c(void *);
extern void call_8c0f3a50(TObjEneRe7BeruraPunch *);
TObjEneRe7BeruraPunch *TObjEneRe7BeruraPunch_ctor_8c0f39dc(TObjEneRe7BeruraPunch *o, int a1, Arg2 *a2)
{
    TObjEneRe7BeruraPunch **home = &o;
    (void)home;
    call_8c0f3458(o, a1, a2, (void *)((void *)0x8c309e70), 2);
    o->dispatch = (void *)0x8c268820;
    initialize_object_8c0fbf7c((void *)(((char *)o + 0x130)));
    o->tag = (int)(g_8c309ec8);
    o->size = 0x154;
    o->fe8 = a2->f20;
    call_8c0f3a50(o);
    return o;
}
