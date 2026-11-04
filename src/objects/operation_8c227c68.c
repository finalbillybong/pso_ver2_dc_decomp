#include "src/include/classes/TAdDrawLineCtrl.h"
typedef struct TAdDrawLineCtrl_p24 TAdDrawLineCtrl_p24;
extern void update_hierarchy(void *);
void TAdDrawLineCtrl_update_8c227c68(TAdDrawLineCtrl *o)
{
    if (o->f24 != 0) {
        update_hierarchy((void *)(o->f24));
        return;
    }
    o->f04 |= 1;
}
