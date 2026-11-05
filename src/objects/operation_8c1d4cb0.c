#include "src/include/classes/TWindowSubEquip.h"
typedef struct TWindowSubEquip_p2c TWindowSubEquip_p2c;
typedef struct TWindowSubEquip_p34 TWindowSubEquip_p34;
extern int operation_8c1cdc80(void *);
extern void call_8c1d5eb8(void *, int);
void TWindowSubEquip_update_step_3_8c1d4cb0(TWindowSubEquip *o)
{
    int t1;
    t1 = operation_8c1cdc80((void *)(o->f34));
    if (t1 != o->f28) {
        o->f28 = (int)(t1);
        call_8c1d5eb8((void *)(o->f2c), t1);
    }
}
