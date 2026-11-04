/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1bbeb8
 * function: TBoss4Uro_ctor_8c1bbeb8
 * language: c
 * reference size: 336 bytes
 * compiled size: 340 bytes (+1.2%)
 * differing lines: 42 of 126 reference instruction lines
 * differing bytes: 297
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * class header: src/include/classes/TBoss4Uro.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3a0 Arg0_3a0;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x348];
    int f390;
    char unknown394[0xc];
    Arg0_3a0 *f3a0;
    int f3a4;
    float f3a8;
    float f3ac;
    float f3b0;
    float f3b4;
    char unknown3b8[0x28];
    float f3e0;
    float f3e4;
    float f3e8;
};
struct Arg0_3a0 {
    char unknown0[0x18];
    int f18;
};
extern int g_8c327dbc;
extern void TBoss4Zako_ctor_8c1bb138(Object *, int, int);
extern float njScalor_8c37e480(void *);
extern void njUnitVector_8c37b630(void *);
extern float object_random_fraction(void *);
Object *TBoss4Uro_ctor_8c1bbeb8(Object *o, int a1, int a2)
{
    Object **home = &o;
    float t1;
    float t2;
    (void)home;
    TBoss4Zako_ctor_8c1bb138(o, a1, a2);
    o->dispatch = (void *)0x8c275204;
    o->tag = (int)(g_8c327dbc);
    o->size = 0x3ec;
    o->f3a8 = -o->f3c;
    o->f3ac = 0.0f;
    o->f3b0 = -o->f44;
    t1 = njScalor_8c37e480((void *)(&o->f3a8));
    if (0.01f > t1) {
        o->f3a8 = 1.0f;
        o->f3b0 = 0.0f;
    }
    njUnitVector_8c37b630((void *)(&o->f3a8));
    t2 = object_random_fraction((void *)o);
    o->f3b4 = t2 * 0.416666657f + 1.66666663f;
    o->f3a8 *= o->f3b4;
    o->f3b0 *= o->f3b4;
    o->f3a4 = 0xffff;
    o->f3e0 = 0.0f;
    o->f3e4 = 0.0f;
    o->f3e8 = 0.0f;
    o->f390 = 4;
    o->f3a0->f18 |= 1;
    return o;
}
