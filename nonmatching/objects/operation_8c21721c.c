/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21721c
 * function: operation_8c21721c
 * language: c
 * reference size: 268 bytes
 * compiled size: 264 bytes (-1.5%)
 * differing lines: 8 of 103 reference instruction lines
 * differing bytes: 188
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order, constant loading;
 *   review found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c20a5bc S_c8c20a5bc;
typedef struct S_c8c20a5bc_4 S_c8c20a5bc_4;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct S_c8c20a5bc {
    char unknown0[0x4];
    S_c8c20a5bc_4 *f04;
    char unknown8[0xa9];
    char fb1;
};
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x1c];
    int f48;
};
extern short g_8c46fe24;
extern int g_8c504a24;
extern int operation_8c1cdc80(void *);
extern void operation_8c1cdcdc(void *);
extern void operation_8c1cdc94(void *);
extern S_c8c20a5bc *recordb4_8c20a5bc(int);
extern void operation_8c1cd7c8(int, char, void *, void *);
extern void operation_8c1cdb8c(void *, int);
extern void request_resource_release(void *);
extern int call_8c1196d4(void *, void *, int);
extern void operation_8c1cdd08(void *);
extern void operation_8c1cd440(void *, int);
int operation_8c21721c(Object *o, int a1)
{
    S_c8c20a5bc *t1;
    int v3;
    int v1;
    int v4;
    int v7;
    int v6;
    int v2;
    int t2;
    int t3;
    t2 = operation_8c1cdc80((void *)a1);
    v1 = -1;
    v6 = v1;
    g_8c46fe24 = (unsigned int)g_8c46fe24 >> 1 << 1;
    operation_8c1cdcdc((void *)a1);
    operation_8c1cdc94((void *)a1);
    v2 = (int)g_8c504a24;
    for (v3 = v2 + v1; v3 >= 0; v3--) {
        t1 = recordb4_8c20a5bc(v3);
        operation_8c1cd7c8(a1, t1->fb1, (void *)(((char *)t1 + 0x8)), (void *)(t1->f04));
        if (t2 == (int)(t1->f04)) {
            v4 = -1;
            v6 = v2 + v4 - v3;
        }
    }
    if (!(v2 > 0)) {
        operation_8c1cdb8c((void *)a1, -1);
        if (o->f28 == 0) {
            goto L_8c2172be;
        }
        request_resource_release((void *)(o->f28));
        o->f28 = (Arg0_28 *)0;
    } else {
        if (o->f28 == 0) {
            t3 = call_8c1196d4((void *)((void *)0x8c2e1780), (void *)((void *)0x8c2e1788), 1);
            o->f28 = (Arg0_28 *)t3;
            v7 = (int)-1;
            o->f48 = (int)(v7);
        }
    }
L_8c2172be:;
    if ((short)v6 == -1) {
        operation_8c1cdd08((void *)a1);
        return 0;
    }
    operation_8c1cd440((void *)a1, v6);
    return 1;
}
