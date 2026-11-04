#include "src/include/classes/TOHealGeneral.h"
typedef struct TOHealGeneral_p30 TOHealGeneral_p30;
typedef struct Arg0_30_0 Arg0_30_0;
extern void call_8c19ebbc(void *);
void operation_8c1cd734(TOHealGeneral *o, int a1)
{
    if (a1 != 0 && !(o->f82 >= o->f86)) {
        call_8c19ebbc(*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f82 << 2)));
        o->f82 += 1;
    }
}
