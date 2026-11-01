/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01c544
 * function: operation_8c01c544
 * language: c
 * reference size: 172 bytes
 * compiled size: 172 bytes (+0.0%)
 * differing lines: 20 of 51 reference instruction lines
 * differing bytes: 36
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
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    int fe8;
    int fec;
    short ff0;
    short ff2;
    short ff4;
    char unknownf6[0x2];
    float ff8;
    float ffc;
    float f100;
    float f104;
    char unknown108[0x4];
    float f10c;
    char unknown110[0xc];
    int f11c;
    int f120;
    float f124;
    float f128;
    short f12c;
    short f12e;
};
void operation_8c01c544(Object *o)
{
    o->fe8 = 0;
    o->fec = 0;
    o->ff2 = 0;
    o->ff0 = 0;
    o->ff4 = 0;
    o->ffc = 0.0f;
    o->f100 = 0.0f;
    o->ff8 = 0.0f;
    o->f104 = 0.2f;
    o->f10c = 0.0f;
    o->f11c = 0;
    o->f120 = 0;
    o->f124 = 0.0f;
    o->f128 = 0.0f;
    o->f12e = 0;
    o->f12c = 0;
}
