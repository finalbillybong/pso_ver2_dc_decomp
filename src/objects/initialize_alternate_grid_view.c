#include "src/include/classes/TObject.h"
typedef char check_dispatch[(unsigned long)&((TObject *)0)->vtable==24?1:-1];extern void base_at(TObject *),initialize_at(TObject *,void *);
TObject *initialize_alternate_grid_view(TObject *o,void *context) {TObject **home=&o;base_at(o);o->vtable=(void *)0x8c269efc;initialize_at(o,context);return o;}
