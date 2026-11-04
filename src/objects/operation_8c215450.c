#include "src/include/classes/TWindowDD_WS_ScrollBar.h"
extern void initialize_base_8c0db1d0(void *, int);
TWindowDD_WS_ScrollBar *TWindowDD_WS_ScrollBar_ctor_8c215450(TWindowDD_WS_ScrollBar *o)
{
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c335fa0));
    o->dispatch = (void *)0x8c278258;
    o->tag = (int)(*(int *)0x8c335fc0);
    o->size = 0x78;
    o->f6c = 6.0f;
    o->f70 = 6.0f;
    o->f74 = 0.0f;
    o->f64 = 0x1000000;
    return o;
}
