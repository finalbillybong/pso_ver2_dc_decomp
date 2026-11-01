/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f062c
 * function: TOWreckAncient04_create_8c0f062c
 * language: c++
 * reference size: 248 bytes
 * compiled size: 248 bytes (+0.0%)
 * differing lines: 24 of 88 reference instruction lines
 * differing bytes: 45
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
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
typedef struct S_g8c470500 S_g8c470500;
typedef struct S_g8c470500_42c S_g8c470500_42c;
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
    char unknown3c[0xa8];
    float fe4;
    float fe8;
} S_c8c122700Data;
struct S_g8c470500 {
    char unknown0[0x42c];
    S_g8c470500_42c *f42c;
};
struct S_g8c470500_42c {
    char unknown0[0x48];
    int f48;
    int f4c;
};
struct S_c8c122700_38 {
    char unknown0[0x4];
    S_c8c122700_38_4 *f04;
};
struct S_c8c122700_38_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c309204;
extern int g_8c30920c;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c470500 *g_8c470500;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" char g_8c3090d0[];
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" void operation_8c051eb8(void *, void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void attach_and_insert_object(void *);
extern "C" S_c8c122700 *TOWreckAncient04_create_8c0f062c(int a0)
{
    S_c8c122700 *t1;
    char *v2;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xec);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        operation_8c051eb8((void *)t1, g_8c44be98);
        *(void **)((char *)t1 + 0x18) = (void *)(void *)0x8c26843c;
        ((S_c8c122700Data *)t1)->f00 = (int)(g_8c309204);
        ((S_c8c122700Data *)t1)->f1e = 0xec;
        ((S_c8c122700Data *)t1)->f38 = (S_c8c122700_38 *)g_8c470500->f42c->f48;
        v2 = (char *)g_8c470500->f42c->f4c;
        ((S_c8c122700Data *)t1)->f28 = (int)v2;
        ((S_c8c122700Data *)t1)->fe4 = 400.0f;
        ((S_c8c122700Data *)t1)->fe8 = ((S_c8c122700Data *)t1)->f38->f04->f14;
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c2683b4;
        ((S_c8c122700Data *)self)->f00 = (int)(g_8c30920c);
        ((S_c8c122700Data *)self)->f1e = 0xec;
        self->v6(a0);
        copy_actor_records((void *)self, (void *)((g_8c3090d0 + 0xb0)), 1);
        attach_and_insert_object((void *)self);
    }
    return t1;
}
