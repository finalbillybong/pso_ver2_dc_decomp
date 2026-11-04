#include "src/include/classes/TBoss2Joint.h"
typedef struct TObjEneDD_pdc TObjEneDD_pdc;
struct TObjEneDD_pdc {
    char unknown0[0x18];
    int f18;
};
extern void operation_8c05b744(void *);
extern void operation_8c05b77c(void *);
void TBoss2Joint_v99_8c175188(TBoss2Joint *o)
{
    if (((o->fdc->f18 & 6)) != 0) {
        operation_8c05b744((void *)o);
        return;
    }
    operation_8c05b77c((void *)o);
}
