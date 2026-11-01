/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c031f34
 * function: operation_8c031f34
 * language: c
 * reference size: 1404 bytes
 * compiled size: 1416 bytes (+0.9%)
 * differing lines: 520 of 565 reference instruction lines
 * differing bytes: 742
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c44be0c S_g8c44be0c;
typedef struct S_g8c44be0c_8 S_g8c44be0c_8;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct S_g8c46ee80_ac S_g8c46ee80_ac;
typedef struct S_g8c46ee80_b4 S_g8c46ee80_b4;
typedef struct Object Object;
typedef struct S_vv13 S_vv13;
typedef struct S_vv15 S_vv15;
typedef struct S_vv20 S_vv20;
typedef struct S_vv53 S_vv53;
typedef struct S_vv53_20 S_vv53_20;
typedef struct S_vv53_24 S_vv53_24;
typedef struct S_vv53_28 S_vv53_28;
typedef struct S_vv55 S_vv55;
typedef struct S_vv58 S_vv58;
typedef struct S_vv58_0 S_vv58_0;
typedef struct S_vv68 S_vv68;
typedef struct S_vv68_0 S_vv68_0;
typedef struct S_vv68_0_4 S_vv68_0_4;
typedef struct S_vv78 S_vv78;
typedef struct S_vv78_0 S_vv78_0;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    Vector3 f18;
    float f24;
    float f28;
    float f2c;
    int f30;
    char unknown34[0x8];
};
struct Object {
    char unknown0[0x20];
    int f20;
};
struct S_g8c46ee80 {
    char unknown0[0xac];
    S_g8c46ee80_ac *fac;
    char unknownb0[0x4];
    S_g8c46ee80_b4 *fb4;
};
struct S_g8c44be0c {
    short f00;
    char unknown2[0x6];
    S_g8c44be0c_8 *f08;
};
struct S_vv13 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
    float f0c;
    char unknown10[0xc];
    float f1c;
    char unknown20[0x18];
    int f38;
};
struct S_vv15 {
    char unknown0[0x90];
    float f90;
    char unknown94[0x4];
    float f98;
};
struct S_vv20 {
    char unknown0[0x38];
    int f38;
};
struct S_vv53 {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
    char unknown10[0x10];
    S_vv53_20 *f20;
    S_vv53_24 *f24;
    S_vv53_28 *f28;
    int f2c;
    int f30;
    int f34;
    int f38;
};
struct S_vv55 {
    char unknown0[0x8];
    int f08;
};
struct S_vv58 {
    S_vv58_0 *f00;
    char unknown4[0x4];
    int f08;
};
struct S_vv58_0 {
    float f00;
    float f04;
    float f08;
};
struct S_vv68 {
    S_vv68_0 *f00;
    char unknown4[0x28];
    int f2c;
};
struct S_vv68_0 {
    char unknown0[0x4];
    S_vv68_0_4 *f04;
    float f08;
    float f0c;
    float f10;
};
struct S_vv68_0_4 {
    char unknown0[0x8];
    float f08;
    float f0c;
    float f10;
};
struct S_vv78 {
    S_vv78_0 *f00;
    char unknown4[0x34];
    int f38;
};
struct S_vv78_0 {
    char unknown0[0x8];
    float f08;
    float f0c;
    float f10;
};
extern Vector3 g_8c2e841c;
extern S_g8c44be0c *g_8c44be0c;
extern float g_8c44be4c;
extern char g_8c44be50;
extern float g_8c44be54;
extern char g_8c44be58;
extern float g_8c44be5c;
extern char g_8c44be60;
extern S_g8c46ee80 *g_8c46ee80;
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be38c(int, void *, void *);
extern void njUnitVector_8c37b630(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c0324b0(Object *, S_vv13 *);
extern float call_8c3845f0(void *, void *);
extern void njPopMatrix_8c38accc(int);
extern int operation_8c0326b0(int, int, int, void *, float);
extern int operation_8c032614(int, int, float);
void operation_8c031f34(Object *o)
{
    Frame frame;
    int v10;
    int v51;
    S_vv15 *v15;
    float v103;
    float v16;
    int v11;
    float v102;
    float v17;
    S_vv53 *v53;
    float v101;
    int v96;
    int v9;
    int v54;
    int v95;
    int v8;
    S_vv55 *v55;
    int v57;
    S_vv58 *v58;
    int v69;
    int v73;
    int v79;
    int v83;
    int v14;
    int v46;
    int v59;
    int v63;
    S_vv68 *v68;
    int v72;
    S_vv78 *v78;
    int v82;
    int v12;
    S_vv13 *v13;
    S_vv20 *v20;
    int v27;
    int v52;
    float t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    if (g_8c44be50 == 0) {
        g_8c44be50 = 1;
        g_8c44be4c = 520.0f;
    }
    if (g_8c44be58 == 0) {
        g_8c44be58 = 1;
        g_8c44be54 = 800.0f;
    }
    if (g_8c44be60 == 0) {
        g_8c44be60 = 1;
        g_8c44be5c = 80.0f;
    }
    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&g_8c2e841c;
    if (g_8c44be0c == 0) {
        return;
    }
    o->f20 = 0;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (void *)(g_8c46ee80->fac));
    call_8c3be38c(0, (void *)(&(&frame)->f18), (void *)(&(&frame)->f30));
    njUnitVector_8c37b630((void *)(&(&frame)->f30));
    njPopMatrixEx_8c38ad10();
    v8 = (int)0x1000;
    v9 = (int)-0x1001;
    v10 = (int)0x8000;
    v11 = (int)-0x8001;
    v12 = (int)g_8c44be0c->f08;
    v27 = (int)v12;
    v46 = (int)0;
    goto L_8c03229e;
    v13 = (S_vv13 *)v12;
    v14 = (int)0;
L_8c03204c:;
    if (((v13->f38 & 0x20)) != 0) {
        call_8c0324b0(o, v13);
        v27 = (int)((int)v13 + 0x3c);
    } else {
        (&frame)->f0c = v13->f04;
        (&frame)->f10 = 0.0f;
        (&frame)->f14 = v13->f0c;
        v15 = (S_vv15 *)g_8c46ee80;
        (&frame)->f24 = (&frame)->f0c - v15->f90;
        (&frame)->f28 = 0.0f;
        (&frame)->f2c = (&frame)->f14 - v15->f98;
        v16 = (float)((&frame)->f24 * (&frame)->f24 + (&frame)->f28 * (&frame)->f28 + (&frame)->f2c * (&frame)->f2c);
        v103 = (float)v13->f1c;
        if ((v103 * v103) > v16) {
            v13->f38 |= v8;
            o->f20 += 1;
            v27 = (int)((int)v13 + 0x3c);
        } else {
            v102 = (float)g_8c44be54;
            v17 = (float)(v102 * v102);
            if (v16 > v17) {
                v13->f38 &= v9;
                v27 = (int)((int)v13 + 0x3c);
            } else {
                v101 = (float)g_8c44be4c;
                if (v16 <= (v101 * v101) || v17 <= v16) {
                    v13->f38 &= v11;
                } else {
                    v13->f38 |= v10;
                }
                njUnitVector_8c37b630((void *)(&(&frame)->f24));
                t1 = call_8c3845f0((void *)(&(&frame)->f30), (void *)(&(&frame)->f24));
                if (0.0f > t1) {
                    v13->f38 &= v9;
                    v27 = (int)((int)v13 + 0x3c);
                } else {
                    if (0.0f > t1) {
                        v20 = (S_vv20 *)v13;
                    } else {
                        if (!(0.5f > t1)) {
                            v20 = (S_vv20 *)v13;
                        } else {
                            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                            njRotateY_8c37df90(0, (void *)(g_8c46ee80->fb4));
                            call_8c3be38c(0, (void *)(&(&frame)->f30), (void *)(&(&frame)->f18));
                            njUnitVector_8c37b630((void *)(&(&frame)->f18));
                            njPopMatrix_8c38accc(1);
                            t2 = operation_8c0326b0((int)o, (int)(&(&frame)->f0c), (int)(&(&frame)->f24), (void *)(&(&frame)->f18), v13->f1c);
                            if (t2 != 0) {
                                v13->f38 |= v8;
                                o->f20 += 1;
                                v27 = (int)((int)v13 + 0x3c);
                                goto L_8c03229c;
                            }
                            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                            njRotateY_8c37df90(0, (void *)(-(int)(g_8c46ee80->fb4)));
                            call_8c3be38c(0, (void *)(&(&frame)->f30), (void *)(&(&frame)->f18));
                            njUnitVector_8c37b630((void *)(&(&frame)->f18));
                            njPopMatrix_8c38accc(1);
                            t3 = operation_8c0326b0((int)o, (int)(&(&frame)->f0c), (int)(&(&frame)->f24), (void *)(&(&frame)->f18), v13->f1c);
                            if (t3 == 0) {
                                goto L_8c032294;
                            }
                            v13->f38 |= v8;
                            o->f20 += 1;
                            v27 = (int)((int)v13 + 0x3c);
                            goto L_8c03229c;
                            v20 = (S_vv20 *)((int)v13 + 0x3c);
                        }
                    }
                    v20->f38 |= v8;
                    o->f20 += 1;
                    v27 = (int)((int)v20 + 0x3c);
                    goto L_8c03229c;
L_8c032294:;
                    v13->f38 &= v9;
                    v27 = (int)((int)v13 + 0x3c);
                }
            }
        }
    }
L_8c03229c:;
    v46 = (int)(v14 + 1);
L_8c03229e:;
    if (g_8c44be0c->f00 > v46) {
        v13 = (S_vv13 *)v27;
        v14 = (int)v46;
        goto L_8c03204c;
    }
    v51 = (int)0x1000;
    v52 = (int)-0x1001;
    v83 = (int)v8;
    v95 = (int)0;
    v96 = (int)g_8c44be0c->f08;
    goto L_8c032488;
    v53 = (S_vv53 *)g_8c44be0c->f08;
    v54 = (int)0;
L_8c0322c4:;
    if (((v53->f38 & 0x8000)) == 0) {
        v82 = (int)v46;
        v83 = (int)v8;
    } else {
        v55 = (S_vv55 *)v53->f24;
        v57 = (int)v55;
        if (v55 != 0) {
            v55->f08 |= v51;
            v57 = (int)((int)v55 + 0xc);
        }
        v63 = (int)1;
        goto L_8c03235e;
        v58 = (S_vv58 *)v57;
        v59 = (int)1;
L_8c0322e8:;
        (&frame)->f00 = v53->f04 + v58->f00->f00;
        (&frame)->f04 = v53->f08 + v58->f00->f04;
        (&frame)->f08 = v53->f0c + v58->f00->f08;
        t4 = operation_8c032614((int)o, (int)(&frame), g_8c44be4c + g_8c44be5c);
        if (t4 != 0) {
            v58->f08 |= v51;
        } else {
            v58->f08 &= v52;
        }
        v63 = (int)(v59 + 1);
        v57 = (int)((int)v58 + 0xc);
L_8c03235e:;
        if (v53->f30 > v63) {
            v58 = (S_vv58 *)v57;
            v59 = (int)v63;
            goto L_8c0322e8;
        }
        v72 = (int)v53->f20;
        v73 = (int)0;
        goto L_8c0323fa;
        v68 = (S_vv68 *)v53->f20;
        v69 = (int)0;
L_8c03236a:;
        (&frame)->f00 = v53->f04 + v68->f00->f08 + v68->f00->f04->f08;
        (&frame)->f04 = v53->f08 + v68->f00->f0c + v68->f00->f04->f0c;
        (&frame)->f08 = v53->f0c + v68->f00->f10 + v68->f00->f04->f10;
        t5 = ((int (*)(int, int, float, float))operation_8c032614)((int)(o), (int)((&frame)), g_8c44be4c + g_8c44be5c, 100.0f);
        if (t5 != 0) {
            v68->f2c |= v51;
        } else {
            v68->f2c &= v52;
        }
        v72 = (int)((int)v68 + 0x30);
        v73 = (int)(v69 + 1);
L_8c0323fa:;
        if (v53->f2c > v73) {
            v68 = (S_vv68 *)v72;
            v69 = (int)v73;
            goto L_8c03236a;
        }
        v82 = (int)v53->f28;
        v83 = (int)0;
        goto L_8c03247e;
        v78 = (S_vv78 *)v53->f28;
        v79 = (int)0;
L_8c032406:;
        (&frame)->f00 = v53->f04 + v78->f00->f08;
        (&frame)->f04 = v53->f08 + v78->f00->f0c;
        (&frame)->f08 = v53->f0c + v78->f00->f10;
        t6 = ((int (*)(int, int, float, float))operation_8c032614)((int)(o), (int)((&frame)), g_8c44be4c + g_8c44be5c, 100.0f);
        if (t6 != 0) {
            v78->f38 |= v51;
        } else {
            v78->f38 &= v52;
        }
        v82 = (int)((int)v78 + 0x3c);
        v83 = (int)(v79 + 1);
L_8c03247e:;
        if (v53->f34 > v83) {
            v78 = (S_vv78 *)v82;
            v79 = (int)v83;
            goto L_8c032406;
        }
    }
    v46 = (int)v82;
    v95 = (int)(v54 + 1);
    v96 = (int)((int)v53 + 0x3c);
L_8c032488:;
    if (g_8c44be0c->f00 > v95) {
        v53 = (S_vv53 *)v96;
        v54 = (int)v95;
        goto L_8c0322c4;
    }
}
