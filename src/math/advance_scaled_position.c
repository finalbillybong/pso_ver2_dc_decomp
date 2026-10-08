#include "src/include/vector3.h"
typedef struct View { char unknown0[60]; Vector3 position,previous; char unknown84[64]; Vector3 velocity; char unknown160[24]; float scale; } View;
typedef char check_position[(unsigned long)&((View *)0)->position==60?1:-1];
typedef char check_previous[(unsigned long)&((View *)0)->previous==72?1:-1];
typedef char check_velocity[(unsigned long)&((View *)0)->velocity==148?1:-1];
typedef char check_scale[(unsigned long)&((View *)0)->scale==184?1:-1];
typedef char check_prefix[sizeof(View)==188?1:-1];
void advance_scaled_position(View *o) {
 o->previous=o->position;
 o->position.x+=o->velocity.x*o->scale;
 o->position.y+=o->velocity.y*o->scale;
 o->position.z+=o->velocity.z*o->scale;
}
