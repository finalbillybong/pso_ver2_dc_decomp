#include "src/include/vector3.h"
/* Provisional accessed prefix, not the full base class. */
typedef struct View { unsigned int tag; char unknown4[20]; void *dispatch; short unknown28; unsigned short size; char unknown32[20]; int field; } View;
#define CHECK(field,offset) typedef char check_##field[(unsigned long)&((View *)0)->field==offset?1:-1]
CHECK(tag,0); CHECK(dispatch,24); CHECK(size,30); CHECK(field,52);
typedef char check_prefix[sizeof(View)==56?1:-1];
View *initialize_object_8c248e90(View *o,void *parent,Vector3 *argument,Vector3 *direction,float value) { ((void (*)(View *,void *,Vector3 *,Vector3 *,float))0x8c1abe00)(o,parent,argument,direction,value); o->dispatch=(void *)0x8c27d054; o->tag=*(unsigned int *)0x8c33b124; o->size=100; o->field=0; return o; }
