#include "src/include/proximity_object.h"
#define position_at ((void (*)(void *,Vector3 *))0x8c0a7608)
#define angles_at ((void (*)(void *,int *))0x8c0a764c)
#define state_at ((int (*)(void))0x8c08d7e8)
#define find_at ((void *(*)(int))0x8c021ef8)
#define distance_at ((float (*)(Vector3 *,Vector3 *))0x8c03f0a0)
#define trigger_at ((void (*)(ProximityObject *,int))0x8c09e710)
void update_proximity_object(ProximityObject *p) {
 if(p->effect) {
  position_at(p->effect,&p->position);
  angles_at(p->effect,p->angles);
 }
 if(!state_at()) {
  int i;
  for(i=0;i<4;i++) {
   void *other=find_at(i);
   if(other) {
    float distance=distance_at((Vector3 *)((unsigned char *)other+60),&p->position);
    if(p->radius*p->radius>distance) {
     trigger_at(p,8);
     p->flags|=1;
     break;
    }
   }
  }
 }
}
