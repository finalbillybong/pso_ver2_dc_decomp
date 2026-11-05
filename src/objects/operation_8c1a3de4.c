#include "src/include/classes/TWindowSubItem.h"
typedef struct TWindowSubItem_p34 TWindowSubItem_p34;
extern void call_8c1d5eb8(void *);
void TWindowSubItem_update_step_5_8c1a3de4(TWindowSubItem *o, int a1)
{
    if (o->f34 != 0 && a1 != o->f3c) {
        o->f3c = a1;
        call_8c1d5eb8((void *)(o->f34));
    }
}
