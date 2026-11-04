#include "src/include/classes/TODoorCave01.h"
extern int get_game_mode_8c01c25c(void);
int TODoorCave01_v21_8c132c78(TODoorCave01 *o)
{
    int t1;
    o->f100 = (int)(o->f88);
    if (o->f100 > 0x100) {
        o->f104 = 0;
    } else {
        if (!(o->f100 >= 0)) {
            o->f104 = 1;
        } else {
            if (!(o->f90 >= 0)) {
                t1 = get_game_mode_8c01c25c();
                if (t1 == 0x10) {
                    o->f104 = 3;
                    goto L_8c132cc0;
                }
            }
            o->f104 = 2;
        }
    }
L_8c132cc0:;
    return (int)(o->f100);
}
