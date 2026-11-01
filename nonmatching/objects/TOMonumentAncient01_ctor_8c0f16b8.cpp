/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f16b8
 * function: TOMonumentAncient01_ctor_8c0f16b8
 * language: c++
 * reference size: 232 bytes
 * compiled size: 232 bytes (+0.0%)
 * differing lines: 16 of 80 reference instruction lines
 * differing bytes: 22
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
typedef struct S_g8c470520 S_g8c470520;
typedef struct S_g8c470520_42c S_g8c470520_42c;
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
} S_c8c122700Data;
struct S_g8c470520 {
    char unknown0[0x42c];
    S_g8c470520_42c *f42c;
};
struct S_g8c470520_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
extern int g_8c309560;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c470520 *g_8c470520;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" void operation_8c0f1090(void *, void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" void operation_8c0f1470(void *);
extern "C" S_c8c122700 *TOMonumentAncient01_ctor_8c0f16b8(int a0)
{
    S_c8c122700 *t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x11c);
    if (!(0 == t1)) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        operation_8c0f1090((void *)t1, g_8c44be98);
        *(void **)(0x18 + (char *)self) = (void *)0x8c268558;
        ((S_c8c122700Data *)self)->f00 = (g_8c309560);
        ((S_c8c122700Data *)self)->f1e = (short)0x11c;
        self->v6(a0);
        ((S_c8c122700Data *)self)->f38 = (g_8c470520->f42c->f08);
        ((S_c8c122700Data *)self)->f28 = (int)(g_8c470520->f42c->f0c);
        copy_actor_records((void *)self, (void *)0x8c309534, 1);
        transform_actor_records((void *)self);
        attach_and_insert_object((void *)self);
        operation_8c0f1470((void *)self);
        {
        S_c8c122700Data *d = (S_c8c122700Data *)self;
        d->ff8 = 500.0f;
        d->ffc = 50.0f;
        }
    }
    return t1;
}
