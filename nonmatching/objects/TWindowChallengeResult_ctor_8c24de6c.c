/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24de6c
 * function: TWindowChallengeResult_ctor_8c24de6c
 * language: c
 * reference size: 368 bytes
 * compiled size: 368 bytes (+0.0%)
 * differing lines: 50 of 148 reference instruction lines
 * differing bytes: 34
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
typedef struct S_g8c33efb4 S_g8c33efb4;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_14 Arg0_30_14;
typedef struct Arg0_30_4 Arg0_30_4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv8 S_vv8;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x10];
    Arg0_30 *f30;
};
struct S_vv2 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x4];
    float f10;
};
struct Arg0_30 {
    char unknown0[0x4];
    Arg0_30_4 *f04;
    char unknown8[0x4];
    int f0c;
    char unknown10[0x4];
    Arg0_30_14 *f14;
};
struct Arg0_30_14 {
    char unknown0[0x20];
    int f20;
};
struct S_vv8 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x4];
    float f10;
};
extern int g_8c33eee0;
extern char g_8c33efc0[];
extern void initialize_base_8c0db1d0(void *, int);
extern void call_8c0e2278(S_vv2 *, void *, int);
extern void operation_8c0e2328(S_vv2 *, float);
extern void reset_text_cursor_8c18ea38(void);
extern int call_8c18e768(int, int);
extern int call_8c18e8a0(int, int);
extern void operation_8c18ea4c(int);
extern void call_8c18ec00(int, int);
extern void call_8c0e1f40(S_vv8 *);
Object *TWindowChallengeResult_ctor_8c24de6c(Object *o, int a1, int a2, int a3)
{
    Object **home = &o;
    int v2;
    int v1;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c33ef94));
    o->dispatch = (void *)0x8c27e45c;
    o->tag = (int)(g_8c33eee0);
    o->size = 0x68;
    v1 = (int)0;
    while (3 > v1) {
        v2 = (int)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (v1 << 1 << 2));
        call_8c0e2278((S_vv2 *)v2, (void *)(*(S_g8c33efb4 **)((char *)0x8c33efb4 + (v1 << 2))), 0);
        operation_8c0e2328((S_vv2 *)v2, 1000000.0f);
        ((S_vv2 *)v2)->f08 = 233.0f - ((S_vv2 *)v2)->f10;
        v1 = (int)(v1 + 1);
    }
    call_8c0e2278((S_vv2 *)(o->f30->f04), (void *)a1, 0x20);
    v1 = (int)o->f30->f0c;
    reset_text_cursor_8c18ea38();
    a1 = call_8c18e768(a2, 0xe10);
    v2 = call_8c18e8a0(a2, 0xe10);
    if (a1 > 0x63) {
        operation_8c18ea4c((int)(g_8c33efc0 + 0x3b));
    } else {
        call_8c18ec00(a1, 2);
        operation_8c18ea4c((int)(g_8c33efc0 + 0x44));
        a2 = call_8c18e768(v2, 0x3c);
        a1 = call_8c18e8a0(v2, 0x3c);
        call_8c18ec00(a2, 2);
        operation_8c18ea4c((int)(g_8c33efc0 + 0x44));
        call_8c18ec00(a1, 2);
    }
    call_8c0e2278((S_vv2 *)v1, (void *)((void *)0x8c4dbe40), 0x20);
    a1 = (int)o->f30->f14;
    o->f30->f14->f20 = a3;
    call_8c0e1f40((S_vv8 *)a1);
    ((S_vv8 *)a1)->f08 = ((S_vv8 *)a1)->f10 + 233.0f;
    return o;
}
