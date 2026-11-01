/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11d9c8
 * function: operation_8c11d9c8
 * language: c
 * reference size: 60 bytes
 * compiled size: 60 bytes (+0.0%)
 * differing lines: 2 of 22 reference instruction lines
 * differing bytes: 2
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
    char unknown0[0xe4];
    int fe4;
    char unknowne8[0xa];
    unsigned short ff2;
};
extern int operation_03d080(unsigned short);
extern void operation_8c05426c(void *, int, int);
void operation_8c11d9c8(Object *o)
{
    int t1;
    t1 = operation_03d080((unsigned short)(o->ff2));
    if ((unsigned char)t1 == 0) {
        operation_8c05426c((void *)o, 0, 1);
        o->fe4 = 0;
    }
}
