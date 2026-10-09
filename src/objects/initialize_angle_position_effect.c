#include "src/include/vector3.h"
typedef struct View { void *name; unsigned short flags; char unknown6[18]; void *dispatch; char unknown28[2]; unsigned short size; Vector3 position; float step; } View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_position[(unsigned long)&((View *)0)->position==32?1:-1];
typedef char check_step[(unsigned long)&((View *)0)->step==44?1:-1];
extern void base_at(View *,void *);extern void *object_name;
extern float first_angle_at(int);extern float second_angle_at(int);
View *initialize_angle_position_effect(View *o,void *parent,int angle) {View **home=&o;base_at(o,parent);o->dispatch=(void *)0x8c278504;o->name=object_name;o->size=48;o->position.x=first_angle_at(angle)*300.0f;o->position.y=0.0f;o->position.z=second_angle_at(angle)*-300.0f;o->step=25.0f;return o;}
