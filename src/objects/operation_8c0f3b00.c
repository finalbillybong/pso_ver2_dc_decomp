#include "src/include/classes/TObjEneRe7BeruraPunch.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjEneRe7BeruraPunch_p108 TObjEneRe7BeruraPunch_p108;
typedef struct TObjEneRe7BeruraPunch_p10c TObjEneRe7BeruraPunch_p10c;
typedef struct TObjEneRe7BeruraPunch_p110 TObjEneRe7BeruraPunch_p110;
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
extern void operation_8c0f3384(int, int);
extern void destroy_field_8c0fbfa4(void *, short);
extern void destroy_context_8c0f34a0(void *, short);
extern void call_8c122774(void *, TObjEneRe7BeruraPunch *);
TObjEneRe7BeruraPunch *TObjEneRe7BeruraPunch_dtor_8c0f3b00(TObjEneRe7BeruraPunch *o, int a1)
{
    S_vv1 *v1;
    S_vv4 *v4;
    if (o != 0) {
        o->dispatch = (void *)0x8c268820;
        if (o->f108 != 0) {
            v1 = (S_vv1 *)o->f108;
            v1->f04 |= 1;
            o->f108 = (TObjEneRe7BeruraPunch_p108 *)0;
        }
        if (o->f10c != 0) {
            v4 = (S_vv4 *)o->f10c;
            v4->f04 |= 1;
            o->f10c = (TObjEneRe7BeruraPunch_p10c *)0;
        }
        if (o->f110 != 0) {
            operation_8c0f3384((int)(o->f110), 1);
            o->f110 = (TObjEneRe7BeruraPunch_p110 *)0;
        }
        destroy_field_8c0fbfa4((void *)(((char *)o + 0x130)), (short)-1);
        destroy_context_8c0f34a0((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
