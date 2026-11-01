/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c113dfc
 * function: TOKeyAncient02_ctor_8c113dfc
 * language: c++
 * reference size: 280 bytes
 * compiled size: 276 bytes (-1.4%)
 * differing lines: 36 of 103 reference instruction lines
 * differing bytes: 178
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
typedef struct S_g8c4d8240 S_g8c4d8240;
typedef struct S_g8c4d8240_42c S_g8c4d8240_42c;
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
    char unknown3c[0x30];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x14];
    int f8c;
    char unknown90[0x68];
    float ff8;
    float ffc;
    char unknown100[0x8];
    int f108;
    char unknown10c[0x10];
    int f11c;
    int f120;
} ObjectData;
struct S_g8c4d8240 {
    char unknown0[0x42c];
    S_g8c4d8240_42c *f42c;
};
struct S_g8c4d8240_42c {
    char unknown0[0x18];
    int f18;
    int f1c;
};
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct Arg0_38_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c3100c4;
extern S_g8c4d8240 *g_8c4d8240;
extern "C" void TOKey_ctor_8c112e74(void *);
extern "C" void operation_8c112f78(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *TOKeyAncient02_ctor_8c113dfc(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    TOKey_ctor_8c112e74((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c269d20;
    ((ObjectData *)o)->tag = (int)(g_8c3100c4);
    ((ObjectData *)o)->size = 0x124;
    o->v6(a2);
    operation_8c112f78((void *)o);
    ((ObjectData *)o)->f38 = (Arg0_38 *)g_8c4d8240->f42c->f18;
    ((ObjectData *)o)->f28 = (int)(g_8c4d8240->f42c->f1c);
    copy_actor_records((void *)o, (void *)((void *)0x8c310098), 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    ((ObjectData *)o)->ff8 = 400.0f;
    ((ObjectData *)o)->ffc = ((ObjectData *)o)->f38->f04->f14;
    ((ObjectData *)o)->f11c = 0;
    ((ObjectData *)o)->f120 = 0;
    {
        Object *base = o;
        if (((ObjectData *)base)->f108 != 2 && ((ObjectData *)base)->f8c < 0) {
            ((ObjectData *)base)->f108 = 1;
        } else {
            ((ObjectData *)base)->f108 = 0;
        }
    }
    ((ObjectData *)o)->f74 = 1.0f;
    ((ObjectData *)o)->f70 = 1.0f;
    ((ObjectData *)o)->f6c = 1.0f;
    return o;
}
