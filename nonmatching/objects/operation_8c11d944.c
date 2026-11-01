/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11d944
 * function: operation_8c11d944
 * language: c
 * reference size: 132 bytes
 * compiled size: 132 bytes (+0.0%)
 * differing lines: 2 of 50 reference instruction lines
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
typedef struct Arg0_fc Arg0_fc;
struct Object {
    char unknown0[0xe4];
    int fe4;
    float fe8;
    char unknownec[0x6];
    unsigned short ff2;
    char unknownf4[0x8];
    Arg0_fc *ffc;
};
struct Arg0_fc {
    char unknown0[0x4];
    int f04;
};
extern int operation_03d080(unsigned short);
extern void operation_8c05428c(void *, int, int);
void operation_8c11d944(Object *o)
{
    int t1;
    o->fe8 += 0.9f;
    if (o->fe8 > (float)(unsigned int)(o->ffc->f04 + -1)) {
        o->fe8 = 0.0f;
    }
    t1 = operation_03d080((unsigned short)(o->ff2));
    if ((unsigned char)t1 == 1) {
        operation_8c05428c((void *)o, 0, 1);
        o->fe4 = 1;
    }
}
