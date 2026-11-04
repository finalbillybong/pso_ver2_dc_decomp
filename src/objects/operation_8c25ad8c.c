#include "src/include/classes/TAdPSOPlay.h"
typedef struct TAdPSOPlay_p28 TAdPSOPlay_p28;
typedef struct TAdPSOPlay_p2c TAdPSOPlay_p2c;
extern void request_resource_release(void *);
extern int operation_8c1571f4(void *);
void operation_8c25ad8c(TAdPSOPlay *o)
{
    int t1;
    if (o->f28 != 0) {
        request_resource_release(o->f28);
        o->f28 = (TAdPSOPlay_p28 *)0;
    }
    if (o->f2c != 0) {
        t1 = operation_8c1571f4(o->f2c);
        o->f30 = t1;
        request_resource_release(o->f2c);
        o->f2c = (TAdPSOPlay_p2c *)0;
    }
}
