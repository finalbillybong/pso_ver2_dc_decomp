/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11deec
 * function: operation_8c11deec
 * language: c
 * reference size: 152 bytes
 * compiled size: 152 bytes (+0.0%)
 * differing lines: 20 of 61 reference instruction lines
 * differing bytes: 10
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    Arg0_dc *fdc;
    char unknowne0[0x2c4];
    int f3a4;
    char unknown3a8[0x20];
    float f3c8;
    float f3cc;
    float f3d0;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
void operation_8c11deec(Object *o)
{
    float v1;
    float v2;
    if (((o->f34 & 0x800)) == 0) {
        o->fdc->f18 &= -7;
        if (((o->f3a4 & 0x10000)) != 0) {
            if (o->f3cc > o->f3d0) {
                o->f3d0 = o->f3d0 + 1.0f;
                return;
            }
            o->f3d0 = o->f3cc;
            o->fdc->f18 |= 4;
            return;
        }
        if (o->f3c8 < o->f3d0) {
            o->f3d0 = o->f3d0 - 1.0f;
            return;
        }
        o->f3d0 = o->f3c8;
        o->fdc->f18 |= 2;
    }
}
