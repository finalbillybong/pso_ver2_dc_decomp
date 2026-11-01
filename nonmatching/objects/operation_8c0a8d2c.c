/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a8d2c
 * function: operation_8c0a8d2c
 * language: c
 * reference size: 116 bytes
 * compiled size: 116 bytes (+0.0%)
 * differing lines: 8 of 46 reference instruction lines
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
extern char g_8c303efc[];
extern void edit_manager_float(void *, void *, void *, int, int);
void operation_8c0a8d2c(Object *o)
{
    edit_manager_float((void *)o, (void *)((int)o->f84 + 0x18), (void *)((void *)g_8c303efc), -o->f80, 4);
    edit_manager_float((void *)o, (void *)((int)o->f84 + 0x1c), (void *)((g_8c303efc + 0x2c)), -o->f80, 0x400);
    edit_manager_float((void *)o, (void *)((int)o->f84 + 0x20), (void *)((g_8c303efc + 0x58)), -o->f80, 0x200);
}
