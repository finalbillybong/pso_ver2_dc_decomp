#include "src/include/classes/TOMine.h"
typedef struct TOMine_p60 TOMine_p60;
extern float njSin_8c37eb0c(void *);
extern void update_object_center(void *);
extern void transform_actor_records(void *);
void TOMine_vslot88_8c0fd330(TOMine *o)
{
    float t1;
    if (((o->f350 & 2)) == 0) {
        o->f40 = (o->f58 + 25.0f - o->f40) * 0.5f + 1.0f + o->f40;
        if ((o->f58 + 25.0f) > o->f40) {
            goto L_8c0fd39c;
        }
        o->f40 = o->f58 + 25.0f;
        o->f350 |= 2;
    } else {
        o->f60 = (TOMine_p60 *)((int)o->f60 + 0x800);
        t1 = njSin_8c37eb0c((void *)(o->f60));
        o->f40 += t1;
    }
L_8c0fd39c:;
    update_object_center((void *)o);
    transform_actor_records((void *)o);
}
