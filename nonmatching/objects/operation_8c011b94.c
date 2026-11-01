/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c011b94
 * function: operation_8c011b94
 * language: c
 * reference size: 636 bytes
 * compiled size: 756 bytes (+18.9%)
 * differing lines: 480 of 293 reference instruction lines
 * differing bytes: 694
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +120 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46f620 S_L8c46f620;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv32 S_vv32;
typedef struct S_vv7 S_vv7;
typedef struct S_vv9 S_vv9;
typedef struct S_vv9_0 S_vv9_0;
typedef struct S_vv9_0_4 S_vv9_0_4;
struct S_vv1 {
    int f00;
    int f04;
};
struct Object {
    float tag;
    float f04;
    float f08;
};
struct S_L8c46f620 {
    float f00;
    float f04;
    float f08;
};
struct Frame {
    char unknown0[0xc];
    int f0c;
    int f10;
    char unknown14[0x8];
};
struct S_vv7 {
    int f00;
};
struct S_vv9 {
    S_vv9_0 *f00;
};
struct S_vv9_0 {
    int f00;
    S_vv9_0_4 *f04;
};
struct S_vv10 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    char unknown18[0xc];
    float f24;
    float f28;
    float f2c;
    float f30;
    char unknown34[0x4];
    float f38;
    float f3c;
    int f40;
};
struct S_vv32 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    int f18;
    S_vv10 *f1c;
};
extern S_L8c46f620 g_8c46f620;
extern void subtract_vector_components(void *, void *, void *);
extern void njScalor_8c37e480(void *);
extern void operation_8c011e8c(S_vv10 *, int, float, float, float, float, float);
extern int operation_8c011e94(S_vv32 *, void *);
extern void operation_8c011e90(S_vv1 *, int, float);
int operation_8c011b94(Object *o, int a1, S_vv7 *a2)
{
    Frame frame;
    S_vv10 *v10;
    float v3;
    char *v2;
    S_vv9 *v9;
    float v8;
    int v25;
    int v27;
    int v13;
    float v71;
    float v4;
    float v6;
    float v14;
    float v15;
    float v5;
    float v20;
    float v21;
    float v22;
    int v29;
    S_vv32 *v32;
    S_vv1 *v1;
    float v12;
    float v23;
    float v24;
    int v11;
    int v35;
    int v42;
    int v46;
    int v50;
    int v54;
    int v58;
    float v41;
    int v62;
    float v70;
    int t1;
    v1 = (S_vv1 *)(void *)0x8c417f80;
    v2 = (char *)v1->f04;
    v1->f00 = 0;
    v3 = (float)2.0f;
    (&g_8c46f620)->f00 = o->tag;
    (&g_8c46f620)->f04 = o->f04 + -100000.0f;
    (&g_8c46f620)->f08 = o->f08;
    subtract_vector_components((void *)o, (void *)((void *)&g_8c46f620), (void *)(&(&frame)->f10));
    njScalor_8c37e480((void *)(&(&frame)->f10));
    v4 = (float)o->tag;
    v5 = (float)o->f04;
    v6 = (float)o->f08;
    v8 = (float)v3;
    v9 = (S_vv9 *)(a1 & 0x10);
    while (a2->f00 != 0) {
        (&frame)->f0c = (int)(v9->f00->f00);
        v10 = (S_vv10 *)v9->f00->f04;
        v11 = (int)0;
        v12 = (float)v8;
        while ((&frame)->f0c > v11) {
            v13 = (int)v10->f40;
            if (((v13 & a1)) == 0) {
                v58 = (int)(v13 & a1);
                v41 = (float)/* ? clobbered */ 0;
            } else {
                v71 = (float)v10->f3c;
                if ((v71 * v71) < ((v10->f30 - v4) * (v10->f30 - v4) + (v10->f38 - v6) * (v10->f38 - v6))) {
                    v54 = (int)((int)v10 + 0x38);
                    v41 = (float)/* ? clobbered */ 0;
                } else {
                    v14 = (float)v10->f28;
                    if (1e-07f > v14) {
                        v50 = (int)/* pool 0x8c011df8 */ 0;
                        v41 = (float)/* ? clobbered */ 0;
                    } else {
                        v15 = (float)v10->f04;
                        v10 = (S_vv10 *)((char *)v10 + 24);
                        if (v15 > v5 && v10->f10 > v5 && v10->f04 > v5) {
                            v62 = (int)((int)v10 + 0xc);
                            v70 = (float)/* ? clobbered */ 0;
                            goto L_8c011d9e;
                        }
                        v20 = (float)((v10->f08 - v6) * (v10->f0c - v4) - (v10->f00 - v4) * (v10->f14 - v6));
                        v46 = (int)((int)v10 + 0x14);
                        v41 = (float)0.0f;
                        if (!(0.0f > v20)) {
                            v21 = (float)(v10->f00 - v4);
                            v42 = (int)((int)v10 + 0x14);
                            v41 = (float)0.0f;
                            if (!(0.0f > ((v10->f14 - v6) * v21 - (v10->f0c - v4) * (v10->f08 - v6)))) {
                                v22 = (float)(v21 * (v10->f08 - v6));
                                v35 = (int)((int)v10 + 0x14);
                                v41 = (float)0.0f;
                                if (!(0.0f > ((v10->f08 - v6) * (v10->f00 - v4) - v22))) {
                                    v23 = (float)v10->f24;
                                    v24 = (float)v10->f2c;
                                    if ((a1 & 4) != 0 && ((v13 & 4)) != 0) {
                                        v25 = (int)(v2 + 0x20);
                                        v1->f00 |= 4;
                                        v32 = (S_vv32 *)v25;
                                        goto L_8c011d5a;
                                    }
                                    if ((a1 & 8) != 0 && ((v13 & 8)) != 0) {
                                        v27 = (int)(v2 + 0x60);
                                        v1->f00 |= 8;
                                        v32 = (S_vv32 *)v27;
                                        goto L_8c011d5a;
                                    }
                                    if ((a1 & 0x10) != 0 && ((v13 & 0x10)) != 0) {
                                        v29 = (int)(v2 + 0x60);
                                        v1->f00 |= 0x10;
                                        v32 = (S_vv32 *)v29;
                                        goto L_8c011d5a;
                                    }
                                    if (v12 > -(-((v10->f00 - v4) * v23 + (v15 - v5) * v14 + (v10->f08 - v6) * v24) / (v14 * -100000.0f))) {
                                        v12 = (float)-(-((v10->f00 - v4) * v23 + (v15 - v5) * v14 + (v10->f08 - v6) * v24) / (v14 * -100000.0f));
                                        v1->f00 |= 1;
                                        v32 = (S_vv32 *)v2;
                                    }
L_8c011d5a:;
                                    v32->f00 = v4;
                                    v32->f04 = v5 + -(-((v10->f00 - v4) * v23 + (v15 - v5) * v14 + (v10->f08 - v6) * v24) / (v14 * -100000.0f)) * -100000.0f;
                                    v32->f08 = v6;
                                    v32->f0c = v23;
                                    v32->f10 = v14;
                                    v32->f14 = v24;
                                    v32->f18 = (int)(v10->f40);
                                    v32->f1c = v10;
                                    operation_8c011e8c(v10, 0x33ffffff, v23, v24, (v10->f14 - v6) * v21 - (v10->f0c - v4) * (v10->f08 - v6), (v10->f0c - v4) * (v10->f08 - v6), (v10->f08 - v6) * v24);
                                    t1 = operation_8c011e94(v32, (void *)((void *)0x8c306048));
                                    v35 = (int)t1;
                                    v41 = (float)/* ? clobbered */ 0;
                                }
                                v42 = (int)v35;
                            }
                            v46 = (int)v42;
                        }
                        v50 = (int)v46;
                    }
                    v54 = (int)v50;
                }
                v58 = (int)v54;
            }
            v62 = (int)v58;
            v70 = (float)v41;
L_8c011d9e:;
            v11 = (int)(v11 + 1);
            v10 = (S_vv10 *)((char *)v10 + 68);
        }
        v8 = (float)v12;
        v9 = (S_vv9 *)v62;
        a2 = (S_vv7 *)((char *)a2 + 4);
    }
    operation_8c011e90(v1, (int)(/* ? clobbered */ 0), v70);
    return v1->f00 & 1;
}
