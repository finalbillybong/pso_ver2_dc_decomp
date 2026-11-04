#include "src/include/classes/TObjEnePanarmsAtkColli.h"
extern void call_8c3bdf60(void *, void *);
extern void operation_8c161874(void *);
extern void call_8c05fd7c(int, TObjEnePanarmsAtkColli *, void *, int, int);
extern void call_8c161908(TObjEnePanarmsAtkColli *);
void TObjEnePanarmsAtkColli_update_8c1617c8(TObjEnePanarmsAtkColli *o)
{
    if (!(--o->f39c >= 0)) {
        o->f04 |= 1;
        return;
    }
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
    call_8c3bdf60((void *)(&o->f3c), (void *)(((char *)o + 0x318)));
    o->f394 += o->f398;
    switch (o->f390) {
    case 0:
        operation_8c161874((void *)o);
        return;
    case 1:
        call_8c05fd7c(0x3002a, o, (void *)(&o->f3c), 0, 0);
        call_8c161908(o);
    }
}
