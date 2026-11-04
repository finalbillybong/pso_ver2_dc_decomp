#include "src/include/classes/TItemTexLoad.h"
typedef struct CBlock12 {
    char bytes[12];
} CBlock12;
typedef struct Frame Frame;
typedef struct Arg0_20 Arg0_20;
typedef struct TItemTexLoad_p2c TItemTexLoad_p2c;
struct Frame {
    char f00;
    char unknown1[0xb];
};
extern int operation_8c03ed10(int);
extern void call_8c0787cc(void *, int);
extern void call_8c3877a8(int, void *);
extern void operation_8c03ed70(int);
extern void apply_resource_37d534(void *);
extern void call_8c34d4e8(void *);
void operation_8c22c1c4(TItemTexLoad *o)
{
    Frame frame;
    int t1;
    *(CBlock12 *)&(&frame)->f00 = *(CBlock12 *)&*(char *)0x8c338314;
    t1 = operation_8c03ed10((int)(&frame));
    if (t1 != 0) {
        call_8c0787cc((void *)(o->f20), t1);
        call_8c3877a8(t1, (void *)(((char *)o + 0x30)));
        operation_8c03ed70((int)(&frame));
        o->f24 = 2;
        return;
    }
    if (o->f24 == 2) {
        apply_resource_37d534((void *)(((char *)o + 0x30)));
    }
    if (o->f24 == 1) {
        call_8c34d4e8((void *)(o->f2c));
    }
    o->f24 = 0;
    o->f28 = -1;
}
