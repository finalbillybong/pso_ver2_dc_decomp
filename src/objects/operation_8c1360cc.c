#include "src/include/classes/TODoorAncient09.h"
typedef struct Arg1 Arg1;
struct Arg1 {
    short f00;
};
void TODoorAncient09_v05_8c1360cc(TODoorAncient09 *o, Arg1 *a1)
{
    if (a1->f00 == 1) {
        o->f108 |= 1;
    }
}
