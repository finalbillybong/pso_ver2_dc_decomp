#include "src/include/classes/TObjEnemy.h"
void operation_8c0e692c(TObjEnemy *o)
{
    if (!(o->f350 >= 0)) {
        o->f350 = 0;
    } else {
        if (o->f350 > 2) {
            o->f350 = 2;
        }
    }
    switch (o->f350) {
    case 2:
        o->f384 = 0;
        o->f38c = 0x2b;
        return;
    case 1:
        o->f384 = 1;
        o->f38c = 0x2a;
        return;
    }
    o->f384 = 2;
    o->f38c = 0x29;
}
