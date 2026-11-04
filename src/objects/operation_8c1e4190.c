#include "src/include/classes/TOContainerAncientItemCommon.h"
typedef struct TOContainerAncientItemCommon_p28 TOContainerAncientItemCommon_p28;
typedef struct TOContainerAncientItemCommon_p38 TOContainerAncientItemCommon_p38;
typedef struct TOContainerAncientItemCommon_p64 TOContainerAncientItemCommon_p64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_30 S_vv2_30;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_4 S_vv3_4;
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    char unknown8[0x24];
    S_vv1_2c *f2c;
};
struct S_vv2 {
    char unknown0[0x4];
    S_vv2_4 *f04;
    char unknown8[0x28];
    S_vv2_30 *f30;
};
struct S_vv3 {
    char unknown0[0x4];
    S_vv3_4 *f04;
};
extern int g_8c4e30c0;
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void call_8c3aa702(void *);
extern void call_8c3a9436(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c391c94(void);
extern void call_8c391cc4(void);
void operation_8c1e4190(TOContainerAncientItemCommon *o)
{
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv3 *v3;
    if (g_8c4e30c0 != 0) {
        switch (o->f30a) {
        case 0:
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njRotateY_8c37df90(0, (void *)(o->f64));
            call_8c3827d8((void *)(o->f28));
            v1 = (S_vv1 *)o->f38;
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)((int)v1 + 8));
            call_8c3aa702((void *)(v1->f04));
            v2 = (S_vv2 *)v1->f2c;
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)((int)v2 + 8));
            call_8c3a9436((void *)(v2->f04));
            njPopMatrixEx_8c38ad10();
            v3 = (S_vv3 *)v2->f30;
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)((int)v3 + 8));
            call_8c391c94();
            call_8c3aa702((void *)(v3->f04));
            call_8c391cc4();
            njPopMatrixEx_8c38ad10();
            njPopMatrixEx_8c38ad10();
            njPopMatrixEx_8c38ad10();
        }
    }
}
