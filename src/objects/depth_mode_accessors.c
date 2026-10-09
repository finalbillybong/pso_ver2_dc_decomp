#include "src/include/vector3.h"
typedef struct View { float amount; char unknown4[20]; int mode; } View;
typedef char check_mode[(unsigned long)&((View *)0)->mode==24?1:-1];
extern void transform_at(void *,const Vector3 *,Vector3 *);
void clear_depth_mode(View *o) { o->mode=0; }
void set_depth_mode(View *o) { o->mode=1; }
int depth_amount_negative(const View *o) { return o->amount<0.0f; }
int update_depth_mode(View *o,const Vector3 *position) {
 Vector3 projected;
 transform_at(0,position,&projected);
 if(projected.z<28.0f) o->mode=0; else o->mode=1;
 return o->amount<0.0f;
}
