/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c088f14
 * function: operation_8c088f14
 * language: c++
 * reference size: 224 bytes
 * compiled size: 224 bytes (+0.0%)
 * differing lines: 18 of 78 reference instruction lines
 * differing bytes: 22
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
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
    char unknown20[0x68];
    int f88;
    char unknown8c[0x58];
    float fe4;
    int fe8;
    int fec;
    int ff0;
} ObjectData;
extern int g_8c2fff7c;
extern int g_8c2fff94;
extern int g_8c44be04;
extern int g_8c469d68;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" Object *operation_8c088f14(Object *o, int a1, int a2)
{
    int t1;
    {
        Object *self = o;
        Object **home = &self;
        (void)home;
        ((void (*)(Object *))0x8c051eb8)(o);
        *(void **)((char *)self + 0x18) = (void *)0x8c2651bc;
        ((ObjectData *)self)->tag = g_8c2fff7c;
        ((ObjectData *)self)->size = 0xf0;
        self->v6(a2);
        ((ObjectData *)self)->fe4 = 10.0f;
        ((ObjectData *)self)->fe8 = 0;
        t1 = ((int (*)(void *, int))0x8c122700)(g_8c4d97e0, 0xe8);
        if (t1 != 0) {
            ((void (*)(int, void *, Object *))0x8c0b4c40)(t1, ((char *)self + 0x3c), self);
        }
        ((ObjectData *)self)->fec = t1;
    }
    *(void **)((char *)o + 0x18) = (void *)0x8c2650bc;
    ((ObjectData *)o)->tag = g_8c2fff94;
    ((ObjectData *)o)->size = 0xf4;
    ((ObjectData *)o)->ff0 = ((ObjectData *)o)->f88;
    if (g_8c469d68 != 0) {
        ((ObjectData *)o)->ff0 = g_8c44be04 + 1;
    }
    return o;
}
