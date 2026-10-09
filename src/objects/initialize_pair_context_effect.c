typedef struct View {void *name;char unknown4[20];void *dispatch;char unknown28[2];unsigned short size;unsigned int state,first,second,field44,field48,field52;int ticks;} View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_state[(unsigned long)&((View *)0)->state==32?1:-1];
typedef char check_first[(unsigned long)&((View *)0)->first==36?1:-1];
typedef char check_second[(unsigned long)&((View *)0)->second==40?1:-1];
typedef char check_field44[(unsigned long)&((View *)0)->field44==44?1:-1];
typedef char check_field48[(unsigned long)&((View *)0)->field48==48?1:-1];
typedef char check_field52[(unsigned long)&((View *)0)->field52==52?1:-1];
typedef char check_ticks[(unsigned long)&((View *)0)->ticks==56?1:-1];
extern void base_at(View *,void *);extern void *object_name;
View *initialize_pair_context_effect(View *o,void *parent,unsigned int first,unsigned int second) {base_at(o,parent);o->dispatch=(void *)0x8c26dbd0;o->name=object_name;o->size=60;o->state=0;o->first=first;o->second=second;o->field44=0;o->field48=0;o->field52=0;o->ticks=900;return o;}
