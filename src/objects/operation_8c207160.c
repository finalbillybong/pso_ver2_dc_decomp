#include "src/include/classes/TWindowSubComCardList.h"
typedef struct TWindowSubComCardList_p9c TWindowSubComCardList_p9c;
typedef struct S_vv3 S_vv3;
struct TWindowSubComCardList_p9c {
    char f00;
};
struct S_vv3 {
    char unknown0[0x79];
    char f79;
};
extern int g_8c4db9e8;
extern char g_8c335d2c[];
extern void operation_8c15761c(void *);
extern void operation_8c156d30(TWindowSubComCardList *, void *, int, int);
extern void call_8c156d48(TWindowSubComCardList *, void *, int, int, int);
void operation_8c207160(TWindowSubComCardList *o)
{
    int v1;
    int v2;
    S_vv3 *v3;
    operation_8c15761c((void *)o);
    v1 = (int)0;
    v2 = (int)(o->f9c->f00 * 7);
    v3 = (S_vv3 *)(g_8c4db9e8 + 4 + (v2 << 7));
    while (7 > v1) {
        if (v2 >= 0x64) {
            goto L_8c2071c0;
        }
        if (((v3->f79 & 1)) == 0) {
            goto L_8c2071c0;
        }
        operation_8c156d30(o, (void *)((int)v3 + 8), 7, v2);
        v1 = (int)(v1 + 1);
        v2 = (int)(v2 + 1);
        v3 = (S_vv3 *)((char *)v3 + 128);
    }
L_8c2071c0:;
    if (!(o->top > 0)) {
        call_8c156d48(o, (void *)((g_8c335d2c + 0x16)), 0x14, -1, -0x979798);
    }
}
