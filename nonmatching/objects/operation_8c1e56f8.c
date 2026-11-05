/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e56f8
 * function: operation_8c1e56f8
 * language: c
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 12 of 53 reference instruction lines
 * differing bytes: 18
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
    char unknown0[0x22];
    char f22;
};
extern int operation_8c156c24(int, int);
extern int operation_8c1e5918(int);
extern void add_wrapper_8c156d30(int, int, int, int);
extern void operation_8c156f50(int);
extern void operation_8c157138(void *);
extern void operation_8c1571d4(void *, int);
int operation_8c1e56f8(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = operation_8c156c24((int)((void *)0x8c2895a8), 3);
    t2 = operation_8c1e5918(0);
    add_wrapper_8c156d30(t1, t2, 6, 0);
    t3 = operation_8c1e5918(1);
    add_wrapper_8c156d30(t1, t3, 6, 1);
    t4 = operation_8c1e5918(2);
    add_wrapper_8c156d30(t1, t4, 6, 2);
    operation_8c156f50(t1);
    operation_8c157138((void *)t1);
    operation_8c1571d4((void *)t1, (int)(o->f22));
    return (int)(t1);
}
