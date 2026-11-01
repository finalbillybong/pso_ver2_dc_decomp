/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f0e1c
 * function: TOWreckAncientBrakable05_create_8c0f0e1c
 * language: c++
 * reference size: 224 bytes
 * compiled size: 224 bytes (+0.0%)
 * differing lines: 6 of 80 reference instruction lines
 * differing bytes: 6
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
    char unknown20[0x68];
    int f88;
    char unknown8c[0x60];
    int fec;
    int ff0;
} S_c8c122700Data;
extern int g_8c30921c;
extern int g_8c309220;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" char g_8c3090d0[];
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" void TOWreckAncient_ctor_8c0f0278(S_c8c122700 *, int);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void attach_and_insert_object(void *);
extern "C" S_c8c122700 * TOWreckAncientBrakable05_create_8c0f0e1c(int a0)
{
    S_c8c122700 *t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xf4);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        TOWreckAncient_ctor_8c0f0278(t1, 3);
        *(void **)((char *)t1 + 0x18) = (void *)(void *)0x8c2682a4;
        ((S_c8c122700Data *)t1)->f00 = (int)(g_8c30921c);
        ((S_c8c122700Data *)t1)->f1e = 0xf4;
        ((S_c8c122700Data *)t1)->fec = 0;
        ((S_c8c122700Data *)t1)->ff0 = -1;
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c268260;
        ((S_c8c122700Data *)self)->f00 = (int)(g_8c309220);
        ((S_c8c122700Data *)self)->f1e = 0xf4;
        self->v6(a0);
        copy_actor_records((void *)self, (void *)((g_8c3090d0 + 0x84)), 1);
        attach_and_insert_object((void *)self);
        ((S_c8c122700Data *)self)->ff0 = (int)(((S_c8c122700Data *)self)->f88);
        {
            S_c8c122700Data *d = (S_c8c122700Data *)self;
            if (d->ff0 < 0 || d->ff0 >= 0x100) {
                d->ff0 = -1;
            }
        }
    }
    return t1;
}
