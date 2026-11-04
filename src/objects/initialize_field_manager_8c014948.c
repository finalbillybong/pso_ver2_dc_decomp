#include "src/include/classes/TObject.h"
extern TObject *field_manager;
extern void TObject_ctor_8c0330e4(TObject *);
extern void load_manager_8c0149a8(TObject *);
extern void reset_manager_8c0149c8(TObject *);
extern void bind_manager_8c0149e0(TObject *);
extern void start_manager_8c014a00(TObject *);
TObject *initialize_field_manager_8c014948(TObject *o)
{
    TObject **home = &o;
    (void)home;
    {
        TObject *base = o;
        TObject_ctor_8c0330e4(base);
        base->vtable = (void *)0x8c261240;
    }
    o->vtable = (void *)0x8c2611d0;
    load_manager_8c0149a8(o);
    reset_manager_8c0149c8(o);
    bind_manager_8c0149e0(o);
    start_manager_8c014a00(o);
    field_manager = o;
    return o;
}
