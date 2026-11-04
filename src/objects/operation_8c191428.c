#include "src/include/classes/TWindowSubMag.h"
typedef struct TWindowSubMag_p30 TWindowSubMag_p30;
typedef struct TWindowSubMag_p3c TWindowSubMag_p3c;
extern int operation_8c1cdc80(void *);
extern void call_8c1d5eb8(void *, int);
void operation_8c191428(TWindowSubMag *o)
{
    int t1;
    t1 = operation_8c1cdc80(o->f30);
    if (t1 != o->f28) {
        o->f28 = t1;
        call_8c1d5eb8(o->f3c, t1);
    }
}
