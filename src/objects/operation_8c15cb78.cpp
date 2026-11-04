#include "src/include/object_vtable.h"
#include "src/include/classes/TOSensorAncient01.h"
typedef struct S_g8c4db140 S_g8c4db140;
typedef struct S_g8c4db140_42c S_g8c4db140_42c;
typedef struct S_g8c4db140_430 S_g8c4db140_430;
typedef struct TOKey_p38 TOKey_p38;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct TOKey_pf4 TOKey_pf4;
struct S_g8c4db140 {
    char unknown0[0x42c];
    S_g8c4db140_42c *f42c;
    S_g8c4db140_430 *f430;
};
struct S_g8c4db140_42c {
    char unknown0[0x8];
    int f08;
};
struct S_g8c4db140_430 {
    char unknown0[0x4];
    int f04;
};
struct TOKey_pf4 {
    char unknown0[0x4];
    int f04;
};
struct TOKey_p38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct Arg0_38_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c3166d8;
extern S_g8c4db140 *g_8c4db140;
extern "C" void TOSensor_ctor_8c15c7cc(TOSensorAncient01 *);
extern "C" void operation_8c112f78(void *);
extern "C" TOSensorAncient01 *TOSensorAncient01_ctor_8c15cb78(TOSensorAncient01 *o, int a1, int a2)
{
    TOSensorAncient01 **home = &o;
    (void)home;
    TOSensor_ctor_8c15c7cc(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26ef38;
    o->tag = (int)(g_8c3166d8);
    o->size = 0x12c;
    o->v6(a2);
    operation_8c112f78((void *)o);
    if (!(o->f90 >= 0)) {
        o->f90 = 0;
    } else {
        if (o->f90 >= 2) {
            o->f90 = 1;
        }
    }
    o->f38 = (TOKey_p38 *)g_8c4db140->f42c->f08;
    o->ff4 = (TOKey_pf4 *)g_8c4db140->f430->f04;
    o->fec = (float)(unsigned int)o->ff4->f04 - 1.0f;
    o->ff0 = 1.0f;
    o->ff8 = 400.0f;
    o->ffc = o->f38->f04->f14;
    o->f104 = o->f6c + 50.0f;
    if (0.0f > o->f104) {
        o->f104 = 0.0f;
    }
    if (!(o->f8c >= 0)) {
        o->f108 = 2;
    } else {
        o->f108 = 1;
    }
    o->f11c = 0x78;
    o->f120 = 0;
    o->f124 = 0.0f;
    o->f128 = 0;
    return o;
}
