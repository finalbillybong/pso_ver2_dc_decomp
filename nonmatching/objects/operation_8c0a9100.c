/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a9100
 * function: operation_8c0a9100
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 6 of 48 reference instruction lines
 * differing bytes: 11
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
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
extern char g_8c304314[];
extern void edit_manager_float(void *, void *, void *, int, int);
void operation_8c0a9100(Object *o)
{
    int v1;
    v1 = (int)-8;
    edit_manager_float((void *)o, (void *)((int)o->f84 + 0x7c), (void *)((void *)g_8c304314), (int)((int)o->f80 + v1), 4);
    edit_manager_float((void *)o, (void *)((int)o->f84 + 0x80), (void *)((g_8c304314 + 0x2c)), (int)((int)o->f80 + -8), 0x400);
    edit_manager_float((void *)o, (void *)(0x84 + (int)o->f84), (void *)((g_8c304314 + 0x58)), (int)((int)o->f80 + -8), 0x200);
}
