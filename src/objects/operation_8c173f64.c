#include "src/include/classes/TObjItemNameEntry.h"
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_508 S_g8c467180_2c_508;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjItemNameEntry_p20 TObjItemNameEntry_p20;
typedef struct TObjItemNameEntry_p24 TObjItemNameEntry_p24;
struct Frame {
    float f04;
    float f08;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x508];
    S_g8c467180_2c_508 *f508;
};
struct TObjItemNameEntry_p24 {
    char unknown0[0x80];
    unsigned short f80;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void call_8c051a98(int, TObjItemNameEntry *, int, int, int);
extern void operation_8c051d5c(void *, float, float);
extern void operation_8c051db4(void *, float, float);
extern void operation_8c051d88(void *, float, float);
extern int operation_8c156c24(int, int);
extern void add_wrapper_8c156d30(TObjItemNameEntry_p24 *, void *, int, int);
extern void operation_8c1570b4(void *, float, float);
extern void operation_8c157138(void *);
TObjItemNameEntry *TObjItemNameEntry_ctor_8c173f64(TObjItemNameEntry *o, int a1)
{
    Frame frame;
    TObjItemNameEntry **home = &o;
    int t1;
    int t2;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c270220;
    o->tag = (int)(*(int *)0x8c318de8);
    o->size = 0x28;
    t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x30);
    if (t1 == 0) {
        for (;;) {
        }
    }
    if (t1 != 0) {
        call_8c051a98(t1, o, 8, 0, 1);
    }
    o->f20 = (TObjItemNameEntry_p20 *)t1;
    if (o->f20 != 0) {
        (&frame)->f04 = 167.0f;
        (&frame)->f08 = 255.0f;
        operation_8c051d5c((void *)(o->f20), (&frame)->f04, (&frame)->f08);
        (&frame)->f04 = 18.0f;
        (&frame)->f08 = 308.0f;
        operation_8c051db4((void *)(o->f20), (&frame)->f04, (&frame)->f08);
        operation_8c051d88((void *)(o->f20), 0.0f, 10000.0f);
    }
    (&frame)->f04 = 99.0f;
    (&frame)->f08 = 222.0f;
    t2 = operation_8c156c24((int)(&(&frame)->f04), 1);
    o->f24 = (TObjItemNameEntry_p24 *)t2;
    if (o->f24 != 0) {
        add_wrapper_8c156d30((TObjItemNameEntry_p24 *)(o->f24), (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f508), 0x81, 0);
    }
    operation_8c1570b4((void *)(o->f24), 442.0f, 64.0f);
    operation_8c157138((void *)(o->f24));
    o->f24->f80 = (o->f24->f80 & 0xffff) | 0x80;
    return o;
}
