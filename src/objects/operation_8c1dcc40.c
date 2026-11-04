#include "src/include/classes/TWindowChat.h"
typedef struct TWindowChat_p24 TWindowChat_p24;
extern void call_8c1dcdf0(TWindowChat *);
extern void operation_8c1dcf9c(void *);
extern int operation_8c1e2330(void *);
void TWindowChat_update_8c1dcc40(TWindowChat *o)
{
    unsigned short v1;
    int t1;
    v1 = (unsigned short)o->f22;
    if (((v1 & 1)) == 0 && ((v1 & 0x10)) == 0 && ((v1 & 0x20)) == 0) {
        call_8c1dcdf0(o);
        operation_8c1dcf9c((void *)o);
        t1 = operation_8c1e2330((void *)(o->f24));
        if (t1 != 0) {
            o->f22 |= 4;
            return;
        }
        o->f22 &= -5;
    }
}
