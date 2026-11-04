/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c050e3c
 * function: TObjEneLappy_v68_8c050e3c
 * language: c
 * reference size: 148 bytes
 * compiled size: 144 bytes (-2.7%)
 * differing lines: 16 of 53 reference instruction lines
 * differing bytes: 78
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * class header: src/include/classes/TObjEneLappy.h (shared layout for modders; this draft keeps its own local types)
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
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    short f30c;
    char unknown30e[0x46];
    unsigned short f354;
    char unknown356[0x3a];
    short f390;
    char unknown392[0xc];
    short f39e;
    short f3a0;
    char unknown3a2[0x2];
    int f3a4;
};
void TObjEneLappy_v68_8c050e3c(Object *o)
{
    unsigned short v1;
    if (((o->f390 & 0x42)) == 0 && ((o->f34 & 0xa02)) == 0 && o->f30a != 2) {
        o->f30a = 2;
        o->ff0 = 5;
        o->f30c = 0;
        o->f34 |= 0x200000;
        v1 = (unsigned short)o->f354;
        if (o->f39e != (unsigned short)v1) {
            o->f39e = v1;
            o->f3a0 = 0;
        } else {
            o->f3a0 += 1;
        }
        o->f3a4 = 0;
    }
}
