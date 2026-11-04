#include "src/include/classes/TObjEneBeast.h"
extern void operation_8c05426c(void *, int, int);
void operation_8c0e3c4c(TObjEneBeast *o)
{
    switch (o->f30a) {
    case 1:
        if (o->f3ac != 0) {
            o->f30a = 0;
            o->f30c = 0;
        }
        break;
    case 0:
        switch (o->f30c) {
        case 2:
            if (o->f3ac != 0) {
                o->f30c = 0;
            }
        }
        break;
    default:
        if (o->f3ac != 0) {
            o->f30a = 0;
        } else {
            o->f30a = 1;
        }
        o->f30c = 0;
        o->ff0 = 0;
        o->f34 |= 0x4040000;
        operation_8c05426c((void *)o, 0, 0x14000000);
    }
}
