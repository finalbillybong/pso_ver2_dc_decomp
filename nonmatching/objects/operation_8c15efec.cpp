/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15efec
 * function: operation_8c15efec
 * language: c++
 * reference size: 1916 bytes
 * compiled size: 1924 bytes (+0.4%)
 * differing lines: 456 of 755 reference instruction lines
 * differing bytes: 1596
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3bc Arg0_3bc;
typedef struct Arg0_3d4 Arg0_3d4;
typedef struct Arg0_3d8 Arg0_3d8;
typedef struct Arg0_64 Arg0_64;
typedef struct S_x39024 S_x39024;
typedef struct S_x40192 S_x40192;
typedef struct S_x40592 S_x40592;
typedef struct S_x45184 S_x45184;
typedef struct S_x46080 S_x46080;
typedef struct S_x85648 S_x85648;
typedef struct Block_frame_54 {
    float f00;
    float f04;
    float f08;
} Block_frame_54;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x23e];
    short f330;
    char unknown332[0x5e];
    int f390;
    int f394;
    char unknown398[0x4];
    int f39c;
    char unknown3a0[0x1c];
    Arg0_3bc *f3bc;
    char unknown3c0[0xc];
    float f3cc;
    int f3d0;
    Arg0_3d4 *f3d4;
    Arg0_3d8 *f3d8;
    int f3dc;
    int f3e0;
    char unknown3e4[0x10];
    float f3f4;
};
struct Arg0_3bc {
    char unknown0[0x394];
    int f394;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    float f18;
    char unknown1c[0x4];
    float f20;
    Vector3 f24;
    Vector3 f30;
    Vector3 f3c;
    Vector3 f48;
    Block_frame_54 f54;
    float f60;
    char unknown64[0x4];
    float f68;
};
struct S_x40192 {
    Vector3 f00;
};
struct S_x85648 {
    Vector3 f00;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct S_x39024 {
    Vector3 f00;
};
struct S_x40592 {
    Vector3 f00;
};
struct S_x45184 {
    Vector3 f00;
};
struct S_x46080 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c316c90[];
extern "C" int call_8c18e6fc(void *);
extern "C" int call_8c04a52c(Object *, void *, float);
extern "C" float call_8c130334(float, float);
extern "C" int angle_difference(int, int);
extern "C" int angle_step(int, int, int);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" float njCos_8c38c154(void *);
extern "C" float njSin_8c37eb0c(void *);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float njScalor_8c37e480(void *);
extern "C" void njUnitVector_8c37b630(void *);
extern "C" void call_8c15eb34(Object *, void *);
extern "C" int call_8c18e768(void *, int);
extern "C" int operation_8c04a638(Object *, void *, float);
extern "C" int lookup_object_by_id(unsigned short);
extern "C" float squared_distance_xz(void *, void *);
extern "C" void operation_8c15efec(Object *o)
{
    Frame frame;
    int v4;
    int v6;
    int v5;
    int v8;
    int v10;
    int v9;
    int v12;
    int v33;
    int v55;
    int v79;
    int v35;
    float v39;
    float v53;
    int v37;
    int v80;
    int v57;
    int v58;
    int v60;
    int v61;
    int v63;
    int v67;
    int v66;
    int v69;
    int v70;
    int v71;
    int v72;
    int v74;
    int v76;
    int v75;
    int v78;
    int v88;
    int v34;
    int v83;
    float v171;
    int v54;
    int v81;
    int v91;
    int v89;
    int v103;
    int v102;
    int v105;
    int v110;
    int v109;
    int v112;
    int t1;
    int t2;
    int t3;
    int t4;
    S_c8c021ef8 *t5;
    float t6;
    float t7;
    float t8;
    float t9;
    float t10;
    int t11;
    int t12;
    int t13;
    int t14;
    float t15;
    int t16;
    int t17;
    float t18;
    int t19;
    int t20;
    float t21;
    int t22;
    int t23;
    int t24;
    float t25;
    if (--*(int *)((char *)o + 0x3d0) > 0) {
        return;
    }
    if (o->f3d0 == 0) {
        o->fe8 = (unsigned int)o->fe8 >> 1 << 1;
        o->ff0 = 1;
    }
    switch (o->f39c) {
    case 1:
        v4 = (int)(o->f3bc->f394 == 0xc);
        if (v4 == 0) {
        } else {
            if (27.5f > o->f3f4) {
                v6 = (int)o->f390;
                v5 = (int)o->f394;
                if (v6 != v5) {
                    o->f390 = (int)v5;
                }
                o->f394 = 0xa;
                v8 = (int)o->f394;
                if (!(v8 >= 0)) {
                    return;
                }
                if (v8 >= 0x11) {
                    return;
                }
                *(Vector3 *)&(&frame)->f48 = *(Vector3 *)&((S_x40192 *)(v8 * 0x18 + g_8c316c90))->f00;
                t1 = call_8c18e6fc((void *)(&(&frame)->f48));
                if (t1 == 0) {
                    return;
                }
                (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f48)))();
                return;
            }
            v10 = (int)o->f390;
            v9 = (int)o->f394;
            if (v10 != v9) {
                o->f390 = (int)v9;
            }
            o->f394 = 0xd;
            v12 = (int)o->f394;
            if (!(v12 >= 0)) {
                return;
            }
            if (v12 >= 0x11) {
                return;
            }
            *(Vector3 *)&(&frame)->f3c = *(Vector3 *)&((S_x85648 *)(v12 * 0x18 + g_8c316c90))->f00;
            t2 = call_8c18e6fc((void *)(&(&frame)->f3c));
            if (t2 == 0) {
                return;
            }
            (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f3c)))();
            return;
        }
    }
    t24 = call_8c04a52c(o, (void *)(&(&frame)->f60), 500.0f);
    v34 = (int)0;
    v33 = (int)(unsigned short)t24;
    if (v33 != 0xffff) {
        t25 = call_8c130334((&frame)->f60, (&frame)->f68);
        v35 = (int)(int)(t25 * 65536.0f / 6.28318405f);
        t3 = angle_difference((int)(o->f64), v35);
        if (0x208 > t3) {
            v34 = (int)1;
        }
        v37 = (int)v35;
    }
    if (v34 != 0) {
        t4 = angle_step((int)(o->f64), v37, 0x208);
        o->f64 = (Arg0_64 *)(int)t4;
        v39 = (float)75.0f;
        t5 = lookup_low_id(v33);
        if (t5 == 0) {
            goto L_8c15f302;
        }
        if (o->f39c == 1) {
            v39 = (float)(v39 * -1.0f);
        }
        *(Vector3 *)&(&frame)->f54 = *(Vector3 *)&t5->f3c;
        t6 = njCos_8c38c154((void *)(o->f64));
        (&frame)->f54.f00 += v39 * t6;
        t7 = njSin_8c37eb0c((void *)(o->f64));
        (&frame)->f54.f08 -= v39 * t7;
        vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f54), (void *)(((char *)o + 0x3c)));
        (&frame)->f54.f04 = 0.0f;
        t8 = njScalor_8c37e480((void *)(&(&frame)->f54));
        if (!(t8 > 0.01f)) {
            (&frame)->f54.f08 = 0.0f;
            (&frame)->f54.f00 = 0.0f;
            goto L_8c15f302;
        }
        njUnitVector_8c37b630((void *)(&(&frame)->f54));
    } else {
        if (o->f39c == 0) {
            o->f64 = (Arg0_64 *)((int)o->f64 + -0x208);
        } else {
            o->f64 = (Arg0_64 *)((int)o->f64 + 0x208);
        }
        t9 = njSin_8c37eb0c((void *)(o->f64));
        (&frame)->f54.f00 = t9;
        t10 = njCos_8c38c154((void *)(o->f64));
        (&frame)->f54.f08 = t10;
        (&frame)->f54.f04 = 0.0f;
    }
