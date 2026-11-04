#include "src/include/classes/TODoorCave01.h"
typedef struct Arg1 Arg1;
struct Arg1 {
    short f00;
};
void TODoorCave01_v05_8c132ce0(TODoorCave01 *o, Arg1 *a1)
{
    if (a1->f00 == 1) {
        o->f108 |= 0xf0001;
    }
}
