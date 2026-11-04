#include "src/include/types/ViewParameters.h"
typedef struct ViewParameters_p30 ViewParameters_p30;
typedef struct Arg0_30_0 Arg0_30_0;
struct Arg0_30_0 {
    int f00;
};
extern void play_se_8c05fbf8(int, int, int, int);
extern void operation_8c19f998(void *);
extern void operation_8c19f980(void *);
void operation_8c1cd89c(ViewParameters *o)
{
    int v1;
    if ((((*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f84 << 2)))->f00 & 0x80)) == 0) {
        play_se_8c05fbf8(0x50001, 0, 0, 0);
        v1 = (int)0;
        while (o->f86 > v1) {
            operation_8c19f998((void *)(*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v1 << 2))));
            v1 = (int)(v1 + 1);
        }
        operation_8c19f980((void *)(*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f84 << 2))));
    }
}
