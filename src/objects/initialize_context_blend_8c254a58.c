typedef struct View {char unknown0[24];void *dispatch;} View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
extern void base_at(View *,void *parent,unsigned int context),start_at(View *);
View *initialize_context_blend_8c254a58(View *o,void *parent,unsigned int context) {View **home=&o;base_at(o,parent,context);o->dispatch=(void *)0x8c280d14;start_at(o);return o;}
