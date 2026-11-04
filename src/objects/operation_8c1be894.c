#include "src/include/classes/TObjCityMapWarp.h"
typedef struct S_g8c4e2b80 S_g8c4e2b80;
typedef struct S_g8c4e2b80_430 S_g8c4e2b80_430;
typedef struct S_g8c4e2b80_430_2c S_g8c4e2b80_430_2c;
struct S_g8c4e2b80 {
    char unknown0[0x430];
    S_g8c4e2b80_430 *f430;
};
struct S_g8c4e2b80_430 {
    char unknown0[0x2c];
    S_g8c4e2b80_430_2c *f2c;
};
struct S_g8c4e2b80_430_2c {
    char unknown0[0x4];
    int f04;
};
extern int g_8c41cd20;
extern S_g8c4e2b80 *g_8c4e2b80;
extern int g_8c510ba0;
extern void operation_8c0889f0(void *);
void TObjCityMapWarp_update_8c1be894(TObjCityMapWarp *o)
{
    float v3;
    float v4;
    int v6;
    v3 = (float)(float)(unsigned int)(g_8c4e2b80->f430->f2c->f04 + -1);
    o->f120 += 4.0f;
    v4 = (float)o->f120;
    if (!(v3 > v4)) {
        o->f120 = v4 - v3;
    }
    v6 = (int)(g_8c510ba0 != 0);
    if (v6 == 0 && g_8c41cd20 == 0) {
        operation_8c0889f0((void *)o);
    }
}
