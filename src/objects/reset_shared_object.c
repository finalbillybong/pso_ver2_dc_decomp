#include "src/include/shared_object.h"
void reset_shared_object(SharedObjectView *p) {
 p->field_24=0;
 p->field_48.x=p->field_48.y=p->field_48.z=0.0f;
 p->field_54.x=p->field_54.y=p->field_54.z=0.0f;
 p->angles[0]=p->angles[1]=p->angles[2]=0;
 p->field_78.x=p->field_78.y=p->field_78.z=0.0f;
 p->field_84=0;
}
