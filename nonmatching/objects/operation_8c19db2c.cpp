/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19db2c
 * function: operation_8c19db2c
 * language: c++
 * reference size: 264 bytes
 * compiled size: 260 bytes (-1.5%)
 * differing lines: 42 of 98 reference instruction lines
 * differing bytes: 216
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
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
    float f70;
    char unknown74[0x14];
    int f88;
    char unknown8c[0x58];
    float fe4;
    int fe8;
    int fec;
    int ff0;
    float ff4;
    float ff8;
    float ffc;
    float f100;
} ObjectData;
extern int g_8c31ccd8;
extern int g_8c31ccf0;
extern short g_8c4dc4c0;
extern int g_8c4dc4d8;
extern "C" void operation_8c051eb8(void *);
extern "C" Object *operation_8c19db2c(Object *o, int a1, int a2)
{
    {
        Object *self = o;
        Object **home = &self;
        short v1;
        int v2;
        (void)home;
        operation_8c051eb8((void *)o);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c272c0c;
        ((ObjectData *)self)->tag = (int)(g_8c31ccd8);
        ((ObjectData *)self)->size = 0xf4;
        self->v6(a2);
        v1 = g_8c4dc4c0;
        g_8c4dc4c0 = v1 + 1;
        ((ObjectData *)self)->f06 = v1;
        ((ObjectData *)self)->fe4 = ((ObjectData *)self)->f6c;
        v2 = ((ObjectData *)self)->f88;
        ((ObjectData *)self)->fe8 = v2;
        ((ObjectData *)self)->fec = 1;
        ((ObjectData *)self)->ff0 = 0;
        g_8c4dc4d8 += 1;
    }
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c272a44;
    ((ObjectData *)o)->tag = (int)(g_8c31ccf0);
    ((ObjectData *)o)->size = 0x104;
    ((ObjectData *)o)->ff4 = ((ObjectData *)o)->f70;
    ((ObjectData *)o)->f100 = 0.0f;
    ((ObjectData *)o)->ffc = 0.0f;
    ((ObjectData *)o)->ff8 = 0.0f;
    return o;
}
