#include "src/include/classes/TItemDownLoad.h"
typedef char check_flags[(unsigned long)&((TItemDownLoad *)0)->flags==4?1:-1];
typedef char check_dispatch[(unsigned long)&((TItemDownLoad *)0)->dispatch==24?1:-1];
typedef char check_buffer[(unsigned long)&((TItemDownLoad *)0)->buffer==32?1:-1];
typedef char check_callback[(unsigned long)&((TItemDownLoad *)0)->callback==36?1:-1];
typedef char check_state[(unsigned long)&((TItemDownLoad *)0)->state==40?1:-1];
typedef char check_handle[(unsigned long)&((TItemDownLoad *)0)->handle==44?1:-1];
typedef char check_text[(unsigned long)&((TItemDownLoad *)0)->text==48?1:-1];
extern char buffer[1024];extern void *memset_8c12b880(void *,int,unsigned int);
void *get_text_context_buffer(TItemDownLoad *o) {memset_8c12b880(buffer,0,1024);return buffer;}
