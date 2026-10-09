typedef struct View {char unknown0[32];void *resource;unsigned int first,second;void *buffer;int state,owned,ticks;} View;
typedef char check_resource[(unsigned long)&((View *)0)->resource==32?1:-1];
typedef char check_first[(unsigned long)&((View *)0)->first==36?1:-1];
typedef char check_second[(unsigned long)&((View *)0)->second==40?1:-1];
typedef char check_buffer[(unsigned long)&((View *)0)->buffer==44?1:-1];
typedef char check_state[(unsigned long)&((View *)0)->state==48?1:-1];
typedef char check_owned[(unsigned long)&((View *)0)->owned==52?1:-1];
typedef char check_ticks[(unsigned long)&((View *)0)->ticks==56?1:-1];
extern int busy;
void release_pair_context(View *o) {if(o->owned) {if(!busy) {o->state=3;return;}o->owned=0;busy=0;}}
