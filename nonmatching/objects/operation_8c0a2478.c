/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a2478
 * function: operation_8c0a2478
 * language: c
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 36 of 63 reference instruction lines
 * differing bytes: 69
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x90];
    float f90;
    float f94;
    float f98;
    float f9c;
    float fa0;
    float fa4;
    char unknowna8[0x10];
    float fb8;
    float fbc;
    float fc0;
    float fc4;
    float fc8;
    float fcc;
    char unknownd0[0x1c];
    float fec;
    float ff0;
    float ff4;
};
void operation_8c0a2478(Object *o)
{
    o->f90 = o->fb8;
    o->f94 = o->fbc;
    o->f98 = o->fc0;
    o->f9c = o->fc4;
    o->fa0 = o->fc8;
    o->fa4 = o->fcc;
    o->fec = o->f90;
    o->ff0 = o->f94;
    o->ff4 = o->f98;
}
