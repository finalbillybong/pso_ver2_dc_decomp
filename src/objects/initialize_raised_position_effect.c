#include "src/include/vector3.h"
typedef struct View { void *name; unsigned short flags; char unknown6[18]; void *dispatch; char unknown28[2]; unsigned short size; Vector3 position; int ticks; void *child; } View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_position[(unsigned long)&((View *)0)->position==32?1:-1];
typedef char check_ticks[(unsigned long)&((View *)0)->ticks==44?1:-1];
typedef char check_child[(unsigned long)&((View *)0)->child==48?1:-1];
extern void base_at(View *,void *);extern void *object_name;
extern void *find_at(Vector3 *,int);extern void set_at(void *,int);
View *initialize_raised_position_effect(View *o,void *parent,const Vector3 *position) { View **home=&o;base_at(o,parent);o->dispatch=(void *)0x8c278574;o->name=object_name;o->size=52;o->ticks=5;o->position=*position;o->position.y+=300.0f;if((o->child=find_at(&o->position,308))!=0) set_at(o->child,64);return o; }
