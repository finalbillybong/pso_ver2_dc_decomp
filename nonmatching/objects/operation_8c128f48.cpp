/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c128f48
 * function: operation_8c128f48
 * language: c++
 * reference size: 276 bytes
 * compiled size: 276 bytes (+0.0%)
 * differing lines: 46 of 100 reference instruction lines
 * differing bytes: 57
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
typedef struct S_g8c4d9960 S_g8c4d9960;
typedef struct S_g8c4d9960_42c S_g8c4d9960_42c;
class Object;
typedef struct Block_p0_78 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_78;
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
    int f38;
    Vector3 f3c;
    char unknown48[0x30];
    Block_p0_78 f78;
    char unknown84[0x6c];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x1f2];
    short f30a;
} ObjectData;
struct S_g8c4d9960 {
    char unknown0[0x42c];
    S_g8c4d9960_42c *f42c;
    int f430;
};
struct S_g8c4d9960_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
extern int g_8c312424;
extern S_g8c4d9960 *g_8c4d9960;
extern "C" char g_8c3123c8[];
extern "C" void call_8c043418(Object *);
extern "C" void call_8c01c838(Object *, short);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void attach_and_insert_object(void *);
extern "C" void call_8c129538(Object *);
extern "C" Object *operation_8c128f48(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    call_8c043418(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26c2dc;
    ((ObjectData *)o)->tag = (int)(g_8c312424);
    ((ObjectData *)o)->size = 0x38c;
    o->v6(a2);
    ((ObjectData *)o)->f38 = (int)(g_8c4d9960->f42c->f08);
    ((ObjectData *)o)->f28 = (int)(g_8c4d9960->f42c->f0c);
    ((ObjectData *)o)->f110 = (void *)(void *)0x8c3123f4;
    ((ObjectData *)o)->f114 = (int)(g_8c4d9960->f430);
    ((ObjectData *)o)->ff0 = 0;
    call_8c01c838(o, ((ObjectData *)o)->ff0);
    ((ObjectData *)o)->f34 |= 0x60000000;
    copy_actor_records((void *)o, (void *)((void *)g_8c3123c8), 1);
    attach_and_insert_object((void *)o);
    *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f3c;
    ((ObjectData *)o)->f78.f04 += *(float *)(g_8c3123c8 + 0x4) / 2.0f;
    ((ObjectData *)o)->f30a = 0;
    call_8c129538(o);
    return o;
}
