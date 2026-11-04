#include "src/include/classes/TWindowKeyBoardHard.h"
typedef struct Arg0_78 Arg0_78;
int operation_8c1e09e8(TWindowKeyBoardHard *o, int a1)
{
    unsigned int v2;
    int v1;
    int v3;
    a1 = (unsigned char)a1;
    v1 = (int)(void *)0x8c32b25c;
    v2 = (unsigned int)0;
    while ((unsigned int)7 > v2) {
        v3 = (unsigned char)*(unsigned char *)((char *)((char *)v2 + 0x0) + (v1));
        if (a1 == v3) {
            if (((*(unsigned char *)((char *)((char *)o->f78 + 0x0) + ((int)((void *)0x8c32b263))) & 1 << v2)) == 0) {
                return 0;
            }
            o->f74 = (int)(v2);
            return 1;
        }
        v2 = (unsigned int)(v2 + 1);
    }
    return 0;
}
