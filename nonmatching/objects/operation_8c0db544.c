/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0db544
 * function: operation_8c0db544
 * language: c
 * reference size: 144 bytes
 * compiled size: 144 bytes (+0.0%)
 * differing lines: 70 of 58 reference instruction lines
 * differing bytes: 59
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2
 *   (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x50];
    float f50;
    float f54;
    char unknown58[0x4];
    float f5c;
    char unknown60[0x4];
    int f64;
};
extern char g_8c3073c4[];
extern char g_8c3073fc[];
extern void hs_8c0e86c0(void *, void *, float, float);
void operation_8c0db544(Object *o)
{
    *(float *)(g_8c3073c4 + 0x4) = o->f50 - 18.0f;
    *(float *)(g_8c3073c4 + 0x14) = o->f54 - 18.0f;
    *(float *)(g_8c3073c4 + 0x1c) = o->f50 - 18.0f;
    *(float *)(g_8c3073c4 + 0x2c) = o->f54 - 18.0f;
    *(float *)(g_8c3073fc + 0x4) = (o->f50 + o->f54 + 25.4556f) * 2.0f;
    hs_8c0e86c0(((char *)o + 0x48), (void *)g_8c3073fc, (float)o->f64 / 7.5f, o->f5c);
}
