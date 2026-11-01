/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11f120
 * function: TORainbowCave01_ctor_8c11f120
 * language: c++
 * reference size: 208 bytes
 * compiled size: 208 bytes (+0.0%)
 * differing lines: 6 of 74 reference instruction lines
 * differing bytes: 6
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
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d84c0 S_g8c4d84c0;
typedef struct S_g8c4d84c0_42c S_g8c4d84c0_42c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
class S_c8c122700;
class S_c8c122700 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int);
};
typedef struct S_c8c122700Data {
    int f00;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x8];
    int f28;
    char unknown2c[0xc];
    int f38;
    char unknown3c[0xbc];
    float ff8;
    float ffc;
    char unknown100[0x4];
    float f104;
} S_c8c122700Data;
struct S_g8c4d84c0 {
    char unknown0[0x42c];
    S_g8c4d84c0_42c *f42c;
};
struct S_g8c4d84c0_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
extern int g_8c311904;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d84c0 *g_8c4d84c0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" void operation_8c0ee870(void *, void *);
extern "C" void operation_8c11f3dc(S_c8c122700 *);
extern "C" S_c8c122700 *TORainbowCave01_ctor_8c11f120(int a0)
{
    S_c8c122700 *t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x118);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        operation_8c0ee870((void *)t1, g_8c44be98);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c26a4ac;
        ((S_c8c122700Data *)self)->f00 = (int)(g_8c311904);
        ((S_c8c122700Data *)self)->f1e = 0x118;
        self->v6(a0);
        ((S_c8c122700Data *)self)->f38 = (int)(g_8c4d84c0->f42c->f08);
        ((S_c8c122700Data *)self)->f28 = (int)(g_8c4d84c0->f42c->f0c);
        ((S_c8c122700Data *)self)->ff8 = 400.0f;
        ((S_c8c122700Data *)self)->ffc = 40000.0f;
        ((S_c8c122700Data *)self)->f104 = 0.0f;
        operation_8c11f3dc(self);
    }
    return t1;
}
