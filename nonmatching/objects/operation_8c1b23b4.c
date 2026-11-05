/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b23b4
 * function: operation_8c1b23b4
 * language: c
 * reference size: 376 bytes
 * compiled size: 380 bytes (+1.1%)
 * differing lines: 18 of 139 reference instruction lines
 * differing bytes: 350
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Block_p0_3f8 {
    float f00;
    float f04;
    float f08;
} Block_p0_3f8;
typedef struct Block_p0_410 {
    float f00;
    float f04;
    float f08;
} Block_p0_410;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x348];
    int f390;
    char unknown394[0xc];
    int f3a0;
    char unknown3a4[0x18];
    Vector3 f3bc;
    char unknown3c8[0x30];
    Block_p0_3f8 f3f8;
    float f404;
    float f408;
    float f40c;
    Block_p0_410 f410;
};
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern float njScalor_8c37e480(void *);
extern void njUnitVector_8c37b630(void *);
extern float errno_wrap_8c130334(float, float);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
void operation_8c1b23b4(Object *o)
{
    float v7;
    float t4;
    float pm13;
    void *pm5;
    int v6;
    float t1;
    Block_p0_3f8 *pm10;
    float t2;
    void *pm9;
    int v4;
    float pm6;
    void *pm7;
    float pm11;
    float pm12;
    float pm8;
    float pm14;
    pm10 = &o->f3f8;
    pm7 = (void *)(&o->f3c);
    pm9 = (void *)(&o->f3f8);
    *(Vector3 *)pm10 = *(&o->f3bc);
    vector_sub_in_place_8c37f6f0(pm9, pm7);
    o->f3f8.f04 = 0.0f;
    t1 = njScalor_8c37e480((void *)(&o->f3f8));
    if (!(t1 > 0.01f)) {
        o->f3f8.f00 = 1.0f;
        o->f3f8.f04 = 0.0f;
        o->f3f8.f08 = 0.0f;
    } else {
        pm7 = (void *)(&o->f3f8);
        pm9 = pm7;
        njUnitVector_8c37b630(pm9);
    }
    pm13 = errno_wrap_8c130334(o->f3f8.f00, o->f3f8.f08);
    t4 = pm13;
    v6 = (int)((t4 * 65536.0f) / 6.28318405f);
    if (!(0 != o->f390 - 6)) {
        v6 = 0x4000 + v6;
    } else {
        v6 -= 0x4000;
    }
    t2 = njSin_8c37eb0c(v6);
    o->f404 = t2;
    pm14 = njCos_8c38c154(v6);
    o->f40c = pm14;
    pm12 = 0.0f;
    o->f408 = pm12;
    pm11 = 280.0f;
    *(Vector3 *)(&o->f410) = *(&o->f3c);
    pm5 = (void *)(&o->f410);
    pm8 = 280.0f;
    pm6 = pm8;
    o->f410.f04 = 0.0f;
    njUnitVector_8c37b630(pm5);
    o->f410.f00 *= pm6;
    t1 = o->f410.f08 * pm11;
    o->f410.f08 = t1;
    o->f3a0 = 0x96;
}
