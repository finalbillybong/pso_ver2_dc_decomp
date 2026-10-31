typedef struct View {void *name;char unknown4[20];void *dispatch;char unknown28[2];unsigned short size;int state;unsigned int context;int active;char unknown44[4];char text[16];} View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_state[(unsigned long)&((View *)0)->state==32?1:-1];
typedef char check_context[(unsigned long)&((View *)0)->context==36?1:-1];
typedef char check_active[(unsigned long)&((View *)0)->active==40?1:-1];
typedef char check_text[(unsigned long)&((View *)0)->text==48?1:-1];
extern void TObject_ctor_8c0330e4(View *,void *);extern void *object_name;extern char *strncpy_8c12b154(char *,const char *,unsigned int);
View *initialize_text_context_effect(View *o,void *parent,const char *text,unsigned int context) {View **home=&o;TObject_ctor_8c0330e4(o,parent);o->dispatch=(void *)0x8c2788d4;o->name=object_name;o->size=64;o->context=context;o->active=0;strncpy_8c12b154(o->text,text,16);o->text[15]=0;o->state=0;return o;}
