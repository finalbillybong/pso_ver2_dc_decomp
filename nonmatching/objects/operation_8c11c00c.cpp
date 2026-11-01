/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11c00c
 * function: operation_8c11c00c
 * language: c++
 * reference size: 1444 bytes
 * compiled size: 1452 bytes (+0.6%)
 * differing lines: 116 of 556 reference instruction lines
 * differing bytes: 606
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_410 Arg0_410;
typedef struct Arg0_64 Arg0_64;
typedef struct S_x16416 S_x16416;
typedef struct S_x17312 S_x17312;
typedef struct S_x18208 S_x18208;
typedef struct S_x18768 S_x18768;
typedef struct S_x19328 S_x19328;
typedef struct Block_frame_54 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_54;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x90];
    float ff8;
    char unknownfc[0x234];
    short f330;
    char unknown332[0x5e];
    int f390;
    char unknown394[0x10];
    int f3a4;
    int f3a8;
    char unknown3ac[0x5c];
    int f408;
    int f40c;
    Arg0_410 *f410;
    int f414;
    int f418;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
    Vector3 f30;
    float f3c;
    char unknown40[0x4];
    float f44;
    float f48;
    char unknown4c[0x4];
    float f50;
    Block_frame_54 f54;
};
struct S_x16416 {
    Vector3 f00;
};
struct S_x17312 {
    Vector3 f00;
};
struct S_x18208 {
    Vector3 f00;
};
struct S_x18768 {
    Vector3 f00;
};
struct S_x19328 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern int g_8c467874;
extern "C" char g_8c310bd8[];
extern "C" int operation_8c04a638(Object *, void *, float);
extern "C" float call_8c130334(int, float, float);
extern "C" int angle_step(int, int, int);
extern "C" int call_8c04a52c(Object *, void *, float);
extern "C" float njScalor_8c37e480(void *);
extern "C" float njSin_8c37eb0c(int);
extern "C" float njCos_8c38c154(void *);
extern "C" void call_8c11b480(Object *, void *);
extern "C" float squared_distance_xz(void *, void *);
extern "C" void operation_8c11afa0(int);
extern "C" int call_8c18e6fc(void *);
extern "C" int call_8c18e768(void *, int);
extern "C" int call_8c11b8b8(Object *, void *);
extern "C" void operation_8c11c00c(Object *o)
{
    Frame frame;
    int v1;
    int v61;
    int v4;
    int v5;
    int v2;
    int v10;
    float v37;
    float v42;
    float v49;
    int v56;
    float v57;
    int v59;
    float v60;
    int v3;
    int v58;
    float v62;
    int v68;
    float v72;
    int v79;
    int t1;
    float t2;
    int t3;
    int t4;
    float t5;
    float t6;
    int t7;
    float t8;
    float t9;
    float t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    float t19;
    if (0.0f > o->ff8) {
    } else {
        if (o->ff8 > 12.0f) {
        } else {
            v1 = (int)1;
            v2 = (int)v1;
            if (49.9999962f > (float)o->f3a4) {
                v2 = (int)0;
            }
            v3 = (int)(((o->f34 & 0x10)) != 0);
            if (v3 != 0) {
                o->f34 |= 0x2000000;
                v4 = (int)0x100;
                t1 = operation_8c04a638(o, (void *)(&(&frame)->f48), 500.0f);
                o->f34 &= -0x2000001;
                if ((unsigned short)t1 == 0xffff) {
                    if (((o->f20 & 1)) != 0) {
                        v5 = (int)(v4 * -1);
                        v4 = (int)v5;
                    }
                    o->f64 = (Arg0_64 *)((int)o->f64 + v4);
                    goto L_8c11c19c;
                }
                t2 = call_8c130334((int)((unsigned short)t1), (&frame)->f48, (&frame)->f50);
                t3 = angle_step((int)(o->f64), (int)((int)(t2 * 65536.0f / 6.28318405f)), v4);
                o->f64 = (Arg0_64 *)(int)t3;
                v2 = (int)v4;
            } else {
                t4 = call_8c04a52c(o, (void *)(&(&frame)->f3c), 200.0f);
                if ((unsigned short)t4 != 0xffff) {
                    if (v2 != 0) {
                        t5 = njScalor_8c37e480((void *)(&(&frame)->f3c));
                        if (!(30.0f > t5)) {
                            goto L_8c11c158;
                        }
                    }
                    v10 = (int)0;
                    goto L_8c11c168;
L_8c11c158:;
                    v10 = (int)-0x1800;
                    if (o->f3a8 == 1) {
                        v10 = (int)(v10 * -1);
                    }
L_8c11c168:;
                    t6 = ((float (*)(float, float))call_8c130334)((&frame)->f3c, (&frame)->f44);
                    t7 = angle_step((int)(o->f64), (int)(v10 + (int)(t6 * 65536.0f / 6.28318405f)), 0x100);
                    o->f64 = (Arg0_64 *)(int)t7;
                    v2 = (int)(v10 + (int)(t6 * 65536.0f / 6.28318405f));
                }
            }
        }
    }
    v4 = (int)v2;
L_8c11c19c:;
    v37 = (float)o->ff8;
    if (14.0f > v37 || v37 > 20.0f) {
        v42 = (float)0.0f;
    } else {
        t19 = njSin_8c37eb0c((int)((int)((v37 - 14.0f) * 32768.0f / 6.0f)));
        v42 = (float)t19;
    }
    if (v42 > 0.0f) {
        *(Vector3 *)&(&frame)->f54 = *(Vector3 *)&o->f3c;
        v49 = (float)(v42 * 1.5f);
        if (o->f3a8 == 1) {
            v49 = (float)(v42 * 1.5f * -1.0f);
        }
        t8 = njCos_8c38c154((void *)(o->f64));
        (&frame)->f54.f00 += v49 * t8;
        t9 = njSin_8c37eb0c((int)(o->f64));
        (&frame)->f54.f08 += -v49 * t9;
        call_8c11b480(o, (void *)(&(&frame)->f54));
    }
    v56 = (int)(((o->f34 & 0x10)) != 0);
    switch (v56) {
    case 0:
        v57 = (float)250000.0f;
        v58 = (int)0x324;
        v68 = (int)0;
        v72 = (float)v57;
        goto L_8c11c2d2;
        v59 = (int)0;
        v60 = (float)v57;
        do {
            v61 = (int)*(int *)((char *)0x8c467240 + (v59 << 2));
            v62 = (float)v60;
            if (v61 != 0) {
                t10 = squared_distance_xz((void *)(&o->f3c), (void *)(v61 + v58));
                v62 = (float)v60;
                if (v60 > t10) {
                    v62 = (float)t10;
                }
            }
            v59 = (int)(v59 + 1);
            v68 = (int)v59;
            v72 = (float)v62;
L_8c11c2d2:;
            v59 = (int)v68;
            v60 = (float)v72;
        } while (g_8c467874 > v68);
        if (!(250000.0f > v60)) {
            o->f390 = 1;
            if (!(o->f390 >= 0)) {
                return;
            }
            if (o->f390 >= 0xe) {
                return;
            }
            operation_8c11afa0((int)o);
            *(Vector3 *)&(&frame)->f30 = *(Vector3 *)&((S_x16416 *)(o->f390 * 0x18 + g_8c310bd8))->f00;
            t11 = call_8c18e6fc((void *)(&(&frame)->f30));
            if (t11 == 0) {
                return;
            }
            (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f30)))();
            return;
        }
        if (o->f414 == 0) {
            t12 = call_8c18e768((void *)(o->f410), 3);
            if (t12 >= o->f330) {
                t13 = call_8c11b8b8(o, (void *)(&o->f3c));
                if (t13 != 0) {
                    o->f390 = 9;
                    if (!(o->f390 >= 0)) {
                        return;
                    }
                    if (o->f390 >= 0xe) {
                        return;
                    }
                    operation_8c11afa0((int)o);
                    *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&((S_x17312 *)(o->f390 * 0x18 + g_8c310bd8))->f00;
                    t14 = call_8c18e6fc((void *)(&(&frame)->f24));
                    if (t14 == 0) {
                        return;
                    }
                    (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f24)))();
                    return;
                }
            }
        }
    }
    if (--o->f3a4 > 0) {
        return;
    }
    v79 = (int)(((o->f34 & 0x10)) != 0);
    if (v79 == 0 && o->f418 >= 3) {
        t15 = call_8c11b8b8(o, (void *)(&o->f3c));
        if (t15 != 0) {
            o->f418 = 0;
            o->f390 = 9;
            if (!(o->f390 >= 0) || o->f390 >= 0xe) {
                return;
            }
            operation_8c11afa0((int)o);
            *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((S_x18208 *)(o->f390 * 0x18 + g_8c310bd8))->f00;
            t16 = call_8c18e6fc((void *)(&(&frame)->f18));
            if (t16 == 0) {
                return;
            }
            (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f18)))();
            return;
        }
    }
    switch (o->f3a8) {
    case 0:
        o->f408 += 1;
        o->f40c = 0;
        o->f390 = 7;
        if (!(o->f390 >= 0)) {
            return;
        }
        if (o->f390 >= 0xe) {
            return;
        }
        operation_8c11afa0((int)o);
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x18768 *)(o->f390 * 0x18 + g_8c310bd8))->f00;
        t17 = call_8c18e6fc((void *)(&(&frame)->f0c));
        if (t17 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
        return;
    case 1:
        o->f390 = 5;
        if (o->f390 >= 0) {
            if (!(o->f390 >= 0xe)) {
                operation_8c11afa0((int)o);
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x19328 *)(o->f390 * 0x18 + g_8c310bd8))->f00;
                t18 = call_8c18e6fc((void *)(&frame));
                if (t18 != 0) {
                    (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
                }
            }
        }
    }
}
