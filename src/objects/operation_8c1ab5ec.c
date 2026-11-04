#include "src/include/classes/TFontSmallHelp.h"
void TFontSmallHelp_update_8c1ab5ec(TFontSmallHelp *o)
{
    o->f4c += 1;
    if (o->f50 > 0) {
        if (o->f4c >= o->f50) {
            o->f04 |= 0x10;
            o->f04 |= 1;
        }
    }
}
