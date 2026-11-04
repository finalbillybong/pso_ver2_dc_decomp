#include "src/include/classes/TObjDoaEx01.h"
extern void operation_8c05428c(void *, int, int);
void TObjDoaEx01_v20_8c24b454(TObjDoaEx01 *o)
{
    o->fe8 -= o->ff0;
    if (0.0f > o->fe8) {
        o->fe8 = 0.0f;
        o->fe4 = 0;
        operation_8c05428c((void *)o, 0, 0x10);
    }
}
