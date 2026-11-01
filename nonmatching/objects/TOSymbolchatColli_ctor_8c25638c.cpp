/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25638c
 * function: TOSymbolchatColli_ctor_8c25638c
 * language: c++
 * reference size: 152 bytes
 * compiled size: 152 bytes (+0.0%)
 * differing lines: 4 of 53 reference instruction lines
 * differing bytes: 6
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
} S_c8c122700Data;
extern int g_8c33ff00;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" void call_8c043418(S_c8c122700 *, void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void attach_and_insert_object(void *);
extern "C" void call_8c256504(S_c8c122700 *);
extern "C" S_c8c122700 *TOSymbolchatColli_ctor_8c25638c(int a0)
{
    S_c8c122700 *t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x398);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        call_8c043418(t1, g_8c44be98);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c281684;
        ((S_c8c122700Data *)self)->f00 = (int)(g_8c33ff00);
        ((S_c8c122700Data *)self)->f1e = 0x398;
        self->v6(a0);
        copy_actor_records((void *)self, (void *)((void *)0x8c33fed4), 1);
        attach_and_insert_object((void *)self);
        call_8c256504(self);
    }
    return t1;
}
