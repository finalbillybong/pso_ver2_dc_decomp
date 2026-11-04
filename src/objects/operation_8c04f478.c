#include "src/include/classes/TObjGrass.h"
typedef struct TObjGrass_pdc TObjGrass_pdc;
struct TObjGrass_pdc {
    char unknown0[0x18];
    int f18;
};
extern void create_effect_777c(void *, int);
extern void refresh_follow_effect_8c0129f4(void *);
extern void operation_8c09e6d0(void *);
void TObjGrass_v71_8c04f478(TObjGrass *o)
{
    if (o->f30a != 8) {
        o->f30a = 8;
        o->f30c = 0;
        o->ff0 = 6;
        o->fdc->f18 &= -0x10002;
        create_effect_777c((void *)(((char *)o + 0x324)), 0xf2);
        refresh_follow_effect_8c0129f4((void *)o);
        operation_8c09e6d0((void *)o);
    }
}
