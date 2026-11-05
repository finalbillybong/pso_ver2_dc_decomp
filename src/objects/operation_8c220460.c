#include "src/include/classes/TWindowSubSymbolChatFaceType.h"
extern char g_8c41cba0[];
extern int operation_8c01d844(int, int, int, int);
extern void play_se_8c05fbf8(int, int, int, int);
void TWindowSubSymbolChatFaceType_update_step_8c220460(TWindowSubSymbolChatFaceType *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    v1 = (int)(g_8c41cba0 + 0x20);
    t1 = operation_8c01d844(v1, 0xf0, 6, 1);
    if (t1 == 0) {
        t2 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0xf0, 6, 1);
        if (t2 == 0) {
            return;
        }
    }
    play_se_8c05fbf8(0x50000, 0, 0, 0);
    t3 = operation_8c01d844(v1, 0x10, 6, 1);
    if (t3 == 0) {
        t4 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x10, 6, 1);
        if (t4 == 0) {
            goto L_8c2204d0;
        }
    }
    o->f6a -= 1;
L_8c2204d0:;
    t5 = operation_8c01d844(v1, 0x20, 6, 1);
    if (t5 == 0) {
        t6 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x20, 6, 1);
        if (t6 == 0) {
            goto L_8c220500;
        }
    }
    o->f6a += 1;
L_8c220500:;
    t7 = operation_8c01d844(v1, 0x80, 6, 1);
    if (t7 == 0) {
        t8 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x80, 6, 1);
        if (t8 == 0) {
            goto L_8c220530;
        }
    }
    o->f69 += 1;
L_8c220530:;
    t9 = operation_8c01d844(v1, 0x40, 6, 1);
    if (t9 == 0) {
        t10 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x40, 6, 1);
        if (t10 == 0) {
            goto L_8c220560;
        }
    }
    o->f69 -= 1;
L_8c220560:;
    if (!(o->f69 >= 0)) {
        o->f69 = 0;
    }
    if (o->f69 >= 2) {
        o->f69 = 1;
    }
    if (!(o->f6a >= 0)) {
        o->f6a = 0;
    }
    if (o->f6a >= 2) {
        o->f6a = 1;
    }
}
