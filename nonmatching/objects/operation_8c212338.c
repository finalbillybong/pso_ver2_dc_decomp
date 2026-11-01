/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c212338
 * function: operation_8c212338
 * language: c
 * reference size: 112 bytes
 * compiled size: 112 bytes (+0.0%)
 * differing lines: 2 of 41 reference instruction lines
 * differing bytes: 4
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
typedef struct Arg0_7c Arg0_7c;
struct Object {
    char unknown0[0x7c];
    Arg0_7c *f7c;
};
extern void operation_8c2163c4(void *);
extern void operation_8c2163b4(void *);
extern int operation_8c215dc4(int);
extern void operation_8c2154f0(void *, int, int);
extern int span_8c215d8c(void *);
extern void operation_8c215510(void *, int);
void operation_8c212338(Object *o, int a1)
{
    int t1;
    int t2;
    operation_8c2163c4((void *)a1);
    operation_8c2163b4((void *)a1);
    if (o->f7c != 0) {
        t1 = operation_8c215dc4(a1);
        operation_8c2154f0((void *)(o->f7c), t1, (int)((int)*(float *)0x8c2e1608));
        t2 = span_8c215d8c((void *)a1);
        operation_8c215510((void *)(o->f7c), t2);
    }
}
