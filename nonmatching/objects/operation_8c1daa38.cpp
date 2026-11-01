/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1daa38
 * function: operation_8c1daa38
 * language: c++
 * reference size: 224 bytes
 * compiled size: 220 bytes (-1.8%)
 * differing lines: 16 of 83 reference instruction lines
 * differing bytes: 113
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700_38 S_c8c122700_38;
typedef struct S_c8c122700_38_4 S_c8c122700_38_4;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4e2f40 S_g8c4e2f40;
typedef struct S_g8c4e2f40_42c S_g8c4e2f40_42c;
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
    S_c8c122700_38 *f38;
    char unknown3c[0x58];
    float f94;
    float f98;
} S_c8c122700Data;
struct S_g8c4e2f40 {
    char unknown0[0x42c];
    S_g8c4e2f40_42c *f42c;
};
struct S_g8c4e2f40_42c {
    char unknown0[0x58];
    int f58;
    int f5c;
};
struct S_c8c122700_38 {
    char unknown0[0x4];
    S_c8c122700_38_4 *f04;
};
struct S_c8c122700_38_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c32ab0c;
extern int g_8c32ab14;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4e2f40 *g_8c4e2f40;
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" void TObjectShared_ctor_8c01d1ec(S_c8c122700 *, void *);
extern "C" S_c8c122700 *operation_8c1daa38(int a0)
{
    S_c8c122700 *t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x9c);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        void *pm2;
        TObjectShared_ctor_8c01d1ec(t1, g_8c44be98);
        *(void **)(0x18 + (char *)t1) = (void *)0x8c277284;
        pm2 = (void *)0x8c277204;
        ((S_c8c122700Data *)t1)->f00 = (g_8c32ab0c);
        ((S_c8c122700Data *)t1)->f1e = (int)((short)0x9c);
        ((S_c8c122700Data *)t1)->f94 = 2000.0f;
        ((S_c8c122700Data *)t1)->f98 = 0.0f;
        (void)home;
        *(void **)((char *)self + 0x18) = pm2;
        ((S_c8c122700Data *)self)->f00 = (g_8c32ab14);
        ((S_c8c122700Data *)self)->f1e = (short)0x9c;
        self->v6(a0);
        a0 = g_8c4e2f40->f42c->f58;
        ((S_c8c122700Data *)self)->f38 = (S_c8c122700_38 *)a0;
        ((S_c8c122700Data *)self)->f98 = ((S_c8c122700Data *)self)->f38->f04->f14;
        ((S_c8c122700Data *)self)->f28 = (g_8c4e2f40->f42c->f5c);
    }
    return t1;
}
