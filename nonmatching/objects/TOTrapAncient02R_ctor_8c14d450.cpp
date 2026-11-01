/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14d450
 * function: TOTrapAncient02R_ctor_8c14d450
 * language: c++
 * reference size: 544 bytes
 * compiled size: 560 bytes (+2.9%)
 * differing lines: 100 of 207 reference instruction lines
 * differing bytes: 461
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +16 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4da620 S_g8c4da620;
typedef struct S_g8c4da620_42c S_g8c4da620_42c;
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
    int f38;
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0x18];
    float f6c;
    float f70;
    char unknown74[0x14];
    int f88;
    int f8c;
    int f90;
    char unknown94[0xc4];
    Vector3 f158;
    Vector3 f164;
    char unknown170[0x19a];
    short f30a;
    short f30c;
    char unknown30e[0x26];
    int f334;
    char unknown338[0x18];
    float f350;
    float f354;
    unsigned short f358;
    char unknown35a[0x6];
    float f360;
    float f364;
    int f368;
    int f36c;
    int f370;
    int f374;
    char unknown378[0x4];
    int f37c;
    int f380;
} ObjectData;
struct S_g8c4da620 {
    char unknown0[0x42c];
    S_g8c4da620_42c *f42c;
};
struct S_g8c4da620_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
extern int g_8c31563c;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4da620 *g_8c4da620;
extern "C" void TOTrapAncient02_ctor_8c14cb90(Object *, void *, int);
extern "C" void update_object_center(void *);
extern "C" void call_8c14df2c(Object *);
extern "C" Object *TOTrapAncient02R_ctor_8c14d450(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    TOTrapAncient02_ctor_8c14cb90(o, g_8c44be98, a1);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26e15c;
    ((ObjectData *)o)->tag = (int)(g_8c31563c);
    ((ObjectData *)o)->size = 0x384;
    o->v6(a1);
    *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f158 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f164 = *(Vector3 *)&((ObjectData *)o)->f3c;
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    update_object_center((void *)o);
    ((ObjectData *)o)->f38 = (int)(g_8c4da620->f42c->f08);
    ((ObjectData *)o)->f28 = (int)(g_8c4da620->f42c->f0c);
    ((ObjectData *)o)->f30a = 0;
    ((ObjectData *)o)->f30c = 0;
    ((ObjectData *)o)->f350 = ((ObjectData *)o)->f6c * 0.5f + 30.0f;
    ((ObjectData *)o)->f354 = ((ObjectData *)o)->f350;
    ((ObjectData *)o)->f36c = (int)((float)((ObjectData *)o)->f88 + 30.0f);
    if (!(((ObjectData *)o)->f36c >= 0)) {
        ((ObjectData *)o)->f36c = 0;
    }
    ((ObjectData *)o)->f370 = (int)(((ObjectData *)o)->f36c);
    ((ObjectData *)o)->f37c = (int)(((ObjectData *)o)->f8c);
    {
        Object *base = o;
        if (((ObjectData *)base)->f37c < 0 || ((ObjectData *)base)->f37c >= 0x100) {
            ((ObjectData *)base)->f37c = -1;
        } else {
        }
    }
    ((ObjectData *)o)->f374 = (int)(((ObjectData *)o)->f90);
    {
        Object *base = o;
        if (!(((ObjectData *)base)->f374 >= 0)) {
            ((ObjectData *)base)->f374 = 0;
        } else {
            if (((ObjectData *)base)->f374 >= 5) {
                ((ObjectData *)base)->f374 = 4;
            }
        }
    }
    call_8c14df2c(o);
    ((ObjectData *)o)->f380 = (int)((ObjectData *)o)->f70;
    if (1 > ((ObjectData *)o)->f380) {
        ((ObjectData *)o)->f380 = 1;
    } else {
        if (((ObjectData *)o)->f380 > 0x100) {
            ((ObjectData *)o)->f380 = 0x100;
        }
    }
    ((ObjectData *)o)->f358 = 0xffff;
    ((ObjectData *)o)->f334 = 0;
    ((ObjectData *)o)->f364 = 0.0f;
    ((ObjectData *)o)->f360 = 0.0f;
    ((ObjectData *)o)->f368 = 0;
    return o;
}
