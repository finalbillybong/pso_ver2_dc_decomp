#include "src/include/classes/TItemWpnPsychowand.h"
extern void operation_8c172c30(void *, int, int);
extern void call_8c172c50(void *, float, float);
void TItemWpnPsychowand_v51_8c17a958(TItemWpnPsychowand *o)
{
    operation_8c172c30((void *)(&o->f2b4), 0x38e, 0x2aaa);
    if (o->f2b4 == 0x2aaa) {
        call_8c172c50((void *)(((char *)o + 0x2b0)), 0.5f, 6.0f);
    }
}
