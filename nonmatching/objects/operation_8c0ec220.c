/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ec220
 * function: operation_8c0ec220
 * language: c
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 40 of 69 reference instruction lines
 * differing bytes: 46
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
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_38 S_g8c467180_38;
typedef struct S_g8c467180_38_0 S_g8c467180_38_0;
typedef struct Object Object;
typedef struct Arg0_154 Arg0_154;
struct S_g8c467180 {
    char unknown0[0x38];
    S_g8c467180_38 *f38;
};
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x118];
    float f140;
    float f144;
    float f148;
    float f14c;
    char unknown150[0x4];
    Arg0_154 *f154;
};
struct Arg0_154 {
    char unknown0[0x5c];
    float f5c;
};
extern S_g8c467180 *g_8c467180;
extern void operation_8c04b244(float, void *, int, float, float);
void operation_8c0ec220(Object *o, int a1)
{
    switch ((char)a1) {
    case 0:
        operation_8c04b244(o->f140, *(S_g8c467180_38_0 **)((char *)g_8c467180->f38 + (o->f24 << 1 << 2)), -1, o->f144, -1.0f / (o->f154->f5c + 0.1495f));
        operation_8c04b244(o->f148, *(S_g8c467180_38_0 **)((char *)g_8c467180->f38 + ((o->f24 << 1) + 1 << 2)), -1, o->f14c, -1.0f / (o->f154->f5c + 0.1495f));
        break;
    case 1:
        break;
    }
}
