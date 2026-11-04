#include "src/include/classes/TItemObjMagChanger.h"
extern int call_8c03b55c(int, int);
extern void operation_8c07f694(void *, unsigned char);
void TItemObjMagChanger_v42_8c24de2c(TItemObjMagChanger *o)
{
    int t1;
    t1 = call_8c03b55c((int)((int)o->f13c + 0xbcc), 1);
    if (t1 != 0) {
        operation_8c07f694((void *)t1, o->f138);
    }
}
