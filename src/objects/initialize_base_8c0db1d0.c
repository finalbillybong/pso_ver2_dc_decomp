#include "src/include/classes/TObject.h"
typedef struct S_g8c4e2ba0 S_g8c4e2ba0;
extern void TObject_ctor_8c0330e4(TObject *, void *);
extern void call_8c0dc40c(TObject *, int);
TObject *initialize_base_8c0db1d0(TObject *o, int a1)
{
    TObject **home = &o;
    (void)home;
    TObject_ctor_8c0330e4(o, *(S_g8c4e2ba0 **)0x8c4e2ba0);
    o->vtable = (void *)0x8c26770c;
    call_8c0dc40c(o, a1);
    return o;
}
