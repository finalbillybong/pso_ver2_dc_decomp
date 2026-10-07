#include "src/include/proximity_object.h"
#define base_at ((void (*)(ProximityObject *,void *))0x8c01d1ec)
extern void *create_at(Vector3 *,int *,int,int);
ProximityObject *initialize_proximity_object(ProximityObject *p,void *parent,void *argument) {
 ProximityObject **home=&p;
 base_at(p,parent);
 p->dispatch=(void *)0x8c2747f8;
 p->name=*(void **)0x8c324f48;
 p->extent=0x9c;
 (*(void (**)(ProximityObject *,void *))((unsigned char *)p->dispatch+0x20))(p,argument);
 p->effect=0;
 p->radius=p->field_6c;
 if(p->radius<0.0f) p->radius=30.0f;
 p->effect=create_at(&p->position,p->angles,0x1ca,0x40);
 return p;
}
