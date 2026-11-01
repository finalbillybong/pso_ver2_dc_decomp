/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1cf1b8
 * function: TORockCaveM03_create_8c1cf1b8
 * language: c++
 * reference size: 260 bytes
 * compiled size: 256 bytes (-1.5%)
 * differing lines: 44 of 93 reference instruction lines
 * differing bytes: 157
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
typedef struct S_g8c4e2e60 S_g8c4e2e60;
typedef struct S_g8c4e2e60_42c S_g8c4e2e60_42c;
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
struct S_g8c4e2e60 {
    char unknown0[0x42c];
    S_g8c4e2e60_42c *f42c;
};
struct S_g8c4e2e60_42c {
    char unknown0[0x18];
    int f18;
    int f1c;
};
struct S_c8c122700_38 {
    char unknown0[0x4];
    S_c8c122700_38_4 *f04;
};
struct S_c8c122700_38_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c329494;
extern int g_8c3294bc;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4e2e60 *g_8c4e2e60;
extern "C" char g_8c329410[];
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" void operation_8c051eb8(void *, void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" S_c8c122700 *TORockCaveM03_create_8c1cf1b8(int a0)
{
    S_c8c122700 *t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xec);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        operation_8c051eb8((void *)t1, g_8c44be98);
        *(void **)((char *)t1 + 0x18) = (void *)(void *)0x8c276d18;
        ((S_c8c122700Data *)t1)->f00 = (int)(g_8c329494);
        ((S_c8c122700Data *)t1)->f1e = 0xec;
        ((S_c8c122700Data *)t1)->fe4 = 500.0f;
        ((S_c8c122700Data *)t1)->fe8 = 0.0f;
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c2769a4;
        ((S_c8c122700Data *)self)->f00 = (int)(g_8c3294bc);
        ((S_c8c122700Data *)self)->f1e = 0xec;
        self->v6(a0);
        ((S_c8c122700Data *)self)->f38 = (S_c8c122700_38 *)(*(S_g8c4e2e60 **)0x8c4e2e60)->f42c->f18;
        ((S_c8c122700Data *)self)->f28 = (int)((*(S_g8c4e2e60 **)0x8c4e2e60)->f42c->f1c);
        ((S_c8c122700Data *)self)->fe8 = ((S_c8c122700Data *)self)->f38->f04->f14;
        copy_actor_records((void *)self, (void *)((g_8c329410 + 0x2c)), 1);
        transform_actor_records((void *)self);
        attach_and_insert_object((void *)self);
    }
    return t1;
}
