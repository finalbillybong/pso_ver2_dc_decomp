/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c156d48
 * function: operation_8c156d48
 * language: c
 * reference size: 272 bytes
 * compiled size: 272 bytes (+0.0%)
 * differing lines: 20 of 115 reference instruction lines
 * differing bytes: 22
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on menu to registration screen (emulator A/B: RAM, trace and sampled call I/O);
 *   not proof
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
typedef struct Arg0_90 Arg0_90;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x4c];
    unsigned short f80;
    short f82;
    short f84;
    short f86;
    char unknown88[0x8];
    Arg0_90 *f90;
};
struct S_vv1 {
    int f00;
    char unknown4[0x8];
    float f0c;
    char unknown10[0x14];
    int f24;
};
struct S_vv2 {
    int f00;
    int f04;
};
extern void call_8c0e2278(S_vv1 *, int, int);
extern void initialize_fields_8c0e24e8(void *);
extern void operation_8c0e2328(S_vv1 *, float);
int operation_8c156d48(Object *o, int a1, int a2, int a3, int a4)
{
    S_vv1 *v1;
    S_vv2 *v2;
    int v8;
    if (o->f82 >= o->f86) {
        return 0;
    }
    v1 = (S_vv1 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f82 << 2));
    v2 = (S_vv2 *)&*(int *)((char *)((char *)o->f90 + 0x0) + (o->f82 << 3));
    v1->f0c = (float)(o->f82 * 0x14);
    v1->f24 = a4;
    if (((a2 & 1)) != 0) {
        call_8c0e2278(v1, a1, 0x20);
    } else {
        call_8c0e2278(v1, a1, 0);
    }
    if (((a2 & 4)) != 0) {
        v1->f00 |= 1;
    }
    if (((a2 & 8)) != 0) {
        v1->f00 |= 0x40;
    }
    v8 = (int)a2;
    if (((a2 & 2)) != 0) {
        if (o->f82 == o->f84) {
            v8 = (int)(a2 & -3);
        } else {
            v1->f00 |= 8;
            v8 = (int)a2;
        }
    }
    if (((o->f80 & 0xffff & 0x100)) != 0) {
        initialize_fields_8c0e24e8((void *)v1);
    }
    operation_8c0e2328(v1, 1000000.0f);
    v2->f00 = (int)(v8);
    v2->f04 = a3;
    o->f82 += 1;
    return 1;
}
