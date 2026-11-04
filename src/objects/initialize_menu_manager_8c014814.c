#include "src/include/classes/TObject.h"
extern TObject *menu_manager;
extern void TObject_ctor_8c0330e4(TObject *);
extern void load_manager_8c0148ac(TObject *);
extern void reset_manager_8c014874(TObject *);
extern void bind_manager_8c014894(TObject *);
extern void start_manager_8c0148cc(TObject *);
TObject *initialize_menu_manager_8c014814(TObject *o)
{
    TObject **home = &o;
    (void)home;
    {
        TObject *base = o;
        TObject_ctor_8c0330e4(base);
        base->vtable = (void *)0x8c261240;
    }
    o->vtable = (void *)0x8c2611ec;
    load_manager_8c0148ac(o);
    reset_manager_8c014874(o);
    bind_manager_8c014894(o);
    start_manager_8c0148cc(o);
    menu_manager = o;
    return o;
}
