#include "src/include/classes/TObjEneBm3Fly.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjEneBm3Fly_p474 TObjEneBm3Fly_p474;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c052124(void *);
extern void destroy_color_rise_8c05bd84(void *, short);
extern void call_8c122774(void *, TObjEneBm3Fly *);
TObjEneBm3Fly *TObjEneBm3Fly_dtor_8c054d18(TObjEneBm3Fly *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c262250;
        if (o->f474 != 0) {
            v1 = (S_vv1 *)o->f474;
            v1->f04 |= 1;
            o->f474 = (TObjEneBm3Fly_p474 *)0;
        }
        operation_8c052124((void *)o);
        destroy_color_rise_8c05bd84((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
