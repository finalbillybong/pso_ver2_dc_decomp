#include "src/include/classes/TObject.h"
typedef struct S_g8c4db520 S_g8c4db520;
typedef struct S_g8c4db520_30 S_g8c4db520_30;
struct S_g8c4db520 {
    char unknown0[0x30];
    S_g8c4db520_30 *f30;
};
extern S_g8c4db520 *g_8c4db520;
void handle_6x77_sync_quest_register_8c1734c0(TObject *o)
{
    S_g8c4db520 *g = g_8c4db520;
    if (g != 0) {
        char *p = (char *)g->f30;
        if ((unsigned int)0xff >= (unsigned int)o->flags) {
            *(int *)(p + (o->flags << 2)) = (int)(o->link_08);
        }
    }
}
