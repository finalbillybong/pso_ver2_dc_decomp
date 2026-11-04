#include "src/include/classes/TWindowChatSymbol.h"
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Arg1 {
    float f00;
    float f04;
};
struct Arg2 {
    float f00;
    float f04;
};
extern void initialize_base_8c0db1d0(void *, int);
extern void call_8c0dc854(TWindowChatSymbol *);
TWindowChatSymbol *TWindowChatSymbol_ctor_8c1a62a8(TWindowChatSymbol *o, Arg1 *a1, Arg2 *a2)
{
    TWindowChatSymbol **home = &o;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)(void *)0x8c31e68c);
    o->dispatch = (void *)0x8c2745b8;
    o->tag = *(int *)0x8c31e290;
    o->size = 0x70;
    o->f38 = a1->f00;
    o->f3c = a1->f04;
    o->f40 = a2->f00;
    o->f44 = a2->f04;
    call_8c0dc854(o);
    o->f68 = 0;
    o->f6c = 0;
    return o;
}
