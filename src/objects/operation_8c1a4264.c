#include "src/include/classes/TObjNpcHFW00.h"
typedef struct S_g8c2e72d8 S_g8c2e72d8;
struct S_g8c2e72d8 {
    short f00;
};
void TObjNpcHFW00_vslot94_8c1a4264(TObjNpcHFW00 *o, int a1)
{
    if (a1 == 0 || a1 != 1) {
        o->ff0 = (*(S_g8c2e72d8 **)0x8c2e72d8)->f00;
        return;
    }
    o->ff0 = *(short *)0x8c2e72e0;
}
