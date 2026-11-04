#include "src/include/classes/TObject.h"
extern void initialize_grid_view(TObject *, void *);
extern void call_8c1cd0bc(TObject *, int);
TObject *initialize_grid_panel_8c1ccd24(TObject *o, int a1)
{
    TObject **home = &o;
    (void)home;
    initialize_grid_view(o, (void *)0x8c3292b8);
    o->vtable = (void *)0x8c276874;
    call_8c1cd0bc(o, a1);
    return o;
}
