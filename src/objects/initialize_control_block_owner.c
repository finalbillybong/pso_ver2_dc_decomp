typedef struct Block68 {unsigned int words[17];} Block68;typedef struct View {void *name;char unknown4[20];void *dispatch;char unknown28[2];unsigned short size;char unknown32[28];Block68 block;int state;} View;
typedef char check_layout[sizeof(View)==132&&sizeof(Block68)==68?1:-1];
typedef char check_name[(unsigned long)&((View *)0)->name==0?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_block[(unsigned long)&((View *)0)->block==60?1:-1];
typedef char check_state[(unsigned long)&((View *)0)->state==128?1:-1];
extern void base_at(View *,void *);extern void *parent,*object_name;extern Block68 initial_block;
View *initialize_control_block_owner(View *o) {base_at(o,parent);o->dispatch=(void *)0x8c26cdd0;o->name=object_name;o->size=132;o->state=0;o->block=initial_block;return o;}
