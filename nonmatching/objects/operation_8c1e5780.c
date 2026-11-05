/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e5780
 * function: operation_8c1e5780
 * language: c
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 12 of 65 reference instruction lines
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
    char unknown0[0x23];
    char f23;
    int f24;
};
extern int operation_8c156c24(int, int);
extern int operation_8c1e5928(int);
extern void add_wrapper_8c156d30(int, int, int, int);
extern void operation_8c156f50(int);
extern void operation_8c157138(void *);
extern void operation_8c1571d4(void *, int);
int operation_8c1e5780(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = operation_8c156c24((int)((void *)0x8c2895b0), 4);
    t2 = operation_8c1e5928(0);
    add_wrapper_8c156d30(t1, t2, 6, 0);
    t3 = operation_8c1e5928(1);
    add_wrapper_8c156d30(t1, t3, 6, 1);
    t4 = operation_8c1e5928(2);
    add_wrapper_8c156d30(t1, t4, 6, 2);
    if (o->f24 == 1) {
        t5 = operation_8c1e5928(3);
        add_wrapper_8c156d30(t1, t5, 6, 3);
    }
    operation_8c156f50(t1);
    operation_8c157138((void *)t1);
    operation_8c1571d4((void *)t1, (int)(o->f23));
    return (int)(t1);
}
