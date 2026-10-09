typedef struct View {char unknown0[32];void *resource;unsigned int first,second;void *buffer;int state,owned,ticks;} View;
typedef char check_resource[(unsigned long)&((View *)0)->resource==32?1:-1];
typedef char check_first[(unsigned long)&((View *)0)->first==36?1:-1];
typedef char check_second[(unsigned long)&((View *)0)->second==40?1:-1];
typedef char check_buffer[(unsigned long)&((View *)0)->buffer==44?1:-1];
typedef char check_state[(unsigned long)&((View *)0)->state==48?1:-1];
typedef char check_owned[(unsigned long)&((View *)0)->owned==52?1:-1];
typedef char check_ticks[(unsigned long)&((View *)0)->ticks==56?1:-1];
extern int acquire_at(View *);extern void *open_at(unsigned int,unsigned int);extern int size_at(void *);extern void *allocate_at(unsigned int);extern void start_at(void *,int,void *);
void open_pair_context(View *o) {if(acquire_at(o)) {int size;if((o->resource=open_at(o->first,o->second))==0) {o->state=3;return;}size=size_at(o->resource);if((o->buffer=allocate_at((unsigned int)size<<11))==0) {o->state=3;return;}start_at(o->resource,size,o->buffer);o->state=1;}}
