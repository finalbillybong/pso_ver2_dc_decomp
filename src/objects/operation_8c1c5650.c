#include "src/include/classes/TItemEffBringer.h"
typedef struct Frame Frame;
struct Frame {
    Vector3 f00;
};
extern int call_8c1abc70(TItemEffBringer *);
extern void create_effect_777c(void *, int);
extern void vector_sub_in_place_8c37f6f0(Frame *, void *);
void TItemEffBringer_v05_8c1c5650(TItemEffBringer *o)
{
    Frame frame;
    int v1;
    int t1;
    (&frame)->f00 = o->f20;
    t1 = call_8c1abc70(o);
    if (t1 == 0) {
        o->f04 |= 1;
        return;
    }
    v1 = (int)0;
    while (v1 != o->f84) {
        create_effect_777c((void *)(&frame), 0x9c);
        vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x88)));
        v1 = (int)(v1 + 1);
    }
}
