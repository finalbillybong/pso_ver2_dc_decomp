#include "src/include/classes/TObjCity_Season_XmasTree.h"
typedef struct S_g8c4e2edc S_g8c4e2edc;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_430 S_vv1_430;
typedef struct S_vv1_430_4 S_vv1_430_4;
struct S_vv1 {
    char unknown0[0x430];
    S_vv1_430 *f430;
};
struct S_vv1_430 {
    char unknown0[0x4];
    S_vv1_430_4 *f04;
};
struct S_vv1_430_4 {
    char unknown0[0x4];
    int f04;
};
void TObjCity_Season_XmasTree_update_8c1d8940(TObjCity_Season_XmasTree *o)
{
    S_vv1 *v1;
    float v4;
    v1 = (S_vv1 *)*(S_g8c4e2edc **)((char *)0x8c4e2edc + (o->fe4 << 2));
    if (v1 != 0) {
        v4 = (float)(float)(unsigned int)(v1->f430->f04->f04 + -1);
        o->fe8 += 0.2f;
        if (!(v4 > o->fe8)) {
            o->fe8 -= v4;
        }
    }
}
