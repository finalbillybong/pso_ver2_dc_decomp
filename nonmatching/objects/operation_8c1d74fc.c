/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d74fc
 * function: operation_8c1d74fc
 * language: c
 * reference size: 260 bytes
 * compiled size: 260 bytes (+0.0%)
 * differing lines: 18 of 107 reference instruction lines
 * differing bytes: 20
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
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_10 S_g8c467180_10;
typedef struct S_g8c467180_10_0 S_g8c467180_10_0;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_70 Arg0_70;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv6 S_vv6;
struct Frame {
    char unknown0[0x10];
};
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x3c];
    Arg0_70 *f70;
    char unknown74[0x38];
    Vector3 fac;
};
struct S_g8c467180 {
    char unknown0[0x10];
    S_g8c467180_10 *f10;
};
struct S_vv4 {
    int f00;
};
struct S_vv5 {
    int f00;
};
struct Arg0_30_0 {
    int f00;
};
struct S_vv6 {
    int f00;
};
extern Vector3 g_8c32a1ec;
extern S_g8c467180 *g_8c467180;
extern void initialize_fields_8c207358(void *);
extern void call_8c0e196c(void *, void *);
extern void call_8c1c8ce4(void *, Frame *);
extern int call_8c207378(Frame *, int);
extern void operation_8c10393c(void *, int, int);
extern void operation_8c0e226c(int, int);
extern void initialize_fields_8c0e24e8(void *);
void operation_8c1d74fc(Object *o)
{
    Frame frame;
    S_vv5 *v5;
    int v1;
    S_vv4 *v4;
    S_vv5 *pm3;
    int v3;
    S_vv6 *v6;
    int v2;
    int pm4;
    Vector3 *pm2;
    initialize_fields_8c207358((void *)(&frame));
    call_8c0e196c((void *)((0x2c + (char *)o)), ((void *)0x8c329df0));
    pm2 = (Vector3 *)&g_8c32a1ec;
    *(Vector3 *)&o->fac = *pm2;
    call_8c1c8ce4((void *)(o->f70), ((&frame)));
    pm4 = 0;
    v1 = (int)pm4;
    v2 = (int)-1;
    pm4 = -3;
    v3 = (int)pm4;
    for (; v1 < 3; ) {
        int t1;
        t1 = call_8c207378((Frame *)((&frame)), v1);
        if (t1 != v2) {
            v4 = (S_vv4 *)*(Arg0_30_0 **)(((char *)o->f30 + 0x0) + (1 + v1 << 2));
            pm4 = v1 + 4;
            v5 = (S_vv5 *)*(Arg0_30_0 **)(((char *)o->f30 + 0x0) + (pm4 << 2));
            operation_8c10393c((void *)v4, 6, t1);
            operation_8c0e226c((int)v5, (int)(*(S_g8c467180_10_0 **)(((char *)g_8c467180->f10 + 0x0) + (t1 << 2))));
            initialize_fields_8c0e24e8((void *)v5);
            v4->f00 &= v3;
            v5->f00 &= v3;
        } else {
            v4 = (S_vv4 *)*(Arg0_30_0 **)(((char *)o->f30 + 0x0) + (v1 + 1 << 2));
            pm3 = (S_vv5 *)*(Arg0_30_0 **)((char *)(0x0 + (char *)o->f30) + (v1 + 4 << 2));
            v4->f00 |= 2;
            v5 = pm3;
            v5->f00 |= 2;
        }
        v1 += 1;
    }
}
