#include "src/include/classes/TObjCityAirCar_Ctrl.h"
extern int g_8c3288e8;
extern void TObject_ctor_8c0330e4(void *, void *);
TObjCityAirCar_Ctrl *TObjCityAirCar_Ctrl_ctor_8c1c0dc0(TObjCityAirCar_Ctrl *o, int a1)
{
    char *pm2;
    int *v4;
    int v1;
    int v2;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c27591c;
    o->tag = (int)(g_8c3288e8);
    o->size = 0x7c;
    o->f20 = 0;
    o->f24 = 0.0f;
    o->f28 = 0x14;
    for (v1 = 0; v1 < 5; v1++) {
        v4 = (int *)((char *)o + (v1 << 4) + 0x2c);
        v4[0] = 0;
        v2 = 0;
        v4[1] = 0;
        v4 += 2;
        while (v2 < 2) {
            pm2 = (char *)v4;
            a1 = v2 << 2;
            *(int *)(pm2 + (a1)) = 0;
            v2++;
        }
    }
    return o;
}
