#include "src/include/classes/TTecRaBarta.h"
typedef struct S_L8c285688 S_L8c285688;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TTecRaBarta_p110 TTecRaBarta_p110;
typedef struct Arg0_110_0 Arg0_110_0;
struct S_L8c285688 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_110_0 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c285688 g_8c285688;
extern void clear_emit_slot(int);
extern void operator_delete_8c18de08(void *);
extern void destroy_effect_d870(void *, short);
extern void operation_8c122774(void *, void *);
TTecRaBarta *TTecRaBarta_dtor_8c0b75a4(TTecRaBarta *o, int a1)
{
    unsigned int v1;
    int off;
    if (o != 0) {
        o->dispatch = (void *)0x8c266138;
        v1 = (unsigned int)0;
        off = 0x110;
        while ((unsigned int)*(int *)((char *)&g_8c285688.f04 + (o->f80 << 3)) > v1) {
            (*(Arg0_110_0 **)((char *)*(void **)((char *)o + off) + (v1 << 2)))->f04 |= 1;
            v1 = (unsigned int)(v1 + 1);
        }
        clear_emit_slot((int)(o->f108));
        operator_delete_8c18de08((void *)(o->f110));
        destroy_effect_d870((void *)o, (short)0);
        if ((short)a1 > 0) {
            operation_8c122774(g_8c4d97e0, (void *)o);
        }
    }
    return o;
}
