typedef struct View {char unknown0[24];void *dispatch;char unknown28[20];void *child;} View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_child[(unsigned long)&((View *)0)->child==48?1:-1];
extern void cleanup_at(void *),base_at(View *,short),free_at(void *,void *);extern void *heap;
View *destroy_following_position_effect(View *o,short release) {if(o) {o->dispatch=(void *)0x8c278558;if(o->child) cleanup_at(o->child);base_at(o,0);if(release>0) free_at(heap,o);}return o;}
