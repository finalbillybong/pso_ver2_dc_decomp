#include "src/include/object_vtable.h"
#include "src/include/classes/TOFenceAncient01.h"
typedef struct S_g8c470580 S_g8c470580;
typedef struct S_g8c470580_42c S_g8c470580_42c;
typedef struct S_g8c470580_430 S_g8c470580_430;
typedef struct S_g8c470584 S_g8c470584;
typedef struct TOFenceAncient01_p38 TOFenceAncient01_p38;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct TOFenceAncient01_pf4 TOFenceAncient01_pf4;
struct S_g8c470580 {
    char unknown0[0x42c];
    S_g8c470580_42c *f42c;
    S_g8c470580_430 *f430;
};
struct S_g8c470580_42c {
    char unknown0[0x8];
    int f08;
};
struct S_g8c470580_430 {
    char unknown0[0x4];
    int f04;
};
struct TOFenceAncient01_pf4 {
    char unknown0[0x4];
    int f04;
};
struct TOFenceAncient01_p38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct Arg0_38_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c30980c;
extern S_g8c470580 *g_8c470580;
extern S_g8c470584 *g_8c470584;
extern "C" void operation_8c0f22ac(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" TOFenceAncient01 *TOFenceAncient01_ctor_8c0f25a8(TOFenceAncient01 *o, int a1, int a2)
{
    TOFenceAncient01 **home = &o;
    (void)home;
    operation_8c0f22ac((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c268690;
    o->tag = (int)(g_8c30980c);
    o->size = 0x110;
    o->v6(a2);
    o->f38 = (TOFenceAncient01_p38 *)g_8c470580->f42c->f08;
    o->f10c = (int)(o->f8c);
    if (!(o->f10c >= 0)) {
        o->f10c = 0;
    } else {
        if (o->f10c >= 4) {
            o->f10c = 3;
        }
    }
    o->f28 = (int)(*(int *)((char *)((char *)g_8c470584 + 0x0) + (o->f10c << 2)));
    o->ff4 = (TOFenceAncient01_pf4 *)g_8c470580->f430->f04;
    o->fec = (float)(unsigned int)o->ff4->f04 - 1.0f;
    copy_actor_records((void *)o, (void *)((void *)0x8c309788), 3);
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
