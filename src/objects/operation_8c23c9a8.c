#include "src/include/classes/TItemWpnFast.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TItemTimer_ctor_8c1ab01c(int, TItemWpnFast *, void *, int);
void TItemWpnFast_v49_8c23c9a8(TItemWpnFast *o)
{
    int t1;
    o->f280 = 0;
    if (o != 0) {
        t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
        if (t1 != 0) {
            TItemTimer_ctor_8c1ab01c(t1, o, (void *)((void *)0x8c23cc5c), 0x3c);
        }
    }
}
