#include "src/include/classes/TObjGrass.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_3e8 Arg0_3e8;
struct Arg0_3e8 {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c052124(void *);
extern void destroy_field_8c114790(void *, short);
extern void TObjEnemy_dtor_8c0120f4(void *, int);
extern void call_8c122774(void *, TObjGrass *);
TObjGrass *TObjGrass_dtor_8c04ca48(TObjGrass *o, int a1)
{
    int v2;
    int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c261ed4;
        v1 = (int)0;
        while (2 > v1) {
            v2 = (int)(v1 << 2);
            if (*(int *)((char *)((char *)o + 0x3e8) + (v2)) != 0) {
                (*(Arg0_3e8 **)((char *)((char *)o + 0x3e8) + (v2)))->f04 |= 1;
                *(int *)((char *)((char *)o + 0x3e8) + (v2)) = 0;
            }
            v1 = (int)(v1 + 1);
        }
        operation_8c052124((void *)o);
        destroy_field_8c114790((void *)(((char *)o + 0x3cc)), (short)-1);
        TObjEnemy_dtor_8c0120f4((void *)o, 0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
