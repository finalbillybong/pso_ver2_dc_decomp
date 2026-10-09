typedef struct View {void *name;char unknown4[20];void *dispatch;char unknown28[2];unsigned short size;int mode;unsigned short identifier;char unknown38[2];float value,step;} View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_mode[(unsigned long)&((View *)0)->mode==32?1:-1];
typedef char check_identifier[(unsigned long)&((View *)0)->identifier==36?1:-1];
typedef char check_value[(unsigned long)&((View *)0)->value==40?1:-1];
typedef char check_step[(unsigned long)&((View *)0)->step==44?1:-1];
extern void base_at(View *,void *);extern void *object_name;
View *initialize_mode_blend_effect(View *o,void *parent,int mode,unsigned short identifier) {base_at(o,parent);o->dispatch=(void *)0x8c278388;o->name=object_name;o->size=48;o->mode=mode;o->identifier=identifier;switch(o->mode) {case 0:o->value=1.0f;o->step=-0.011111111380159855f;break;case 1:o->value=0.0f;o->step=0.01666666753590107f;break;case 2:o->value=1.0f;o->step=-0.1111111119389534f;break;}return o;}
