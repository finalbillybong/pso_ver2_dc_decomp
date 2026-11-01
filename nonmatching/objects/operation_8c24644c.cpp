/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24644c
 * function: operation_8c24644c
 * language: c++
 * reference size: 220 bytes
 * compiled size: 220 bytes (+0.0%)
 * differing lines: 24 of 85 reference instruction lines
 * differing bytes: 40
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
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c44bea0 S_g8c44bea0;
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
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x50];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x10];
    int f88;
    int f8c;
    int f90;
    S_c8c122700 *f94;
} S_c8c122700Data;
struct Frame {
    float f04;
    float f08;
    char f0c;
    char f0d;
    char f0e;
    char f0f;
    int f10;
    char unknown14[0x4];
};
extern S_g8c44be98 *g_8c44be98;
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" void TObjectShared_ctor_8c01d1ec(S_c8c122700 *, void *);
extern "C" void TEffStarLight2D_ctor_8c245d6c(void *, void *, void *, int);
extern "C" S_c8c122700 *operation_8c24644c(int a0)
{
    Frame frame;
    S_c8c122700 *t1;
    S_c8c122700 *t2;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x98);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        TObjectShared_ctor_8c01d1ec(t1, g_8c44be98);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c27ce88;
        self->v6(a0);
        (&frame)->f04 = ((S_c8c122700Data *)self)->f6c;
        (&frame)->f08 = ((S_c8c122700Data *)self)->f70;
        (&frame)->f0c = (char)((S_c8c122700Data *)self)->f74;
        (&frame)->f0d = ((S_c8c122700Data *)self)->f88;
        (&frame)->f0e = ((S_c8c122700Data *)self)->f8c;
        (&frame)->f0f = ((S_c8c122700Data *)self)->f90;
        (&frame)->f10 = 0;
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x50);
        if (t2 != 0) {
            TEffStarLight2D_ctor_8c245d6c((void *)t2, (void *)(((char *)self + 0x3c)), (void *)(&(&frame)->f04), (int)g_8c44bea0);
        }
        ((S_c8c122700Data *)self)->f94 = (S_c8c122700 *)t2;
    }
    return t1;
}
