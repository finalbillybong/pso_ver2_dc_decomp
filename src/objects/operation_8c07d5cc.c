#include "src/include/classes/TItemMag.h"
extern int call_8c207304(void *);
extern int call_8c18e768(int, int);
extern void flag_owner_8c074ddc(void *);
void TItemMag_v15_8c07d5cc(TItemMag *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = call_8c207304((void *)(((char *)o + 0x1e4)));
    if (!((short)t1 > 0xc8)) {
        t2 = call_8c18e768((int)(o->f1e8), 0x64);
        if ((short)t2 >= 0) {
            t3 = call_8c18e768((int)(o->f1ea), 0x64);
            if ((short)t3 >= 0) {
                t4 = call_8c18e768((int)(o->f1ec), 0x64);
                if ((short)t4 >= 0) {
                    t5 = call_8c18e768((int)(o->f1ee), 0x64);
                    if ((short)t5 >= 0) {
                        return;
                    }
                }
            }
        }
    }
    flag_owner_8c074ddc((void *)o);
}
