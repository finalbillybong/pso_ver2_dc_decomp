#include "src/include/classes/TWindowSubEquip.h"
typedef struct S_c8c03b55c S_c8c03b55c;
typedef struct S_g8c418248 S_g8c418248;
typedef struct TWindowSubEquip_p2c TWindowSubEquip_p2c;
typedef struct TWindowSubEquip_p30 TWindowSubEquip_p30;
struct S_c8c03b55c {
    char unknown0[0xe8];
    int fe8;
};
extern int lookup_low_id(int);
extern int operation_8c1cdc80(void *);
extern S_c8c03b55c *call_8c03b55c(int, int);
extern void call_8c1d5e2c(void *, int);
void operation_8c1d4c44(TWindowSubEquip *o)
{
    int v2;
    int t1;
    int t2;
    S_c8c03b55c *t3;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        t2 = operation_8c1cdc80((void *)(o->f30));
        t3 = call_8c03b55c((int)(t1 + 0xbcc), t2);
        if (t3 == 0) {
            v2 = (int)-1;
        } else {
            v2 = (int)t3->fe8;
        }
        if (v2 != o->f24) {
            o->f24 = (int)(v2);
            call_8c1d5e2c((void *)(o->f2c), v2);
        }
    }
}
