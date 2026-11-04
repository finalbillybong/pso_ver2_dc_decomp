#include "src/include/classes/TBoss2Joint.h"
typedef struct TObjEneDD_pdc TObjEneDD_pdc;
struct TObjEneDD_pdc {
    char unknown0[0x18];
    int f18;
};
extern float g_8c286288;
extern "C" void operation_8c05b77c(void *);
extern "C" void operation_8c05b744(void *);
extern "C" void operation_8c05b0ec(void *);
extern "C" void TBoss2Joint_v94_8c1750f4(TBoss2Joint *o)
{
    if (o->f40 < (g_8c286288 - 50.0f)) {
        operation_8c05b77c((void *)o);
        o->fdc->f18 &= -7;
    } else {
        operation_8c05b744((void *)o);
        if (!(30.0f > o->f40)) {
            o->v103();
        } else {
            o->v104();
        }
    }
    operation_8c05b0ec((void *)o);
}
