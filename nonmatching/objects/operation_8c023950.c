/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c023950
 * function: operation_8c023950
 * language: c
 * reference size: 244 bytes
 * compiled size: 244 bytes (+0.0%)
 * differing lines: 12 of 100 reference instruction lines
 * differing bytes: 8
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
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_bc8 Arg0_bc8;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x13c];
    Arg0_184 *f184;
    char unknown188[0x180];
    short f308;
    char unknown30a[0x46];
    int f350;
    char unknown354[0x874];
    Arg0_bc8 *fbc8;
};
struct Arg0_184 {
    char unknown0[0x20];
    int f20;
};
struct S_vv6 {
    char unknown0[0xc];
    int f0c;
};
extern char g_8c41ce80[];
extern int operation_8c02bba0(void *);
extern int operation_8c16a7a8(void *, int, int);
extern void operation_8c1c7500(void *, int);
extern void call_8c16bdb4(int, void *, Object *, void *, int);
void operation_8c023950(Object *o)
{
    int v1;
    int v2;
    int n;
    S_vv6 *v6;
    Vector3 *v;
    v1 = (o->f308 == 3);
    if (v1 == 0) {
        v2 = (o->f308 == 6);
        switch (v2) {
        case 0:
            n = 0;
            if (operation_8c02bba0((void *)o) == 0) {
                n = operation_8c16a7a8((void *)(o->fbc8), (int)o, (int)((void *)g_8c41ce80));
            }
            if (o->f184->f20 != 0) {
                *(int *)((char *)(g_8c41ce80 + 4) + (n * 0x1c)) = -1;
                v6 = (S_vv6 *)((char *)(n * 0x1c + g_8c41ce80) + 8);
                operation_8c1c7500((void *)v6, o->f184->f20);
                v6->f0c = -1;
                n++;
            }
            if (n > 0) {
                v = (Vector3 *)0x8c46f620;
                v->x = o->f3c;
                v->y = o->f40 + 20.0f;
                v->z = o->f44;
                call_8c16bdb4((int)((int)o->fbc8 + 0x24), (void *)v, o, (void *)g_8c41ce80, n);
                o->f350 |= 2;
            }
        }
    }
}
