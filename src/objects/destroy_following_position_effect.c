#include "src/include/classes/TObjDFRecover.h"
typedef char check_dispatch[(unsigned long)&((TObjDFRecover *)0)->vtable==24?1:-1];
typedef char check_child[(unsigned long)&((TObjDFRecover *)0)->child==48?1:-1];
extern void cleanup_at(void *),TObject_dtor_8c03311c(TObjDFRecover *,short),free_at(void *,void *);extern void *heap;
TObjDFRecover *TObjDFRecover_dtor_8c21b0d0(TObjDFRecover *o,short release) {if(o) {o->vtable=(void *)0x8c278558;if(o->child) cleanup_at(o->child);TObject_dtor_8c03311c(o,0);if(release>0) free_at(heap,o);}return o;}
