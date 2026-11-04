/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1bf074
 * function: TOCapsuleMachine01_ctor_8c1bf074
 * language: c++
 * reference size: 248 bytes
 * compiled size: 240 bytes (-3.2%)
 * differing lines: 36 of 89 reference instruction lines
 * differing bytes: 218
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -8 bytes
 * class header: src/include/classes/TOCapsuleMachine01.h (shared layout for modders; this draft keeps its own local types)
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
typedef struct S_g8c4e2bc0 S_g8c4e2bc0;
typedef struct S_g8c4e2bc0_42c S_g8c4e2bc0_42c;
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
} S_c8c122700Data;
struct S_g8c4e2bc0 {
    char unknown0[0x42c];
    S_g8c4e2bc0_42c *f42c;
};
struct S_g8c4e2bc0_42c {
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
extern int g_8c328498;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4e2bc0 *g_8c4e2bc0;
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" void operation_8c0ee870(void *, void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" S_c8c122700 *TOCapsuleMachine01_ctor_8c1bf074(int a0)
{
    S_c8c122700 *t1;
    char *v2;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x100);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        operation_8c0ee870((void *)t1, g_8c44be98);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c275658;
        ((S_c8c122700Data *)self)->f00 = (int)(g_8c328498);
        ((S_c8c122700Data *)self)->f1e = 0x100;
        self->v6(a0);
        ((S_c8c122700Data *)self)->f38 = (S_c8c122700_38 *)g_8c4e2bc0->f42c->f08;
        ((S_c8c122700Data *)self)->f28 = g_8c4e2bc0->f42c->f0c;
        ((S_c8c122700Data *)self)->ff8 = 500.0f;
        ((S_c8c122700Data *)self)->ffc = ((S_c8c122700Data *)self)->f38->f04->f14;
        ((S_c8c122700Data *)self)->f34 |= 0x40000000;
        copy_actor_records((void *)self, (void *)((void *)0x8c32846c), 1);
        transform_actor_records((void *)self);
        attach_and_insert_object((void *)self);
    }
    return t1;
}
