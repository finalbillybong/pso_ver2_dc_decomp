/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18da80
 * function: operation_8c18da80
 * language: c
 * reference size: 612 bytes
 * compiled size: 744 bytes (+21.6%)
 * differing lines: 254 of 263 reference instruction lines
 * differing bytes: 646
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +132 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv58 S_vv58;
typedef struct S_vv59 S_vv59;
typedef struct S_vv59_8 S_vv59_8;
typedef struct S_vv61 S_vv61;
struct Frame {
    char unknown0[0x70];
};
struct S_vv59 {
    char unknown0[0x4];
    int f04;
    S_vv59_8 *f08;
};
struct S_vv58 {
    char f00;
};
struct S_vv61 {
    int f00;
    int f04;
};
struct S_vv59_8 {
    char f00;
};
extern int call_8c18e630(int, S_vv59 *);
extern void call_8c18dce4(int, S_vv59 *);
extern void call_8c18e34c(void);
extern void call_8c18e588(int, S_vv59 *);
extern int call_8c18e40c(int, void *);
extern int call_8c18e394(int, void *);
int operation_8c18da80(int a0)
{
    Frame frame;
    S_vv59 *v59;
    int v57;
    S_vv58 *v58;
    int v60;
    S_vv61 *v61;
    int v56;
    int v62;
    int v63;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    v57 = (int)a0;
    v61 = (S_vv61 *)(&frame);
    v59 = (S_vv59 *)v57;
    v60 = (int)((int)v59 + 0x18);
L_8c18da92:;
    v58 = (S_vv58 *)v59->f08;
    if (v58 != 0) {
        v56 = (int)v58->f00;
        if (((v56 & 0x80)) == 0) {
            goto L_8c18dad4;
        }
    }
    t1 = call_8c18e630(v60, v59);
    call_8c18dce4(t1, v59);
    if (v59->f04 == 0) {
        call_8c18e34c();
    }
    call_8c18e588(v60, v59);
    if (v59->f08 == 0) {
        goto L_8c18da92;
    }
    goto L_8c18dca8;
L_8c18dad4:;
    switch (v56 & 0x1f) {
    case 2:
        v57 = (int)v58;
        goto L_8c18db30;
    case 3:
        v57 = (int)v58;
        goto L_8c18db40;
    case 4:
        v57 = (int)v58;
        goto L_8c18db5a;
    case 5:
        v57 = (int)v58;
        goto L_8c18db6a;
    case 6:
        v57 = (int)v58;
        goto L_8c18db8e;
    case 7:
        v57 = (int)v58;
        goto L_8c18dba8;
    case 8:
        v57 = (int)v58;
        goto L_8c18dbc2;
    case 9:
        v57 = (int)v58;
        goto L_8c18dbe6;
    case 10:
        v57 = (int)v58;
        goto L_8c18dc14;
    case 11:
        v57 = (int)v58;
        goto L_8c18dc24;
    case 12:
        v57 = (int)v58;
        goto L_8c18dc3e;
    case 13:
        v57 = (int)v58;
        goto L_8c18dc56;
    case 15:
        v57 = (int)v58;
        goto L_8c18dc64;
    case 14:
    default:
        goto L_8c18dc8c;
    }
L_8c18db30:;
    t2 = call_8c18e40c((int)(v57 + 1), (void *)((int)v61 + 0x6c));
    v59->f08 = (S_vv59_8 *)(t2 + 4);
    goto L_8c18dca8;
L_8c18db40:;
    t3 = call_8c18e40c((int)(v57 + 1), (void *)((int)v61 + 0x64));
    t4 = call_8c18e40c(t3, (void *)((int)v61 + 0x68));
    v59->f08 = (S_vv59_8 *)(t4 + 4);
    goto L_8c18dca8;
L_8c18db5a:;
    t5 = call_8c18e40c((int)(v57 + 1), (void *)((int)v61 + 0x60));
    v59->f08 = (S_vv59_8 *)(t5 + 4);
    goto L_8c18dca8;
L_8c18db6a:;
    t6 = call_8c18e40c((int)(v57 + 1), (void *)((int)v61 + 0x54));
    t7 = call_8c18e394(t6, (void *)((int)v61 + 0x58));
    t8 = call_8c18e394(t7, (void *)((int)v61 + 0x5c));
    v59->f08 = (S_vv59_8 *)(t8 + 4);
    goto L_8c18dca8;
L_8c18db8e:;
    t9 = call_8c18e40c((int)(v57 + 1), (void *)((int)v61 + 0x4c));
    t10 = call_8c18e40c(t9, (void *)((int)v61 + 0x50));
    v59->f08 = (S_vv59_8 *)(t10 + 4);
    goto L_8c18dca8;
L_8c18dba8:;
    t11 = call_8c18e40c((int)(v57 + 1), (void *)((int)v61 + 0x44));
    t12 = call_8c18e40c(t11, (void *)((int)v61 + 0x48));
    v59->f08 = (S_vv59_8 *)(t12 + 4);
    goto L_8c18dca8;
L_8c18dbc2:;
    t13 = call_8c18e40c((int)(v57 + 1), (void *)((int)v61 + 0x38));
    t14 = call_8c18e40c(t13, (void *)((int)v61 + 0x3c));
    t15 = call_8c18e40c(t14, (void *)((int)v61 + 0x40));
    v59->f08 = (S_vv59_8 *)(t15 + 4);
    goto L_8c18dca8;
L_8c18dbe6:;
    t16 = call_8c18e40c((int)(v57 + 1), (void *)((int)v61 + 0x28));
    t17 = call_8c18e40c(t16, (void *)((int)v61 + 0x2c));
    t18 = call_8c18e394(t17, (void *)((int)v61 + 0x30));
    t19 = call_8c18e394(t18, (void *)((int)v61 + 0x34));
    v59->f08 = (S_vv59_8 *)(t19 + 4);
    goto L_8c18dca8;
L_8c18dc14:;
    t20 = call_8c18e40c((int)(v57 + 1), (void *)((int)v61 + 0x24));
    v59->f08 = (S_vv59_8 *)(t20 + 4);
    goto L_8c18dca8;
L_8c18dc24:;
    t21 = call_8c18e40c((int)(v57 + 1), (void *)((int)v61 + 0x1c));
    t22 = call_8c18e40c(t21, (void *)((int)v61 + 0x20));
    v59->f08 = (S_vv59_8 *)(t22 + 4);
    goto L_8c18dca8;
L_8c18dc3e:;
    t23 = call_8c18e394((int)(v57 + 5), (void *)((int)v61 + 0x14));
    t24 = call_8c18e40c(t23, (void *)((int)v61 + 0x18));
    v59->f08 = (S_vv59_8 *)t24;
    goto L_8c18dca8;
L_8c18dc56:;
    t25 = call_8c18e40c((int)(v57 + 1), (void *)((int)v61 + 0x10));
    v59->f08 = (S_vv59_8 *)t25;
    goto L_8c18dca8;
L_8c18dc64:;
    t26 = call_8c18e394((int)(v57 + 1), (void *)((int)v61 + 4));
    t27 = call_8c18e394(t26, (void *)((int)v61 + 8));
    t28 = call_8c18e40c(t27, (void *)((int)v61 + 0xc));
    v62 = (int)&*(int *)((char *)((char *)t28 + 0x0) + (v61->f04 << 2));
    v59->f08 = (S_vv59_8 *)v62;
    goto L_8c18dca8;
L_8c18dc8c:;
    call_8c18e34c();
    goto L_8c18dca8;
L_8c18dc96:;
    call_8c18e40c((int)(((char *)v59->f08 + 0x1)), (void *)v61);
    v59->f08 = (S_vv59_8 *)((int)v59->f08 + v61->f00);
L_8c18dca8:;
    v63 = (int)(v59->f08->f00 & 0x1f);
    if ((char)v63 == 1) {
        goto L_8c18dc96;
    }
    return (int)(v63);
}
