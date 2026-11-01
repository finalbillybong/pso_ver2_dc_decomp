/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a2858
 * function: operation_8c0a2858
 * language: c
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 64 of 71 reference instruction lines
 * differing bytes: 125
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
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct Object Object;
struct S_L8c46efc8 {
    char unknown0[0x8];
    int f08;
};
struct Object {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float dispatch;
    float f1c;
    float f20;
    float f24;
    float f28;
};
extern S_L8c46efc8 g_8c46efc8;
extern char g_8c46efd4[];
void operation_8c0a2858(Object *o)
{
    if ((((&g_8c46efc8)->f08 & 0x400)) != 0) {
        (&g_8c46efc8)->f08 |= 0x200;
        *(float *)(g_8c46efd4 + 0x4) = o->f04;
        *(float *)(g_8c46efd4 + 0x8) = o->f08;
        *(float *)(g_8c46efd4 + 0xc) = o->f0c;
        *(float *)(g_8c46efd4 + 0x10) = o->f10;
        *(float *)(g_8c46efd4 + 0x14) = o->f14;
        *(float *)(g_8c46efd4 + 0x18) = o->dispatch;
        *(float *)(g_8c46efd4 + 0x1c) = o->f1c;
        *(float *)(g_8c46efd4 + 0x20) = o->f20;
        *(float *)(g_8c46efd4 + 0x24) = o->f24;
        *(float *)(g_8c46efd4 + 0x28) = o->f28;
    }
}
