#include "src/include/classes/TObject.h"
extern void TObject_ctor_8c0330e4(TObject *);
extern int session_ready;
extern TObject *session_instance;
extern void start_manager_8c399810(int);
extern void load_manager_8c014cc0(TObject *);
extern void reset_manager_8c014ca0(TObject *);
extern void bind_manager_8c014ce0(TObject *);
TObject *initialize_session_manager_8c014c1c(TObject *o)
{
    TObject **home = &o;
    int i;
    (void)home;
    {
        TObject *base = o;
        TObject_ctor_8c0330e4(base);
        base->vtable = (void *)0x8c261240;
    }
    o->vtable = (void *)0x8c261198;
    session_ready = 1;
    session_instance = o;
    start_manager_8c399810(1);
    load_manager_8c014cc0(o);
    reset_manager_8c014ca0(o);
    bind_manager_8c014ce0(o);
    for (i = 0; i < 3; i++) {
        *(int *)((char *)0x8c4182f0 + (i << 2)) = 0;
    }
    return o;
}
