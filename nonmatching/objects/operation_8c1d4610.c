/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d4610
 * function: operation_8c1d4610
 * language: c
 * reference size: 288 bytes
 * compiled size: 288 bytes (+0.0%)
 * differing lines: 16 of 120 reference instruction lines
 * differing bytes: 22
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
typedef struct S_c8c1575ac S_c8c1575ac;
typedef struct S_c8c1575ac_20 S_c8c1575ac_20;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_0 S_g8c467180_2c_0;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_40 Arg0_40;
typedef struct Arg1 Arg1;
typedef struct Arg1_0 Arg1_0;
struct Object {
    char unknown0[0x21];
    char f21;
    char unknown22[0x6];
    Arg0_28 *f28;
    char unknown2c[0x14];
    Arg0_40 *f40;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_c8c1575ac {
    char unknown0[0x20];
    S_c8c1575ac_20 *f20;
};
extern S_g8c467180 *g_8c467180;
extern int operation_8c2097a8(int);
extern void operation_8c20978c(int, int);
extern void operation_8c1dc4b8(void *, int, int);
extern void operation_8c1dc50c(void *, void *);
extern void operation_8c1dc55c(void *, void *);
extern int operation_8c2535dc(int, int);
extern void operation_8c2535fc(int, int, int);
extern S_c8c1575ac *operation_8c1575ac(void *);
void operation_8c1d4610(Object *o, Arg1 *a1, int a2, int a3)
{
    int v1;
    int v4;
    int t1;
    int t2;
    S_c8c1575ac *t3;
    if (a2 == 0) {
        t1 = operation_8c2097a8(0x40000);
        if (a3 == t1) {
            return;
        }
        o->f21 |= 1;
        operation_8c20978c((int)(a3 << 0x12), -0x40001);
        operation_8c1dc4b8((void *)(o->f40), (int)(*(S_g8c467180_2c_0 **)((char *)((char *)g_8c467180->f2c + 0x0) + (a3 + 0x103 << 2))), 0);
        if (a3 != 0) {
            v1 = (int)0;
            while (5 > v1) {
                if (*(int *)((char *)((char *)a1 + 0x0) + (v1 << 3)) != 0) {
                    operation_8c1dc50c((void *)(o->f40), (void *)(*(Arg1_0 **)((char *)((char *)a1 + 0x0) + (v1 << 3))));
                }
                v1 = (int)(v1 + 1);
            }
        } else {
            v4 = (int)0;
            while (5 > v4) {
                if (*(int *)((char *)((char *)a1 + 0x0) + (v4 << 3)) != 0) {
                    operation_8c1dc55c((void *)(o->f40), (void *)(*(Arg1_0 **)((char *)((char *)a1 + 0x0) + (v4 << 3))));
                }
                v4 = (int)(v4 + 1);
            }
        }
        return;
    }
    t2 = operation_8c2535dc((int)(a1), a2);
    if (a3 != t2) {
        o->f21 |= 1;
        operation_8c2535fc((int)(a1), a2, a3);
        t3 = operation_8c1575ac((void *)(o->f28));
        operation_8c1dc4b8((void *)(o->f40), (int)(t3->f20), a2);
    }
}
