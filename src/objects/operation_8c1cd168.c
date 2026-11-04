#include "src/include/types/ViewParameters.h"
typedef struct ViewParameters_p30 ViewParameters_p30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv22 S_vv22;
struct S_vv22 {
    int f00;
};
extern void call_8c0dc1a4(int, S_vv22 *, int);
void operation_8c1cd168(ViewParameters *o, int a1)
{
    S_vv22 *v22;
    int v1;
    v22 = (S_vv22 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f84 << 2));
    if (((v22->f00 & 1)) != 0) {
        v1 = (int)(((o->f80 & 0xffff & 2)) != 0);
        call_8c0dc1a4(a1, v22, v1);
    }
}
