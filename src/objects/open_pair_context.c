typedef struct View {char unknown0[32];void *resource;unsigned int first,second;void *buffer;int state,owned,ticks;} View;
typedef char check_resource[(unsigned long)&((View *)0)->resource==32?1:-1];
typedef char check_first[(unsigned long)&((View *)0)->first==36?1:-1];
typedef char check_second[(unsigned long)&((View *)0)->second==40?1:-1];
typedef char check_buffer[(unsigned long)&((View *)0)->buffer==44?1:-1];
typedef char check_state[(unsigned long)&((View *)0)->state==48?1:-1];
typedef char check_owned[(unsigned long)&((View *)0)->owned==52?1:-1];
typedef char check_ticks[(unsigned long)&((View *)0)->ticks==56?1:-1];
extern int acquire_at(View *);extern void *open_at(unsigned int,unsigned int);extern int ADXF_GetFsizeSct_8c34d9b8(void *);extern void *game_malloc_buffer_8c011e9c(unsigned int);extern void ADXF_ReadNw32_8c34d6ae(void *,int,void *);
void open_pair_context(View *o) {if(acquire_at(o)) {int size;if((o->resource=open_at(o->first,o->second))==0) {o->state=3;return;}size=ADXF_GetFsizeSct_8c34d9b8(o->resource);if((o->buffer=game_malloc_buffer_8c011e9c((unsigned int)size<<11))==0) {o->state=3;return;}ADXF_ReadNw32_8c34d6ae(o->resource,size,o->buffer);o->state=1;}}
