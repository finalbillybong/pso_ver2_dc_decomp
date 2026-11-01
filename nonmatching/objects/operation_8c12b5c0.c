/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12b5c0
 * function: operation_8c12b5c0
 * language: c
 * reference size: 116 bytes
 * compiled size: 120 bytes (+3.4%)
 * differing lines: 80 of 45 reference instruction lines
 * differing bytes: 109
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    float f00;
};
struct Object {
    int tag;
};
extern int g_8c4d9a00;
float operation_8c12b5c0(Object *o, float f0)
{
    Frame frame;
    char *v8;
    (&frame)->f00 = f0;
    if (f0 == 0.0f) {
        o->tag = 0;
    } else {
        if ((*(int *)&(&frame)->f00 & 0x7f800000) != 0x7f800000) {
            goto L_8c12b5fc;
        }
        if (((0x7fffff & *(int *)&(&frame)->f00)) == 0) {
            g_8c4d9a00 = 0x44c;
        } else {
            g_8c4d9a00 = 0x44d;
        }
    }
    return f0;
L_8c12b5fc:;
    o->tag = ((*(int *)&(&frame)->f00 & 0x7f800000) >> 0x17) + -0x7e;
    v8 = (char *)*(int *)&(&frame)->f00;
    *(int *)&(&frame)->f00 = -0x80000000 & (int)(v8) | 0x7fffff & (int)(v8) | 0x3f000000;
    return (&frame)->f00;
}
