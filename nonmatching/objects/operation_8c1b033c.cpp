/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b033c
 * function: operation_8c1b033c
 * language: c++
 * reference size: 384 bytes
 * compiled size: 384 bytes (+0.0%)
 * differing lines: 50 of 140 reference instruction lines
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
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4e2380 S_g8c4e2380;
typedef struct S_g8c4e2380_42c S_g8c4e2380_42c;
typedef struct S_g8c4e2380_430 S_g8c4e2380_430;
typedef struct Arg0_104 Arg0_104;
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
    char unknown2c[0x8];
    int f34;
    Arg0_38 *f38;
    char unknown3c[0x4c];
    int f88;
    char unknown8c[0x5c];
    int fe8;
    int fec;
    float ff0;
    float ff4;
    float ff8;
    int ffc;
    int f100;
    Arg0_104 *f104;
    float f108;
    float f10c;
} ObjectData;
struct S_g8c4e2380 {
    char unknown0[0x42c];
    S_g8c4e2380_42c *f42c;
    S_g8c4e2380_430 *f430;
};
struct S_g8c4e2380_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
    char unknown10[0x8];
    int f18;
    int f1c;
};
struct S_g8c4e2380_430 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_104 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct Arg0_38_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c3260ac;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4e2380 *g_8c4e2380;
extern "C" void operation_8c051eb8(void *, void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *operation_8c1b033c(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    operation_8c051eb8((void *)o, g_8c44be98);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c274ba0;
    ((ObjectData *)o)->tag = (int)(g_8c3260ac);
    ((ObjectData *)o)->size = 0x110;
    o->v6(a1);
    ((ObjectData *)o)->fe8 = 0;
    ((ObjectData *)o)->f38 = (Arg0_38 *)g_8c4e2380->f42c->f08;
    ((ObjectData *)o)->f28 = (int)(g_8c4e2380->f42c->f0c);
    ((ObjectData *)o)->ffc = (int)(g_8c4e2380->f42c->f18);
    ((ObjectData *)o)->f100 = (int)(g_8c4e2380->f42c->f1c);
    ((ObjectData *)o)->f104 = (Arg0_104 *)g_8c4e2380->f430->f04;
    ((ObjectData *)o)->ff0 = 0.0f;
    ((ObjectData *)o)->ff4 = (float)(unsigned int)((ObjectData *)o)->f104->f04 - 1.0f;
    ((ObjectData *)o)->ff8 = 1.0f;
    copy_actor_records((void *)o, (void *)((void *)0x8c326054), 2);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    ((ObjectData *)o)->f34 |= 0x40000000;
    ((ObjectData *)o)->fec = (int)(((ObjectData *)o)->f88);
    if (!(((ObjectData *)o)->fec >= 0)) {
        ((ObjectData *)o)->fec = 0;
    }
    ((ObjectData *)o)->f108 = 400.0f;
    ((ObjectData *)o)->f10c = ((ObjectData *)o)->f38->f04->f14;
    return o;
}
