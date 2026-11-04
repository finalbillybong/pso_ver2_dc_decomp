#include "src/include/classes/TBoss2DeRolLe.h"
extern void call_8c144c30(TBoss2DeRolLe *);
extern void call_8c1452f8(int, void *);
void operation_8c144bf8(TBoss2DeRolLe *o)
{
    o->f3dc |= 0x88;
    call_8c144c30(o);
    call_8c1452f8(0x30006, (void *)(((char *)o + 0x3c)));
}
