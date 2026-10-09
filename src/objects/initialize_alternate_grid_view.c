typedef struct View {char unknown0[24];void *dispatch;} View;typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];extern void base_at(View *),initialize_at(View *,void *);
View *initialize_alternate_grid_view(View *o,void *context) {View **home=&o;base_at(o);o->dispatch=(void *)0x8c269efc;initialize_at(o,context);return o;}