L_8c15f302:;
    v53 = (float)*(float *)((char *)0x8c286430 + (o->f39c << 2));
    if ((o->f3cc += 0.025f) > v53) {
        o->f3cc = v53;
    }
    (&frame)->f54.f00 *= o->f3cc;
    (&frame)->f54.f08 *= o->f3cc;
    call_8c15eb34(o, (void *)(&(&frame)->f54));
    v54 = (int)0;
    v55 = (int)o->f39c;
    v60 = (int)v54;
    if (v55 == 0) {
        v57 = (int)1;
        if (o->f3bc->f394 != 7 && o->f3bc->f394 != 8) {
            v57 = (int)v54;
        }
        v58 = (int)v54;
        if (v57 == 0) {
            v58 = (int)1;
        }
        v60 = (int)v58;
    }
    v63 = (int)v54;
    if (v60 != 0) {
        v61 = (int)v54;
        if (o->f3dc == 0) {
            v61 = (int)1;
        }
        v63 = (int)v61;
    }
    if (v63 != 0) {
        t11 = call_8c18e768((void *)(o->f3d8), 2);
        if (t11 >= o->f330) {
            v54 = (int)1;
        }
    }
    if (v54 != 0) {
        v67 = (int)o->f390;
        v66 = (int)o->f394;
        if (v67 != v66) {
            o->f390 = (int)v66;
        }
        o->f394 = 0xc;
        v69 = (int)o->f394;
        if (!(v69 >= 0) || v69 >= 0x11) {
            return;
        }
        *(Vector3 *)&(&frame)->f30 = *(Vector3 *)&((S_x39024 *)(v69 * 0x18 + g_8c316c90))->f00;
        t12 = call_8c18e6fc((void *)(&(&frame)->f30));
        if (t12 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f30)))();
        return;
    }
    v74 = (int)0;
    if (o->f3e0 == 0) {
        v71 = (int)1;
        v72 = (int)0;
        if (o->f3bc->f394 != 7) {
            v70 = (int)1;
            if (o->f3bc->f394 != 8) {
                v70 = (int)0;
            }
            v71 = (int)v70;
        }
        if (v71 != 0) {
            v72 = (int)1;
        }
        v74 = (int)v72;
    }
    if (v74 != 0) {
        v76 = (int)o->f390;
        v75 = (int)o->f394;
        if (v76 != v75) {
            o->f390 = (int)v75;
        }
        o->f394 = 0x10;
        v78 = (int)o->f394;
        if (!(v78 >= 0) || v78 >= 0x11) {
            return;
        }
        *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&((S_x40592 *)(v78 * 0x18 + g_8c316c90))->f00;
        t13 = call_8c18e6fc((void *)(&(&frame)->f24));
        if (t13 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f24)))();
        return;
    }
    v79 = (int)(((o->f34 & 0x10)) != 0);
    if (v79 != 0) {
        v80 = (int)0;
        v81 = (int)0;
        v83 = (int)1;
        if (o->f3bc->f394 != 9 && o->f3bc->f394 != 0xb) {
            v83 = (int)v80;
        }
        if (v83 == 0) {
            v171 = (float)*(float *)((char *)0x8c286428 + (v55 << 2));
            o->f34 |= 0x2000000;
            t14 = operation_8c04a638(o, (void *)(&(&frame)->f18), v171);
            o->f34 &= -0x2000001;
            o->f3d4 = (Arg0_3d4 *)(unsigned short)t14;
            if ((unsigned short)t14 != 0xffff) {
                v81 = (int)1;
            }
        }
        if (v81 == 0) {
            goto L_8c15f62c;
        }
        t15 = call_8c130334((&frame)->f18, (&frame)->f20);
        t16 = angle_difference((int)(o->f64), (int)((int)(t15 * 65536.0f / 6.28318405f)));
        if (!(0x400 > t16)) {
            goto L_8c15f62c;
        }
        v89 = (int)v81;
        v88 = (int)1;
    } else {
        v88 = (int)0;
        v89 = (int)0;
        v91 = (int)1;
        if (o->f3bc->f394 != 9 && o->f3bc->f394 != 0xb) {
            v91 = (int)v88;
        }
        if (v91 == 0) {
            t17 = call_8c04a52c(o, (void *)(&(&frame)->f18), *(float *)((char *)0x8c286428 + (v55 << 2)));
            o->f3d4 = (Arg0_3d4 *)(unsigned short)t17;
            if ((unsigned short)t17 != 0xffff) {
                v89 = (int)1;
            }
        }
        if (v89 != 0) {
            t18 = call_8c130334((&frame)->f18, (&frame)->f20);
            t19 = angle_difference((int)(o->f64), (int)((int)(t18 * 65536.0f / 6.28318405f)));
            if (0x400 > t19) {
                v88 = (int)1;
            }
        }
    }
    v81 = (int)v89;
    v80 = (int)v88;
