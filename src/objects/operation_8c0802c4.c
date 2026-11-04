#include "src/include/classes/TObjRainCtrl.h"
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TObjRain_ctor_8c07fd68(void *, int, int);
void TObjRainCtrl_update_8c0802c4(TObjRainCtrl *o)
{
    int t1;
    if (!(--o->f20 >= 0)) {
        t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xfc);
        if (t1 != 0) {
            TObjRain_ctor_8c07fd68((void *)t1, (int)(*(S_g8c44be98 **)0x8c44be98), 9);
        }
        o->f20 = 2;
    }
}
