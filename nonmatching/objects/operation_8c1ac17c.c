/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ac17c
 * function: operation_8c1ac17c
 * language: c
 * reference size: 496 bytes
 * compiled size: 496 bytes (+0.0%)
 * differing lines: 4 of 207 reference instruction lines
 * differing bytes: 17
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
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct S_frame_4 S_frame_4;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct Block_frame_18 {
    char unknown0[0x9];
    char f09;
    char f0a;
    char f0b;
    char unknownc[0x8];
} Block_frame_18;
typedef struct Block_frame_2c {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
} Block_frame_2c;
struct Frame {
    S_frame_4 *f04;
    Block16 f08;
    Block_frame_18 f18;
    Block_frame_2c f2c;
};
struct S_frame_4 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0xc];
    int f2c;
    char unknown30[0x4];
    int f34;
    char unknown38[0x8];
    float f40;
    char unknown44[0x18];
    int f5c;
    int f60;
};
struct Arg1 {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x10c];
    unsigned char f138;
    char unknown139[0x9b];
    int f1d4;
};
struct S_vv1 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    float f3c;
    float f40;
    float f44;
};
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x34];
    int f54;
    char unknown58[0xc];
    int f64;
    int f68;
};
extern int g_8c324f8c;
extern int g_8c324f94;
extern Block20 g_8c324f98;
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void TItemShoot_ctor_8c1aba3c(Object *, Arg1 *, int, int);
extern float signed_sqrt_8c37f6c0(float);
extern float call_8c130334(float, float);
extern Block_frame_2c call_8c075ccc(Arg1 *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TEffStarLight2D_ctor_8c245d6c(void *, void *, void *, int);
extern void operation_193300(int, void *);
extern void operation_193324(int, void *);
Object *operation_8c1ac17c(Object *o, Arg1 *a1, int a2, int a3)
{
    Object **home = &o;
    Block_frame_2c col;
    Block_frame_18 blk;
    Block_frame_2c tmp;
    int t3;
    (void)home;
    {
        S_frame_4 *self = (S_frame_4 *)o;
        S_frame_4 **hs = &self;
        (void)hs;
        TItemShoot_ctor_8c1aba3c(o, a1, a2, a3);
        self->f18 = (void *)0x8c2748b4;
        self->f00 = (int)(g_8c324f8c);
        self->f1e = 0x64;
        self->f5c = (int)(a1->f1d4);
        self->f60 = (int)(a1->f28);
        if (self->f40 != 0.0f) {
            self->f2c = -(int)(call_8c130334(self->f40, signed_sqrt_8c37f6c0(((S_vv1 *)self)->f3c * ((S_vv1 *)self)->f3c + ((S_vv1 *)self)->f44 * ((S_vv1 *)self)->f44)) * 65536.0f / 6.28318405f);
            self->f34 = 0;
        } else {
            self->f34 = 0;
            self->f2c = 0;
        }
    }
    o->dispatch = (void *)0x8c274874;
    o->tag = (int)(g_8c324f94);
    o->size = 0x6c;
    tmp = call_8c075ccc(a1);
    col = tmp;
    *(Block20 *)&blk = *(Block20 *)&g_8c324f98;
    blk.f09 = (int)(col.f04 * 255.0f);
    blk.f0a = (int)(col.f08 * 255.0f);
    blk.f0b = (int)(col.f0c * 255.0f);
    t3 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x50);
    if (t3 != 0) {
        TEffStarLight2D_ctor_8c245d6c((void *)t3, (void *)(((char *)o + 0x20)), (void *)&blk, (int)g_8c44bea0);
    }
    o->f54 = (int)(t3);
    operation_193300(0, (void *)(((char *)o + 0x5c)));
    operation_193324(0, (void *)(((char *)o + 0x60)));
    o->f64 = 0;
    o->f68 = a1->f138;
    if (o->f68 < 0 || o->f68 > 4) {
        o->f68 = 4;
    } else {
    }
    return o;
}
