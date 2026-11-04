#include "src/include/classes/TWindowKeyBoardSoft.h"
typedef struct S_L8c41cba0 S_L8c41cba0;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern int g_8c467188;
extern S_L8c41cba0 g_8c41cba0;
extern void play_se_8c05fbf8(int, int, int, int);
extern void operation_8c1dee8c(void *);
void operation_8c1decf0(TWindowKeyBoardSoft *o)
{
    char v14;
    int v16;
    int v15;
    if ((((&g_8c41cba0)->f28 & 0x30000)) == 0) {
        return;
    }
    play_se_8c05fbf8(0x50000, 0, 0, 0);
    switch (g_8c467188) {
    case 0:
        if (((o->f68 & 1)) != 0) {
            return;
        }
        if ((((&g_8c41cba0)->f28 & 0x10000)) != 0) {
            o->f6d += 1;
        }
        if ((((&g_8c41cba0)->f28 & 0x20000)) != 0) {
            o->f6d -= 1;
        }
        if (!(o->f6d >= 0)) {
            o->f6d += 4;
        }
        v14 = (char)o->f6d;
        if (!(v14 >= 4)) {
            break;
        }
        o->f6d -= 4;
        break;
    case 1:
        v15 = (int)o->f68;
        if (((v15 & 0x80)) != 0) {
            return;
        }
        if (((v15 & 0x10)) != 0) {
            o->f68 = v15 & -0x11;
            break;
        }
        o->f68 = v15 | 0x10;
        break;
    case 2:
    case 3:
    case 4:
        v16 = (int)o->f68;
        if (((v16 & 0x80)) != 0) {
            return;
        }
        if ((((&g_8c41cba0)->f28 & 0x10000)) != 0) {
            if (((v16 & 0x10)) != 0) {
                o->f68 = v16 & -0x11;
                o->f68 &= -0x21;
                break;
            }
            o->f68 = v16 | 0x10;
            o->f68 &= -0x21;
            break;
        }
        if (((v16 & 1)) != 0) {
            break;
        }
        if (((v16 & 0x20)) != 0) {
            o->f68 = v16 & -0x11;
            o->f68 &= -0x21;
            break;
        }
        o->f68 = v16 | 0x20;
        o->f68 &= -0x11;
    }
    operation_8c1dee8c((void *)o);
}
