/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0887c0
 * function: operation_8c0887c0
 * language: c++
 * reference size: 288 bytes
 * compiled size: 288 bytes (+0.0%)
 * differing lines: 4 of 102 reference instruction lines
 * differing bytes: 8
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
typedef struct Arg0_64 Arg0_64;
class Object;
class Object {
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
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x44];
    Arg0_64 *f64;
    char unknown68[0x7c];
    float fe4;
    int fe8;
    int fec;
} ObjectData;
extern int g_8c2fff7c;
extern int g_8c2fff80;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" char g_8c2fff44[];
extern "C" void operation_8c051eb8(void *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void operation_8c0b4c40(void *, void *, int);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be280(int, int, int);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" Object *operation_8c0887c0(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v3;
    int t1;
    (void)home;
    {
        Object *self = o;
        Object **home2 = &self;
        (void)home2;
        operation_8c051eb8((void *)o);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c2651bc;
        ((ObjectData *)self)->tag = (int)(g_8c2fff7c);
        ((ObjectData *)self)->size = 0xf0;
        self->v6(a2);
        ((ObjectData *)self)->fe4 = 10.0f;
        ((ObjectData *)self)->fe8 = 0;
        t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xe8);
        if (t1 != 0) {
            operation_8c0b4c40((void *)t1, (void *)(((char *)self + 0x3c)), (int)self);
        }
        ((ObjectData *)self)->fec = (int)t1;
    }
    v3 = (int)0;
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c265168;
    ((ObjectData *)o)->tag = (int)(g_8c2fff80);
    ((ObjectData *)o)->size = 0x120;
    while (4 > v3) {
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x6c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3be280(0, (int)(v3 * 0xc + g_8c2fff44), (int)((int)o + v3 * 0xc + 0xf0));
        njPopMatrixEx_8c38ad10();
        v3 = (int)(v3 + 1);
    }
    return o;
}
