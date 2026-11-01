/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04f9a8
 * function: operation_8c04f9a8
 * language: c
 * reference size: 156 bytes
 * compiled size: 156 bytes (+0.0%)
 * differing lines: 4 of 58 reference instruction lines
 * differing bytes: 5
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
typedef struct Arg0_a8 Arg0_a8;
struct Object {
    char unknown0[0x88];
    int f88;
    char unknown8c[0x8];
    int f94;
    char unknown98[0x10];
    Arg0_a8 *fa8;
    unsigned short fac;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
};
extern int g_8c418248;
extern S_c8c021ef8 *lookup_low_id(int);
extern int hierarchy_is_active(void *);
extern void operation_8c02671c(void *, float, void *, int);
extern void call_8c0a7608(void *, void *);
void operation_8c04f9a8(Object *o)
{
    unsigned short v118;
    char *v117;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    o->f94 = 1;
    v118 = (unsigned short)o->fac;
    if ((v118 & 0xffff) == g_8c418248) {
        t1 = lookup_low_id((int)(v118 & 0xffff));
        if (t1 != 0) {
            t2 = hierarchy_is_active((void *)t1);
            if (t2 != 0 && ((t1->f34 & 0x800)) == 0) {
                operation_8c02671c((void *)t1, 0.0f, (void *)(((char *)o + 0x3c)), (int)(o->f88));
                v117 = (char *)o->fa8;
                if (v117 != 0) {
                    t3 = hierarchy_is_active((void *)v117);
                    if (t3 != 0) {
                        call_8c0a7608((void *)(o->fa8), (void *)(((char *)o + 0x3c)));
                    }
                }
            }
        }
    }
}
