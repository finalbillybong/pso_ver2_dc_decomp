/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15fab0
 * function: operation_8c15fab0
 * language: c++
 * reference size: 476 bytes
 * compiled size: 472 bytes (-0.8%)
 * differing lines: 18 of 210 reference instruction lines
 * differing bytes: 139
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3bc Arg0_3bc;
typedef struct Arg0_s3a8 Arg0_s3a8;
typedef struct S_x10672 S_x10672;
typedef struct S_x57584 S_x57584;
typedef struct Block_frame_18 {
    float f00;
    float f04;
} Block_frame_18;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x29e];
    int f390;
    int f394;
    char unknown398[0x10];
    Block8 f3a8;
    char unknown3b0[0x4];
    int f3b4;
    char unknown3b8[0x4];
    Arg0_3bc *f3bc;
    char unknown3c0[0x10];
    int f3d0;
    char unknown3d4[0xc];
    int f3e0;
};
struct Arg0_3bc {
    char unknown0[0x394];
    int f394;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    Block_frame_18 f18;
    float f20;
};
struct S_x57584 {
    Vector3 f00;
};
struct S_x10672 {
    Vector3 f00;
};
struct Arg0_s3a8 {
    char unknown0[0x8];
    int f08;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c316c90[];
extern "C" int call_8c18e6fc(void *);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" int signed_angle_delta(int, int);
static inline int is_busy(Object *o)
{
    int r;
    r = 1;
    if (o->f3bc->f394 != 7 && o->f3bc->f394 != 8) {
        r = 0;
    }
    return r;
}
extern "C" void operation_8c15fab0(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    int v3;
    int v6;
    int v9;
    int v8;
    int v11;
    int v12;
    int v13;
    int v15;
    int v14;
    int v17;
    int v18;
    float v19;
    int t1;
    int t2;
    int t3;
    v6 = 0;
    if (o->f3e0 == 0) {
        if (is_busy(o) != 0) {
            v6 = 1;
        }
    }
    if (v6 != 0) {
        v9 = (int)o->f390;
        v8 = (int)o->f394;
        if (v9 != v8) {
            o->f390 = (int)v8;
        }
        o->f394 = 0x10;
        v11 = (int)o->f394;
        if (!(v11 >= 0) || v11 >= 0x11) {
            return;
        }
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x57584 *)(v11 * 0x18 + g_8c316c90))->f00;
        t1 = call_8c18e6fc((void *)(&(&frame)->f0c));
        if (t1 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
        return;
    }
    if (is_busy(o) != 0) {
        v15 = (int)o->f390;
        v14 = (int)o->f394;
        if (v15 != v14) {
            o->f390 = (int)v14;
        }
        o->f394 = 2;
        v17 = (int)o->f394;
        if (!(v17 >= 0)) {
            return;
        }
        if (v17 >= 0x11) {
            return;
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x10672 *)(v17 * 0x18 + g_8c316c90))->f00;
        t2 = call_8c18e6fc((void *)(&frame));
        if (t2 == 0) {
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        return;
    }
    v18 = (int)((int)o->f3d0 + -5);
    if (v18 > 0) {
        *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&o->f3a8;
        v19 = (float)1.0f;
        v19 = (float)(v19 / (float)v18);
        vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f18), (void *)(((char *)o + 0x3c)));
        (&frame)->f18.f00 *= v19;
        (&frame)->f18.f04 *= v19;
        (&frame)->f20 *= v19;
        call_8c3bdf60((void *)(((char *)o + 0x3c)), (void *)(&(&frame)->f18));
        o->f64 = (int)(v19 * (float)signed_angle_delta((int)(o->f64), (int)(o->f3b4)) + (float)o->f64);
    } else {
        if (v18 == 0) {
            o->ff0 = 0;
        }
    }
    o->f3d0 -= 1;
}
