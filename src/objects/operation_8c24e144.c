#include "src/include/classes/TWindowDuelResult.h"
typedef struct TWindowDuelResult_p68 TWindowDuelResult_p68;
extern int operation_192b4c(void *);
extern void call_8c24e1f4(TWindowDuelResult *);
extern void call_8c24e274(TWindowDuelResult *);
extern void call_8c0db30c(TWindowDuelResult *);
extern void update_view_nodes(void *, void *);
void TWindowDuelResult_update_8c24e144(TWindowDuelResult *o)
{
    int t1;
    if (((o->f34 & 2)) == 0) {
        o->f64 = 0x1000000;
    }
    t1 = operation_192b4c((void *)(o->child));
    if (t1 != 0) {
        call_8c24e1f4(o);
    }
    call_8c24e274(o);
    call_8c0db30c(o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
