/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1f2908
 * function: operation_8c1f2908
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 30 of 50 reference instruction lines
 * differing bytes: 35
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
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x30];
    int f68;
    int f6c;
    char unknown70[0x28];
    float f98;
    float f9c;
    float fa0;
};
extern int g_8c469b68;
extern void memset_8c12b880(void *, int, int);
void operation_8c1f2908(Object *o, int a1)
{
    o->f68 |= 0x18;
    memset_8c12b880((void *)(((char *)o + 0x38)), 0, 0xc);
    memset_8c12b880((void *)(((char *)o + 0x5c)), 0, 0xc);
    o->fa0 = 0.0f;
    o->f9c = 0.0f;
    o->f98 = 0.0f;
    o->f6c = a1;
    o->f34 = g_8c469b68 + a1 * 0x64;
}
