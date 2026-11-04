#include "src/include/types/ViewParameters.h"
typedef struct ViewParameters_p30 ViewParameters_p30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct ViewParameters_p90 ViewParameters_p90;
struct Arg0_30_0 {
    int f00;
};
extern void play_se_8c05fbf8(int, int, int, int);
extern void operation_8c19a044(void *, int);
void operation_8c1cd558(ViewParameters *o)
{
    int v1;
    v1 = (int)(*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f84 << 2)))->f00;
    if (((v1 & 4)) == 0 || ((v1 & 0x80)) != 0) {
        play_se_8c05fbf8(0x50006, 0, 0, 0);
        return;
    }
    if (((o->f80 & 0xffff & 0x100)) == 0) {
        play_se_8c05fbf8(0x50001, 0, 0, 0);
    }
    o->f80 = (o->f80 & 0xffff) | 2;
    if (o->secondary != 0) {
        operation_8c19a044((void *)(o->secondary), 2);
    }
}
