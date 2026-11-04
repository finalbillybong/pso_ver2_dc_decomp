#include "src/include/classes/TOKey.h"
extern "C" void call_8c027090(TOKey *);
extern "C" void operation_8c1133cc(TOKey *o)
{
    int t1;
    int t2;
    switch (o->f108) {
    case 0:
        switch (o->f10c) {
        case 0:
            t1 = o->v11(400.0f, 20.0f);
            if (t1 != 0) {
                call_8c027090(o);
            }
            break;
        }
        return;
    case 1:
        t2 = o->v11(400.0f, 20.0f);
        if (t2 != 0) {
            call_8c027090(o);
        }
    }
}
