#include "src/include/classes/TObjGrass.h"
void TObjGrass_v70_8c04f290(TObjGrass *o)
{
    if (o->f30a != 7) {
        o->f30a = 7;
        o->ff0 = 5;
        o->f34 &= -0x40001;
    }
    o->f34 &= -0x200001;
}
