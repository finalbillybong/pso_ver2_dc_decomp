#include "src/include/classes/TWindowDD_WS_Word.h"
extern void initialize_base_8c0db1d0(void *, int);
extern void set_fields_8c215ed4(void *);
extern void call_8c215de0(TWindowDD_WS_Word *);
TWindowDD_WS_Word *TWindowDD_WS_Word_ctor_8c215c38(TWindowDD_WS_Word *o, int a1, int a2)
{
    TWindowDD_WS_Word **home = &o;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c336064));
    o->dispatch = (void *)0x8c278298;
    o->tag = (int)(*(int *)0x8c336084);
    o->size = 0x98;
    o->f80 = a2;
    o->f6c = 0;
    o->f90 = 0.0f;
    o->f8c = 0.0f;
    o->f68 = 0;
    o->f78 = a1;
    set_fields_8c215ed4((void *)o);
    call_8c215de0(o);
    o->f64 = 0x1000000;
    return o;
}
