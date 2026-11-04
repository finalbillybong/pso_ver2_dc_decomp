#include "src/include/classes/TObjPlayer.h"
extern int call_8c03b55c(void *, int);
int operation_8c022ca0(TObjPlayer *o)
{
    int t1;
    t1 = call_8c03b55c((void *)(((char *)o + 0xbcc)), 6);
    if (t1 == 0) {
        return 0;
    }
    if (((o->f310 & 0xe0)) != 0) {
        return 0;
    }
    return 0;
}
