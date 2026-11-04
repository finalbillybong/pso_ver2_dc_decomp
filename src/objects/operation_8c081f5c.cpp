#include "src/include/classes/TObjDoorKey.h"
typedef struct TObjDoorKey_p12c TObjDoorKey_p12c;
extern "C" void set_effect_bit0(void *);
extern "C" void clear_effect_bit0(void *);
extern "C" void call_8c081d60(TObjDoorKey *);
extern "C" void call_8c081e38(TObjDoorKey *);
extern "C" void TObjDoorKey_render_8c081f5c(TObjDoorKey *o)
{
    int t1;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 == 0) {
        if (o->f12c == 0) {
            return;
        }
        set_effect_bit0((void *)(o->f12c));
        return;
    }
    if (o->f12c != 0) {
        clear_effect_bit0((void *)(o->f12c));
    }
    switch (o->f10c) {
    case 0:
        call_8c081d60(o);
        return;
    case 1:
        call_8c081e38(o);
    }
}
