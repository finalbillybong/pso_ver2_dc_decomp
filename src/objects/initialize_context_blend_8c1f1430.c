typedef struct View {char unknown0[20];void *dispatch;} View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==20?1:-1];
extern void base_at(View *),start_at(View *);
View *initialize_context_blend_8c1f1430(View *o) {View **home=&o;base_at(o);o->dispatch=(void *)0x8c277fb8;start_at(o);return o;}
