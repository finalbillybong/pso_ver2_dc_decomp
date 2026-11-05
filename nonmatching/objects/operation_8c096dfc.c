/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c096dfc
 * function: operation_8c096dfc
 * language: c
 * reference size: 116 bytes
 * compiled size: 116 bytes (+0.0%)
 * differing lines: 8 of 54 reference instruction lines
 * differing bytes: 9
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_74 Arg0_74;
typedef struct Arg0_78 Arg0_78;
struct Object {
    char unknown0[0x40];
    float f40;
    float f44;
    float f48;
    char unknown4c[0x4];
    float f50;
    char unknown54[0x1c];
    float f70;
    Arg0_74 *f74;
    Arg0_78 *f78;
};
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
void operation_8c096dfc(Object *o)
{
    float v2;
    float t1;
    float t2;
    float t3;
    void *pm5;
    float t4;
    float pm7;
    float pm8;
    float pm9;
    float pm6;
    pm5 = (void *)(o->f74);
    t1 = njSin_8c37eb0c(pm5);
    pm7 = o->f70;
    o->f44 = pm7 * t1 + o->f50;
    pm8 = njCos_8c38c154((void *)(o->f74));
    t4 = pm8;
    t1 = (float)o->f70 * t4;
    pm5 = (void *)(o->f78);
    pm9 = t1;
    v2 = (float)(pm9);
    t2 = njSin_8c37eb0c(pm5);
    o->f40 = v2 * t2;
    t3 = njCos_8c38c154((void *)(o->f78));
    pm6 = v2 * t3;
    o->f48 = pm6;
}
