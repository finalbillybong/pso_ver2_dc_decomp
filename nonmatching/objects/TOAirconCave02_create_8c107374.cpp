/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c107374
 * function: TOAirconCave02_create_8c107374
 * language: c++
 * reference size: 188 bytes
 * compiled size: 184 bytes (-2.1%)
 * differing lines: 22 of 69 reference instruction lines
 * differing bytes: 89
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
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d7b60 S_g8c4d7b60;
typedef struct S_g8c4d7b60_42c S_g8c4d7b60_42c;
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
    S_c8c122700_38 *f38;
    char unknown3c[0xbc];
    float ff8;
    float ffc;
} S_c8c122700Data;
struct S_g8c4d7b60 {
    char unknown0[0x42c];
    S_g8c4d7b60_42c *f42c;
};
struct S_g8c4d7b60_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct S_c8c122700_38 {
    char unknown0[0x4];
    S_c8c122700_38_4 *f04;
};
struct S_c8c122700_38_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c30b70c;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d7b60 *g_8c4d7b60;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" void operation_8c0ee870(void *, void *);
extern "C" S_c8c122700 *TOAirconCave02_create_8c107374(int a0)
{
    S_c8c122700 *t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x100);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        operation_8c0ee870((void *)t1, g_8c44be98);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c269828;
        ((S_c8c122700Data *)self)->f00 = (int)(g_8c30b70c);
        ((S_c8c122700Data *)self)->f1e = 0x100;
        self->v6(a0);
        ((S_c8c122700Data *)self)->f38 = (S_c8c122700_38 *)g_8c4d7b60->f42c->f08;
        ((S_c8c122700Data *)self)->f28 = (int)(g_8c4d7b60->f42c->f0c);
        ((S_c8c122700Data *)self)->ff8 = 500.0f;
        ((S_c8c122700Data *)self)->ffc = ((S_c8c122700Data *)self)->f38->f04->f14;
    }
    return t1;
}
