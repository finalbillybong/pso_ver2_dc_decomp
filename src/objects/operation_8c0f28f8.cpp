#include "src/include/object_vtable.h"
#include "src/include/classes/TOFenceAncient02.h"
typedef struct S_g8c4705a0 S_g8c4705a0;
typedef struct S_g8c4705a0_42c S_g8c4705a0_42c;
typedef struct S_g8c4705a0_430 S_g8c4705a0_430;
typedef struct S_g8c4705a4 S_g8c4705a4;
typedef struct TOFenceAncient02_p38 TOFenceAncient02_p38;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct TOFenceAncient02_pf4 TOFenceAncient02_pf4;
struct S_g8c4705a0 {
    char unknown0[0x42c];
    S_g8c4705a0_42c *f42c;
    S_g8c4705a0_430 *f430;
};
struct S_g8c4705a0_42c {
    char unknown0[0x8];
    int f08;
};
struct S_g8c4705a0_430 {
    char unknown0[0x4];
    int f04;
};
struct TOFenceAncient02_pf4 {
    char unknown0[0x4];
    int f04;
};
struct TOFenceAncient02_p38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct Arg0_38_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c30994c;
extern S_g8c4705a0 *g_8c4705a0;
extern S_g8c4705a4 *g_8c4705a4;
extern "C" void operation_8c0f22ac(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" TOFenceAncient02 *TOFenceAncient02_ctor_8c0f28f8(TOFenceAncient02 *o, int a1, int a2)
{
    TOFenceAncient02 **home = &o;
    (void)home;
    operation_8c0f22ac((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2686e0;
    o->tag = (int)(g_8c30994c);
    o->size = 0x110;
    o->v6(a2);
    o->f38 = (TOFenceAncient02_p38 *)g_8c4705a0->f42c->f08;
    o->f10c = (int)(o->f8c);
    if (!(o->f10c >= 0)) {
        o->f10c = 0;
    } else {
        if (o->f10c >= 4) {
            o->f10c = 3;
        }
    }
    o->f28 = (int)(*(int *)((char *)((char *)g_8c4705a4 + 0x0) + (o->f10c << 2)));
    o->ff4 = (TOFenceAncient02_pf4 *)g_8c4705a0->f430->f04;
    o->fec = (float)(unsigned int)o->ff4->f04 - 1.0f;
    copy_actor_records((void *)o, (void *)((void *)0x8c3098c8), 3);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    o->f104 = (int)(o->f88);
    if (o->f104 > 0x100) {
        o->f100 = 0;
    } else {
        if (!(o->f104 >= 0)) {
            o->f100 = 1;
        } else {
            o->f100 = 2;
        }
    }
    o->ff8 = 400.0f;
    o->ffc = o->f38->f04->f14;
    return o;
}
