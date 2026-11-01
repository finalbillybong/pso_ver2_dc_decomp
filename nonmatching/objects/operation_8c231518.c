/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c231518
 * function: operation_8c231518
 * language: c
 * reference size: 76 bytes
 * compiled size: 72 bytes (-5.3%)
 * differing lines: 26 of 29 reference instruction lines
 * differing bytes: 60
 * provenance: generator draft (mode ccastext)
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
    char unknown0[0x40];
    int f40;
    int f44;
    int f48;
};
void operation_8c231518(Object *o, int a1, int a2)
{
    int *home1 = &a1;
    int *home2 = &a2;
    (void)home1;
    (void)home2;
    ((void (*)(Object *, int, int))0x8c12b880)(o, 0, 0x50);
    ((void (*)(Object *, void *, int))0x8c12b77c)(o, (void *)0x8c2e1c18, 4);
    o->f40 = a2;
    o->f44 = a1;
    o->f48 = 0x600000f0;
}
