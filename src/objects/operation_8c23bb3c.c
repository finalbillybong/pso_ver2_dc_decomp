#include "src/include/classes/TItemEffDevilCane.h"
typedef struct S_c8c0744dc S_c8c0744dc;
typedef struct S_c8c0744dc_13c S_c8c0744dc_13c;
typedef struct Frame Frame;
typedef struct TItemEffDevilCane_p20 TItemEffDevilCane_p20;
typedef struct TItemEffDevilCane_p24 TItemEffDevilCane_p24;
typedef struct Arg0_28 Arg0_28;
struct S_c8c0744dc {
    char unknown0[0xe4];
    short fe4;
    char unknowne6[0x6];
    int fec;
    char unknownf0[0x4c];
    S_c8c0744dc_13c *f13c;
};
struct Frame {
    char unknown0[0xc];
};
extern S_c8c0744dc *find_record_8c0744dc(int);
extern int call_8c075894(S_c8c0744dc *, void *, void *, Frame *);
extern void operation_8c246154(void *, void *);
extern void operation_8c245f40(void *);
void TItemEffDevilCane_update_8c23bb3c(TItemEffDevilCane *o)
{
    Frame frame;
    S_c8c0744dc *t1;
    int t2;
    if (o->f28 != 0) {
        t1 = find_record_8c0744dc((int)(o->f20));
        if (t1 != 0 && t1->fe4 == 2) {
            t2 = call_8c075894(t1, (void *)(t1->f13c), (void *)(o->f24), (Frame *)((&frame)));
            if (t2 != 0) {
                if (((t1->fec & 0x40)) == 0) {
                    operation_8c246154((void *)(o->f28), (void *)(&frame));
                    return;
                }
                operation_8c245f40((void *)(o->f28));
                return;
            }
        }
    }
    o->f04 |= 1;
}
