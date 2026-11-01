/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c256634
 * function: operation_8c256634
 * language: c
 * reference size: 84 bytes
 * compiled size: 84 bytes (+0.0%)
 * differing lines: 6 of 34 reference instruction lines
 * differing bytes: 6
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
    char unknown0[0x38c];
    unsigned short f38c;
    unsigned short f38e;
    unsigned short f390;
};
extern int operation_03d080(unsigned short);
int operation_8c256634(Object *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    t1 = operation_03d080((unsigned short)(o->f390));
    if ((unsigned char)t1 == 1) {
        return 3;
    }
    t2 = operation_03d080((unsigned short)(o->f38e));
    if ((unsigned char)t2 == 1) {
        return 2;
    }
    t3 = operation_03d080((unsigned short)(o->f38c));
    v1 = (int)((unsigned char)t3 == 1);
    return (int)(v1);
}
