#include "src/include/classes/TWindowMeseta.h"
typedef struct TWindowMeseta_p30 TWindowMeseta_p30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct TWindowMeseta_p6c TWindowMeseta_p6c;
struct TWindowMeseta_p30 {
    Arg0_30_0 *f00;
};
extern int operation_8c1bd03c(void);
extern void call_8c0fcd0c(void *, void *, float);
extern void call_8c0db30c(TWindowMeseta *);
extern void update_view_nodes(void *, void *);
void TWindowMeseta_update_8c1bcf9c(TWindowMeseta *o)
{
    int t1;
    t1 = operation_8c1bd03c();
    if (t1 != (int)(o->f6c)) {
        o->f6c = (TWindowMeseta_p6c *)t1;
        call_8c0fcd0c((void *)(o->f30->f00), (void *)(o->f6c), 9.0f);
    }
    call_8c0db30c(o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
