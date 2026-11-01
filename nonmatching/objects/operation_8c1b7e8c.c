/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b7e8c
 * function: operation_8c1b7e8c
 * language: c
 * reference size: 228 bytes
 * compiled size: 228 bytes (+0.0%)
 * differing lines: 18 of 97 reference instruction lines
 * differing bytes: 11
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c327a88 S_L8c327a88;
typedef struct Object Object;
struct Object {
    char unknown0[0x3ec];
    int f3ec;
    float f3f0;
    float f3f4;
    int f3f8;
    int f3fc;
};
struct S_L8c327a88 {
    char unknown0[0x4];
    int f04;
};
extern S_L8c327a88 g_8c327a88;
void operation_8c1b7e8c(Object *o)
{
    float v1;
    float v12;
    o->f3f8 = 0;
    o->f3f0 += o->f3f4;
    switch (o->f3fc) {
    case 0:
        v1 = (float)o->f3f0;
        if (30.0f > v1) {
            goto L_8c1b7f28;
        }
        o->f3f0 = v1 - 30.0f;
        o->f3f8 = 1;
        break;
    case 1:
        if (29.0f > o->f3f0) {
            goto L_8c1b7f28;
        }
        o->f3f0 = 29.0f;
        o->f3f8 = 1;
        break;
    case 2:
        if (!(29.0f > o->f3f0)) {
            o->f3ec = (int)(*(int *)((char *)&g_8c327a88.f04 + (o->f3ec * 0x14)));
            o->f3fc = (int)(*(int *)((char *)&g_8c327a88 + (o->f3ec * 0x14)));
            o->f3f0 = 0.0f;
            o->f3f8 = 1;
        }
    }
L_8c1b7f28:;
    v12 = (float)o->f3f0;
    if (!(0.0f > v12) && 30.0f > v12) {
        return;
    }
    o->f3f0 = 0.0f;
}
