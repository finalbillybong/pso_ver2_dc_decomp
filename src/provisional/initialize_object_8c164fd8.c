#include "src/include/vector3.h"
/* Provisional layout checked against observed scalar accesses. */
typedef struct Object164fd8 {
 unsigned int tag; char unknown4[20]; void *dispatch; short unknown28; unsigned short size30;
 char unknown32[28]; Vector3 position, sampled; char unknown84[4]; float height;
 char unknown92[4]; int pitch,yaw; char unknown104[44]; float a,b,c;
 Vector3 normal; int ground_state,variant,zero180; float scale;
} Object164fd8;
#define CHECK(field,offset) typedef char check_##field[(unsigned long)&((Object164fd8 *)0)->field==offset?1:-1]
CHECK(tag,0); CHECK(dispatch,24); CHECK(size30,30); CHECK(position,60); CHECK(sampled,72); CHECK(height,88);
CHECK(pitch,96); CHECK(yaw,100); CHECK(a,148); CHECK(b,152); CHECK(c,156); CHECK(normal,160);
CHECK(ground_state,172); CHECK(variant,176); CHECK(zero180,180); CHECK(scale,184);
typedef char check_object_size[sizeof(Object164fd8)==188?1:-1];
#define random_at ((int (*)(void))0x8c12b944)
Object164fd8 *initialize_object_8c164fd8(Object164fd8 *o,void *owner,const Vector3 *position) {
 Object164fd8 **home=&o;
 ((void (*)(Object164fd8 *,void *))0x8c01d1ec)(o,owner);
 o->dispatch=(void *)0x8c26f8fc;
 o->tag=*(unsigned int *)0x8c317430;
 o->size30=188;
 o->position=*position;
 o->variant=(int)(((float)random_at()/32768.0f)*6.0f);
 if(!((int (*)(Vector3 *,Vector3 *,Vector3 *))0x8c042258)(&o->position,&o->sampled,&o->normal)) o->ground_state=0;
 else { o->ground_state=2; o->height=o->sampled.y+*(float *)((char *)0x8c2864b8+((unsigned int)o->variant<<2)); }
 o->yaw=(int)(((float)random_at()/32768.0f)*65536.0f);
 o->pitch=(int)((((float)random_at()/32768.0f-0.5f)*2.0f)*4096.0f);
 o->a=0.0f; o->b=0.0f; o->c=0.0f;
 o->zero180=0; o->scale=1.0f;
 return o;
}
