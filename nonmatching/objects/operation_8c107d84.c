/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c107d84
 * function: operation_8c107d84
 * language: c
 * reference size: 152 bytes
 * compiled size: 152 bytes (+0.0%)
 * differing lines: 4 of 50 reference instruction lines
 * differing bytes: 6
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
typedef struct Arg0_bc Arg0_bc;
typedef struct Arg0_c0 Arg0_c0;
struct Object {
    char unknown0[0xbc];
    Arg0_bc *fbc;
    Arg0_c0 *fc0;
    char unknownc4[0x4];
    float fc8;
};
extern int g_8c46ee80;
extern int g_8c46f560;
extern int g_8c575570;
extern float squared_distance_xz(void *, int);
extern void restore_child_blend(void);
extern void hs_8c3827d8(void *);
extern void hs_8c382820(void *);
extern void hs_8c38fa98(void *, int, int);
void operation_8c107d84(Object *o)
{
    float t1;
    if (o->fc8 > 0.0f) {
        t1 = squared_distance_xz(((char *)o + 0x20), g_8c46ee80 + 0x90);
        if (22500.0f > t1) {
            g_8c46f560 = (int)(g_8c575570);
            restore_child_blend();
            hs_8c3827d8(o->fbc);
            hs_8c382820(o->fc0);
            hs_8c38fa98(((char *)o + 0x5c), 4, 1);
            g_8c575570 = (int)(g_8c46f560);
        }
    }
}
