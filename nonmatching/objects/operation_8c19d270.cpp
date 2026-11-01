/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19d270
 * function: operation_8c19d270
 * language: c++
 * reference size: 196 bytes
 * compiled size: 200 bytes (+2.0%)
 * differing lines: 40 of 72 reference instruction lines
 * differing bytes: 171
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    char unknown4[0x2];
    short f06;
    char unknown8[0x10];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x4c];
    float f6c;
    char unknown70[0x18];
    int f88;
    char unknown8c[0x58];
    float fe4;
    int fe8;
    int fec;
    int ff0;
} ObjectData;
extern "C" void operation_8c051eb8(void *);
extern "C" Object *operation_8c19d270(Object *o, int a1, int a2)
{
    short v1;
    {
        Object *self = o;
        Object **home = &self;
        (void)home;
        operation_8c051eb8((void *)o);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c272c0c;
        ((ObjectData *)self)->tag = (int)(*(int *)0x8c31ccd8);
        ((ObjectData *)self)->size = 0xf4;
        self->v6(a2);
        v1 = (int)*(short *)0x8c4dc4c0;
        *(short *)0x8c4dc4c0 = v1 + 1;
        ((ObjectData *)self)->f06 = v1;
        ((ObjectData *)self)->fe4 = ((ObjectData *)self)->f6c;
        ((ObjectData *)self)->fe8 = (int)(((ObjectData *)self)->f88);
        ((ObjectData *)self)->fec = 1;
        ((ObjectData *)self)->ff0 = 0;
        *(int *)0x8c4dc4d8 += 1;
    }
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c272b74;
    ((ObjectData *)o)->tag = (int)(*(int *)0x8c31cce0);
    ((ObjectData *)o)->size = 0xf4;
    return o;
}
