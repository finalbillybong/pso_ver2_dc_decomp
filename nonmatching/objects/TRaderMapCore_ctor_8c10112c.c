/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10112c
 * function: TRaderMapCore_ctor_8c10112c
 * language: c
 * reference size: 1052 bytes
 * compiled size: 1056 bytes (+0.4%)
 * differing lines: 184 of 361 reference instruction lines
 * differing bytes: 364
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block64 {
    int words[16];
} Block64;
typedef struct S_L8c4d5958 S_L8c4d5958;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c44be8c S_g8c44be8c;
typedef struct S_g8c4d59e0 S_g8c4d59e0;
typedef struct S_g8c4d59e0_42c S_g8c4d59e0_42c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct S_x51408 S_x51408;
typedef struct S_x81952 S_x81952;
typedef struct S_x91584 S_x91584;
typedef struct S_x94912 S_x94912;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x74];
    int f94;
    char unknown98[0xa0];
    int f138;
    float f13c;
    float f140;
    float f144;
    float f148;
    float f14c;
    int f150;
    int f154;
    float f158;
    int f15c;
    int f160;
    int f164;
    int f168;
    float f16c;
    float f170;
    float f174;
    float f178;
    float f17c;
    int f180;
    int f184;
    int f188;
    short f18c;
    short f18e;
    short f190;
    short f192;
    short f194;
    short f196;
    short f198;
    short f19a;
    short f19c;
    short f19e;
    short f1a0;
    short f1a2;
    short f1a4;
    short f1a6;
    short f1a8;
    short f1aa;
    short f1ac;
    short f1ae;
    short f1b0;
    short f1b2;
};
struct S_g8c4d59e0 {
    char unknown0[0x42c];
    S_g8c4d59e0_42c *f42c;
};
struct S_g8c4d59e0_42c {
    char unknown0[0x8];
    int f08;
    char unknownc[0xc];
    int f18;
    char unknown1c[0xc];
    int f28;
};
struct S_x94912 {
    float f00;
};
struct S_x51408 {
    float f00;
};
struct S_x91584 {
    float f00;
};
struct S_x81952 {
    float f00;
};
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    int f34;
    int f38;
};
extern int g_8c30b094;
extern int g_8c30b098;
extern S_g8c44be8c *g_8c44be8c;
extern int g_8c4d53a0;
extern int g_8c4d5954;
extern Block64 g_8c4d5998;
extern Object *g_8c4d59d8;
extern S_g8c4d59e0 *g_8c4d59e0;
extern int g_8c4d59e4;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c4d5958 g_8c4d5958;
extern char gc_8c4d5958[];
extern void TObjectShared_ctor_8c01d1ec(Object *, void *);
extern void call_8c384504(void *);
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void TObject_ctor_8c0330e4(void *, void *);
Object *TRaderMapCore_ctor_8c10112c(Object *o)
{
    Object **home = &o;
    int v1;
    int v2;
    S_c8c122700 *t1;
    int v3;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o, g_8c44be8c);
    o->dispatch = (void *)0x8c269578;
    o->tag = (int)(g_8c30b098);
    o->size = 0x1c4;
    if (g_8c4d53a0 == 0) {
        o->f04 |= 1;
        return o;
    }
    o->f160 = (int)(g_8c4d59e0->f42c->f28);
    o->f164 = (int)(g_8c4d59e0->f42c->f08);
    o->f168 = (int)(g_8c4d59e0->f42c->f18);
    call_8c384504((void *)((void *)&g_8c4d5958));
    *(float *)(gc_8c4d5958 + 0x4) = 2000.0f;
    *(float *)(gc_8c4d5958 + 0x10) = -1.0f;
    *(float *)(gc_8c4d5958 + 0x14) = 0.0f;
    *(int *)(gc_8c4d5958 + 0x18) = 0x8000;
    {
        Block64 *p_ = (Block64 *)&*(Block64 *)(gc_8c4d5958 + 0x0);
        *(Block64 *)&g_8c4d5998 = *p_;
    }
    o->f13c = 500.0f;
    o->f140 = 640.0f;
    o->f144 = 480.0f;
    o->f148 = 544.0f;
    o->f14c = 128.0f;
    v1 = (int)0;
    while (4 > v1) {
        ((S_x94912 *)(((char *)o + 0xa0) + v1 * 0x28))->f00 = 0.0f;
        ((S_x51408 *)(((char *)o + 0x9c) + v1 * 0x28))->f00 = 0.0f;
        ((S_x91584 *)(((char *)o + 0x98) + v1 * 0x28))->f00 = 0.0f;
        *(int *)((char *)((char *)o + 0xa4) + (v1 * 0x28)) = 0;
        ((S_x81952 *)(((char *)o + 0xa8) + v1 * 0x28))->f00 = 22.0f;
        *(short *)((char *)((char *)o + 0xae) + (v1 * 0x28)) = -1;
        v1 = (int)(v1 + 1);
    }
    v2 = (int)0x1b4;
    v3 = (int)0;
    while (4 > v3) {
        t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x3c);
        if (t1 != 0) {
            TObject_ctor_8c0330e4((void *)t1, (void *)o);
            t1->f18 = (void *)0x8c2695b8;
            t1->f00 = (int)(g_8c30b094);
            t1->f1e = 0x3c;
            t1->f24 = 0.0f;
            t1->f20 = 0.0f;
            t1->f30 = 0.0f;
            t1->f2c = 0.0f;
            t1->f28 = 0.0f;
            t1->f34 = 1;
            t1->f38 = (int)(v3);
        }
        *(S_c8c122700 **)((char *)((char *)((int)o + v2) + 0x0) + (v3 << 2)) = t1;
        v3 = (int)(v3 + 1);
    }
    o->f138 = 0;
    o->f150 = 2;
    o->f154 = 0;
    o->f158 = 80.0f;
    g_8c4d5954 = 0;
    o->f15c = 0;
    g_8c4d59d8 = o;
    o->f18c = 0x28;
    o->f18e = 0x20;
    o->f190 = 0x14;
    o->f192 = 0x10;
    o->f194 = 0;
    o->f196 = 0;
    o->f198 = 0x9f;
    o->f19a = 0x7f;
    o->f19c = 1;
    o->f19e = 0;
    o->f1a0 = 0x28;
    o->f1a2 = 0x20;
    o->f1a4 = 0x14;
    o->f1a6 = 0x10;
    o->f1a8 = 0;
    o->f1aa = 0x7f;
    o->f1ac = 0x9f;
    o->f1ae = 0xff;
    o->f1b0 = 1;
    o->f1b2 = 0;
    o->f16c = 600.0f;
    o->f170 = 208.0f;
    o->f174 = 0.0f;
    o->f178 = 1.0f;
    o->f17c = 1.0f;
    o->f180 = 0;
    o->f184 = (int)(g_8c4d59e4);
    o->f188 = (int)(&o->f18c);
    o->f94 = 3;
    return o;
}
