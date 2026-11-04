#include "src/include/classes/TObjEneRe2Flower.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjEneRe2Flower_p444 TObjEneRe2Flower_p444;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c052124(void *);
extern void destroy_field_8c114790(void *, short);
extern void destroy_color_rise_8c05bd84(void *, short);
extern void call_8c122774(void *, TObjEneRe2Flower *);
TObjEneRe2Flower *TObjEneRe2Flower_dtor_8c05cd10(TObjEneRe2Flower *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c262974;
        if (o->f444 != 0) {
            v1 = (S_vv1 *)o->f444;
            v1->f04 |= 1;
            o->f444 = (TObjEneRe2Flower_p444 *)0;
        }
        operation_8c052124((void *)o);
        destroy_field_8c114790((void *)(((char *)o + 0x410)), (short)-1);
        destroy_color_rise_8c05bd84((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
