#include "src/include/classes/TTecGiFoie.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_x22352_0 S_x22352_0;
typedef struct S_x23952_0 S_x23952_0;
struct S_x23952_0 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int effect_query_is_true(void *);
extern void destroy_effect_d870(void *, short);
extern void call_8c122774(void *, TTecGiFoie *);
TTecGiFoie *TTecGiFoie_dtor_8c0b204c(TTecGiFoie *o, int a1)
{
    int v3;
    int v2;
    int v1;
    int t1;
    if (o != 0) {
        o->dispatch = (void *)0x8c265edc;
        v2 = (int)0;
        v1 = (int)0x108;
        while (2 > v2) {
            v3 = (int)(v2 << 2);
            t1 = effect_query_is_true((void *)(*(S_x22352_0 **)((char *)((char *)((int)o + v1) + 0x0) + (v3))));
            if (t1 != 0) {
                (*(S_x23952_0 **)((char *)((char *)((int)o + v1) + 0x0) + (v3)))->f04 |= 1;
            }
            v2 = (int)(v2 + 1);
        }
        destroy_effect_d870((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
