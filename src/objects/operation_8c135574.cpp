#include "src/include/object_vtable.h"
#include "src/include/classes/TODoorAncient09.h"
typedef struct S_g8c4d9b00 S_g8c4d9b00;
typedef struct S_g8c4d9b00_42c S_g8c4d9b00_42c;
typedef struct S_g8c4d9b00_430 S_g8c4d9b00_430;
typedef struct S_g8c4d9b04 S_g8c4d9b04;
typedef struct TODoorAncient09_pf4 TODoorAncient09_pf4;
struct S_g8c4d9b04 {
    int f00;
};
struct S_g8c4d9b00 {
    char unknown0[0x42c];
    S_g8c4d9b00_42c *f42c;
    S_g8c4d9b00_430 *f430;
};
struct S_g8c4d9b00_42c {
    char unknown0[0x8];
    int f08;
};
struct S_g8c4d9b00_430 {
    char unknown0[0x4];
    int f04;
};
struct TODoorAncient09_pf4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c312d6c;
extern S_g8c4d9b00 *g_8c4d9b00;
extern S_g8c4d9b04 *g_8c4d9b04;
extern "C" void call_8c0eeb90(TODoorAncient09 *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" TODoorAncient09 *TODoorAncient09_ctor_8c135574(TODoorAncient09 *o, int a1, int a2)
{
    TODoorAncient09 **home = &o;
    (void)home;
    call_8c0eeb90(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26cec4;
    o->tag = (int)(g_8c312d6c);
    o->size = 0x120;
    o->v6(a2);
    o->f28 = (int)(g_8c4d9b04->f00);
    o->f38 = (int)(g_8c4d9b00->f42c->f08);
    o->ff4 = (TODoorAncient09_pf4 *)g_8c4d9b00->f430->f04;
    o->fec = (float)(unsigned int)o->ff4->f04 - 1.0f;
    o->ff0 = o->fec / 30.0f;
    copy_actor_records((void *)o, (void *)((void *)0x8c312d40), 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    if (!(o->f88 >= 0)) {
        o->f88 = 0;
    } else {
        if (o->f88 > 0xfe) {
            o->f88 = 0xfe;
        }
    }
    o->v21();
    o->f10c = (int)o->f88 + 1;
    o->f110 = 0;
    o->f114 = 0;
    o->f118 = 0;
    o->f11c = 0;
    return o;
}
