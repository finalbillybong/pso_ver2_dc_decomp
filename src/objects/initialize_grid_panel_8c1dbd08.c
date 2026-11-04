#include "src/include/classes/TWindowMenuInfomation.h"
extern void initialize_grid_view(TWindowMenuInfomation *, void *);
extern void call_8c1dc0b4(TWindowMenuInfomation *, int);
TWindowMenuInfomation *initialize_grid_panel_8c1dbd08(TWindowMenuInfomation *o, int a1)
{
    TWindowMenuInfomation **home = &o;
    (void)home;
    initialize_grid_view(o, (void *)0x8c32aef0);
    o->dispatch = (void *)0x8c277334;
    call_8c1dc0b4(o, a1);
    return o;
}
