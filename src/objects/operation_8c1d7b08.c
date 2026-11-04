#include "src/include/classes/TWindowSubAreaMapDisp.h"
typedef struct TWindowSubAreaMapDisp_p78 TWindowSubAreaMapDisp_p78;
extern void call_8c0db30c(TWindowSubAreaMapDisp *);
extern void operation_8c1d7ef0(void *);
extern void operation_8c1d7fa0(void *);
extern void call_8c199b74(void *);
void TWindowSubAreaMapDisp_update_8c1d7b08(TWindowSubAreaMapDisp *o)
{
    call_8c0db30c(o);
    operation_8c1d7ef0((void *)o);
    operation_8c1d7fa0((void *)o);
    if (!(7.5f > (float)o->f64)) {
        call_8c199b74((void *)(o->f78));
    }
}
