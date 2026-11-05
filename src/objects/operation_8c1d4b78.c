#include "src/include/classes/TWindowSubEquip.h"
typedef struct TWindowSubEquip_p30 TWindowSubEquip_p30;
typedef struct TWindowSubEquip_p34 TWindowSubEquip_p34;
extern int operation_8c1cdc80(void *);
extern void call_8c1d4ba4(int, int);
void TWindowSubEquip_update_step_8c1d4b78(TWindowSubEquip *o)
{
    int t1;
    int t2;
    t1 = operation_8c1cdc80(o->f30);
    t2 = operation_8c1cdc80(o->f34);
    call_8c1d4ba4(t1, t2);
}
