#include "src/include/classes/TSlicerHistory.h"
void TSlicerHistory_update_8c137ea0(TSlicerHistory *o)
{
    o->f40 -= 0.2f;
    if (0.0f > o->f40) {
        o->f40 = 0.0f;
        o->f04 |= 1;
    }
}
