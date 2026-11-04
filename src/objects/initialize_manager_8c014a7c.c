#include "src/include/classes/TObject.h"
extern void TObject_ctor_8c0330e4(TObject *);
extern int manager_ready;
extern TObject *manager_instance;
extern void start_manager_8c3c3fbc(int);
extern void load_manager_8c014b20(TObject *);
extern void reset_manager_8c014b00(TObject *);
extern void bind_manager_8c014b40(TObject *);
TObject *initialize_manager_8c014a7c(TObject *o)
{
    TObject **home = &o;
    int i;
    (void)home;
    {
        TObject *base = o;
        TObject_ctor_8c0330e4(base);
        base->vtable = (void *)0x8c261240;
    }
    o->vtable = (void *)0x8c2611b4;
    manager_ready = 1;
    manager_instance = o;
    start_manager_8c3c3fbc(1);
    load_manager_8c014b20(o);
    reset_manager_8c014b00(o);
    bind_manager_8c014b40(o);
    for (i = 0; i < 3; i++) {
        *(int *)((char *)0x8c4182e4 + (i << 2)) = 0;
    }
    return o;
}
