/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c110f74
 * function: operation_8c110f74
 * language: c
 * reference size: 60 bytes
 * compiled size: 60 bytes (+0.0%)
 * differing lines: 10 of 25 reference instruction lines
 * differing bytes: 42
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
typedef struct Arg0_7c Arg0_7c;
struct Object {
    char unknown0[0x62];
    short f62;
    char unknown64[0x18];
    Arg0_7c *f7c;
};
struct Arg0_7c {
    char unknown0[0x7c];
    int f7c;
    int f80;
};
extern void call_8c110fb0(Object *);
void operation_8c110f74(Object *o)
{
    if (o->f7c->f7c != o->f7c->f80) {
        o->f62 = 0;
    }
    if (o->f62 >= 3) {
        o->f62 = 0;
    }
    call_8c110fb0(o);
}
