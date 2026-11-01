/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fc6d0
 * function: operation_8c0fc6d0
 * language: c
 * reference size: 296 bytes
 * compiled size: 296 bytes (+0.0%)
 * differing lines: 6 of 119 reference instruction lines
 * differing bytes: 171
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
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_4 Arg0_30_4;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x8];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x10];
    int f58;
    char unknown5c[0x14];
    Vector3 f70;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
    Arg0_30_4 *f04;
};
struct S_vv1 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x4];
    float f10;
    char unknown14[0x8];
    unsigned char f1c;
};
struct Arg1 {
    char unknown0[0x134];
    unsigned char f134;
};
struct S_vv6 {
    int f00;
    char unknown4[0xc];
    int f10;
};
extern Vector3 g_8c30aa30;
extern void call_8c0e196c(void *, void *);
extern void call_8c19ea94(S_vv1 *, Arg1 *, int);
extern void operation_8c19e68c(void *);
extern int operation_8c0747ec(void *);
extern float operation_8c1d5b08(void *);
void operation_8c0fc6d0(Object *o, Arg1 *a1)
{
    float t2;
    S_vv1 *v1;
    int v5;
    float pm3;
    float pm5;
    float pm7;
    float pm8;
    S_vv6 *v6;
    call_8c0e196c((void *)(((char *)o + 0x2c)), (void *)((void *)0x8c30a8d0));
    *(Vector3 *)&o->f70 = *(&g_8c30aa30);
    v1 = (S_vv1 *)o->f30->f00;
    call_8c19ea94(v1, a1, 0);
    operation_8c19e68c((void *)v1);
    pm8 = 8.0f;
    v1->f08 = -pm8;
    if (!(v1->f1c == 0x2d)) {
        pm8 = v1->f08;
        pm3 = 18.0f + pm8;
        v1->f08 = pm3;
    }
    o->f40 = v1->f10;
    pm7 = 45.0f;
    o->f44 = pm7;
    v5 = (int)a1->f134;
    v6 = (S_vv6 *)o->f30->f04;
    if (!(0 == v5) && 1 != v5) {
        goto L_8c0fc788;
    }
    v5 = operation_8c0747ec((void *)a1);
    v6->f10 = (unsigned char)v5;
    o->f44 += 20.0f;
    v5 = -3 & v6->f00;
    v6->f00 = v5;
    t2 = operation_8c1d5b08((void *)v6);
    pm5 = o->f40;
    if (pm5 < t2) {
        o->f40 = t2;
        goto L_8c0fc78e;
    L_8c0fc788:
        ;
        v5 = 2 | v6->f00;
        v6->f00 = v5;
    }
L_8c0fc78e:
    ;
    pm5 = o->f40 + 38.0f;
    o->f40 = pm5;
    pm8 = o->f44;
    pm5 = pm8;
    pm3 = pm5;
    t2 = pm3;
    pm7 = 444.0f - t2;
    o->f3c = pm7;
    o->f58 = 0;
}
