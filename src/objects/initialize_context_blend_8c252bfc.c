#include "src/include/classes/TObject.h"
typedef char check_dispatch[(unsigned long)&((TObject *)0)->vtable==24?1:-1];
extern void base_at(TObject *,void *parent,unsigned int context),start_at(TObject *);
TObject *initialize_context_blend_8c252bfc(TObject *o,void *parent,unsigned int context) {TObject **home=&o;base_at(o,parent,context);o->vtable=(void *)0x8c27fd50;start_at(o);return o;}
