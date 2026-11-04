#include "src/include/classes/TWindowSubMagPhoton.h"
extern void initialize_base_8c0db1d0(void *, int);
extern void call_8c23081c(TWindowSubMagPhoton *);
TWindowSubMagPhoton *TWindowSubMagPhoton_ctor_8c230538(TWindowSubMagPhoton *o, int a1)
{
    TWindowSubMagPhoton **home = &o;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c3387ac));
    o->dispatch = (void *)0x8c278f38;
    o->tag = (int)(*(int *)0x8c3386b0);
    o->size = 0x7c;
    o->f78 = a1;
    o->f68 = 0;
    o->f69 = 1;
    call_8c23081c(o);
    return o;
}
