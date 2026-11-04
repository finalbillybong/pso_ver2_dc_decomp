#include "src/include/classes/TObject.h"
extern void initialize_game_8c010514(void *);
extern void set_field_8c09ca50(void *);
TObject *operation_8c09c9a0(TObject *o)
{
    TObject **home = &o;
    (void)home;
    {
        TObject *base = o;
        initialize_game_8c010514((void *)base);
        base->vtable = (void *)0x8c260f10;
        base->tag = *(int *)0x8c2e2174;
        base->size = 0xa7c;
    }
    o->vtable = (void *)0x8c2658d4;
    o->tag = *(int *)0x8c301ec8;
    o->size = 0x1034;
    set_field_8c09ca50((void *)o);
    return o;
}
