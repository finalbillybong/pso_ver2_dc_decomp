/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0df074
 * function: operation_8c0df074
 * language: c
 * reference size: 312 bytes
 * compiled size: 312 bytes (+0.0%)
 * differing lines: 38 of 137 reference instruction lines
 * differing bytes: 73
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x48];
    float f48;
};
struct Arg1 {
    float f00;
    char unknown4[0x8];
    float f0c;
    char unknown10[0x4];
    float f14;
    char unknown18[0x8];
    float f20;
    char unknown24[0x4];
    float f28;
};
struct Arg2 {
    char unknown0[0x20];
    float f20;
    char unknown24[0x4];
    float f28;
};
extern void call_8c38b150(Arg1 *);
void operation_8c0df074(Object *o, Arg1 *a1, Arg2 *a2, float f0, float f1, float f2, float f3)
{
    float v4;
    float v28;
    float v1;
    float v29;
    float v5;
    float t;
    if (64.0f > f2) {
        v1 = (float)(f2 * 0.5f);
    } else {
        v1 = (float)32.0f;
    }
    v4 = (float)o->f48;
    v28 = (float)(f1 * 0.342f);
    v4 = (float)(v4 - v28);
    v4 = (float)(v4 + f0);
    a1->f00 = v4;
    a1->f0c = v1;
    v29 = (float)(-f3 * 0.342f);
    a1->f14 = v29;
    a1->f20 = 0.3828125f;
    a1->f28 = v1 / 256.0f;
    t = a2->f20;
    a1->f00 = (a1->f00 - t) * a2->f28 + t;
    a1->f0c *= a2->f28;
    a1->f14 *= a2->f28;
    call_8c38b150(a1);
    a1->f00 = v4 + f2 - v1;
    t = a2->f20;
    a1->f00 = (a1->f00 - t) * a2->f28 + t;
    a1->f20 = (194.0f - v1) / 256.0f;
    call_8c38b150(a1);
    v5 = (float)((f2 - 64.0f) * a2->f28);
    if (!(0.0f > v5)) {
        a1->f00 = v4 + 32.0f;
        t = a2->f20;
    a1->f00 = (a1->f00 - t) * a2->f28 + t;
        a1->f0c = v5;
        a1->f20 = 0.5078125f;
        call_8c38b150(a1);
    }
}
