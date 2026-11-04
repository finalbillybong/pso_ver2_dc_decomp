#include "src/include/classes/TOHealGeneral.h"
typedef struct TOHealGeneral_p30 TOHealGeneral_p30;
typedef struct Arg0_30_0 Arg0_30_0;
extern void call_8c19eeec(void *, int, int, int, char, char, char, int, int);
void operation_8c1cd918(TOHealGeneral *o, int a1, int a2, int a3, char a4, char a5, char a6, int a7, int a8)
{
    short i;
    i = o->f82;
    if (!(i >= o->f86)) {
        call_8c19eeec(*(Arg0_30_0 **)((char *)o->f30 + (i << 2)), a1, a2, a3, a4, a5, a6, a7, a8);
        o->f82 += 1;
    }
}
