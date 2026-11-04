#include "src/include/classes/TObjDFTenchuFuru.h"
typedef char check_dispatch[(unsigned long)&((TObjDFTenchuFuru *)0)->vtable==24?1:-1];
typedef char check_child[(unsigned long)&((TObjDFTenchuFuru *)0)->child==48?1:-1];
extern void cleanup_at(void *),TObject_dtor_8c03311c(TObjDFTenchuFuru *,short),free_at(void *,void *);extern void *heap;
TObjDFTenchuFuru *TObjDFTenchuFuru_dtor_8c21af80(TObjDFTenchuFuru *o,short release) {if(o) {o->vtable=(void *)0x8c278574;if(o->child) cleanup_at(o->child);TObject_dtor_8c03311c(o,0);if(release>0) free_at(heap,o);}return o;}
