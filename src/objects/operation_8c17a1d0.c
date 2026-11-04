#include "src/include/classes/TItemWpnOriginalSaber.h"
typedef struct Arg0_234 Arg0_234;
extern void njRotateZ_8c37e02c(int, void *);
extern void operation_172c14(void *, int);
void TItemWpnOriginalSaber_v57_8c17a1d0(TItemWpnOriginalSaber *o)
{
    if (*(int *)0x8c4689f0 == 2) {
        njRotateZ_8c37e02c(0, (void *)(o->f234));
        operation_172c14((void *)(&o->f234), 0x1999);
    }
}
