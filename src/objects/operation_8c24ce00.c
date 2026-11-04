#include "src/include/classes/TOVS2Wall01.h"
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x20];
    unsigned short f20;
};
extern void call_8c24cadc(TOVS2Wall01 *, int);
extern void create_effect_777c(void *, int);
float TOVS2Wall01_v25_8c24ce00(TOVS2Wall01 *o, Arg1 *a1)
{
    if (a1 != 0 && *(int *)0x8c418248 == a1->f20) {
        *(int *)((char *)o + 0x358) -= 1;
        if (!(o->f358 > 0)) {
            o->f358 = 0;
            call_8c24cadc(o, 1);
        } else {
            call_8c24cadc(o, 0);
        }
        create_effect_777c((void *)(((char *)o + 0x3c)), 0x1d0);
        create_effect_777c((void *)(((char *)o + 0x3c)), 1);
    }
    return 0.0f;
}
