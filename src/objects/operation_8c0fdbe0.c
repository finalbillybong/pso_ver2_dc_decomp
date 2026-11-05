#include "src/include/classes/TOMine.h"
extern int get_game_mode_8c01c25c(void);
void TOMine_vslot95_8c0fdbe0(TOMine *o)
{
    char *v1;
    int t1;
    o->f358 = (int)o->f74;
    v1 = (char *)o->f358;
    if (!((int)(v1) >= 0)) {
        o->f354 = 0;
        return;
    }
    if ((int)(v1) > 0) {
        o->f354 = 1;
        return;
    }
    t1 = get_game_mode_8c01c25c();
    if (t1 == 0xf) {
        o->f354 = 0;
        o->f90 = 0x1e;
        return;
    }
    o->f354 = 2;
}
