#include "src/include/classes/TItemWpnSpreadGunB.h"
extern int g_8c4689f0;
extern void njTranslate_8c3829bc(int, float, float, float);
void TItemWpnSpreadGunB_v57_8c175804(TItemWpnSpreadGunB *o)
{
    if (g_8c4689f0 == 1) {
        njTranslate_8c3829bc(0, 0.0f, o->f234 * -1.0f, 0.0f);
    }
}
