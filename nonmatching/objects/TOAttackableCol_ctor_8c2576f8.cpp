/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2576f8
 * function: TOAttackableCol_ctor_8c2576f8
 * language: c++
 * reference size: 244 bytes
 * compiled size: 244 bytes (+0.0%)
 * differing lines: 26 of 82 reference instruction lines
 * differing bytes: 46
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TOAttackableCol.h (shared layout for modders; this draft keeps its own local types)
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
    char unknown20[0x14];
    int f34;
    char unknown38[0x2d2];
    short f30a;
    char unknown30c[0x44];
    float f350;
    float f354;
} S_c8c122700Data;
extern int g_8c34004c;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" void call_8c043418(S_c8c122700 *, void *);
extern "C" void update_object_center(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void operation_8c05426c(void *, int, int);
extern "C" void attach_and_insert_object(void *);
extern "C" void operation_8c257cf8(void *);
extern "C" S_c8c122700 *TOAttackableCol_ctor_8c2576f8(int a0)
{
    S_c8c122700 *t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x36c);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        call_8c043418(t1, g_8c44be98);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c2818a4;
        ((S_c8c122700Data *)self)->f00 = (int)(g_8c34004c);
        ((S_c8c122700Data *)self)->f1e = 0x36c;
        self->v6(a0);
        update_object_center((void *)self);
        ((S_c8c122700Data *)self)->f34 |= 0x60000000;
        copy_actor_records((void *)self, (void *)((void *)0x8c340020), 1);
        operation_8c05426c((void *)self, 0, 0xe30);
        attach_and_insert_object((void *)self);
        ((S_c8c122700Data *)self)->f30a = 0;
        ((S_c8c122700Data *)self)->f350 = 500.0f;
        ((S_c8c122700Data *)self)->f354 = 50.0f;
        operation_8c257cf8((void *)self);
    }
    return t1;
}
