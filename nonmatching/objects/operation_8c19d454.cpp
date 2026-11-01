/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19d454
 * function: operation_8c19d454
 * language: c++
 * reference size: 296 bytes
 * compiled size: 296 bytes (+0.0%)
 * differing lines: 12 of 106 reference instruction lines
 * differing bytes: 24
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
typedef struct Arg0_dc Arg0_dc;
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
    char unknown20[0x14];
    int f34;
    char unknown38[0x34];
    float f6c;
    float f70;
    char unknown74[0x14];
    int f88;
    char unknown8c[0x50];
    Arg0_dc *fdc;
    char unknowne0[0x4];
    float fe4;
    int fe8;
    int fec;
    int ff0;
} ObjectData;
struct Arg0_dc {
    char unknown0[0x4];
    float f04;
};
extern int g_8c31ccd8;
extern int g_8c31cce4;
extern short g_8c4dc4c0;
extern int g_8c4dc4d8;
extern "C" void operation_8c051eb8(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void operation_8c05426c(void *, int, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *operation_8c19d454(Object *o, int a1, int a2)
{
    Object **home = &o;
    short v1;
    (void)home;
    {
        Object *self = o;
        Object **hs = &self;
        (void)hs;
        operation_8c051eb8((void *)o);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c272c0c;
        ((ObjectData *)self)->tag = (int)(g_8c31ccd8);
        ((ObjectData *)self)->size = 0xf4;
        self->v6(a2);
        v1 = g_8c4dc4c0;
        g_8c4dc4c0 = v1 + 1;
        ((ObjectData *)self)->f06 = v1;
        ((ObjectData *)self)->fe4 = ((ObjectData *)self)->f6c;
        ((ObjectData *)self)->fe8 = (int)(((ObjectData *)self)->f88);
        ((ObjectData *)self)->fec = 1;
        ((ObjectData *)self)->ff0 = 0;
        g_8c4dc4d8 += 1;
    }
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c272b28;
    ((ObjectData *)o)->tag = (int)(g_8c31cce4);
    ((ObjectData *)o)->size = 0xf4;
    copy_actor_records((void *)o, (void *)((void *)0x8c287a00), 1);
    operation_8c05426c((void *)o, 0, 0x1e0);
    ((ObjectData *)o)->fdc->f04 += ((ObjectData *)o)->f70;
    transform_actor_records((void *)o);
    ((ObjectData *)o)->f34 |= 0x40000000;
    attach_and_insert_object((void *)o);
    return o;
}
