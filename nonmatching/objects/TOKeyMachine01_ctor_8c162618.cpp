/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c162618
 * function: TOKeyMachine01_ctor_8c162618
 * language: c++
 * reference size: 316 bytes
 * compiled size: 316 bytes (+0.0%)
 * differing lines: 10 of 116 reference instruction lines
 * differing bytes: 136
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TOKeyMachine01.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db220 S_g8c4db220;
typedef struct S_g8c4db220_42c S_g8c4db220_42c;
typedef struct S_g8c4db224 S_g8c4db224;
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
    char unknown100[0x4];
    float f104;
    int f108;
    char unknown10c[0x10];
    float f11c;
    float f120;
    float f124;
    float f128;
    int f12c;
} ObjectData;
struct S_g8c4db224 {
    int f00;
};
struct S_g8c4db220 {
    char unknown0[0x42c];
    S_g8c4db220_42c *f42c;
};
struct S_g8c4db220_42c {
    char unknown0[0x8];
    int f08;
};
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct Arg0_38_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c316fe4;
extern S_g8c4db220 *g_8c4db220;
extern S_g8c4db224 *g_8c4db224;
extern "C" void TOKey_ctor_8c112e74(Object *);
extern "C" void operation_8c112f78(Object *);
extern "C" int get_game_mode_8c01c25c(void);
extern "C" Object *TOKeyMachine01_ctor_8c162618(Object *o, int a1, int a2)
{
    Object **home = &o;
    int t1;
    (void)home;
    TOKey_ctor_8c112e74(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26f7f8;
    ((ObjectData *)o)->tag = (int)(g_8c316fe4);
    ((ObjectData *)o)->size = 0x130;
    o->v6(a2);
    operation_8c112f78(o);
    ((ObjectData *)o)->f28 = (int)(g_8c4db224->f00);
    ((ObjectData *)o)->f38 = (Arg0_38 *)g_8c4db220->f42c->f08;
    ((ObjectData *)o)->ff8 = 400.0f;
    ((ObjectData *)o)->ffc = ((ObjectData *)o)->f38->f04->f14;
    ((ObjectData *)o)->f104 = 10.0f;
    t1 = get_game_mode_8c01c25c();
    if (t1 == 0x10) {
        {
            Object *base = o;
            if (((ObjectData *)base)->f108 != 2 && !(((ObjectData *)base)->f8c >= 0)) {
                ((ObjectData *)base)->f108 = 1;
                goto L_8c1626b8;
            }
            ((ObjectData *)base)->f108 = 0;
        }
    }
L_8c1626b8:;
    ((ObjectData *)o)->f11c = 1.0f;
    ((ObjectData *)o)->f120 = 1.0f;
    ((ObjectData *)o)->f124 = 1.0f;
    ((ObjectData *)o)->f128 = 1.0f;
    ((ObjectData *)o)->f12c = 0;
    ((ObjectData *)o)->f74 = 0.0f;
    ((ObjectData *)o)->f70 = 0.0f;
    ((ObjectData *)o)->f6c = 0.0f;
    return o;
}
