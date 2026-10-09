#include "src/include/vector3.h"
typedef struct View { char unknown0[32]; Vector3 position; unsigned int angle,transform,resource,variant; float scale,initial,final; int limit,ticks; } View;
typedef char check_position[(unsigned long)&((View *)0)->position==32?1:-1];
typedef char check_angle[(unsigned long)&((View *)0)->angle==44?1:-1];
typedef char check_transform[(unsigned long)&((View *)0)->transform==48?1:-1];
typedef char check_resource[(unsigned long)&((View *)0)->resource==52?1:-1];
typedef char check_scale[(unsigned long)&((View *)0)->scale==60?1:-1];
typedef char check_initial[(unsigned long)&((View *)0)->initial==64?1:-1];
typedef char check_final[(unsigned long)&((View *)0)->final==68?1:-1];
typedef char check_limit[(unsigned long)&((View *)0)->limit==72?1:-1];
typedef char check_ticks[(unsigned long)&((View *)0)->ticks==76?1:-1];
extern void begin_at(void),end_at(void),restore_at(void);
extern void position_at(const Vector3 *);extern void angle_at(int,unsigned int);extern void transform_at(unsigned int);extern void blend_at(float);extern void draw_at(unsigned int,unsigned int,float);
void draw_record_effect(View *o) {
 float ratio=(float)o->ticks/(float)o->limit;float initial=o->initial;float value=ratio*(o->final-initial)+initial;
 if(value>0.01f) {begin_at();position_at(&o->position);angle_at(0,o->angle);transform_at(o->transform);blend_at(value);draw_at(o->resource,o->variant,o->scale);restore_at();end_at();}
}
