/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c118e50
 * function: operation_8c118e50
 * language: c
 * reference size: 84 bytes
 * compiled size: 84 bytes (+0.0%)
 * differing lines: 4 of 30 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
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
typedef struct Arg0_1a4 Arg0_1a4;
typedef struct Arg0_1a8 Arg0_1a8;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x180];
    Arg0_1a4 *f1a4;
    Arg0_1a8 *f1a8;
};
extern void hs_8c3827d8(void *);
extern void hs_8c382820(void *);
extern void set_child_blend(void);
extern void hs_8c38fa98(void *, int, int);
void operation_8c118e50(Object *o)
{
    if (o->f20 > 1) {
        hs_8c3827d8(o->f1a4);
        hs_8c382820(o->f1a8);
        set_child_blend();
        hs_8c38fa98(((char *)o + 0x24), o->f20 << 1, 1);
    }
}
