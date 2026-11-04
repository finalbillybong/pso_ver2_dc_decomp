#include "src/include/classes/TWindowKeyBoardSoft.h"
extern void call_8c1decf0(TWindowKeyBoardSoft *);
extern void call_8c1def88(TWindowKeyBoardSoft *);
extern void call_8c1df294(TWindowKeyBoardSoft *);
extern void operation_8c1dfac0(void *);
extern void operation_8c1dfb18(void *);
extern void call_8c0db30c(TWindowKeyBoardSoft *);
extern void interpolate_view_parameters(void *);
void TWindowKeyBoardSoft_update_8c1de1d8(TWindowKeyBoardSoft *o)
{
    int v1;
    v1 = !(o->f34 & 1);
    if (v1 == 0) {
        call_8c1decf0(o);
        call_8c1def88(o);
        call_8c1df294(o);
        operation_8c1dfac0((void *)o);
        operation_8c1dfb18((void *)o);
    }
    call_8c0db30c(o);
    interpolate_view_parameters((void *)o);
}
