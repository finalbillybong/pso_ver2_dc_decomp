#include "src/include/classes/TWindowSubMag.h"
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_24 S_g8c467180_24;
typedef struct S_g8c467180_24_0 S_g8c467180_24_0;
typedef struct TWindowSubMag_p44 TWindowSubMag_p44;
typedef struct TWindowSubMag_p48 TWindowSubMag_p48;
struct TWindowSubMag_p44 {
    char unknown0[0x69];
    char f69;
};
struct S_g8c467180 {
    char unknown0[0x24];
    S_g8c467180_24 *f24;
};
extern char g_8c31a25c[];
extern void operation_8c119764(int, int, int);
void TWindowSubMag_update_step_5_8c191454(TWindowSubMag *o)
{
    int v1;
    v1 = (int)*(int *)((char *)((char *)o->f44 + 0x6c) + (o->f44->f69 << 2));
    if (v1 != o->f21) {
        o->f21 = v1;
        if (v1 == -1) {
            operation_8c119764((int)(o->f48), (int)(g_8c31a25c + 0xe), 0x80);
            return;
        }
        operation_8c119764((int)(o->f48), (int)(*(S_g8c467180_24_0 **)((char *)((char *)(*(S_g8c467180 **)0x8c467180)->f24 + 0x0) + (v1 + 0x23 << 2))), 0x80);
    }
}
