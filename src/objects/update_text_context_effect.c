#include "src/include/classes/TItemDownLoad.h"
typedef char check_flags[(unsigned long)&((TItemDownLoad *)0)->flags==4?1:-1];
typedef char check_dispatch[(unsigned long)&((TItemDownLoad *)0)->dispatch==24?1:-1];
typedef char check_buffer[(unsigned long)&((TItemDownLoad *)0)->buffer==32?1:-1];
typedef char check_callback[(unsigned long)&((TItemDownLoad *)0)->callback==36?1:-1];
typedef char check_state[(unsigned long)&((TItemDownLoad *)0)->state==40?1:-1];
typedef char check_handle[(unsigned long)&((TItemDownLoad *)0)->handle==44?1:-1];
typedef char check_text[(unsigned long)&((TItemDownLoad *)0)->text==48?1:-1];
extern void acquire_at(TItemDownLoad *),open_at(TItemDownLoad *),poll_at(TItemDownLoad *),complete_at(TItemDownLoad *);
void TItemDownLoad_update_8c221198(TItemDownLoad *o) {switch(o->state) {case 0:acquire_at(o);break;case 1:open_at(o);break;case 2:break;case 3:poll_at(o);break;case 4:complete_at(o);break;case 5:o->flags|=1;break;}}
