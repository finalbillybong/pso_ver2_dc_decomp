/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f9314
 * function: operation_8c0f9314
 * language: c++
 * reference size: 440 bytes
 * compiled size: 436 bytes (-0.9%)
 * differing lines: 46 of 163 reference instruction lines
 * differing bytes: 370
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
typedef struct Arg0_3a4 Arg0_3a4;
typedef struct Arg0_3a8 Arg0_3a8;
typedef struct S_x31872 S_x31872;
typedef struct S_x76384 S_x76384;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
    Arg0_3a4 *f3a4;
    Arg0_3a8 *f3a8;
    char unknown3ac[0x8];
    float f3b4;
    char unknown3b8[0x4];
    float f3bc;
    char unknown3c0[0x10];
    float f3d0;
    float f3d4;
    char unknown3d8[0x4];
    float f3dc;
    char unknown3e0[0x28];
    int f408;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
struct S_x76384 {
    Vector3 f00;
};
struct S_x31872 {
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
extern "C" int call_8c04a52c(Object *, void *, float);
extern "C" void call_8c18e6fc(void *);
extern "C" float object_random_fraction(void *);
extern "C" float njSin_8c37eb0c(int);
extern "C" float njCos_8c38c154(int);
extern "C" float njScalor_8c37e480(void *);
extern "C" void njUnitVector_8c37b630(void *);
extern "C" void call_8c0ffdf0(void *, int);
extern "C" void operation_8c0f9314(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    float t2;
    float t3;
    float t4;
    float t5;
    float t6;
    o->f3d0 = 0.0f;
    t1 = call_8c04a52c(o, (void *)(&o->f3d4), 200.0f);
    if ((unsigned short)t1 == 0xffff) {
        o->f3a0 = 2;
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x76384 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        call_8c18e6fc((void *)(&(&frame)->f0c));
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
        return;
    }
    t6 = object_random_fraction((void *)o);
    v1 = (int)(int)(t6 * 1048575.0f);
    t2 = njSin_8c37eb0c(v1);
    o->f3d4 += t2 * 15.0f;
    t3 = njCos_8c38c154(v1);
    o->f3dc += t3 * 15.0f;
    t4 = njScalor_8c37e480((void *)(&o->f3d4));
    if (!(t4 > 0.01f)) {
        o->f3a0 = 2;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x31872 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
        call_8c18e6fc((void *)(&frame));
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        return;
    }
    njUnitVector_8c37b630((void *)(&o->f3d4));
    t5 = object_random_fraction((void *)o);
    o->f3b4 = t5 * 20.0f + 50.0f;
    o->f3bc = 1.0f;
    call_8c0ffdf0((void *)(o->f3a4), 8);
    o->f3a8->f18 &= -0x14001ad1;
    o->f3a8->f18 |= 0x14000050;
    o->f408 = 0;
}
