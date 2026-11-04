/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c080b00
 * function: TObjLazerFenceNorm_ctor_8c080b00
 * language: c++
 * reference size: 484 bytes
 * compiled size: 484 bytes (+0.0%)
 * differing lines: 60 of 187 reference instruction lines
 * differing bytes: 50
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TObjLazerFenceNorm.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469bc4 S_g8c469bc4;
typedef struct S_g8c469bc4_42c S_g8c469bc4_42c;
typedef struct S_g8c469bc4_430 S_g8c469bc4_430;
typedef struct Arg0_90 Arg0_90;
typedef struct Arg0_f8 Arg0_f8;
typedef struct Arg0_f8_2c Arg0_f8_2c;
typedef struct Arg0_f8_2c_30 Arg0_f8_2c_30;
typedef struct Arg0_f8_2c_30_30 Arg0_f8_2c_30_30;
typedef struct Arg0_f8_2c_30_30_30 Arg0_f8_2c_30_30_30;
typedef struct Arg0_f8_2c_30_30_30_4 Arg0_f8_2c_30_30_30_4;
typedef struct Arg0_f8_2c_30_30_4 Arg0_f8_2c_30_30_4;
typedef struct Arg0_f8_2c_30_4 Arg0_f8_2c_30_4;
typedef struct Arg0_f8_2c_4 Arg0_f8_2c_4;
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
    char unknown38[0x34];
    float f6c;
    char unknown70[0x18];
    int f88;
    char unknown8c[0x4];
    Arg0_90 *f90;
    char unknown94[0x50];
    int fe4;
    short fe8;
    char unknownea[0x2];
    int fec;
    float ff0;
    int ff4;
    Arg0_f8 *ff8;
    int ffc;
    int f100;
    int f104;
    int f108;
    int f10c;
} ObjectData;
struct S_g8c469bc4 {
    char unknown0[0x42c];
    S_g8c469bc4_42c *f42c;
    S_g8c469bc4_430 *f430;
};
struct S_g8c469bc4_42c {
    char unknown0[0x8];
    int f08;
    char unknownc[0xc];
    int f18;
    char unknown1c[0xc];
    int f28;
    char unknown2c[0xc];
    int f38;
};
struct S_g8c469bc4_430 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x4];
    int f0c;
};
struct Arg0_f8 {
    char unknown0[0x2c];
    Arg0_f8_2c *f2c;
};
struct Arg0_f8_2c {
    char unknown0[0x4];
    Arg0_f8_2c_4 *f04;
    char unknown8[0x28];
    Arg0_f8_2c_30 *f30;
};
struct Arg0_f8_2c_4 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_f8_2c_30 {
    char unknown0[0x4];
    Arg0_f8_2c_30_4 *f04;
    char unknown8[0x28];
    Arg0_f8_2c_30_30 *f30;
};
struct Arg0_f8_2c_30_4 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_f8_2c_30_30 {
    char unknown0[0x4];
    Arg0_f8_2c_30_30_4 *f04;
    char unknown8[0x28];
    Arg0_f8_2c_30_30_30 *f30;
};
struct Arg0_f8_2c_30_30_4 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_f8_2c_30_30_30 {
    char unknown0[0x4];
    Arg0_f8_2c_30_30_30_4 *f04;
};
struct Arg0_f8_2c_30_30_30_4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c2fede0;
extern S_g8c469bc4 *g_8c469bc4;
extern "C" char g_8c2fecd8[];
extern "C" void operation_8c051eb8(void *);
extern "C" int call_8c18e8a0(void *, int);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void attach_and_insert_object(void *);
extern "C" void transform_actor_records(void *);
extern "C" Object *TObjLazerFenceNorm_ctor_8c080b00(Object *o, int a1, int a2)
{
    Object **home = &o;
    int t1;
    (void)home;
    operation_8c051eb8((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c264480;
    ((ObjectData *)o)->tag = (int)(g_8c2fede0);
    ((ObjectData *)o)->size = 0x110;
    o->v6(a2);
    ((ObjectData *)o)->fec = 0;
    ((ObjectData *)o)->ff0 = 0.0f;
    ((ObjectData *)o)->fe4 = (int)((ObjectData *)o)->f6c;
    if (!(((ObjectData *)o)->fe4 >= 0)) {
        ((ObjectData *)o)->fe4 = 0;
    }
    if (((ObjectData *)o)->fe4 > 3) {
        ((ObjectData *)o)->fe4 = 3;
    }
    ((ObjectData *)o)->fe8 = ((ObjectData *)o)->f88;
    {
        Object *base = o;
        t1 = call_8c18e8a0((void *)(((ObjectData *)base)->f90), 2);
        if (t1 == 0) {
            ((ObjectData *)base)->ff4 = (int)(g_8c469bc4->f42c->f18);
            ((ObjectData *)o)->ff8 = (Arg0_f8 *)g_8c469bc4->f42c->f08;
            ((ObjectData *)o)->ffc = (int)(g_8c469bc4->f430->f04);
        } else {
            ((ObjectData *)base)->ff4 = (int)(g_8c469bc4->f42c->f38);
            ((ObjectData *)o)->ff8 = (Arg0_f8 *)g_8c469bc4->f42c->f28;
            ((ObjectData *)o)->ffc = (int)(g_8c469bc4->f430->f0c);
        }
        ((ObjectData *)o)->f100 = (int)(((ObjectData *)o)->ff8->f2c->f04->f04);
        ((ObjectData *)o)->f104 = (int)(((ObjectData *)o)->ff8->f2c->f30->f04->f04);
        ((ObjectData *)o)->f108 = (int)(((ObjectData *)o)->ff8->f2c->f30->f30->f04->f04);
        ((ObjectData *)o)->f10c = (int)(((ObjectData *)o)->ff8->f2c->f30->f30->f30->f04->f04);
        copy_actor_records((void *)o, (void *)(t1 * 0x84 + g_8c2fecd8), 3);
    }
    ((ObjectData *)o)->f34 |= 0x40000000;
    attach_and_insert_object((void *)o);
    transform_actor_records((void *)o);
    return o;
}
