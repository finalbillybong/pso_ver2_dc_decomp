/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1bf55c
 * function: operation_8c1bf55c
 * language: c++
 * reference size: 260 bytes
 * compiled size: 256 bytes (-1.5%)
 * differing lines: 48 of 96 reference instruction lines
 * differing bytes: 227
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4e2c00 S_g8c4e2c00;
typedef struct S_g8c4e2c00_42c S_g8c4e2c00_42c;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct S_x82656 S_x82656;
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
    char unknown3c[0xbc];
    float ff8;
    float ffc;
} ObjectData;
struct S_g8c4e2c00 {
    char unknown0[0x42c];
    S_g8c4e2c00_42c *f42c;
};
struct S_g8c4e2c00_42c {
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
struct S_x82656 {
    float f00;
};
extern int g_8c3285b8;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4e2c00 *g_8c4e2c00;
extern "C" void operation_8c0ee870(void *, void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *operation_8c1bf55c(Object *o, int a1)
{
    Object **home = &o;
    int v2;
    int v1;
    S_g8c4e2c00 **gp;
    (void)home;
    operation_8c0ee870((void *)o, g_8c44be98);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2756f0;
    ((ObjectData *)o)->tag = (int)(g_8c3285b8);
    ((ObjectData *)o)->size = 0x12c;
    o->v6(a1);
    gp = &g_8c4e2c00;
    ((ObjectData *)o)->f38 = (Arg0_38 *)(*gp)->f42c->f08;
    ((ObjectData *)o)->f28 = (int)((*gp)->f42c->f0c);
    ((ObjectData *)o)->ff8 = 500.0f;
    ((ObjectData *)o)->ffc = ((ObjectData *)o)->f38->f04->f14;
    ((ObjectData *)o)->f34 |= 0x40000000;
    copy_actor_records((void *)o, (void *)((void *)0x8c32858c), 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    v2 = (int)0;
    v1 = (int)0x104;
    while (8 > v2) {
        ((S_x82656 *)((int)o + v1 + (v2 << 2)))->f00 = 0.0f;
        *(char *)((char *)((char *)o + 0x124) + (v2)) = 0;
        v2 = (int)(v2 + 1);
    }
    return o;
}
