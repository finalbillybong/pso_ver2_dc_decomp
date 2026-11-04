#include "src/include/classes/TFontSmallTask.h"
void TFontSmallTask_update_8c0ee608(TFontSmallTask *o)
{
    int v1;
    switch (o->f4c) {
    case 0:
        if (--o->f48 >= 0) {
            return;
        }
        o->f4c = 1;
        o->f04 &= -0x11;
        return;
    }
    o->f24 += -1.4f;
    v1 = (int)((int)o->f40 + 1);
    o->f40 = (int)(v1);
    if (v1 >= o->f44) {
        o->f04 |= 0x10;
        o->f04 |= 1;
    }
}
