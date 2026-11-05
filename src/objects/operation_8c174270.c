#include "src/include/classes/TObjItemNameSelect.h"
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_504 S_g8c467180_2c_504;
typedef struct S_g8c467180_c S_g8c467180_c;
typedef struct S_g8c467180_c_0 S_g8c467180_c_0;
typedef struct TObjItemNameSelect_p20 TObjItemNameSelect_p20;
typedef struct TObjItemNameSelect_p24 TObjItemNameSelect_p24;
struct Frame {
    float f04;
    float f08;
    float f0c;
    float f10;
};
struct S_g8c467180 {
    char unknown0[0xc];
    S_g8c467180_c *f0c;
    char unknown10[0x1c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x504];
    S_g8c467180_2c_504 *f504;
};
extern char g_8c318df4[];
extern void TObject_ctor_8c0330e4(void *, void *);
extern int operation_8c156c24(int, int);
extern void add_wrapper_8c156d30(void *, void *, int, int);
extern void operation_8c1570b4(void *, float, float);
extern void position_menu_label_8c1576fc(void *);
extern void operation_8c0dc610(void *, float);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
TObjItemNameSelect *TObjItemNameSelect_ctor_8c174270(TObjItemNameSelect *o, int a1)
{
    Frame frame;
    TObjItemNameSelect **home = &o;
    int v1;
    int t1;
    int t2;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c270204;
    o->tag = (int)(*(int *)0x8c318dec);
    o->size = 0x28;
    (&frame)->f0c = 408.0f;
    (&frame)->f10 = 301.0f;
    t1 = operation_8c156c24((int)(&(&frame)->f0c), 0x19);
    o->f20 = (TObjItemNameSelect_p20 *)t1;
    v1 = (int)0;
    while (0x1a > v1) {
        if (v1 > 0) {
            add_wrapper_8c156d30((void *)(o->f20), (void *)(*(S_g8c467180_c_0 **)((char *)((char *)(*(S_g8c467180 **)0x8c467180)->f0c + 0x0) + (*(int *)((char *)0x8c286668 + (v1 << 2)) << 2))), 6, v1);
        } else {
            add_wrapper_8c156d30((void *)(o->f20), (void *)((g_8c318df4 + 0x3d7)), 6, v1);
        }
        v1 = (int)(v1 + 1);
    }
    operation_8c1570b4((void *)(o->f20), 216.0f, 144.0f);
    position_menu_label_8c1576fc((void *)(o->f20));
    operation_8c0dc610((void *)(o->f20), -11000.0f);
    (&frame)->f0c = 18.0f;
    (&frame)->f10 = 355.0f;
    (&frame)->f04 = 342.0f;
    (&frame)->f08 = 90.0f;
    t2 = create_fitted_pair_grid_view((void *)(&(&frame)->f0c), (void *)(&(&frame)->f04));
    o->f24 = (TObjItemNameSelect_p24 *)t2;
    if (o->f24 != 0) {
        operation_8c119764((int)(o->f24), (int)((*(S_g8c467180 **)0x8c467180)->f2c->f504), 0x81);
    }
    return o;
}
