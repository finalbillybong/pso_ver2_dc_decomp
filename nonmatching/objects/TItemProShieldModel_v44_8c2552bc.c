/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2552bc
 * function: TItemProShieldModel_v44_8c2552bc
 * language: c
 * reference size: 60 bytes
 * compiled size: 60 bytes (+0.0%)
 * differing lines: 4 of 21 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode uctern)
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
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x138];
    char f138;
    char unknown139[0x3];
    Arg0_13c *f13c;
    char unknown140[0x84];
    int f1c4;
};
struct Arg0_13c {
    char unknown0[0x20];
    short f20;
};
extern int operation_8c1931d4(short, int, int, int);
void TItemProShieldModel_v44_8c2552bc(Object *o)
{
    int t1;
    t1 = operation_8c1931d4(o->f13c->f20, 1, (int)((unsigned char)o->f138 + -0x27), -1);
    o->f1c4 = (int)(t1);
}
