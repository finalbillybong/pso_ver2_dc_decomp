#include "src/include/classes/TWindowSubMagPhoton.h"
extern char g_8c41cba0[];
extern int operation_8c01d844(int, int, int, int);
extern void play_se_8c05fbf8(int, int, int, int);
void TWindowSubMagPhoton_update_step_8c2306c4(TWindowSubMagPhoton *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    v1 = (int)(g_8c41cba0 + 0x20);
    t1 = operation_8c01d844(v1, 0xc0, 6, 1);
    if (t1 == 0) {
        t2 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0xc0, 6, 1);
        if (t2 == 0) {
            return;
        }
    }
    play_se_8c05fbf8(0x50000, 0, 0, 0);
    t3 = operation_8c01d844(v1, 0x80, 6, 1);
    if (t3 == 0) {
        t4 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x80, 6, 1);
        if (t4 == 0) {
            goto L_8c230730;
        }
    }
    o->f69 += 1;
L_8c230730:;
    t5 = operation_8c01d844(v1, 0x40, 6, 1);
    if (t5 == 0) {
        t6 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x40, 6, 1);
        if (t6 == 0) {
            goto L_8c230760;
        }
    }
    o->f69 -= 1;
L_8c230760:;
    if (!(o->f69 >= 0)) {
        o->f69 += 3;
    }
    if (o->f69 >= 3) {
        o->f69 -= 3;
    }
}
