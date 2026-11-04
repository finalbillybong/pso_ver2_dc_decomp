#include "src/include/classes/TOHealGeneral.h"
typedef struct TOHealGeneral_p30 TOHealGeneral_p30;
typedef struct Arg0_30_0 Arg0_30_0;
extern void call_8c19edac(void *, int, int, int);
void TOHealGeneral_ctor_8c19fbe0(TOHealGeneral *o, int a1, int a2, int a3)
{
    if (!(o->f82 >= o->f86)) {
        call_8c19edac((void *)(*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f82 << 2))), a1, a2, a3);
        o->f82 += 1;
    }
}
