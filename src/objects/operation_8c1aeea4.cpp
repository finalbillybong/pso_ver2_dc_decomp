#include "src/include/object_vtable.h"
#include "src/include/classes/TODoorMachine02.h"
typedef struct S_g8c4e2300 S_g8c4e2300;
typedef struct S_g8c4e2300_42c S_g8c4e2300_42c;
typedef struct S_g8c4e2300_430 S_g8c4e2300_430;
typedef struct TODoorMachine02_pf4 TODoorMachine02_pf4;
struct S_g8c4e2300 {
    char unknown0[0x42c];
    S_g8c4e2300_42c *f42c;
    S_g8c4e2300_430 *f430;
};
struct S_g8c4e2300_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct S_g8c4e2300_430 {
    char unknown0[0x4];
    int f04;
};
struct TODoorMachine02_pf4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c325e7c;
extern S_g8c4e2300 *g_8c4e2300;
extern "C" void call_8c0eeb90(TODoorMachine02 *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" TODoorMachine02 *TODoorMachine02_ctor_8c1aeea4(TODoorMachine02 *o, int a1, int a2)
{
    TODoorMachine02 **home = &o;
    (void)home;
    call_8c0eeb90(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c274ac0;
    o->tag = (int)(g_8c325e7c);
    o->size = 0x11c;
    o->v6(a2);
    o->f38 = (int)(g_8c4e2300->f42c->f08);
    o->f28 = (int)(g_8c4e2300->f42c->f0c);
    o->ff4 = (TODoorMachine02_pf4 *)g_8c4e2300->f430->f04;
    o->fec = (float)(unsigned int)o->ff4->f04 - 1.0f;
    o->ff0 = 0.5f;
    copy_actor_records((void *)o, (void *)((void *)0x8c325e50), 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    o->v21();
    o->f10c = 1.0f;
    o->f110 = 1.0f;
    o->f114 = 1.0f;
    o->f118 = 1.0f;
    return o;
}
