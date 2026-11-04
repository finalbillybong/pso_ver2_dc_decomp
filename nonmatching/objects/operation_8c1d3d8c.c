/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d3d8c
 * function: operation_8c1d3d8c
 * language: c
 * reference size: 232 bytes
 * compiled size: 232 bytes (+0.0%)
 * differing lines: 20 of 90 reference instruction lines
 * differing bytes: 15
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order, constant loading;
 *   review found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c217d3c S_c8c217d3c;
typedef struct S_c8c217d3c_4 S_c8c217d3c_4;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x88];
    short f88;
};
struct S_c8c217d3c {
    char unknown0[0x4];
    S_c8c217d3c_4 *f04;
};
extern short g_8c46fe24;
extern int g_8c505244;
extern char g_8c3299bc[];
extern int operation_8c1571f4(void *);
extern void operation_8c15761c(void *);
extern S_c8c217d3c *recordbc_8c217d3c(int);
extern void operation_8c156d30(Arg1 *, void *, int, void *);
extern void call_8c156d48(Arg1 *, void *, int, int, int);
extern void operation_8c15700c(Arg1 *, float);
extern void operation_8c1571d4(void *, short);
void operation_8c1d3d8c(int a0, Arg1 *a1)
{
    S_c8c217d3c *t1;
    int v4;
    int v1;
    int v5;
    int v7;
    short v2;
    int v3;
    int t2;
    t2 = operation_8c1571f4((void *)a1);
    v7 = -1;
    g_8c46fe24 &= -5;
    v2 = (short)a1->f88;
    operation_8c15761c((void *)a1);
    v3 = (int)g_8c505244;
    v1 = -1;
    for (v4 = v3 + v1; v4 >= 0; v4--) {
        t1 = recordbc_8c217d3c(v4);
        operation_8c156d30(a1, (void *)(((char *)t1 + 0x8)), 7, (void *)(t1->f04));
        if (t2 == (int)(t1->f04)) {
            v5 = -1;
            v7 = v3 + v5 - v4;
        }
    }
    if (!(v3 > 0)) {
        call_8c156d48(a1, (void *)((g_8c3299bc + 0x1d)), 0x16, -1, -0x979798);
    }
    operation_8c15700c(a1, 223.0f);
    if ((short)v7 == -1) {
        operation_8c1571d4((void *)a1, v2);
        return;
    }
    operation_8c1571d4((void *)a1, (short)v7);
}
