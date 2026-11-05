#include "src/include/classes/TItemEffShield.h"
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_0 Arg0_28_0;
extern void create_effect_7b30(void *, void *, int, int);
void TItemEffShield_update_step_8c1c7424(TItemEffShield *o)
{
    int v2;
    int v1;
    v2 = (int)0;
    v1 = (int)-1;
    while (v2 != 8) {
        if (*(int *)((char *)((char *)o->f28 + 0x0) + (v2 << 2)) != (int)v1) {
            create_effect_7b30((void *)(((char *)o + 0x34)), (void *)(((char *)o + 0x40)), (int)(*(Arg0_28_0 **)((char *)((char *)o->f28 + 0x0) + (v2 << 2))), 4);
        }
        v2 = (int)(v2 + 1);
    }
}