L_8c15f62c:;
    if (v80 == 0) {
        return;
    }
    t20 = lookup_object_by_id((unsigned short)(o->f3d4));
    if (t20 != 0) {
        t21 = squared_distance_xz((void *)(t20 + 0x3c), (void *)(((char *)o + 0x3c)));
        if (756.25f > t21) {
            v103 = (int)o->f390;
            v102 = (int)o->f394;
            if (v103 != v102) {
                o->f390 = (int)v102;
            }
            o->f394 = 0xa;
            v105 = (int)o->f394;
            if (!(v105 >= 0)) {
                return;
            }
            if (v105 >= 0x11) {
                return;
            }
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x45184 *)(v105 * 0x18 + g_8c316c90))->f00;
            t22 = call_8c18e6fc((void *)(&(&frame)->f0c));
            if (t22 == 0) {
                return;
            }
            (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
            return;
        }
    }
    v110 = (int)o->f390;
    v109 = (int)o->f394;
    if (v110 != v109) {
        o->f390 = (int)v109;
    }
    o->f394 = 9;
    v112 = (int)o->f394;
    if (v112 >= 0 && !(v112 >= 0x11)) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x46080 *)(v112 * 0x18 + g_8c316c90))->f00;
        t23 = call_8c18e6fc((void *)(&frame));
        if (t23 != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        }
    }
}
