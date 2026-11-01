/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c227284
 * function: operation_8c227284
 * language: c
 * reference size: 100 bytes
 * compiled size: 100 bytes (+0.0%)
 * differing lines: 4 of 34 reference instruction lines
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
    char unknown0[0x24];
    short f24;
};
extern char g_8c337834[];
extern int operation_8c1d0224(int, int);
extern void operation_8c1d02e0(int, int, int);
extern void operation_8c1d039c(void *, short);
int operation_8c227284(Object *o)
{
    int t1;
    t1 = operation_8c1d0224((int)((void *)0x8c2e19c8), (int)((void *)0x8c2e19d0));
    operation_8c1d02e0(t1, (int)(g_8c337834 + 0x3d9), 0);
    operation_8c1d02e0(t1, (int)(g_8c337834 + 0x3e0), 1);
    operation_8c1d039c((void *)t1, o->f24);
    return (int)(t1);
}
