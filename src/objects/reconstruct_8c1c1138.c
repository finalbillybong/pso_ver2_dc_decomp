#include "src/include/controller_flags.h"
typedef struct Object { char unknown0[24]; void *dispatch; char unknown28[144]; ControllerFlags *child; } Object;
typedef char check_layout[sizeof(Object)==176 && (unsigned long)&((Object *)0)->dispatch==24 && (unsigned long)&((Object *)0)->child==172 ? 1:-1];
#define base_at ((Object *(*)(Object *,int))0x8c01d2b0)
#define release_at ((void (*)(void *,void *))0x8c122774)
Object *reconstruct_8c1c1138(Object *o,short release) {
    if(o) { o->dispatch=(void *)0x8c2758dc;if(o->child)o->child->flags|=1;base_at(o,0);if(release>0)release_at(*(void **)0x8c4d97e0,o); }
    return o;
}
