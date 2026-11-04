#include "src/include/classes/TObjEneMe1Canadin.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjEneMe1Canadin_p424 TObjEneMe1Canadin_p424;
typedef struct TObjEneMe1Canadin_p4bc TObjEneMe1Canadin_p4bc;
typedef struct S_vv1 S_vv1;
typedef struct S_vv4 S_vv4;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct S_vv4 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c052124(void *);
extern void destroy_field_8c114790(void *, short);
extern void destroy_color_rise_8c05bd84(void *, short);
extern void call_8c122774(void *, TObjEneMe1Canadin *);
TObjEneMe1Canadin *TObjEneMe1Canadin_dtor_8c090a00(TObjEneMe1Canadin *o, int a1)
{
    S_vv1 *v1;
    S_vv4 *v4;
    if (o != 0) {
        o->dispatch = (void *)0x8c265520;
        if (o->f4bc != 0) {
            v1 = (S_vv1 *)o->f4bc;
            v1->f04 |= 1;
            o->f4bc = (TObjEneMe1Canadin_p4bc *)0;
        }
        v4 = (S_vv4 *)o->f424;
        v4->f04 |= 1;
        o->f424 = (TObjEneMe1Canadin_p424 *)0;
        operation_8c052124((void *)o);
        destroy_field_8c114790((void *)(((char *)o + 0x3e8)), (short)-1);
        destroy_color_rise_8c05bd84((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
