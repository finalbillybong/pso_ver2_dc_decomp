/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c241cb8
 * function: operation_8c241cb8
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 8 of 41 reference instruction lines
 * differing bytes: 4
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
    unsigned short fe4;
};
extern int operation_8c2421f4(int);
extern int call_8c242284(int);
extern void create_effect_777c(void *, int);
extern void operation_8c0c5488(void *, void *, int, int);
void operation_8c241cb8(Object *o)
{
    int t1;
    int t2;
    t1 = operation_8c2421f4((int)(o->fe4));
    if (t1 != 0) {
        t2 = call_8c242284((int)(o->fe4));
        if (t2 != 0) {
            create_effect_777c((void *)(((char *)o + 0x3c)), 0x1dd);
        }
        create_effect_777c((void *)(((char *)o + 0xf4)), 0x1dc);
        operation_8c0c5488((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0xf4)), -0x70ff0100, -0x70ff0100);
    }
}
