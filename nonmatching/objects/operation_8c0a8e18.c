/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a8e18
 * function: operation_8c0a8e18
 * language: c
 * reference size: 128 bytes
 * compiled size: 128 bytes (+0.0%)
 * differing lines: 8 of 49 reference instruction lines
 * differing bytes: 10
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
extern char g_8c304004[];
extern void edit_manager_float(void *, void *, void *, int, int);
void operation_8c0a8e18(Object *o)
{
    int pm1;
    pm1 = -2;
    edit_manager_float((void *)o, (void *)((int)o->f84 + 0x30), (void *)((void *)g_8c304004), (int)((int)o->f80 + pm1), 4);
    edit_manager_float((void *)o, (void *)((int)o->f84 + 0x34), (void *)((g_8c304004 + 0x2c)), (int)((int)o->f80 + -2), 0x400);
    edit_manager_float((void *)o, (void *)((int)o->f84 + 0x40), (void *)((g_8c304004 + 0x58)), (int)((int)o->f80 + -2), 0x200);
}
