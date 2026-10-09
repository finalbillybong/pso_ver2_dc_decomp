typedef struct View {char unknown0[32];void *resource;unsigned int first,second;void *buffer;int state,owned,ticks;} View;
typedef char check_resource[(unsigned long)&((View *)0)->resource==32?1:-1];
typedef char check_first[(unsigned long)&((View *)0)->first==36?1:-1];
typedef char check_second[(unsigned long)&((View *)0)->second==40?1:-1];
typedef char check_buffer[(unsigned long)&((View *)0)->buffer==44?1:-1];
typedef char check_state[(unsigned long)&((View *)0)->state==48?1:-1];
typedef char check_owned[(unsigned long)&((View *)0)->owned==52?1:-1];
typedef char check_ticks[(unsigned long)&((View *)0)->ticks==56?1:-1];
typedef void (View::*Handler)(void);
typedef char check_handler[sizeof(Handler)==12?1:-1];
extern "C" {extern signed char initialized;extern Handler handlers[4],first_handler,second_handler,third_handler,fourth_handler;
void update_pair_context(View *o) {if(--o->ticks<0) {o->state=3;return;}if(!initialized) {handlers[0]=first_handler;handlers[1]=second_handler;handlers[2]=third_handler;handlers[3]=fourth_handler;initialized=1;}(o->*handlers[o->state])();}
}
