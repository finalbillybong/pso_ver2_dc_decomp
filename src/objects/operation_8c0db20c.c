#include "src/include/classes/TObject.h"
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c0dc40c(TObject *, int);
TObject *operation_8c0db20c(TObject *o, int a1, int a2)
{
    TObject **home = &o;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a2);
    o->vtable = (void *)0x8c26770c;
    call_8c0dc40c(o, a1);
    return o;
}
