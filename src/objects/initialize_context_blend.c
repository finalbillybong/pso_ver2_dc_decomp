typedef struct View {float value;char unknown4[16];void *dispatch;int state;} View;
typedef char check_value[(unsigned long)&((View *)0)->value==0?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==20?1:-1];
typedef char check_state[(unsigned long)&((View *)0)->state==24?1:-1];
extern void base_at(View *),start_at(View *);
View *initialize_context_blend(View *o) {View **home=&o;base_at(o);o->dispatch=(void *)0x8c270cc0;start_at(o);return o;}
