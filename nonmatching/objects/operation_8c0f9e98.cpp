/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f9e98
 * function: operation_8c0f9e98
 * language: c++
 * reference size: 544 bytes
 * compiled size: 540 bytes (-0.7%)
 * differing lines: 40 of 223 reference instruction lines
 * differing bytes: 215
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3e8 Arg0_3e8;
typedef struct S_x66576 S_x66576;
typedef struct S_x67136 S_x67136;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0x10];
    int f64;
    char unknown68[0x338];
    int f3a0;
    char unknown3a4[0x8];
    int f3ac;
    char unknown3b0[0x38];
    Arg0_3e8 *f3e8;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    float f18;
    float f1c;
    float f20;
};
struct S_x66576 {
    Vector3 f00;
};
struct S_x67136 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c30a484[];
extern "C" void object_distance_by_id(void *, unsigned short, void *);
extern "C" float call_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" int angle_difference(int, int);
extern "C" float njScalor_8c37e480(void *);
extern "C" void njUnitVector_8c37b630(void *);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" int operation_8c051ff4(void *, void *, void *);
extern "C" int operation_8c0113bc(int, int);
extern "C" float object_random_fraction(void *);
extern "C" void call_8c18e6fc(void *);
extern "C" void operation_8c0f9e98(Object *o)
{
    Frame frame;
    int v6;
    int t1;
    int t2;
    float t3;
    int t4;
    int t5;
    float t6;
    float t7;
    float t8;
    if ((int)(o->f3e8) != 0xffff) {
        object_distance_by_id((void *)o, (unsigned short)(o->f3e8), (void *)(&(&frame)->f18));
    } else {
        (&frame)->f18 = 1.0f;
        (&frame)->f1c = 0.0f;
        (&frame)->f20 = 0.0f;
    }
    t8 = call_8c130334((&frame)->f18, (&frame)->f20);
    v6 = (int)(int)(t8 * 65536.0f / 6.28318405f);
    t1 = angle_step((int)(o->f64), v6, 0x200);
    o->f64 = (int)t1;
    t2 = angle_difference((int)(o->f64), v6);
    if (0x200 > t2) {
        o->f3ac = 0;
    }
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
    t3 = njScalor_8c37e480((void *)(&(&frame)->f18));
    if (!(t3 > 0.01f)) {
        (&frame)->f18 = 1.0f;
        (&frame)->f1c = 0.0f;
        (&frame)->f20 = 0.0f;
    } else {
        njUnitVector_8c37b630((void *)(&(&frame)->f18));
    }
    (&frame)->f18 *= 0.2f;
    (&frame)->f1c *= 0.2f;
    (&frame)->f20 *= 0.2f;
    call_8c3bdf60((void *)(&o->f3c), (void *)(&(&frame)->f18));
    t4 = operation_8c051ff4((void *)o, (void *)(&o->f3c), (void *)0);
    if (t4 != 0) {
        t5 = operation_8c0113bc((int)(&o->f48), (int)(&o->f3c));
        if (t5 == 0) {
            goto L_8c0f9fbe;
        }
    }
    *(Vector3 *)&o->f3c = *(Vector3 *)&o->f48;
L_8c0f9fbe:;
    if (!(--o->f3ac > 0)) {
        t6 = njScalor_8c37e480((void *)(&(&frame)->f18));
        if (!(t6 > 50.0f)) {
            t7 = object_random_fraction((void *)o);
            if (!(0.45f > t7)) {
                goto L_8c0fa01e;
            }
        }
        o->f3a0 = 9;
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x66576 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        call_8c18e6fc((void *)(&(&frame)->f0c));
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
        return;
L_8c0fa01e:;
        o->f3a0 = 0xa;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x67136 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        call_8c18e6fc((void *)(&frame));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
    }
}
