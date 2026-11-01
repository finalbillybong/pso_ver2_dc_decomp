/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c160138
 * function: operation_8c160138
 * language: c++
 * reference size: 1208 bytes
 * compiled size: 1204 bytes (-0.3%)
 * differing lines: 130 of 482 reference instruction lines
 * differing bytes: 654
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3bc Arg0_3bc;
typedef struct Arg0_3d4 Arg0_3d4;
typedef struct Arg0_3d8 Arg0_3d8;
typedef struct S_x11744 S_x11744;
typedef struct S_x20544 S_x20544;
typedef struct S_x21328 S_x21328;
typedef struct S_x21888 S_x21888;
typedef struct S_x22448 S_x22448;
typedef struct Block_frame_48 {
    float f00;
    float f04;
    float f08;
} Block_frame_48;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x2c8];
    short f330;
    char unknown332[0x5e];
    int f390;
    int f394;
    char unknown398[0x4];
    int f39c;
    char unknown3a0[0x1c];
    Arg0_3bc *f3bc;
    Vector3 f3c0;
    float f3cc;
    int f3d0;
    Arg0_3d4 *f3d4;
    Arg0_3d8 *f3d8;
    int f3dc;
    int f3e0;
    char unknown3e4[0x40];
    int f424;
};
struct S_c8c053d84 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
};
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
    Vector3 f30;
    Vector3 f3c;
    Block_frame_48 f48;
};
struct S_x11744 {
    Vector3 f00;
};
struct S_x20544 {
    Vector3 f00;
};
struct S_x21328 {
    Vector3 f00;
};
struct Arg0_3bc {
    char unknown0[0x394];
    int f394;
};
struct S_x21888 {
    Vector3 f00;
};
struct S_x22448 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c316c90[];
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" int call_8c18e6fc(void *);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float njScalor_8c37e480(void *);
extern "C" void njUnitVector_8c37b630(void *);
extern "C" float call_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" void call_8c15eb34(Object *, void *);
extern "C" float squared_distance_xz(void *, void *);
extern "C" int call_8c18e768(void *, int);
extern "C" void create_effect_777c(void *, int);
extern "C" void operation_8c160138(Object *o)
{
    Frame frame;
    int v2;
    int v1;
    int v4;
    int v18;
    int v17;
    int v20;
    int v22;
    int v21;
    int v24;
    int v25;
    int v27;
    int v28;
    int v30;
    int v31;
    int v33;
    int v38;
    int v37;
    int v40;
    int v41;
    int v42;
    int v43;
    int v45;
    int v47;
    int v46;
    int v49;
    S_c8c053d84 *t1;
    int t2;
    float t3;
    float t4;
    int t5;
    int t6;
    float t7;
    int t8;
    int t9;
    int t10;
    int t11;
    t1 = lookup_object_by_id((unsigned short)(o->f3d4));
    if (t1 == 0 || ((t1->f34 & 0x2000800)) != 0) {
        v2 = (int)o->f390;
        v1 = (int)o->f394;
        if (v2 != v1) {
            o->f390 = (int)v1;
        }
        o->f394 = 2;
        v4 = (int)o->f394;
        if (!(v4 >= 0) || v4 >= 0x11) {
            return;
        }
        *(Vector3 *)&(&frame)->f3c = *(Vector3 *)&((S_x11744 *)(v4 * 0x18 + g_8c316c90))->f00;
        t2 = call_8c18e6fc((void *)(&(&frame)->f3c));
        if (t2 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f3c)))();
        return;
    }
    *(int *)((char *)o + 0x3d0) -= 1;
    *(Vector3 *)&(&frame)->f48 = *(Vector3 *)&t1->f3c;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f48), (void *)(((char *)o + 0x3c)));
    (&frame)->f48.f04 = 0.0f;
    t3 = njScalor_8c37e480((void *)(&(&frame)->f48));
    if (!(t3 > 0.01f)) {
        (&frame)->f48.f00 = 1.0f;
        (&frame)->f48.f08 = 0.0f;
    } else {
        njUnitVector_8c37b630((void *)(&(&frame)->f48));
    }
    t4 = call_8c130334((&frame)->f48.f00, (&frame)->f48.f08);
    t5 = angle_step((int)(o->f64), (int)((int)(t4 * 65536.0f / 6.28318405f)), 0x101);
    o->f64 = (int)t5;
    if (o->f3d0 > 0) {
        if (!((o->f3cc += 0.075f) > 1.25f)) {
            goto L_8c1602d4;
        }
        o->f3cc = 1.25f;
    } else {
        if (0.0f > (o->f3cc -= 0.075f)) {
            o->f3cc = 0.0f;
        }
    }
