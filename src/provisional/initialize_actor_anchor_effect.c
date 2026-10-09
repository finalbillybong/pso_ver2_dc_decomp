#include "src/include/vector3.h"
typedef struct Parameter {char unknown0[12];float scale;char unknown16[12];Vector3 position;} Parameter;
typedef struct Scale {char unknown0[16];float value;} Scale;
typedef struct Actor {char unknown0[32];unsigned short identifier;char unknown34[66];unsigned int angle;char unknown104[116];Parameter *parameter;char unknown224[164];Scale *scale;char unknown392[412];Vector3 position;} Actor;
typedef struct View {char unknown0[4];unsigned short flags;char unknown6[18];void *dispatch;char unknown28[32];Vector3 position;char unknown72[28];unsigned int angle;char unknown104[4];Vector3 scale;char unknown120[728];int first;float radius;int second;float third,fourth,fifth,sixth;void *child;int state;Actor *actor;unsigned short identifier;} View;
typedef char check_Parameter_scale[(unsigned long)&((Parameter *)0)->scale==12?1:-1];
typedef char check_Parameter_position[(unsigned long)&((Parameter *)0)->position==28?1:-1];
typedef char check_Scale_value[(unsigned long)&((Scale *)0)->value==16?1:-1];
typedef char check_Actor_identifier[(unsigned long)&((Actor *)0)->identifier==32?1:-1];
typedef char check_Actor_angle[(unsigned long)&((Actor *)0)->angle==100?1:-1];
typedef char check_Actor_parameter[(unsigned long)&((Actor *)0)->parameter==220?1:-1];
typedef char check_Actor_scale[(unsigned long)&((Actor *)0)->scale==388?1:-1];
typedef char check_Actor_position[(unsigned long)&((Actor *)0)->position==804?1:-1];
typedef char check_View_flags[(unsigned long)&((View *)0)->flags==4?1:-1];
typedef char check_View_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_View_position[(unsigned long)&((View *)0)->position==60?1:-1];
typedef char check_View_angle[(unsigned long)&((View *)0)->angle==100?1:-1];
typedef char check_View_scale[(unsigned long)&((View *)0)->scale==108?1:-1];
typedef char check_View_first[(unsigned long)&((View *)0)->first==848?1:-1];
typedef char check_View_radius[(unsigned long)&((View *)0)->radius==852?1:-1];
typedef char check_View_second[(unsigned long)&((View *)0)->second==856?1:-1];
typedef char check_View_third[(unsigned long)&((View *)0)->third==860?1:-1];
typedef char check_View_fourth[(unsigned long)&((View *)0)->fourth==864?1:-1];
typedef char check_View_fifth[(unsigned long)&((View *)0)->fifth==868?1:-1];
typedef char check_View_sixth[(unsigned long)&((View *)0)->sixth==872?1:-1];
typedef char check_View_child[(unsigned long)&((View *)0)->child==876?1:-1];
typedef char check_View_state[(unsigned long)&((View *)0)->state==880?1:-1];
typedef char check_View_actor[(unsigned long)&((View *)0)->actor==884?1:-1];
typedef char check_View_identifier[(unsigned long)&((View *)0)->identifier==888?1:-1];
extern void base_at(View *,void *),refresh_at(Actor *);extern void *find_at(Vector3 *,int);extern void *parent;
View *initialize_actor_anchor_effect(View *o,Actor *actor,Parameter *parameter) {
 View **home=&o;base_at(o,parent);o->dispatch=(void *)0x8c270de0;
 if(actor) {
  o->actor=actor;{unsigned short identifier=o->actor->identifier;o->identifier=identifier;}
  if(parameter) {o->position=parameter->position;o->radius=parameter->scale*0.15f;}
  else if(o->actor->parameter) {refresh_at(o->actor);o->position=o->actor->parameter->position;o->radius=o->actor->parameter->scale*0.15f;}
  else {o->position=o->actor->position;if(o->actor->scale) o->radius=o->actor->scale->value*0.075f;else o->radius=1.5f;}
  o->angle=o->actor->angle;o->scale.x=o->scale.y=o->scale.z=0.0f;
  o->first=0;o->second=0;o->third=0.0f;o->fourth=0.0f;o->fifth=0.0f;o->sixth=0.0f;
  o->child=find_at(&o->position,302);o->state=0;
 }else {o->child=0;o->flags|=1;}
 return o;
}
