#include "src/include/object_vtable.h"
#include "src/include/classes/TODoorCave01.h"
typedef struct S_g8c4d9a80 S_g8c4d9a80;
typedef struct S_g8c4d9a80_42c S_g8c4d9a80_42c;
typedef struct S_g8c4d9a80_430 S_g8c4d9a80_430;
typedef struct TODoorCave01_pf4 TODoorCave01_pf4;
struct S_g8c4d9a80 {
    char unknown0[0x42c];
    S_g8c4d9a80_42c *f42c;
    S_g8c4d9a80_430 *f430;
};
struct S_g8c4d9a80_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct S_g8c4d9a80_430 {
    char unknown0[0x4];
    int f04;
};
struct TODoorCave01_pf4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c3129ac;
extern S_g8c4d9a80 *g_8c4d9a80;
extern "C" void call_8c0eeb90(TODoorCave01 *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" TODoorCave01 *TODoorCave01_ctor_8c1323dc(TODoorCave01 *o, int a1, int a2)
{
    TODoorCave01 **home = &o;
    (void)home;
    call_8c0eeb90(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26ccc8;
    o->tag = (int)(g_8c3129ac);
    o->size = 0x124;
    o->v6(a2);
    o->f38 = (int)(g_8c4d9a80->f42c->f08);
    o->f28 = (int)(g_8c4d9a80->f42c->f0c);
    o->ff4 = (TODoorCave01_pf4 *)g_8c4d9a80->f430->f04;
    o->fec = (float)(unsigned int)o->ff4->f04 - 1.0f;
    o->ff0 = 0.5f;
    copy_actor_records((void *)o, (void *)((void *)0x8c312980), 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    o->v21();
    if (!(o->f8c >= 0)) {
        o->f8c = 0;
    } else {
        if (o->f8c > 4) {
            o->f8c = 4;
        }
    }
    o->f10c = (int)(o->f8c);
    o->f110 = 4 - (int)o->f10c;
    o->f114 = 1.0f;
    o->f118 = 1.0f;
    o->f11c = 1.0f;
    o->f120 = 1.0f;
    return o;
}
