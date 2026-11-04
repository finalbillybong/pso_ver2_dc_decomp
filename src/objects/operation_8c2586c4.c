#include "src/include/classes/TODummyKeyCave01Sound.h"
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c258794(TODummyKeyCave01Sound *);
TODummyKeyCave01Sound *TODummyKeyCave01Sound_ctor_8c2586c4(TODummyKeyCave01Sound *o, int a1, int a2, int a3)
{
    TODummyKeyCave01Sound **home = &o;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c281a20;
    o->tag = (int)(*(int *)0x8c34007c);
    o->size = 0x28;
    o->f24 = a3;
    o->f20 = a2;
    if (!(o->f24 > 0)) {
        call_8c258794(o);
        o->f04 |= 1;
    }
    return o;
}
