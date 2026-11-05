/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c052f94
 * function: operation_8c052f94
 * language: c
 * reference size: 2260 bytes
 * compiled size: 2278 bytes (+0.8%)
 * differing lines: 560 of 910 reference instruction lines
 * differing bytes: 2058
 * provenance: generator draft (mode switch2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +18 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg1 Arg1;
typedef struct Arg1_64 Arg1_64;
typedef struct Arg2 Arg2;
typedef struct S_vv25 S_vv25;
typedef struct S_vv25_4 S_vv25_4;
typedef struct S_vv31 S_vv31;
typedef struct S_vv31_64 S_vv31_64;
typedef struct S_vv36 S_vv36;
typedef struct S_vv36_4 S_vv36_4;
typedef struct S_vv45 S_vv45;
typedef struct S_vv45_4 S_vv45_4;
typedef struct S_vv55 S_vv55;
typedef struct S_vv55_4 S_vv55_4;
typedef struct S_vv63 S_vv63;
typedef struct S_vv63_4 S_vv63_4;
typedef struct S_vv8 S_vv8;
typedef struct S_vv86 S_vv86;
typedef struct S_vv86_4 S_vv86_4;
typedef struct S_vv8_4 S_vv8_4;
typedef struct Block_frame_48 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_48;
typedef struct Block_frame_54 {
    float f00;
    float f04;
    float f08;
} Block_frame_54;
typedef struct Block_frame_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_3c;
typedef struct Block_frame_30 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_30;
typedef struct Block_frame_24 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_24;
typedef struct Block_frame_18 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_18;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
typedef struct Block_frame_60 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_60;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
    Block_frame_18 f18;
    Block_frame_24 f24;
    Block_frame_30 f30;
    Block_frame_3c f3c;
    Block_frame_48 f48;
    Block_frame_54 f54;
    Block_frame_60 f60;
};
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x1a];
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0x10];
    Arg0_64 *f64;
};
struct Arg2 {
    char unknown0[0xc];
    float f0c;
    float f10;
    char unknown14[0x4];
    int f18;
};
struct Arg1 {
    char unknown0[0x64];
    Arg1_64 *f64;
};
struct S_vv8 {
    char unknown0[0x4];
    S_vv8_4 *f04;
};
struct S_vv8_4 {
    Vector3 f00;
};
struct S_vv25 {
    char unknown0[0x4];
    S_vv25_4 *f04;
};
struct S_vv25_4 {
    Vector3 f00;
};
struct S_vv31 {
    char unknown0[0x64];
    S_vv31_64 *f64;
};
struct S_vv36 {
    char unknown0[0x4];
    S_vv36_4 *f04;
};
struct S_vv36_4 {
    Vector3 f00;
};
struct S_vv45 {
    char unknown0[0x4];
    S_vv45_4 *f04;
};
struct S_vv45_4 {
    Vector3 f00;
};
struct S_vv55 {
    char unknown0[0x4];
    S_vv55_4 *f04;
};
struct S_vv55_4 {
    Vector3 f00;
};
struct S_vv63 {
    char unknown0[0x4];
    S_vv63_4 *f04;
};
struct S_vv63_4 {
    Vector3 f00;
};
struct S_vv86 {
    char unknown0[0x4];
    S_vv86_4 *f04;
};
struct S_vv86_4 {
    Vector3 f00;
};
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern float operation_8c054228(void *, int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c3bdf60(void *, void *);
extern int operation_8c011308(int, void *, int);
extern float errno_wrap_8c130334(float, float);
extern int angle_difference(int, int);
int operation_8c052f94(Object *o, Arg1 *a1, Arg2 *a2)
{
    Frame frame;
    int v2;
    float v1;
    float v3;
    float v6;
    float v7;
    S_vv8 *v8;
    int v11;
    float v16;
    float v18;
    S_vv25 *v25;
    int v28;
    int v14;
    float v5;
    float v4;
    int v41;
    S_vv36 *v36;
    int v40;
    S_vv45 *v45;
    int v48;
    int v59;
    S_vv55 *v55;
    int v58;
    S_vv63 *v63;
    int v66;
    int v73;
    S_vv31 *v31;
    S_vv86 *v86;
    int v89;
    float t1;
    int t2;
    float t3;
    float t4;
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
    if (a1 == 0 || a2 == 0) {
        return 0;
    }
    *(Vector3 *)&(&frame)->f60 = *(Vector3 *)&o->f48;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f60), (void *)(((char *)a2 + 0x1c)));
    if (*(int *)0x8c2e2ad8 == 0) {
    } else {
        if (!((unsigned int)0x1000 > (unsigned int)o->f20)) {
        } else {
            v1 = (float)a2->f10;
            v2 = (int)0;
            v3 = (float)a2->f0c;
            t3 = operation_8c054228((void *)o, v2);
            v4 = (float)(v1 * v1 + t3);
            t4 = operation_8c054228((void *)o, v2);
            v5 = (float)(v3 * v3 + t4);
            *(Vector3 *)&*(Vector3 *)0x8c46f5a0 = *(Vector3 *)&(&frame)->f60;
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            njRotateY_8c37df90(v2, (int)(-(int)(a1->f64)));
            call_8c3be38c(v2, (void *)((void *)0x8c46f5a0), (void *)((void *)0x8c46f5a0));
            njPopMatrixEx_8c38ad10();
            v6 = (float)*(float *)0x8c46f5a0;
            v7 = (float)*(float *)0x8c46f5a8;
            if (!(1e-07f > (v6 * v6 + v7 * v7))) {
                v14 = (int)v2;
                v16 = (float)v7;
                v18 = (float)v6;
            } else {
                (&frame)->f54.f00 = 0.0f;
                (&frame)->f54.f04 = 0.0f;
                (&frame)->f54.f08 = 0.1f;
                ((void (*)(void *, float))njPushMatrix_8c38ade4)((void *)0x8c400500, v6);
                njRotateY_8c37df90(v2, (int)(o->f64));
                call_8c3be38c(v2, (void *)(&(&frame)->f54), (void *)(&(&frame)->f54));
                njPopMatrixEx_8c38ad10();
                call_8c3bdf60((void *)(&(&frame)->f54), (void *)(&o->f3c));
                *(Vector3 *)&(&frame)->f48 = *(Vector3 *)&(&frame)->f54;
                (&frame)->f48.f04 += 10.0f;
                if (o->f20 == *(int *)0x8c418248) {
                    t5 = operation_8c011308((int)(&(&frame)->f48), (void *)(((char *)o + 0x94)), 0x55);
                    v8 = (S_vv8 *)t5;
                } else {
                    t6 = operation_8c011308((int)(&(&frame)->f48), (void *)(((char *)o + 0x94)), 0x15);
                    v8 = (S_vv8 *)t6;
                }
                if (v8 == 0) {
                    v11 = (int)0;
                } else {
                    *(Vector3 *)&(&frame)->f54 = *(Vector3 *)&v8->f04->f00;
                    v11 = (int)1;
                }
                if (v11 == 0) {
                    v73 = (int)v2;
                    goto L_8c053762;
                }
                *(Vector3 *)&o->f3c = *(Vector3 *)&(&frame)->f54;
                v73 = (int)1;
                goto L_8c053762;
                v14 = (int)1;
                v16 = (float)/* ? clobbered */ 0;
                v18 = (float)/* ? clobbered */ 0;
            }
            if (((a2->f18 & 0x40000000)) == 0) {
                v31 = (S_vv31 *)a1;
            } else {
                (&frame)->f54.f08 = 0.0f;
                (&frame)->f54.f04 = 0.0f;
                (&frame)->f54.f00 = 0.0f;
                if (v1 > v3) {
                    if (v16 > 0.0f) {
                        (&frame)->f54.f08 = 0.1f;
                        goto L_8c0531fc;
                    }
                    (&frame)->f54.f08 = -0.1f;
                } else {
                    if (v18 > 0.0f) {
                        (&frame)->f54.f00 = 0.1f;
                    } else {
                        (&frame)->f54.f00 = -0.1f;
                    }
                }
L_8c0531fc:;
                njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                njRotateY_8c37df90(0, (int)(a1->f64));
                call_8c3be38c(0, (void *)(&(&frame)->f54), (void *)(&(&frame)->f54));
                njPopMatrixEx_8c38ad10();
                call_8c3bdf60((void *)(&(&frame)->f54), (void *)(&o->f3c));
                *(Vector3 *)&(&frame)->f3c = *(Vector3 *)&(&frame)->f54;
                (&frame)->f3c.f04 += 10.0f;
                if (o->f20 == *(int *)0x8c418248) {
                    t7 = operation_8c011308((int)(&(&frame)->f3c), (void *)(((char *)o + 0x94)), 0x55);
                    v25 = (S_vv25 *)t7;
                } else {
                    t8 = operation_8c011308((int)(&(&frame)->f3c), (void *)(((char *)o + 0x94)), 0x15);
                    v25 = (S_vv25 *)t8;
                }
                if (v25 == 0) {
                    v28 = (int)0;
                } else {
                    *(Vector3 *)&(&frame)->f54 = *(Vector3 *)&v25->f04->f00;
                    v28 = (int)1;
                }
                if (v28 == 0) {
                    v11 = (int)v28;
                    v73 = (int)v14;
                    goto L_8c053762;
                }
                *(Vector3 *)&o->f3c = *(Vector3 *)&(&frame)->f54;
                v11 = (int)v28;
                v73 = (int)1;
                goto L_8c053762;
                v31 = (S_vv31 *)&a1->f64;
                v14 = (int)1;
                v16 = (float)/* ? clobbered */ 0;
                v18 = (float)/* ? clobbered */ 0;
            }
            if (!((v5 - v7 * v7) > (v4 - v6 * v6))) {
            } else {
                if (0.0f > v18) {
                    (&frame)->f54.f00 = -0.1f;
                } else {
                    (&frame)->f54.f00 = 0.1f;
                }
                (&frame)->f54.f04 = 0.0f;
                (&frame)->f54.f08 = 0.0f;
                njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                njRotateY_8c37df90(0, (int)(v31->f64));
                call_8c3be38c(0, (void *)(&(&frame)->f54), (void *)(&(&frame)->f54));
                njPopMatrixEx_8c38ad10();
                call_8c3bdf60((void *)(&(&frame)->f54), (void *)(&o->f3c));
                *(Vector3 *)&(&frame)->f30 = *(Vector3 *)&(&frame)->f54;
                (&frame)->f30.f04 += 10.0f;
                if (o->f20 == *(int *)0x8c418248) {
                    t9 = operation_8c011308((int)(&(&frame)->f30), (void *)(((char *)o + 0x94)), 0x55);
                    v36 = (S_vv36 *)t9;
                } else {
                    t10 = operation_8c011308((int)(&(&frame)->f30), (void *)(((char *)o + 0x94)), 0x15);
                    v36 = (S_vv36 *)t10;
                }
                if (v36 == 0) {
                    v40 = (int)0;
                } else {
                    *(Vector3 *)&(&frame)->f54 = *(Vector3 *)&v36->f04->f00;
                    v40 = (int)1;
                }
                v41 = (int)v14;
                if (v40 != 0) {
                    v41 = (int)1;
                    *(Vector3 *)&o->f3c = *(Vector3 *)&(&frame)->f54;
                }
                (&frame)->f54.f00 = 0.0f;
                (&frame)->f54.f04 = 0.0f;
                if (0.0f > *(float *)0x8c46f5a8) {
                    (&frame)->f54.f08 = -0.0100000007f;
                } else {
                    (&frame)->f54.f08 = 0.01f;
                }
                njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                njRotateY_8c37df90(0, (int)(v31->f64));
                call_8c3be38c(0, (void *)(&(&frame)->f54), (void *)(&(&frame)->f54));
                njPopMatrixEx_8c38ad10();
                call_8c3bdf60((void *)(&(&frame)->f54), (void *)(&o->f3c));
                *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&(&frame)->f54;
                (&frame)->f24.f04 += 10.0f;
                if (o->f20 == *(int *)0x8c418248) {
                    t11 = operation_8c011308((int)(&(&frame)->f24), (void *)(((char *)o + 0x94)), 0x55);
                    v45 = (S_vv45 *)t11;
                } else {
                    t12 = operation_8c011308((int)(&(&frame)->f24), (void *)(((char *)o + 0x94)), 0x15);
                    v45 = (S_vv45 *)t12;
                }
                if (v45 == 0) {
                    v48 = (int)0;
                } else {
                    *(Vector3 *)&(&frame)->f54 = *(Vector3 *)&v45->f04->f00;
                    v48 = (int)1;
                }
                if (v48 == 0) {
                    v11 = (int)v48;
                    v73 = (int)v41;
                    goto L_8c053762;
                }
                *(Vector3 *)&o->f3c = *(Vector3 *)&(&frame)->f54;
                v11 = (int)v48;
                v73 = (int)1;
                goto L_8c053762;
                v31 = (S_vv31 *)((char *)v31 + 100);
                v14 = (int)1;
                v16 = (float)/* ? clobbered */ 0;
            }
            (&frame)->f54.f00 = 0.0f;
            (&frame)->f54.f04 = 0.0f;
            if (0.0f > v16) {
                (&frame)->f54.f08 = -0.1f;
            } else {
                (&frame)->f54.f08 = 0.1f;
            }
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            njRotateY_8c37df90(0, (int)(v31->f64));
            call_8c3be38c(0, (void *)(&(&frame)->f54), (void *)(&(&frame)->f54));
            njPopMatrixEx_8c38ad10();
            call_8c3bdf60((void *)(&(&frame)->f54), (void *)(&o->f3c));
            *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&(&frame)->f54;
            (&frame)->f18.f04 += 10.0f;
            if (o->f20 == *(int *)0x8c418248) {
                t13 = operation_8c011308((int)(&(&frame)->f18), (void *)(((char *)o + 0x94)), 0x55);
                v55 = (S_vv55 *)t13;
            } else {
                t14 = operation_8c011308((int)(&(&frame)->f18), (void *)(((char *)o + 0x94)), 0x15);
                v55 = (S_vv55 *)t14;
            }
            if (v55 == 0) {
                v58 = (int)0;
            } else {
                *(Vector3 *)&(&frame)->f54 = *(Vector3 *)&v55->f04->f00;
                v58 = (int)1;
            }
            v59 = (int)v14;
            if (v58 != 0) {
                v59 = (int)1;
                *(Vector3 *)&o->f3c = *(Vector3 *)&(&frame)->f54;
            }
            if (0.0f > *(float *)0x8c46f5a0) {
                (&frame)->f54.f00 = -0.0100000007f;
            } else {
                (&frame)->f54.f00 = 0.01f;
            }
            (&frame)->f54.f04 = 0.0f;
            (&frame)->f54.f08 = 0.0f;
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            njRotateY_8c37df90(0, (int)(v31->f64));
            call_8c3be38c(0, (void *)(&(&frame)->f54), (void *)(&(&frame)->f54));
            njPopMatrixEx_8c38ad10();
            call_8c3bdf60((void *)(&(&frame)->f54), (void *)(&o->f3c));
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&(&frame)->f54;
            (&frame)->f0c.f04 += 10.0f;
            if (o->f20 == *(int *)0x8c418248) {
                t15 = operation_8c011308((int)(&(&frame)->f0c), (void *)(((char *)o + 0x94)), 0x55);
                v63 = (S_vv63 *)t15;
            } else {
                t16 = operation_8c011308((int)(&(&frame)->f0c), (void *)(((char *)o + 0x94)), 0x15);
                v63 = (S_vv63 *)t16;
            }
            if (v63 == 0) {
                v66 = (int)0;
            } else {
                *(Vector3 *)&(&frame)->f54 = *(Vector3 *)&v63->f04->f00;
                v66 = (int)1;
            }
            if (v66 != 0) {
                *(Vector3 *)&o->f3c = *(Vector3 *)&(&frame)->f54;
                v59 = (int)1;
            }
            v11 = (int)v66;
            v73 = (int)v59;
L_8c053762:;
            if (v73 != 0) {
                return (int)(v73);
            }
        }
    }
    t1 = errno_wrap_8c130334((&frame)->f60.f00, (&frame)->f60.f08);
    t2 = angle_difference((int)((int)(t1 * 65536.0f / 6.28318405f)), (int)(o->f64));
    if (0x3000 > t2) {
        return 0;
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f48;
    (&frame)->f00.f04 += 10.0f;
    if (o->f20 == *(int *)0x8c418248) {
        t17 = operation_8c011308((int)(&frame), (void *)(((char *)o + 0x94)), 0x55);
        v86 = (S_vv86 *)t17;
    } else {
        t18 = operation_8c011308((int)(&frame), (void *)(((char *)o + 0x94)), 0x15);
        v86 = (S_vv86 *)t18;
    }
    if (v86 == 0) {
        v89 = (int)0;
    } else {
        *(Vector3 *)&o->f48 = *(Vector3 *)&v86->f04->f00;
        v89 = (int)1;
    }
    if (v89 != 0) {
        *(Vector3 *)&o->f3c = *(Vector3 *)&o->f48;
        return 1;
    }
    return 1;
}
