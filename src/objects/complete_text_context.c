#include "src/include/classes/TItemDownLoad.h"
typedef char check_flags[(unsigned long)&((TItemDownLoad *)0)->flags==4?1:-1];
typedef char check_dispatch[(unsigned long)&((TItemDownLoad *)0)->dispatch==24?1:-1];
typedef char check_buffer[(unsigned long)&((TItemDownLoad *)0)->buffer==32?1:-1];
typedef char check_callback[(unsigned long)&((TItemDownLoad *)0)->callback==36?1:-1];
typedef char check_state[(unsigned long)&((TItemDownLoad *)0)->state==40?1:-1];
typedef char check_handle[(unsigned long)&((TItemDownLoad *)0)->handle==44?1:-1];
typedef char check_text[(unsigned long)&((TItemDownLoad *)0)->text==48?1:-1];
extern int bu_check_busy_8c372d98(int),error_at(int);extern void complete_at(void);
void complete_text_context(TItemDownLoad *o) {if(!bu_check_busy_8c372d98(o->handle)) {complete_at();if(!error_at(o->handle)) {if(o->callback) o->callback(o->buffer);o->state=5;}else o->state=5;}}
