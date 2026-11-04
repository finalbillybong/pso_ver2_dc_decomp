#include "src/include/classes/TWindowRoom.h"
extern void call_8c19a0bc(int, int, int, float);
void operation_8c1cbaf4(TWindowRoom *o, int a1)
{
    call_8c19a0bc(a1, a1 + 0x10, 0, o->f68);
}
