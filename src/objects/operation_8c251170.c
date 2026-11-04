#include "src/include/classes/TObject.h"
extern void operation_8c241158(void *);
TObject *operation_8c251170(TObject *o)
{
    operation_8c241158((void *)o);
    o->vtable = (void *)0x8c27eea8;
    o->tag = (int)(*(int *)0x8c33f8d0);
    o->size = 0x234;
    return o;
}
