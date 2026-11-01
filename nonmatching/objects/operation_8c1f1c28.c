/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1f1c28
 * function: operation_8c1f1c28
 * language: c
 * reference size: 272 bytes
 * compiled size: 272 bytes (+0.0%)
 * differing lines: 12 of 114 reference instruction lines
 * differing bytes: 17
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c32c3ac S_g8c32c3ac;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_18 S_g8c467180_18;
typedef struct S_g8c467180_18_0 S_g8c467180_18_0;
typedef struct Object Object;
typedef struct Arg0_4 Arg0_4;
typedef struct Arg0_4_0 Arg0_4_0;
typedef struct Arg0_4_4 Arg0_4_4;
typedef struct Arg1 Arg1;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x4];
    Arg0_4 *f04;
};
struct Arg0_4 {
    Arg0_4_0 *f00;
    Arg0_4_4 *f04;
    int f08;
    int f0c;
    int f10;
    int f14;
};
struct Arg1 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x72];
    char f7a;
    char f7b;
    char f7c;
};
struct S_g8c467180 {
    char unknown0[0x18];
    S_g8c467180_18 *f18;
};
struct S_vv4 {
    int f00;
    char unknown4[0x4];
    float f08;
    char unknownc[0x4];
    float f10;
};
extern S_g8c467180 *g_8c467180;
extern void call_8c0e2278(void *, void *, int);
extern void operation_8c0e226c(int, int);
extern int operation_8c04c66c(int);
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18eb44(int);
extern void operation_8c0e2328(S_vv4 *, float);
void operation_8c1f1c28(Object *o, Arg1 *a1)
{
    char *v1;
    int v8;
    char *v2;
    int v7;
    int v6;
    int v3;
    int v9;
    S_vv4 *v4;
    char *v5;
    int t1;
    v1 = (char *)o->f04->f0c;
    v2 = (char *)o->f04->f08;
    v3 = (int)o->f04->f10;
    v4 = (S_vv4 *)o->f04->f04;
    v5 = (char *)o->f04->f14;
    call_8c0e2278((void *)(o->f04->f00), (void *)(((char *)a1 + 0x8)), 0x20);
    v6 = (int)a1->f7a;
    if (a1->f7a > 5) {
        v6 = (int)5;
    }
    operation_8c0e226c((int)(v1), (int)(*(S_g8c32c3ac **)((char *)0x8c32c3ac + (v6 << 2))));
    v7 = (int)a1->f7c;
    if (a1->f7c > 9) {
        v7 = (int)9;
    }
    operation_8c0e226c((int)(v2), (int)(*(S_g8c467180_18_0 **)((char *)((char *)g_8c467180->f18 + 0x0) + (v7 << 2))));
    v8 = (int)a1->f7b;
    if (a1->f7b > 0xa) {
        v8 = (int)0xa;
    }
    t1 = operation_8c04c66c(v8);
    operation_8c0e226c(v3, t1);
    v9 = (int)a1->f04;
    if (v9 == 0) {
        v4->f00 |= 2;
    } else {
        reset_text_cursor_8c18ea38();
        operation_8c18eb44(v9);
        call_8c0e2278((void *)v4, (void *)((void *)0x8c4dbe40), 0x20);
        operation_8c0e2328(v4, 1000000.0f);
        v4->f08 = 198.0f - v4->f10;
        v4->f00 &= -3;
    }
    call_8c0e2278((void *)v5, (void *)(((char *)a1 + 0x20)), 0x20);
}