L_8c1602d4:;
    (&frame)->f48.f00 = o->f3cc * (&frame)->f48.f00;
    (&frame)->f48.f08 *= o->f3cc;
    call_8c15eb34(o, (void *)(&(&frame)->f48));
    if (o->f3cc == 0.0f) {
        v18 = (int)o->f390;
        v17 = (int)o->f394;
        if (v18 != v17) {
            o->f390 = (int)v17;
        }
        o->f394 = 0xa;
        v20 = (int)o->f394;
        if (!(v20 >= 0) || v20 >= 0x11) {
            return;
        }
        *(Vector3 *)&(&frame)->f30 = *(Vector3 *)&((S_x20544 *)(v20 * 0x18 + g_8c316c90))->f00;
        t6 = call_8c18e6fc((void *)(&(&frame)->f30));
        if (t6 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f30)))();
        return;
    }
    t7 = squared_distance_xz((void *)(&t1->f3c), (void *)(((char *)o + 0x3c)));
    if (625.0f > t7) {
        v22 = (int)o->f390;
        v21 = (int)o->f394;
        if (v22 != v21) {
            o->f390 = (int)v21;
        }
        o->f394 = 0xb;
        v24 = (int)o->f394;
        if (!(v24 >= 0) || v24 >= 0x11) {
            return;
        }
        *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&((S_x21328 *)(v24 * 0x18 + g_8c316c90))->f00;
        t8 = call_8c18e6fc((void *)(&(&frame)->f24));
        if (t8 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f24)))();
        return;
    }
    v25 = (int)0;
    v30 = (int)v25;
    if (o->f39c == 0) {
        v27 = (int)1;
        if (o->f3bc->f394 != 7 && o->f3bc->f394 != 8) {
            v27 = (int)v25;
        }
        v28 = (int)v25;
        if (v27 == 0) {
            v28 = (int)1;
        }
        v30 = (int)v28;
    }
    v33 = (int)v25;
    if (v30 != 0) {
        v31 = (int)v25;
        if (o->f3dc == 0) {
            v31 = (int)1;
        }
        v33 = (int)v31;
    }
    if (v33 != 0) {
        t9 = call_8c18e768((void *)(o->f3d8), 2);
        if (t9 >= o->f330) {
            v25 = (int)1;
        }
    }
    if (v25 != 0) {
        v38 = (int)o->f390;
        v37 = (int)o->f394;
        if (v38 != v37) {
            o->f390 = (int)v37;
        }
        o->f394 = 0xc;
        v40 = (int)o->f394;
        if (!(v40 >= 0) || v40 >= 0x11) {
            return;
        }
        *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((S_x21888 *)(v40 * 0x18 + g_8c316c90))->f00;
        t10 = call_8c18e6fc((void *)(&(&frame)->f18));
        if (t10 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f18)))();
        return;
    }
    v45 = (int)0;
    if (o->f3e0 == 0) {
        v42 = (int)1;
        v43 = (int)0;
        if (o->f3bc->f394 != 7) {
            v41 = (int)1;
            if (o->f3bc->f394 != 8) {
                v41 = (int)0;
            }
            v42 = (int)v41;
        }
        if (v42 != 0) {
            v43 = (int)1;
        }
        v45 = (int)v43;
    }
    if (v45 != 0) {
        v47 = (int)o->f390;
        v46 = (int)o->f394;
        if (v47 != v46) {
            o->f390 = (int)v46;
        }
        o->f394 = 0x10;
        v49 = (int)o->f394;
        if (!(v49 >= 0)) {
            return;
        }
        if (v49 >= 0x11) {
            return;
        }
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x22448 *)(v49 * 0x18 + g_8c316c90))->f00;
        t11 = call_8c18e6fc((void *)(&(&frame)->f0c));
        if (t11 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
        return;
    }
    if (((o->f424 & 7)) == 0) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c0;
        (&frame)->f00.f04 += 5.0f;
        create_effect_777c((void *)(&frame), 0xf3);
    }
}
