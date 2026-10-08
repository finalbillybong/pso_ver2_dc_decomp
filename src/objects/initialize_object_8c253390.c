#include "src/include/vector3.h"
/* Provisional accessed prefix, not the full base class. */
typedef struct View { unsigned int tag; char unknown4[20]; void *dispatch; short unknown28; unsigned short size; int field; } View;
#define CHECK(field,offset) typedef char check_##field[(unsigned long)&((View *)0)->field==offset?1:-1]
CHECK(tag,0); CHECK(dispatch,24); CHECK(size,30); CHECK(field,32);
typedef char check_prefix[sizeof(View)==36?1:-1];
View *initialize_object_8c253390(View *o,void *parent) { ((void (*)(View *,void *))0x8c0330e4)(o,parent); o->dispatch=(void *)0x8c280244; o->tag=*(unsigned int *)0x8c33fb30; o->size=36; o->field=0; return o; }
