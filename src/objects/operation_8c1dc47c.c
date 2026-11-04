#include "src/include/classes/TOHealGeneral.h"
typedef struct TOHealGeneral_p30 TOHealGeneral_p30;
typedef struct Arg0_30_0 Arg0_30_0;
extern void call_8c1dba74(void *);
void operation_8c1dc47c(TOHealGeneral *o)
{
    if (!(o->f82 >= o->f86)) {
        call_8c1dba74(*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f82 << 2)));
        o->f82 += 1;
    }
}
