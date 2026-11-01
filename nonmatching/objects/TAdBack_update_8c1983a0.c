/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1983a0
 * function: TAdBack_update_8c1983a0
 * language: c
 * reference size: 184 bytes
 * compiled size: 180 bytes (-2.2%)
 * differing lines: 78 of 90 reference instruction lines
 * differing bytes: 161
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2c];
    short f2c;
    short f2e;
    short f30;
    short f32;
    short f34;
    short f36;
    short f38;
    short f3a;
    short f3c;
    short f3e;
};
void TAdBack_update_8c1983a0(Object *o)
{
    o->f2c += 3;
    o->f2c = (unsigned char)o->f2c;
    o->f36 += 3;
    o->f36 = (unsigned char)o->f36;
    o->f2e -= 1;
    o->f2e = (unsigned char)o->f2e;
    o->f38 = (unsigned char)o->f38;
    o->f30 -= 1;
    o->f30 = (unsigned char)o->f30;
    o->f3a += 1;
    o->f3a = (unsigned char)o->f3a;
    o->f32 -= 2;
    o->f32 = (unsigned char)o->f32;
    o->f3c = (unsigned char)o->f3c;
    o->f34 -= 1;
    o->f34 = (unsigned char)o->f34;
    o->f3e = (unsigned char)o->f3e;
}
