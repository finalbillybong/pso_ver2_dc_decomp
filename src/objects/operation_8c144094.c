#include "src/include/classes/TBoss2DeRolLe.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_600 Arg0_600;
typedef struct TBoss2DeRolLe_p638 TBoss2DeRolLe_p638;
typedef struct TBoss2DeRolLe_p63c TBoss2DeRolLe_p63c;
typedef struct Arg0_640 Arg0_640;
typedef struct Arg0_650 Arg0_650;
typedef struct Arg0_664 Arg0_664;
typedef struct TBoss2DeRolLe_p670 TBoss2DeRolLe_p670;
typedef struct TBoss2DeRolLe_p6d8 TBoss2DeRolLe_p6d8;
typedef struct TBoss2DeRolLe_p6e8 TBoss2DeRolLe_p6e8;
typedef struct TBoss2DeRolLe_p6ec TBoss2DeRolLe_p6ec;
typedef struct TBoss2DeRolLe_p6f0 TBoss2DeRolLe_p6f0;
typedef struct TBoss2DeRolLe_p75c TBoss2DeRolLe_p75c;
typedef struct Arg0_760 Arg0_760;
typedef struct S_vv1 S_vv1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv12 S_vv12;
typedef struct S_vv18 S_vv18;
typedef struct S_vv21 S_vv21;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_760 {
    char unknown0[0x4];
    short f04;
};
struct S_vv10 {
    char unknown0[0x4];
    short f04;
};
struct S_vv12 {
    char unknown0[0x4];
    short f04;
};
struct S_vv18 {
    char unknown0[0x4];
    short f04;
};
struct S_vv21 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_664 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_650 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_600 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_640 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4da3ac;
extern void operator_delete_8c18de08(void *);
extern void operation_8c0f3384(int, int);
extern void operation_8c052124(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void destroy_color_rise_8c05bd84(void *, short);
extern void call_8c122774(void *, TBoss2DeRolLe *);
TBoss2DeRolLe *TBoss2DeRolLe_dtor_8c144094(TBoss2DeRolLe *o, int a1)
{
    S_vv1 *v1;
    int v4;
    int v5;
    int v9;
    S_vv10 *v10;
    S_vv12 *v12;
    S_vv18 *v18;
    S_vv21 *v21;
    int v24;
    int v25;
    int v28;
    int v29;
    int v30;
    int v32;
    int v33;
    int v34;
    int v36;
    int v37;
    int v38;
    int v40;
    int v41;
    if (o == 0) {
    } else {
        o->dispatch = (void *)0x8c26df5c;
        if (o->f75c != 0) {
            v1 = (S_vv1 *)o->f75c;
            v1->f04 |= 1;
            o->f75c = (TBoss2DeRolLe_p75c *)0;
        }
        v9 = (int)0;
        goto L_8c1440e6;
        v4 = (int)0;
L_8c1440ce:;
        v5 = (int)(v4 << 2);
        if (*(int *)((char *)((char *)o + 0x760) + (v5)) != 0) {
            (*(Arg0_760 **)((char *)((char *)o + 0x760) + (v5)))->f04 |= 1;
            *(int *)((char *)((char *)o + 0x760) + (v5)) = 0;
        }
        v9 = (int)(v4 + 1);
L_8c1440e6:;
        v4 = (int)v9;
        if (6 > v9) {
            goto L_8c1440ce;
        }
        operator_delete_8c18de08((void *)(o->f638));
        o->f638 = (TBoss2DeRolLe_p638 *)0;
        if (o->f6ec != 0) {
            v10 = (S_vv10 *)o->f6ec;
            v10->f04 |= 1;
            o->f6ec = (TBoss2DeRolLe_p6ec *)0;
        }
        if (o->f6f0 != 0) {
            v12 = (S_vv12 *)o->f6f0;
            v12->f04 |= 1;
            o->f6f0 = (TBoss2DeRolLe_p6f0 *)0;
        }
        if (o->f6e8 != 0) {
            operation_8c0f3384((int)(o->f6e8), 1);
            o->f6e8 = (TBoss2DeRolLe_p6e8 *)0;
        }
        if (o->f6d8 != 0) {
            v18 = (S_vv18 *)o->f6d8;
            v18->f04 |= 1;
            o->f6d8 = (TBoss2DeRolLe_p6d8 *)0;
        }
        if (o->f670 != 0) {
            v21 = (S_vv21 *)o->f670;
            v21->f04 |= 1;
            o->f670 = (TBoss2DeRolLe_p670 *)0;
        }
        v28 = (int)2;
        goto L_8c144184;
        v24 = (int)2;
L_8c144170:;
        v25 = (int)(v24 << 2);
        (*(Arg0_664 **)((char *)((char *)o + 0x664) + (v25)))->f04 |= 1;
        *(int *)((char *)((char *)o + 0x664) + (v25)) = 0;
        v28 = (int)(v24 + -1);
L_8c144184:;
        v24 = (int)v28;
        if (v28 >= 0) {
            goto L_8c144170;
        }
        v32 = (int)4;
        goto L_8c1441a8;
        v29 = (int)4;
L_8c144194:;
        v30 = (int)(v29 << 2);
        (*(Arg0_650 **)((char *)((char *)o + 0x650) + (v30)))->f04 |= 1;
        *(int *)((char *)((char *)o + 0x650) + (v30)) = 0;
        v32 = (int)(v29 + -1);
L_8c1441a8:;
        v29 = (int)v32;
        if (v32 >= 0) {
            goto L_8c144194;
        }
        v36 = (int)9;
        goto L_8c1441cc;
        v33 = (int)9;
L_8c1441b8:;
        v34 = (int)(v33 << 2);
        (*(Arg0_600 **)((char *)((char *)o + 0x600) + (v34)))->f04 |= 1;
        *(int *)((char *)((char *)o + 0x600) + (v34)) = 0;
        v36 = (int)(v33 + -1);
L_8c1441cc:;
        v33 = (int)v36;
        if (v36 >= 0) {
            goto L_8c1441b8;
        }
        v40 = (int)3;
        goto L_8c1441f0;
        v37 = (int)3;
L_8c1441dc:;
        v38 = (int)(v37 << 2);
        (*(Arg0_640 **)((char *)((char *)o + 0x640) + (v38)))->f04 |= 1;
        *(int *)((char *)((char *)o + 0x640) + (v38)) = 0;
        v40 = (int)(v37 + -1);
L_8c1441f0:;
        v37 = (int)v40;
        if (v40 >= 0) {
            goto L_8c1441dc;
        }
        operator_delete_8c18de08((void *)(o->f63c));
        operation_8c052124((void *)o);
        v41 = (int)g_8c4da3ac;
        if (v41 == (int)(o)) {
            g_8c4da3ac = 0;
        }
        TObject_dtor_8c03311c((void *)(((char *)o + 0x3f4)), (short)-1);
        destroy_color_rise_8c05bd84((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
