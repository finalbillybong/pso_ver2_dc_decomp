#include "src/include/classes/TItemMoney.h"
typedef struct Arg2 Arg2;
struct Arg2 {
    char unknown0[0x10];
    int f10;
};
extern int g_8c30b220;
extern void call_8c073288(TItemMoney *, int, Arg2 *);
TItemMoney *TItemMoney_ctor_8c103360(TItemMoney *o, int a1, Arg2 *a2)
{
    int v1;
    call_8c073288(o, a1, a2);
    o->dispatch = (void *)0x8c2695d4;
    o->tag = (int)(g_8c30b220);
    o->size = 0x144;
    o->f140 = (int)(a2->f10);
    v1 = 0xf423f;
    if (o->f140 > v1) {
        o->f140 = v1;
    }
    return o;
}
