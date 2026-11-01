/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c20b098
 * function: operation_8c20b098
 * language: c
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 56 of 79 reference instruction lines
 * differing bytes: 57
 * provenance: generator draft (mode bgotoext)
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
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x48];
    float f48;
    float f4c;
    float f50;
    float f54;
};
struct Arg1 {
    char unknown0[0x10];
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    char unknown28[0x10];
    float f38;
    float f3c;
    float f40;
    float f44;
};
extern float g_8c2e160c;
extern float g_8c2e1610;
void operation_8c20b098(Object *o, Arg1 *a1)
{
    float v1;
    float v2;
    float v3;
    float v4;
    v1 = (float)o->f48;
    v2 = (float)o->f4c;
    v3 = (float)o->f50;
    v4 = (float)o->f54;
    a1->f10 = v1 + g_8c2e160c;
    a1->f14 = v2 + g_8c2e1610;
    a1->f18 = v3 - g_8c2e160c * 2.0f;
    a1->f1c = v4 - g_8c2e1610 * 2.0f;
    a1->f38 = v1 + g_8c2e160c;
    a1->f3c = v2 + g_8c2e1610;
    a1->f40 = v1 + v3 - g_8c2e160c;
    a1->f44 = v2 + v4 - g_8c2e1610;
    a1->f20 = v1 + v3 * 0.5f;
    a1->f24 = v2 + v4 * 0.5f;
}
