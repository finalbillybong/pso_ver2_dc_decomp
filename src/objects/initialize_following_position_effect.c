#include "src/include/vector3.h"
typedef struct View { void *name;char unknown4[20];void *dispatch;char unknown28[2];unsigned short size;char unknown32[12];int ticks;void *child;int state;unsigned short identifier;char unknown58[2];Vector3 position;} View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_ticks[(unsigned long)&((View *)0)->ticks==44?1:-1];
typedef char check_child[(unsigned long)&((View *)0)->child==48?1:-1];
typedef char check_state[(unsigned long)&((View *)0)->state==52?1:-1];
typedef char check_identifier[(unsigned long)&((View *)0)->identifier==56?1:-1];
typedef char check_position[(unsigned long)&((View *)0)->position==60?1:-1];
extern void base_at(View *,void *);extern void *object_name;
View *initialize_following_position_effect(View *o,void *parent,unsigned short identifier,const Vector3 *position) {base_at(o,parent);o->dispatch=(void *)0x8c278558;o->name=object_name;o->size=72;o->identifier=identifier;o->child=0;o->position=*position;o->state=0;o->ticks=5;return o;}
