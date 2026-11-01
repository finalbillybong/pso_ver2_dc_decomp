/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c724c
 * function: TBreakUpMdl_ctor_8c0c724c
 * language: c
 * reference size: 452 bytes
 * compiled size: 452 bytes (+0.0%)
 * differing lines: 32 of 188 reference instruction lines
 * differing bytes: 58
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
typedef struct Block28 {
    int words[7];
} Block28;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg3 Arg3;
typedef struct S_vv10 S_vv10;
typedef struct S_vv8 S_vv8;
typedef struct S_vv8_24 S_vv8_24;
typedef struct Block_p0_3c {
    int f00;
    float f04;
    float f08;
    char unknownc[0x8];
    float f14;
    float f18;
} Block_p0_3c;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    Arg0_24 *f24;
    int f28;
    char unknown2c[0x8];
    float f34;
    int f38;
    Block_p0_3c f3c;
};
struct Arg3 {
    Block28 f00;
};
struct Arg0_24 {
    int f00;
    int f04;
};
struct S_vv8 {
    char unknown0[0x24];
    S_vv8_24 *f24;
    char unknown28[0x10];
    int f38;
};
struct S_vv8_24 {
    char unknown0[0x4];
    int f04;
};
struct S_vv10 {
    char unknown0[0x10];
    float f10;
    char unknown14[0x4];
    int f18;
    int f1c;
    int f20;
    int f24;
};
extern Block28 g_8c2857b0;
extern int g_8c306638;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int operator_new_8c18de4c(int);
extern void njPushMatrix_8c38ade4(void *);
extern void translate_current_matrix_v_8c382a40(int);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be280(int, int, S_vv10 *);
extern void call_8c3be38c(int, int, void *);
extern void normalize_xz_checked(void *);
extern int rand(void);
extern void njPopMatrixEx_8c38ad10(void);
extern void set_particle_duration(void *, int, float);
Object *TBreakUpMdl_ctor_8c0c724c(Object *o, int a1, int a2, Arg3 *a3, int a4, int a5, register int a6)
{
    Object **home = &o;
    int v9;
    S_vv8 *v8;
    S_vv10 *v10;
    int v7;
    float v5;
    float v6;
    int t1;
    int t2;
    int t3;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2668a4;
    o->tag = (int)(g_8c306638);
    o->size = 0x58;
    o->f24 = (Arg0_24 *)a2;
    if (a3 == 0) {
        *(Block28 *)&o->f3c = *(Block28 *)&g_8c2857b0;
    } else {
        *(Block28 *)&o->f3c = *(Block28 *)&a3->f00;
    }
    o->f28 = a4;
    o->f20 = (int)(o->f24->f00);
    v5 = (float)o->f3c.f14;
    v6 = (float)o->f3c.f18;
    t1 = operator_new_8c18de4c((int)(o->f20 * 0x28));
    o->f38 = (int)(t1);
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    translate_current_matrix_v_8c382a40(a5);
    njRotateY_8c37df90(0, a6);
    for (v7 = 0; v8 = (S_vv8 *)o, o->f20 > v7; v7++) {
        v10 = (S_vv10 *)(v8->f38 + v7 * 0x28);
        v9 = v7 * 0x1c;
        call_8c3be280(0, (int)(v8->f24->f04 + v9 + 4), v10);
        call_8c3be38c(0, (int)(o->f24->f04 + v9 + 0x10), (void *)((int)v10 + 0xc));
        normalize_xz_checked((void *)((int)v10 + 0xc));
        t2 = rand();
        v10->f10 = v6 * ((float)t2 / 32768.0f) + v5;
        v10->f18 = 0;
        v10->f1c = a6;
        v10->f20 = 0;
        t3 = rand();
        v10->f24 = (int)(((float)t3 / 32768.0f - 0.5f) * 2.0f * 5000.0f);
    }
    njPopMatrixEx_8c38ad10();
    set_particle_duration((void *)o, (int)(o->f3c.f00), o->f3c.f04);
    o->f34 = o->f3c.f08;
    return o;
}
