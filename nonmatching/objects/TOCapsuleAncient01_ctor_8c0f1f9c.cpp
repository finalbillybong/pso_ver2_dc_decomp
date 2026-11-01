/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f1f9c
 * function: TOCapsuleAncient01_ctor_8c0f1f9c
 * language: c++
 * reference size: 268 bytes
 * compiled size: 268 bytes (+0.0%)
 * differing lines: 28 of 96 reference instruction lines
 * differing bytes: 81
 * provenance: generator draft (mode bgotoext)
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
typedef struct S_g8c470560 S_g8c470560;
typedef struct S_g8c470560_42c S_g8c470560_42c;
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
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0xbc];
    float ff8;
    float ffc;
    char unknown100[0x1c];
    int f11c;
} ObjectData;
struct S_g8c470560 {
    char unknown0[0x42c];
    S_g8c470560_42c *f42c;
};
struct S_g8c470560_42c {
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
extern int g_8c2e2ad8;
extern int g_8c309720;
extern S_g8c470560 *g_8c470560;
extern int g_8c510ba0;
extern "C" void operation_8c0f1090(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void operation_8c05426c(void *, int, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" void operation_8c0f1470(void *);
extern "C" Object *TOCapsuleAncient01_ctor_8c0f1f9c(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v1;
    (void)home;
    operation_8c0f1090((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2685f0;
    ((ObjectData *)o)->tag = (int)(g_8c309720);
    ((ObjectData *)o)->size = 0x120;
    o->v6(a2);
    ((ObjectData *)o)->f38 = (Arg0_38 *)g_8c470560->f42c->f08;
    ((ObjectData *)o)->f28 = (int)(g_8c470560->f42c->f0c);
    copy_actor_records((void *)o, (void *)((void *)0x8c3096f4), 1);
    operation_8c05426c((void *)o, 0, 0x2410);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    operation_8c0f1470((void *)o);
    ((ObjectData *)o)->ff8 = 500.0f;
    ((ObjectData *)o)->ffc = ((ObjectData *)o)->f38->f04->f14;
    ((ObjectData *)o)->f11c = 0;
    if (g_8c2e2ad8 == 1) {
        v1 = (int)(g_8c510ba0 != 0);
        if (v1 == 1) {
            ((ObjectData *)o)->f04 |= 1;
        }
    }
    return o;
}
