/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1cf424
 * function: operation_8c1cf424
 * language: c++
 * reference size: 320 bytes
 * compiled size: 316 bytes (-1.2%)
 * differing lines: 54 of 115 reference instruction lines
 * differing bytes: 215
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4e2e60 S_g8c4e2e60;
typedef struct S_g8c4e2e60_42c S_g8c4e2e60_42c;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_4 Arg0_38_4;
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
    char unknown20[0x8];
    int f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x4c];
    int f88;
    char unknown8c[0x58];
    float fe4;
    float fe8;
    int fec;
    int ff0;
} ObjectData;
struct S_g8c4e2e60 {
    char unknown0[0x42c];
    S_g8c4e2e60_42c *f42c;
};
struct S_g8c4e2e60_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct Arg0_38_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c329494;
extern int g_8c32949c;
extern int g_8c3294d0;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4e2e60 *g_8c4e2e60;
extern "C" char g_8c329410[];
extern "C" void operation_8c051eb8(void *, void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *operation_8c1cf424(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    {
        Object *base = o;
        operation_8c051eb8((void *)base, g_8c44be98);
        *(void **)((char *)base + 0x18) = (void *)(void *)0x8c276d18;
        ((ObjectData *)base)->tag = (int)(g_8c329494);
        ((ObjectData *)base)->size = 0xec;
        ((ObjectData *)base)->fe4 = 500.0f;
        ((ObjectData *)base)->fe8 = 0.0f;
        *(void **)((char *)base + 0x18) = (void *)(void *)0x8c276c90;
        ((ObjectData *)base)->tag = (int)(g_8c32949c);
        ((ObjectData *)base)->size = 0xf4;
        ((ObjectData *)base)->fec = 0;
        ((ObjectData *)base)->ff0 = -1;
    }
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c27691c;
    ((ObjectData *)o)->tag = (int)(g_8c3294d0);
    ((ObjectData *)o)->size = 0xf4;
    o->v6(a1);
    ((ObjectData *)o)->f38 = (Arg0_38 *)g_8c4e2e60->f42c->f08;
    ((ObjectData *)o)->f28 = (int)(g_8c4e2e60->f42c->f0c);
    ((ObjectData *)o)->fe8 = ((ObjectData *)o)->f38->f04->f14;
    copy_actor_records((void *)o, (void *)((g_8c329410 + 0x58)), 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    ((ObjectData *)o)->ff0 = (int)(((ObjectData *)o)->f88);
    {
        Object *base = o;
        if (((ObjectData *)base)->ff0 < 0 || ((ObjectData *)base)->ff0 >= 0x100) {
            ((ObjectData *)base)->ff0 = -1;
        } else {
        }
    }
    return o;
}
