/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fa218
 * function: operation_8c0fa218
 * language: c++
 * reference size: 748 bytes
 * compiled size: 740 bytes (-1.1%)
 * differing lines: 72 of 309 reference instruction lines
 * differing bytes: 670
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -8 bytes
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
typedef struct Arg0_3a4 Arg0_3a4;
typedef struct Arg0_3a8 Arg0_3a8;
typedef struct S_x272 S_x272;
typedef struct S_x64976 S_x64976;
typedef struct S_x89808 S_x89808;
typedef struct Block_p0_3ec {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3ec;
typedef struct Block_frame_3c {
    float f00;
    float f04;
    float f08;
} Block_frame_3c;
typedef struct Block_frame_30 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_30;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x338];
    int f3a0;
    Arg0_3a4 *f3a4;
    Arg0_3a8 *f3a8;
    int f3ac;
    char unknown3b0[0x38];
    int f3e8;
    Block_p0_3ec f3ec;
    char unknown3f8[0x10];
    int f408;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
    Block_frame_30 f30;
    Block_frame_3c f3c;
};
struct S_x89808 {
    Vector3 f00;
};
struct S_x64976 {
    Vector3 f00;
};
struct S_x272 {
    Vector3 f00;
};
struct Arg0_3a8 {
    char unknown0[0x18];
    int f18;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c30a484[];
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void call_8c18e6fc(void *);
extern "C" float object_random_fraction(void *);
extern "C" float njSin_8c37eb0c(int);
extern "C" float njCos_8c38c154(int);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float njScalor_8c37e480(void *);
extern "C" void njUnitVector_8c37b630(void *);
extern "C" int operation_8c051ff4(void *, void *, void *);
extern "C" int operation_8c0113bc(int, int);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void call_8c0ffdf0(void *, int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c0fb6d8(int, int, int, int);
extern "C" void operation_8c0fa218(Object *o)
{
    Frame frame;
    float v1;
    int v2;
    int v3;
    int v7;
    S_c8c021ef8 *t1;
    float t2;
    float t3;
    float t4;
    float t5;
    int t6;
    int t7;
    float t8;
    float t9;
    t1 = lookup_low_id((int)(o->f3e8));
    if (t1 == 0 || ((t1->f34 & 0x2000800)) != 0) {
        o->f3a0 = 5;
        *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((S_x89808 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        call_8c18e6fc((void *)(&(&frame)->f18));
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f18)))();
        return;
    }
    *(Vector3 *)&o->f3ec = *(Vector3 *)&t1->f3c;
    t8 = object_random_fraction((void *)o);
    v1 = (float)(t8 * 5.0f);
    v1 = (float)(v1 + 2.5f);
    t9 = object_random_fraction((void *)o);
    v2 = (int)(int)(t9 * 65536.0f);
    t2 = njSin_8c37eb0c(v2);
    o->f3ec.f00 += v1 * t2;
    t3 = njCos_8c38c154(v2);
    o->f3ec.f08 += v1 * t3;
    *(Vector3 *)&(&frame)->f3c = *(Vector3 *)&o->f3ec;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f3c), (void *)(&o->f3c));
    t4 = njScalor_8c37e480((void *)(&(&frame)->f3c));
    if (t4 == 0.0f) {
        o->f3a0 = 5;
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x64976 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        call_8c18e6fc((void *)(&(&frame)->f0c));
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
        return;
    }
    v3 = (int)(int)(t4 / 10.0f);
    t5 = njScalor_8c37e480((void *)(&(&frame)->f3c));
    if (!(t5 > 0.01f)) {
        (&frame)->f3c.f00 = 1.0f;
        (&frame)->f3c.f04 = 0.0f;
        (&frame)->f3c.f08 = 0.0f;
    } else {
        njUnitVector_8c37b630((void *)(&(&frame)->f3c));
    }
    (&frame)->f3c.f00 *= 10.0f;
    (&frame)->f3c.f04 *= 10.0f;
    (&frame)->f3c.f08 *= 10.0f;
    *(Vector3 *)&(&frame)->f30 = *(Vector3 *)&o->f3c;
    (&frame)->f30.f04 += 5.0f;
    v7 = (int)v3;
    while (v7 > 0) {
        *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&(&frame)->f30;
        t6 = operation_8c051ff4((void *)o, (void *)(&(&frame)->f24), (void *)0);
        if (t6 != 0) {
            t7 = operation_8c0113bc((int)(&o->f3c), (int)(&(&frame)->f30));
            if (t7 == 0) {
                goto L_8c0fa41e;
            }
        }
        o->f3a0 = 9;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x272 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        call_8c18e6fc((void *)(&frame));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        return;
L_8c0fa41e:;
        call_8c3bdf60((void *)(&(&frame)->f30), (void *)(&(&frame)->f3c));
        v7 = (int)(v7 + -1);
    }
    o->f3ac = 0x5a;
    call_8c0ffdf0((void *)(o->f3a4), 0);
    play_se_8c05fbf8(0x30018, (void *)(&o->f3ec), 0, 0);
    operation_8c0fb6d8((int)o, (int)(&o->f3ec), (int)(o->f64), (int)o);
    o->f3a8->f18 &= -0x14001ad1;
    o->f408 = 1;
}
