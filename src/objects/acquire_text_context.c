#include "src/include/classes/TItemDownLoad.h"
typedef char check_flags[(unsigned long)&((TItemDownLoad *)0)->flags==4?1:-1];
typedef char check_dispatch[(unsigned long)&((TItemDownLoad *)0)->dispatch==24?1:-1];
typedef char check_buffer[(unsigned long)&((TItemDownLoad *)0)->buffer==32?1:-1];
typedef char check_callback[(unsigned long)&((TItemDownLoad *)0)->callback==36?1:-1];
typedef char check_state[(unsigned long)&((TItemDownLoad *)0)->state==40?1:-1];
typedef char check_handle[(unsigned long)&((TItemDownLoad *)0)->handle==44?1:-1];
typedef char check_text[(unsigned long)&((TItemDownLoad *)0)->text==48?1:-1];
extern int busy;
void acquire_text_context(TItemDownLoad *o) {if(!busy) {busy=1;o->state=1;}}
