#include "src/include/classes/TPlayerBattleCtrl.h"
extern int g_8c41bd10;
extern void operation_8c2425e0(void *);
void TPlayerBattleCtrl_update_8c24259c(TPlayerBattleCtrl *o)
{
    if (g_8c41bd10 == 0) {
        if (o->f20 != o->f28) {
            if (o->f24 != -1) {
                o->f24 = -1;
                operation_8c2425e0((void *)o);
            }
            o->f20 = (int)(o->f28);
            o->f24 = 0;
        }
        operation_8c2425e0((void *)o);
    }
}
