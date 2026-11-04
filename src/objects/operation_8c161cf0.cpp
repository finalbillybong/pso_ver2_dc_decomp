#include "src/include/object_vtable.h"
#include "src/include/classes/TODoorMachine01.h"
typedef struct S_g8c4db200 S_g8c4db200;
typedef struct S_g8c4db200_42c S_g8c4db200_42c;
typedef struct S_g8c4db200_430 S_g8c4db200_430;
typedef struct TODoorMachine01_pf4 TODoorMachine01_pf4;
struct S_g8c4db200 {
    char unknown0[0x42c];
    S_g8c4db200_42c *f42c;
    S_g8c4db200_430 *f430;
};
struct S_g8c4db200_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct S_g8c4db200_430 {
    char unknown0[0x4];
    int f04;
};
struct TODoorMachine01_pf4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c316f34;
extern S_g8c4db200 *g_8c4db200;
extern "C" void call_8c0eeb90(TODoorMachine01 *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" TODoorMachine01 *TODoorMachine01_ctor_8c161cf0(TODoorMachine01 *o, int a1, int a2)
{
    TODoorMachine01 **home = &o;
    (void)home;
    call_8c0eeb90(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26f798;
    o->tag = (int)(g_8c316f34);
    o->size = 0x124;
    o->v6(a2);
    o->f38 = (int)(g_8c4db200->f42c->f08);
    o->f28 = (int)(g_8c4db200->f42c->f0c);
    o->ff4 = (TODoorMachine01_pf4 *)g_8c4db200->f430->f04;
    o->fec = (float)(unsigned int)o->ff4->f04 - 1.0f;
    o->ff0 = 0.5f;
    copy_actor_records((void *)o, (void *)((void *)0x8c316f08), 1);
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
