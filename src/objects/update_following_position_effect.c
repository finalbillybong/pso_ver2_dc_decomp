#include "src/include/vector3.h"
typedef struct View {char unknown0[4];unsigned short flags;char unknown6[10];void *parent;char unknown20[24];int ticks;void *child;int state;unsigned short identifier;char unknown58[2];Vector3 position;} View;
typedef struct Actor {char unknown0[804];Vector3 position;} Actor;
typedef char check_parent[(unsigned long)&((View *)0)->parent==16?1:-1];
typedef char check_ticks[(unsigned long)&((View *)0)->ticks==44?1:-1];
typedef char check_child[(unsigned long)&((View *)0)->child==48?1:-1];
typedef char check_state[(unsigned long)&((View *)0)->state==52?1:-1];
typedef char check_identifier[(unsigned long)&((View *)0)->identifier==56?1:-1];
typedef char check_position[(unsigned long)&((View *)0)->position==60?1:-1];
typedef char check_actor_position[(unsigned long)&((Actor *)0)->position==804?1:-1];
extern int ready_at(void);extern Actor *lookup_at(unsigned int);extern void *find_at(Vector3 *,int);extern void set_at(void *,int);extern void move_at(void *,Vector3 *);extern void release_at(void *);extern unsigned int current_identifier;extern void notify_at(int);extern void emit_at(unsigned int,int,int,int);extern void *create_at(void *,const Vector3 *,const Vector3 *);
void update_following_position_effect(View *o) {
 Actor *actor;Vector3 position;
 if(!ready_at()) {o->flags|=1;return;}
 if(o->identifier==65535||(actor=lookup_at(o->identifier))==0) {o->flags|=1;return;}
 position=actor->position;--o->ticks;
 switch(o->state) {
 case 0:
  if(o->ticks<=0) {if((o->child=find_at(&position,235))==0) {o->flags|=1;return;}set_at(o->child,64);o->ticks=10;o->state=1;}break;
 case 1:
  move_at(o->child,&position);if(o->ticks<=0) {release_at(o->child);o->child=0;if(o->identifier==current_identifier) notify_at(1);o->ticks=11;o->state=2;}break;
 case 2:
  if(o->ticks%5==0) {emit_at(0x30019,0,0,0);create_at(o->parent,&position,&o->position);}if(o->ticks<=0) o->flags|=1;break;
 }
}
