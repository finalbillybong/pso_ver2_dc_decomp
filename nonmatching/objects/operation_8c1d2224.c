/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d2224
 * function: operation_8c1d2224
 * language: c
 * reference size: 280 bytes
 * compiled size: 280 bytes (+0.0%)
 * differing lines: 84 of 126 reference instruction lines
 * differing bytes: 81
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_5c Arg0_5c;
struct Object {
    char unknown0[0x21];
    char f21;
    short f22;
    char unknown24[0x4];
    Arg0_28 *f28;
    Arg0_2c *f2c;
    int f30;
    Arg0_34 *f34;
    char unknown38[0x24];
    Arg0_5c *f5c;
};
struct Arg0_5c {
    char unknown0[0x72];
    short f72;
    short f74;
};
extern int call_8c21f468(void);
extern void operation_8c21f524(int, int, int, int, int, int, int);
extern void operation_8c21f4d4(void *, int, int, int, int, int);
extern int operation_8c21f544(void *, int);
extern void reset_slot_8c21f564(void *, int);
extern void operation_8c21f49c(void *, int, int, int, void *, void *);
void operation_8c1d2224(Object *o)
{
    int v10;
    int v11;
    int v3;
    int v5;
    char *v1;
    int v7;
    char *v8;
    unsigned char v9;
    int v2;
    int v6;
    v1 = (char *)*(int *)0x8c5059a0;
    v3 = o->f5c->f72;
    v2 = o->f5c->f74;
    v8 = v1 + 0x1c;
    v11 = 0xc - call_8c21f468();
    v10 = o->f22;
    if (v11 > v10) {
        operation_8c21f524((int)(o->f34), v10, (int)*(char *)(v8 + 0xc + (v10 << 2)), v3, v2, (int)(o->f28), (int)(o->f2c));
        if (o->f30 != 0) {
            operation_8c21f4d4((void *)(o->f34), (int)*(char *)(v8 + 0xc + (o->f22 << 2)), 0x40 - v3, v2, o->f28 == 0, (int)(o->f2c));
        }
        return;
    }
    v5 = v3 + (v2 << 1);
    v7 = v10 - v11;
    for (v6 = 0; 4 > v6; v6++) {
        if (operation_8c21f544((void *)v1, v6) != 0) {
            if (!(v7-- > 0)) {
                v9 = *(unsigned short *)(v8 + 0x4 + (v6 << 1));
                reset_slot_8c21f564((void *)(o->f34), v6);
                operation_8c21f49c((void *)(o->f34), (unsigned short)v9, (int)(o->f21), v5, (void *)(o->f28), (void *)(o->f2c));
                return;
            }
        }
    }
}
