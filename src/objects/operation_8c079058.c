#include "src/include/classes/TObjEneDarkGunner.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_40c Arg0_40c;
typedef struct TObjEneDarkGunner_p41c TObjEneDarkGunner_p41c;
typedef struct TObjEneDarkGunner_p420 TObjEneDarkGunner_p420;
struct Arg0_40c {
    char unknown0[0x4];
    short f04;
};
struct TObjEneDarkGunner_p41c {
    char unknown0[0x4];
    short f04;
};
struct TObjEneDarkGunner_p420 {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c052124(void *);
extern void destroy_field_8c0fbfa4(void *, short);
extern void TObjEnemyCustom_dtor_8c0c23c8(void *, short);
extern void call_8c122774(void *, TObjEneDarkGunner *);
TObjEneDarkGunner *TObjEneDarkGunner_dtor_8c079058(TObjEneDarkGunner *o, int a1)
{
    int v1;
    if (o != 0) {
        o->vtable = (void *)0x8c263e38;
        operation_8c052124((void *)o);
        v1 = (int)0;
        while (4 > v1) {
            if (*(int *)((char *)((char *)o + 0x40c) + (v1 << 2)) != 0) {
                (*(Arg0_40c **)((char *)((char *)o + 0x40c) + (v1 << 2)))->f04 |= 1;
            }
            v1 = (int)(v1 + 1);
        }
        if (o->f41c != 0) {
            o->f41c->f04 |= 1;
        }
        if (o->f420 != 0) {
            o->f420->f04 |= 1;
        }
        destroy_field_8c0fbfa4((void *)(((char *)o + 0x424)), (short)-1);
        TObjEnemyCustom_dtor_8c0c23c8((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
