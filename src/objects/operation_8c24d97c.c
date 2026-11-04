#include "src/include/classes/TItemObjStarAtomizer.h"
typedef struct Frame Frame;
typedef struct TItemObject_p13c TItemObject_p13c;
typedef struct S_x47664 S_x47664;
struct TItemObject_p13c {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x396];
    int f3b8;
};
struct Frame {
    char f00;
    char f01;
    char unknown2[0x2];
    short f04;
    short f06[3];
};
struct S_x47664 {
    char unknown0[0x4];
    short f04;
};
extern int g_8c418248;
extern int find_entry_8c0d9e2c(int, int, int);
extern void operation_8c0368a8(void *);
void TItemObjStarAtomizer_v42_8c24d97c(TItemObjStarAtomizer *o)
{
    Frame frame;
    int v1;
    char *v61;
    int v2;
    int t1;
    v1 = (int)(o->f13c->f20 == g_8c418248);
    if (v1 != 0) {
        v61 = (char *)o->f13c->f3b8;
        if (v61 != 0) {
            t1 = find_entry_8c0d9e2c((int)(v61), 4, 0xa);
            if (t1 != 0) {
                (&frame)->f00 = 0x66;
                (&frame)->f01 = 3;
                (&frame)->f04 = o->f13c->f20;
                v2 = (int)0;
                while (v2 != 3) {
                    *(short *)((char *)frame.f06 + (v2 << 1)) = ((S_x47664 *)(t1 + 0xa0 + (v2 << 3)))->f04;
                    v2 = (int)(v2 + 1);
                }
                operation_8c0368a8((void *)(&frame));
            }
        }
    }
}
