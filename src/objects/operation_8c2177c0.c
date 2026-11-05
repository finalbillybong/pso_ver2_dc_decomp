#include "src/include/classes/TWindowSubShortMail.h"
typedef struct TWindowSubShortMail_p24 TWindowSubShortMail_p24;
typedef struct Arg0_50 Arg0_50;
extern int operation_8c1cdc80(void *);
extern void operation_8c1dc6e4(int);
extern void call_8c217ed8(void *);
void TWindowSubShortMail_update_step_2_8c2177c0(TWindowSubShortMail *o)
{
    int t1;
    t1 = operation_8c1cdc80((void *)(o->f24));
    operation_8c1dc6e4(t1);
    call_8c217ed8((void *)(o->f50));
}
