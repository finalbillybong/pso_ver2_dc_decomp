#include "src/include/types/ViewParameters.h"
typedef struct ViewParameters_p30 ViewParameters_p30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x4];
    float f10;
    float f14;
    char unknown18[0x8];
    int f20;
};
extern void call_8c0e2328(S_vv4 *, float);
void operation_8c157138(ViewParameters *o)
{
    float v1;
    S_vv4 *v4;
    unsigned int v3;
    float v2;
    v1 = (float)o->target2;
    v1 = (float)(v1 - 18.0f);
    v2 = (float)(o->target2 * 0.5f - 9.0f);
    v3 = (unsigned int)0;
    while ((unsigned int)o->f86 > v3) {
        v4 = (S_vv4 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v3 << 2));
        if (v4->f20 != 0) {
            call_8c0e2328(v4, v1);
            if (v4->f14 > 18.0f) {
                v4->f08 = 0.0f;
            } else {
                v4->f08 = v2 - v4->f10 * 0.5f;
            }
        }
        v3 = (unsigned int)(v3 + 1);
    }
}
