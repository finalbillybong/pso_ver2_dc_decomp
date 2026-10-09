#include "src/include/vector3.h"
typedef struct View { void *name; unsigned short flags; char unknown6[18]; void *dispatch; char unknown28[2]; unsigned short size; int ticks; Vector3 position; } View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_ticks[(unsigned long)&((View *)0)->ticks==32?1:-1];
typedef char check_position[(unsigned long)&((View *)0)->position==36?1:-1];
extern void base_at(View *,void *);extern void *object_name;
View *initialize_delayed_position_effect(View *o,void *parent,const Vector3 *position) {base_at(o,parent);o->dispatch=(void *)0x8c278520;o->name=object_name;o->size=48;o->ticks=32;o->position=*position;return o;}
