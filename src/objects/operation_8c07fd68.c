#include "src/include/classes/TObjRain.h"
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c07fe14(TObjRain *);
TObjRain *TObjRain_ctor_8c07fd68(TObjRain *o, int a1)
{
    TObjRain **home = &o;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c2642e8;
    o->tag = (int)(*(int *)0x8c2feba8);
    o->size = 0xfc;
    o->ff8 = 9;
    call_8c07fe14(o);
    return o;
}
