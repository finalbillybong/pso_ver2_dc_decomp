/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c0974
 * function: TOExplosiveMachine02_ctor_8c1c0974
 * language: c++
 * reference size: 256 bytes
 * compiled size: 252 bytes (-1.6%)
 * differing lines: 62 of 101 reference instruction lines
 * differing bytes: 153
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700_38 S_c8c122700_38;
typedef struct S_c8c122700_38_4 S_c8c122700_38_4;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4e2c60 S_g8c4e2c60;
typedef struct S_g8c4e2c60_42c S_g8c4e2c60_42c;
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
    char unknown3c[0x5c];
    float f98;
    char unknown9c[0x4];
    int fa0;
    int fa4;
    int fa8;
    int fac;
} S_c8c122700Data;
struct S_g8c4e2c60 {
    char unknown0[0x42c];
    S_g8c4e2c60_42c *f42c;
};
struct S_g8c4e2c60_42c {
    char unknown0[0x38];
    int f38;
    int f3c;
    char unknown40[0x8];
    int f48;
    int f4c;
    char unknown50[0x8];
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
extern int g_8c32872c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4e2c60 *g_8c4e2c60;
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" void TOExplosiveMachine_ctor_8c1c0420(void *);
extern "C" S_c8c122700 *TOExplosiveMachine02_ctor_8c1c0974(int a0)
{
    S_c8c122700 *t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xb0);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        TOExplosiveMachine_ctor_8c1c0420((void *)t1);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c27581c;
        ((S_c8c122700Data *)self)->f00 = (int)(g_8c32872c);
        ((S_c8c122700Data *)self)->f1e = 0xb0;
        self->v6(a0);
        ((S_c8c122700Data *)self)->f38 = (S_c8c122700_38 *)g_8c4e2c60->f42c->f58;
        ((S_c8c122700Data *)self)->f28 = (int)(g_8c4e2c60->f42c->f5c);
        ((S_c8c122700Data *)self)->f98 = ((S_c8c122700Data *)self)->f38->f04->f14;
        ((S_c8c122700Data *)self)->fa0 = (int)(g_8c4e2c60->f42c->f48);
        ((S_c8c122700Data *)self)->fa8 = (int)(g_8c4e2c60->f42c->f4c);
        ((S_c8c122700Data *)self)->fa4 = (int)(g_8c4e2c60->f42c->f38);
        ((S_c8c122700Data *)self)->fac = (int)(g_8c4e2c60->f42c->f3c);
    }
    return t1;
}
