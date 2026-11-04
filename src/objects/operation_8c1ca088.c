#include "src/include/classes/TWindowQuantity.h"
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct TWindowQuantity_p30 TWindowQuantity_p30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv5 S_vv5;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x4];
    int f04;
};
struct TWindowQuantity_p30 {
    Arg0_30_0 *f00;
    int f04;
};
struct S_vv5 {
    char unknown0[0x8];
    float f08;
};
extern void initialize_base_8c0db1d0(void *, int);
extern int call_8c04b8dc(int);
extern float call_8c19a09c(float);
extern void call_8c0e2278(void *, int, int);
TWindowQuantity *TWindowQuantity_ctor_8c1ca088(TWindowQuantity *o)
{
    TWindowQuantity **home = &o;
    char *v1;
    float v4;
    char *v6;
    S_vv5 *v5;
    float t1;
    int t2;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c328f7c));
    o->dispatch = (void *)0x8c276818;
    o->tag = (int)(*(int *)0x8c328f38);
    o->size = 0x6c;
    v1 = (char *)(*(S_g8c467180 **)0x8c467180)->f2c->f04;
    t2 = call_8c04b8dc((int)(v1));
    v4 = (float)(float)(unsigned int)t2;
    t1 = call_8c19a09c(v4 + 12.0f + 24.0f);
    o->f68 = t1;
    v6 = (char *)o->f30->f04;
    v5 = (S_vv5 *)v6;
    call_8c0e2278((void *)(o->f30->f00), (int)(v1), 0);
    v5->f08 = v4 + 8.0f + 12.0f + 24.0f;
    return o;
}
