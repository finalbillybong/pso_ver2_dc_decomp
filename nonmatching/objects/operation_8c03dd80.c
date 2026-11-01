/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03dd80
 * function: operation_8c03dd80
 * language: c
 * reference size: 224 bytes
 * compiled size: 224 bytes (+0.0%)
 * differing lines: 2 of 87 reference instruction lines
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
typedef struct S_g8c462ce4 S_g8c462ce4;
typedef struct Object Object;
typedef struct Arg0_42c Arg0_42c;
struct Arg0_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct Object {
    char unknown0[0x42c];
    Arg0_42c *f42c;
};
extern char g_8c2ef0e4[];
extern int call_8c1a86d0(int);
extern void debug_error_stub_8c03ef80(void *, ...);
extern void operation_8c104d5c(int, void *);
extern void call_8c03df30(Object *, int, int, void *);
extern void operation_8c03ebbc(void *, int, int);
int operation_8c03dd80(Object *o, int a1, int a2)
{
    int t1;
    int v1;
    int v2;
    v1 = (int)(a2 << 2);
    v2 = (int)(v1 << 2);
    *(int *)((char *)&o->f42c->f08 + v2) = 0;
    *(int *)((char *)&o->f42c->f0c + v2) = 0;
    t1 = call_8c1a86d0(a1);
    if (!(t1 > 0)) {
        debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0x12d)), a1);
        return 0;
    }
    if (t1 > 0x40000) {
        debug_error_stub_8c03ef80((void *)((g_8c2ef0e4 + 0x14b)), (int)(t1 + -0x40000));
    }
    operation_8c104d5c(a1, (void *)(*(S_g8c462ce4 **)0x8c462ce4));
    call_8c03df30(o, t1, a2, (void *)(*(S_g8c462ce4 **)0x8c462ce4));
    if (*(int *)((char *)&o->f42c->f0c + v2) != 0) {
        operation_8c03ebbc((void *)o, a1, a2);
    }
    return 1;
}
