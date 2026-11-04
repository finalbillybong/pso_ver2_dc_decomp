#include "src/include/classes/TWindowSubMag.h"
typedef struct TWindowSubMag_p34 TWindowSubMag_p34;
typedef struct Arg0_34_0 Arg0_34_0;
typedef struct TWindowSubMag_p38 TWindowSubMag_p38;
typedef struct TWindowSubMag_p3c TWindowSubMag_p3c;
typedef struct TWindowSubMag_p44 TWindowSubMag_p44;
typedef struct TWindowSubMag_p48 TWindowSubMag_p48;
typedef struct S_vv1 S_vv1;
typedef struct S_vv12 S_vv12;
typedef struct S_vv14 S_vv14;
typedef struct S_vv3 S_vv3;
struct S_vv1 {
    char f00;
    char unknown1[0x3];
    float f04;
};
struct S_vv3 {
    float f00;
};
struct S_vv12 {
    char f00;
    char unknown1[0x3];
    int f04;
};
struct S_vv14 {
    int f00;
};
struct TWindowSubMag_p34 {
    char unknown0[0x64];
    int f64;
};
extern void njPushMatrixEx_8c38ae68(void);
extern void call_8c384610(int);
extern void call_8c38a714(int, void *);
extern void call_8c3be280(int, void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void operation_8c0bbc90(void *, int);
void operation_8c0bc414(TWindowSubMag *o)
{
    S_vv1 *v1;
    S_vv3 *v3;
    int v2;
    S_vv12 *v12;
    S_vv14 *v14;
    int v13;
    if (o->f48 != 0) {
        int v2;
        njPushMatrixEx_8c38ae68();
        call_8c384610(0);
        v1 = (S_vv1 *)o->f3c;
        v3 = (S_vv3 *)o->f48;
        v2 = (int)0x118;
        while (v1->f00 >= 0) {
            v3->f00 = v1->f04;
            njPushMatrixEx_8c38ae68();
            call_8c38a714(0, (void *)(& *(int *)((char *)((char *)*(Arg0_34_0 **)((char *)((char *)o->f34 + 0x0) + (v2)) + 0x0) + (v1->f00 << 6))));
            call_8c3be280(0, (void *)((int)v1 + 8), (void *)((int)v3 + 4));
            njPopMatrixEx_8c38ad10();
            v1 = (S_vv1 *)((char *)v1 + 20);
            v3 = (S_vv3 *)((char *)v3 + 16);
        }
        njPopMatrixEx_8c38ad10();
    }
    njPushMatrixEx_8c38ae68();
    call_8c384610(0);
    v12 = (S_vv12 *)o->f38;
    v14 = (S_vv14 *)o->f44;
    v13 = (int)0x118;
    while (v12->f00 >= 0) {
        v14->f00 = o->f34->f64 + v12->f04;
        njPushMatrixEx_8c38ae68();
        call_8c38a714(0, (void *)(& *(int *)((char *)((char *)*(Arg0_34_0 **)((char *)((char *)o->f34 + 0x0) + (v13)) + 0x0) + (v12->f00 << 6))));
        call_8c3be280(0, (void *)((int)v12 + 8), (void *)((int)v14 + 4));
        njPopMatrixEx_8c38ad10();
        v12 = (S_vv12 *)((char *)v12 + 24);
        v14 = (S_vv14 *)((char *)v14 + 16);
    }
    njPopMatrixEx_8c38ad10();
    operation_8c0bbc90((void *)o, (int)((void *)0x8c305980));
}
