#include "src/include/classes/TItemDownLoad.h"
typedef char check_flags[(unsigned long)&((TItemDownLoad *)0)->flags==4?1:-1];
typedef char check_dispatch[(unsigned long)&((TItemDownLoad *)0)->dispatch==24?1:-1];
typedef char check_buffer[(unsigned long)&((TItemDownLoad *)0)->buffer==32?1:-1];
typedef char check_callback[(unsigned long)&((TItemDownLoad *)0)->callback==36?1:-1];
typedef char check_state[(unsigned long)&((TItemDownLoad *)0)->state==40?1:-1];
typedef char check_handle[(unsigned long)&((TItemDownLoad *)0)->handle==44?1:-1];
typedef char check_text[(unsigned long)&((TItemDownLoad *)0)->text==48?1:-1];
extern int vmu_find_file_8c01018c(const char *);extern void *buffer_at(TItemDownLoad *);extern void *memset_8c12b880(void *,int,unsigned int);extern void prepare_at(int);extern int vmu_load_file_8c010240(int,const char *,void *);
void open_text_context(TItemDownLoad *o) {o->handle=vmu_find_file_8c01018c(o->text);switch(o->handle) {case -2:break;case -1:o->flags|=1;break;default:o->buffer=buffer_at(o);if(o->buffer) {memset_8c12b880(o->buffer,0,1024);prepare_at(o->handle);if(vmu_load_file_8c010240(o->handle,o->text,o->buffer)==0) o->state=3;else o->state=5;}else o->state=5;break;}}
