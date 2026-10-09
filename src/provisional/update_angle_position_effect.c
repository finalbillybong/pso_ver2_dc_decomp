#include "src/include/vector3.h"
typedef struct View { char unknown0[4]; unsigned short flags; char unknown6[26]; Vector3 position; float step; } View;
typedef char check_position[(unsigned long)&((View *)0)->position==32?1:-1];
typedef char check_step[(unsigned long)&((View *)0)->step==44?1:-1];
extern float first_angle_at(int),second_angle_at(int),length_at(const Vector3 *);
extern void first_emit_at(View *,Vector3 *),second_emit_at(View *,Vector3 *);
void update_angle_position_effect(View *o) {
 int angle,increment,count;Vector3 position;
 increment=(int)(1638400.0f/(o->step*6.28f));count=0;position.y=0.0f;
 for(angle=0;angle<65536;angle+=increment) {
  position.x=o->position.x+o->step*first_angle_at(angle);
  position.z=o->step*second_angle_at(angle)+o->position.z;
  if(!(length_at(&position)>255.0f)) {first_emit_at(o,&position);second_emit_at(o,&position);++count;}
 }
 if(o->step>300.0f&&count==0) o->flags|=1;else o->step+=25.0f;
}
