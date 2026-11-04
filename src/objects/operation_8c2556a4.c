#include "src/include/classes/TItemProArmorParticle.h"
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Arg0_1e4 Arg0_1e4;
typedef struct TItemEquipBase_pe8 TItemEquipBase_pe8;
extern int g_8c44be04;
extern S_g8c44be9c *g_8c44be9c;
extern void TItemEffArmorParticle_create_8c255704(int, int, int, int);
void TItemProArmorParticle_v17_8c2556a4(TItemProArmorParticle *o)
{
    int v2;
    int v1;
    if (o->f1e8 == 2) {
        v1 = (int)g_8c44be04;
        v2 = (int)o->f1e0;
        if (v2 != v1) {
            o->f1e0 = (int)(v1);
            if (o->f1e0 != 0 && o->f1e0 != 0xf) {
                TItemEffArmorParticle_create_8c255704((int)g_8c44be9c, (int)(o->fe8), (int)(o->fe6), (int)(o->f1e4));
            }
        }
    }
}
