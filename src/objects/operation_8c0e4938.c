#include "src/include/classes/TObjEneBeast.h"
extern int operation_459d8(void *);
extern void operation_8c05428c(void *, int, int);
int operation_8c0e4938(TObjEneBeast *o)
{
    int t1;
    t1 = operation_459d8((void *)o);
    if (t1 != 0) {
        switch (o->f30a) {
        case 0:
            o->f3ac = 0;
            o->f30a = 1;
            o->f30c = 0;
            o->ff0 = 0;
            o->f34 &= -0x4040001;
            operation_8c05428c((void *)o, 0, 0x14000000);
        }
        return 1;
    }
    return 0;
}
