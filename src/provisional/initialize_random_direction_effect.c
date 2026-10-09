#include "src/include/vector3.h"
typedef struct View {void *name;char unknown4[20];void *dispatch;char unknown28[2];unsigned short size;Vector3 position,direction,velocity;float scale;void *child;int ticks;} View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_position[(unsigned long)&((View *)0)->position==32?1:-1];
typedef char check_direction[(unsigned long)&((View *)0)->direction==44?1:-1];
typedef char check_velocity[(unsigned long)&((View *)0)->velocity==56?1:-1];
typedef char check_scale[(unsigned long)&((View *)0)->scale==68?1:-1];
typedef char check_child[(unsigned long)&((View *)0)->child==72?1:-1];
typedef char check_ticks[(unsigned long)&((View *)0)->ticks==76?1:-1];
extern void base_at(View *,void *);extern void *object_name;extern int random_at(void);extern float first_angle_at(int),second_angle_at(int);extern void *find_at(Vector3 *,int);extern void set_at(void *,int);
View *initialize_random_direction_effect(View *o,void *parent,const Vector3 *position,const Vector3 *direction) {View **home=&o;int angle;base_at(o,parent);o->dispatch=(void *)0x8c27853c;o->name=object_name;o->size=80;o->position=*position;o->direction=*direction;{float fraction=(float)random_at()/32768.0f;angle=(int)(fraction*65536.0f);}o->velocity.x=first_angle_at(angle);o->velocity.y=0.0f;o->velocity.z=second_angle_at(angle);o->scale=1.0f;o->ticks=150;if((o->child=find_at(&o->position,175))!=0) set_at(o->child,64);return o;}
