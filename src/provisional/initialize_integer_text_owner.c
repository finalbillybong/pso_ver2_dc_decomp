typedef struct View {void *name;char unknown4[20];void *dispatch;char unknown28[2];unsigned short size;char unknown32[28];int value,state;void *field;unsigned int text_field[6];char text[32];int field128,field132,field136,field140,field144;} View;
typedef char check_size[sizeof(View)==148?1:-1];
typedef char check_name[(unsigned long)&((View *)0)->name==0?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_value[(unsigned long)&((View *)0)->value==60?1:-1];
typedef char check_state[(unsigned long)&((View *)0)->state==64?1:-1];
typedef char check_field[(unsigned long)&((View *)0)->field==68?1:-1];
typedef char check_text_field[(unsigned long)&((View *)0)->text_field==72?1:-1];
typedef char check_text[(unsigned long)&((View *)0)->text==96?1:-1];
typedef char check_field128[(unsigned long)&((View *)0)->field128==128?1:-1];
typedef char check_field132[(unsigned long)&((View *)0)->field132==132?1:-1];
typedef char check_field136[(unsigned long)&((View *)0)->field136==136?1:-1];
typedef char check_field140[(unsigned long)&((View *)0)->field140==140?1:-1];
typedef char check_field144[(unsigned long)&((View *)0)->field144==144?1:-1];
extern void base_at(View *,void *),construct_at(void *),configure_at(void *,int *,int),clear_at(void *,int,unsigned int),text_at(void *,char *,int,int,int);extern void *allocate_at(unsigned int),*parent,*object_name;
View *initialize_integer_text_owner(View *o) {View **home=&o;void *field;base_at(o,parent);o->dispatch=(void *)0x8c2745f8;o->name=object_name;o->size=148;o->value=0;o->field128=0;field=allocate_at(32);if(field) construct_at(field);o->field=field;configure_at(o->field,&o->value,8);o->field144=0;o->field136=0;o->field140=0;o->field132=1;clear_at(o->text,0,32);text_at(o->text_field,o->text,4,17,31);o->state=0;return o;}
