/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c011e10
 * function: operation_8c011e10
 * language: c
 * reference size: 104 bytes
 * compiled size: 104 bytes (+0.0%)
 * differing lines: 22 of 52 reference instruction lines
 * differing bytes: 12
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
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
typedef struct Arg3 Arg3;
struct Object {
    float tag;
    char unknown4[0x4];
    float f08;
};
struct Arg1 {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct Arg3 {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct Arg2 {
    float f00;
    char unknown4[0x4];
    float f08;
};
int operation_8c011e10(Object *o, Arg1 *a1, Arg2 *a2, Arg3 *a3, float f0, float f1, float f2)
{
    float v4;
    float v2;
    float v3;
    float v1;
    float v5;
    float v9;
    float v14;
    int v15;
    v1 = (float)o->tag;
    v2 = (float)o->f08;
    v3 = (float)(v1 - a1->f00);
    v4 = (float)(v2 - a1->f08);
    v5 = (float)(a3->f00 * v3 + a3->f08 * v4);
    if (v5 > 0.0f) {
        if (!(f1 > v5)) {
            v14 = (float)((a2->f00 - v1) * (a2->f00 - v1) + (a2->f08 - v2) * (a2->f08 - v2));
            goto L_8c011e6c;
        }
        v9 = (float)((v3 - v5 * f2 * a3->f00) * (v3 - v5 * f2 * a3->f00) + (v4 - v5 * f2 * a3->f08) * (v4 - v5 * f2 * a3->f08));
    } else {
        v9 = (float)(v3 * v3 + v4 * v4);
    }
    v14 = (float)v9;
L_8c011e6c:;
    v15 = (int)(v14 <= (f0 * f0));
    return (int)(v15);
}
