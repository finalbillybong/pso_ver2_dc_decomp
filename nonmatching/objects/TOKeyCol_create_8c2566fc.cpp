/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2566fc
 * function: TOKeyCol_create_8c2566fc
 * language: c++
 * reference size: 232 bytes
 * compiled size: 232 bytes (+0.0%)
 * differing lines: 14 of 84 reference instruction lines
 * differing bytes: 23
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
    char unknown20[0x4c];
    float f6c;
    char unknown70[0x1c];
    int f8c;
    char unknown90[0x68];
    float ff8;
    float ffc;
    char unknown100[0x4];
    float f104;
    int f108;
} S_c8c122700Data;
extern int g_8c33ff30;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" void TOKey_ctor_8c112e74(void *, void *);
extern "C" void operation_8c112f78(void *);
extern "C" S_c8c122700 *TOKeyCol_create_8c2566fc(int a0)
{
    S_c8c122700 *t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x11c);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        TOKey_ctor_8c112e74((void *)t1, g_8c44be98);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c2817e4;
        ((S_c8c122700Data *)self)->f00 = (int)(g_8c33ff30);
        ((S_c8c122700Data *)self)->f1e = 0x11c;
        self->v6(a0);
        operation_8c112f78((void *)self);
        ((S_c8c122700Data *)self)->ff8 = 400.0f;
        ((S_c8c122700Data *)self)->ffc = 50.0f;
        ((S_c8c122700Data *)self)->f104 = ((S_c8c122700Data *)self)->f6c + 10.0f;
        {
            S_c8c122700 *base = self;
            if (((S_c8c122700Data *)base)->f108 != 2 && ((S_c8c122700Data *)base)->f8c < 0) {
                ((S_c8c122700Data *)base)->f108 = 1;
            } else {
                ((S_c8c122700Data *)base)->f108 = 0;
            }
        }
    }
    return t1;
}
