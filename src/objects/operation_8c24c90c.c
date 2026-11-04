#include "src/include/classes/TOVS2Wall01.h"
extern void call_8c027090(void);
extern void call_8c24cadc(TOVS2Wall01 *, int);
void operation_8c24c90c(TOVS2Wall01 *o)
{
    if (o->f378 == 1) {
        call_8c027090();
    }
    if (!(o->f358 > 0)) {
        o->f358 = 0;
        call_8c24cadc(o, 1);
    }
}
