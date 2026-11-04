#include "src/include/classes/TObjContainerBase.h"
typedef struct TObjContainerBase_p37c TObjContainerBase_p37c;
typedef struct Arg1 Arg1;
struct Arg1 {
    short f00;
};
extern "C" void call_8c162e94(TObjContainerBase *, void *, void *);
extern "C" void operation_8c09e6b4(void *);
extern "C" void TObjContainerBase_v05_8c0855c4(TObjContainerBase *o, Arg1 *a1, int a2)
{
    if (a2 != 0) {
        if (a1->f00 != 1) {
            return;
        }
        o->v86();
        call_8c162e94(o, (void *)(((char *)o + 0x3c)), (void *)(o->f37c));
        operation_8c09e6b4((void *)o);
        o->f04 |= 1;
        o->f30a = 1;
        return;
    }
    if (a1->f00 == 1) {
        operation_8c09e6b4((void *)o);
        o->f04 |= 1;
        o->f30a = 1;
    }
}
