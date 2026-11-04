#include "src/include/classes/TTecMegid.h"
typedef struct S_L8c285640 S_L8c285640;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TTecMegid_p14c TTecMegid_p14c;
typedef struct Arg0_14c_0 Arg0_14c_0;
struct S_L8c285640 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_14c_0 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c285640 g_8c285640;
extern void operator_delete_8c18de08(void *, int);
extern void destroy_context_8c0b9ce8(void *, short);
extern void call_8c122774(void *, TTecMegid *);
TTecMegid *TTecMegid_dtor_8c0b5514(TTecMegid *o, int a1)
{
    unsigned int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c266060;
        v1 = (unsigned int)0;
        while ((unsigned int)*(int *)((char *)&g_8c285640.f04 + (o->fcc << 3)) > v1) {
            (*(Arg0_14c_0 **)((char *)((char *)o->f14c + 0x0) + (v1 << 2)))->f04 |= 1;
            v1 = (unsigned int)(v1 + 1);
        }
        operator_delete_8c18de08((void *)(o->f14c), v1);
        destroy_context_8c0b9ce8((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
