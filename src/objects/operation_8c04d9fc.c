#include "src/include/classes/TObjGrass.h"
void TObjGrass_v67_8c04d9fc(TObjGrass *o)
{
    if (o->f30a != 1 && o->f30a != 2) {
        o->ff0 = 1;
        if (o->f3b8 == 2) {
            o->f30a = 1;
        } else {
            o->f30a = 2;
        }
        o->f30c = 0;
        o->f34 &= -0x4040001;
    }
}
