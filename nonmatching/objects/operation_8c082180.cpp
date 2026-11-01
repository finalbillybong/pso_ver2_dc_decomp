/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c082180
 * function: operation_8c082180
 * language: c++
 * reference size: 328 bytes
 * compiled size: 328 bytes (+0.0%)
 * differing lines: 28 of 119 reference instruction lines
 * differing bytes: 41
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
typedef struct Arg0_90 Arg0_90;
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
    char unknown20[0x14];
    int f34;
    char unknown38[0x50];
    int f88;
    char unknown8c[0x4];
    Arg0_90 *f90;
    char unknown94[0x50];
    int fe4;
    int fe8;
    float fec;
    float ff0;
    char ff4;
    char unknownf5[0x3];
    int ff8;
    float ffc;
    int f100;
    int f104;
    int f108;
} ObjectData;
extern int g_8c2ff1c8;
extern "C" void operation_8c051eb8(void *);
extern "C" int call_8c18e8a0(void *, int);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *operation_8c082180(Object *o, int a1, int a2)
{
    Object **home = &o;
    int t1;
    int t2;
    (void)home;
    operation_8c051eb8((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c264570;
    ((ObjectData *)o)->tag = (int)(g_8c2ff1c8);
    ((ObjectData *)o)->size = 0x10c;
    o->v6(a2);
    ((ObjectData *)o)->fe4 = 0;
    ((ObjectData *)o)->ff0 = 0.0f;
    ((ObjectData *)o)->fec = 0.0f;
    ((ObjectData *)o)->fe8 = 1;
    {
        Object *base = o;
        t1 = call_8c18e8a0((void *)(((ObjectData *)base)->f90), 2);
        ((ObjectData *)base)->ff4 = t1;
    }
    ((ObjectData *)o)->ff8 = 0x50;
    ((ObjectData *)o)->ffc = 0.0f;
    ((ObjectData *)o)->f100 = 0;
    ((ObjectData *)o)->f104 = (unsigned char)((ObjectData *)o)->f88;
    {
        Object *base = o;
        t2 = call_8c18e8a0((void *)((((ObjectData *)base)->f88 & 0xff00) >> 8), 0xa);
        ((ObjectData *)base)->f108 = (int)t2;
    }
    if (!(((ObjectData *)o)->ff4 >= 0)) {
        ((ObjectData *)o)->ff4 = 0;
    }
    if (((ObjectData *)o)->ff4 > 1) {
        ((ObjectData *)o)->ff4 = 1;
    }
    copy_actor_records((void *)o, (void *)((void *)0x8c2ff0fc), 1);
    ((ObjectData *)o)->f34 |= 0x40000000;
    attach_and_insert_object((void *)o);
    return o;
}
