#include "src/include/object_vtable.h"
#include "src/include/classes/TODoorCave03.h"
typedef struct S_g8c4e22e0 S_g8c4e22e0;
typedef struct S_g8c4e22e0_42c S_g8c4e22e0_42c;
struct S_g8c4e22e0 {
    char unknown0[0x42c];
    S_g8c4e22e0_42c *f42c;
};
struct S_g8c4e22e0_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
extern int g_8c325dbc;
extern S_g8c4e22e0 *g_8c4e22e0;
extern "C" void call_8c0eeb90(TODoorCave03 *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" TODoorCave03 *TODoorCave03_ctor_8c1ae9bc(TODoorCave03 *o, int a1, int a2)
{
    TODoorCave03 **home = &o;
    (void)home;
    call_8c0eeb90(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c274a60;
    o->tag = (int)(g_8c325dbc);
    o->size = 0x11c;
    o->v6(a2);
    o->f38 = (int)(g_8c4e22e0->f42c->f08);
    o->f28 = (int)(g_8c4e22e0->f42c->f0c);
    copy_actor_records((void *)o, (void *)((void *)0x8c325d90), 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    o->v21();
    o->f10c = 1.0f;
    o->f110 = 1.0f;
    o->f114 = 1.0f;
    o->f118 = 1.0f;
    return o;
}
