#include "src/include/classes/TSetEvtDestroy.h"
typedef struct TSetEvtDestroy_p20 TSetEvtDestroy_p20;
typedef struct TSetEvtDestroy_p34 TSetEvtDestroy_p34;
struct TSetEvtDestroy_p20 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2];
    short f08;
    short f0a;
};
extern int call_8c09e550(short, short, void *);
extern int paired_array_has_active_item(void *);
extern void store_pair_8c1876c0(void *);
extern int operation_8c1876d8(void);
extern void operation_8c110e00(int);
void TSetEvtDestroy_update_8c187584(TSetEvtDestroy *o)
{
    int t1;
    int t2;
    int t3;
    switch (o->f30) {
    case 0:
        if (((o->f20->f04 & 0x10)) != 0) {
            o->f30 = 2;
        }
        if (--o->f2c >= 0) {
            return;
        }
        t1 = call_8c09e550(o->f20->f08, o->f20->f0a, (void *)(o->f34));
        if (t1 != 0) {
            o->f30 = 1;
            return;
        }
        o->f30 = 2;
        return;
    case 1:
        t2 = paired_array_has_active_item((void *)(o->f34));
        if (t2 != 0) {
            return;
        }
        o->f20->f04 |= 0x10;
        o->f30 = 2;
        return;
    case 2:
        if (((o->f20->f04 & 8)) == 0) {
            o->f20->f04 |= 8;
            store_pair_8c1876c0((void *)(((char *)o + 0x24)));
            t3 = operation_8c1876d8();
            if (t3 == 0) {
                operation_8c110e00((int)(o->f20->f08));
            }
        }
        o->f20->f04 &= -5;
        o->f04 |= 1;
    }
}
