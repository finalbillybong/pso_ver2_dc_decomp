/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c6f50
 * function: TOHangerMachine01_ctor_8c1c6f50
 * language: c++
 * reference size: 260 bytes
 * compiled size: 252 bytes (-3.1%)
 * differing lines: 32 of 93 reference instruction lines
 * differing bytes: 232
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -8 bytes
 * class header: src/include/classes/TOHangerMachine01.h (shared layout for modders; this draft keeps its own local types)
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
typedef struct S_g8c4e2e00 S_g8c4e2e00;
typedef struct S_g8c4e2e00_42c S_g8c4e2e00_42c;
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
    char unknown2c[0x8];
    int f34;
    S_c8c122700_38 *f38;
    char unknown3c[0xbc];
    float ff8;
    float ffc;
    int f100;
} S_c8c122700Data;
struct S_g8c4e2e00 {
    char unknown0[0x42c];
    S_g8c4e2e00_42c *f42c;
};
struct S_g8c4e2e00_42c {
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
extern int g_8c328de8;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4e2e00 *g_8c4e2e00;
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" void operation_8c0ee870(void *, void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
inline void init_tail_8c1c6f50(S_c8c122700 *&self, void *recs, int n)
{
    ((S_c8c122700Data *)self)->f38 = (S_c8c122700_38 *)g_8c4e2e00->f42c->f08;
    ((S_c8c122700Data *)self)->f28 = (int)(g_8c4e2e00->f42c->f0c);
    ((S_c8c122700Data *)self)->ff8 = 500.0f;
    ((S_c8c122700Data *)self)->ffc = ((S_c8c122700Data *)self)->f38->f04->f14;
    ((S_c8c122700Data *)self)->f34 |= 0x40000000;
    copy_actor_records((void *)self, recs, n);
}
extern "C" S_c8c122700 *TOHangerMachine01_ctor_8c1c6f50(int a0)
{
    S_c8c122700 *t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x104);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        operation_8c0ee870((void *)t1, g_8c44be98);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c276798;
        ((S_c8c122700Data *)self)->f00 = (int)(g_8c328de8);
        ((S_c8c122700Data *)self)->f1e = 0x104;
        self->v6(a0);
        init_tail_8c1c6f50(self, (void *)0x8c328dbc, 1);
        transform_actor_records((void *)self);
        attach_and_insert_object((void *)self);
        ((S_c8c122700Data *)self)->f100 = 0;
    }
    return t1;
}
