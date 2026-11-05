/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18e6fc
 * function: operation_8c18e6fc
 * language: c
 * reference size: 36 bytes
 * compiled size: 28 bytes (-22.2%)
 * differing lines: 7 of 17 reference instruction lines
 * differing bytes: 35
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -8 bytes
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
    int tag;
    int f04;
    int f08;
};
int operation_8c18e6fc(Object *o)
{
    int v3;
    if (o->tag == 0 && o->f04 == 0 && o->f08 == 0) {
        v3 = (int)0;
    } else {
        v3 = (int)1;
    }
    return (int)(v3);
}
