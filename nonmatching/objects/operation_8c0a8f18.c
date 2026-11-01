/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a8f18
 * function: operation_8c0a8f18
 * language: c
 * reference size: 128 bytes
 * compiled size: 128 bytes (+0.0%)
 * differing lines: 18 of 49 reference instruction lines
 * differing bytes: 52
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
    char unknown0[0x80];
    int f80;
    int f84;
};
extern char g_8c304104[];
extern void edit_manager_float(void *, void *, void *, int, int);
void operation_8c0a8f18(Object *o)
{
    edit_manager_float((void *)o, (void *)((int)o->f84 + 0x54), (void *)((void *)g_8c304104), (int)((int)o->f80 + -4), 4);
    edit_manager_float((void *)o, (void *)((int)o->f84 + 0x58), (void *)((g_8c304104 + 0x2c)), (int)((int)o->f80 + -4), 0x400);
    edit_manager_float((void *)o, (void *)((int)o->f84 + 0x5c), (void *)((g_8c304104 + 0x58)), (int)((int)o->f80 + -4), 0x200);
}
