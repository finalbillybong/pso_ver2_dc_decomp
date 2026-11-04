#include "src/include/classes/TBoss4Bishi.h"
extern void call_8c012884(TBoss4Bishi *);
extern void operation_8c1bca48(void *);
void TBoss4Bishi_v71_8c1bca1c(TBoss4Bishi *o)
{
    if (o->f390 != 3) {
        call_8c012884(o);
        operation_8c1bca48((void *)o);
    }
}
