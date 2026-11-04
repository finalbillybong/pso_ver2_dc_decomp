#include "src/include/classes/TObjGrass.h"
extern int operation_459d8(void *);
int TObjGrass_v48_8c04d380(TObjGrass *o)
{
    int t1;
    t1 = operation_459d8((void *)o);
    if (t1 != 0) {
        switch (o->f30a) {
        case 0:
            o->f3c8 = 0;
            o->f30c = 2;
            o->ff0 = 1;
            o->f34 &= -0x4040001;
        }
        return 1;
    }
    return 0;
}
