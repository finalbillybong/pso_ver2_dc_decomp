#include "src/include/types/ViewParameters.h"
typedef struct ViewParameters_p30 ViewParameters_p30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct ViewParameters_p90 ViewParameters_p90;
typedef struct S_vv4 S_vv4;
typedef struct S_vv8 S_vv8;
struct S_vv4 {
    int f00;
};
struct S_vv8 {
    int f00;
    char unknown4[0x1c];
    int f20;
};
void operation_8c157290(ViewParameters *o)
{
    int v3;
    int v1;
    S_vv8 *v8;
    int *p;
    int f;
    if (!(o->f84 >= o->f86)) {
        v1 = -9;
        v8 = (S_vv8 *)*(int *)((char *)((char *)o->f30 + 0x0) + (o->f84 << 2));
        v3 = -3;
        while (v8->f20 != 0 && (v8->f00 & 0x10) != 0) {
            if (++o->f84 >= o->f86) {
                break;
            }
            v8 = (S_vv8 *)*(int *)((char *)((char *)o->f30 + 0x0) + (o->f84 << 2));
            p = (int *)((char *)o->secondary + (o->f84 << 3));
            f = *p;
            if ((f & 2) != 0) {
                *p = f & v3;
                v8->f00 &= v1;
            }
        }
    }
}
