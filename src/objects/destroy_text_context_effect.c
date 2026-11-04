#include "src/include/classes/TItemDownLoad.h"
typedef char check_flags[(unsigned long)&((TItemDownLoad *)0)->flags==4?1:-1];
typedef char check_dispatch[(unsigned long)&((TItemDownLoad *)0)->dispatch==24?1:-1];
typedef char check_buffer[(unsigned long)&((TItemDownLoad *)0)->buffer==32?1:-1];
typedef char check_callback[(unsigned long)&((TItemDownLoad *)0)->callback==36?1:-1];
typedef char check_state[(unsigned long)&((TItemDownLoad *)0)->state==40?1:-1];
typedef char check_handle[(unsigned long)&((TItemDownLoad *)0)->handle==44?1:-1];
typedef char check_text[(unsigned long)&((TItemDownLoad *)0)->text==48?1:-1];
extern int busy;extern void release_at(TItemDownLoad *),TObject_dtor_8c03311c(TItemDownLoad *,int),free_at(void *,void *);extern void *heap;
TItemDownLoad *TItemDownLoad_dtor_8c221134(TItemDownLoad *o,short release) {if(o) {o->dispatch=(void *)0x8c2788d4;if(o->state) busy=0;if(o->buffer) release_at(o);TObject_dtor_8c03311c(o,0);if(release>0) free_at(heap,o);}return o;}
