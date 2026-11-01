/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1af42c
 * function: operation_8c1af42c
 * language: c++
 * reference size: 512 bytes
 * compiled size: 512 bytes (+0.0%)
 * differing lines: 40 of 195 reference instruction lines
 * differing bytes: 341
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
typedef struct S_g8c4e2320 S_g8c4e2320;
typedef struct S_g8c4e2320_42c S_g8c4e2320_42c;
typedef struct S_g8c4e2320_430 S_g8c4e2320_430;
typedef struct Arg0_f4 Arg0_f4;
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
    char unknown3c[0xb0];
    float fec;
    float ff0;
    Arg0_f4 *ff4;
    float ff8;
    float ffc;
    char unknown100[0x4];
    int f104;
    int f108;
    int f10c;
    int f110;
    float f114;
    float f118;
    float f11c;
    float f120;
} ObjectData;
struct S_g8c4e2320 {
    char unknown0[0x42c];
    S_g8c4e2320_42c *f42c;
    S_g8c4e2320_430 *f430;
};
struct S_g8c4e2320_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
    char unknown10[0x8];
    int f18;
    int f1c;
};
struct S_g8c4e2320_430 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x4];
    int f0c;
};
struct Arg0_f4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c325f64;
extern S_g8c4e2320 *g_8c4e2320;
extern "C" void operation_8c0ee870(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" int operation_8c17796c(int);
extern "C" int get_game_mode_8c01c25c(void);
extern "C" void operation_8c05428c(void *, int, int);
extern "C" Object *operation_8c1af42c(Object *o, int a1, int a2)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    (void)home;
    operation_8c0ee870((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c274b20;
    ((ObjectData *)o)->tag = (int)(g_8c325f64);
    ((ObjectData *)o)->size = 0x124;
    o->v6(a2);
    ((ObjectData *)o)->f38 = (int)(g_8c4e2320->f42c->f18);
    ((ObjectData *)o)->f28 = (int)(g_8c4e2320->f42c->f1c);
    ((ObjectData *)o)->ff4 = (Arg0_f4 *)g_8c4e2320->f430->f04;
    ((ObjectData *)o)->fec = (float)(unsigned int)((ObjectData *)o)->ff4->f04 - 1.0f;
    ((ObjectData *)o)->ff0 = 1.0f;
    ((ObjectData *)o)->f108 = (int)(g_8c4e2320->f430->f0c);
    ((ObjectData *)o)->f10c = (int)(g_8c4e2320->f42c->f08);
    ((ObjectData *)o)->f110 = (int)(g_8c4e2320->f42c->f0c);
    copy_actor_records((void *)o, (void *)((void *)0x8c325f38), 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    ((ObjectData *)o)->ff8 = 400.0f;
    ((ObjectData *)o)->ffc = 200.0f;
    ((ObjectData *)o)->f104 = 0xe;
    ((ObjectData *)o)->f120 = 0.0f;
    ((ObjectData *)o)->f11c = 0.0f;
    ((ObjectData *)o)->f118 = 0.0f;
    ((ObjectData *)o)->f114 = 0.0f;
    t1 = operation_8c17796c(0x2c);
    if (t1 != 0) {
        ((ObjectData *)o)->f104 &= -3;
    }
    t2 = operation_8c17796c(0x2d);
    if (t2 != 0) {
        ((ObjectData *)o)->f104 &= -5;
    }
    t3 = operation_8c17796c(0x2e);
    if (t3 != 0) {
        ((ObjectData *)o)->f104 &= -9;
    }
    t4 = operation_8c17796c(0x2f);
    if (t4 == 0) {
        t5 = get_game_mode_8c01c25c();
        if (t5 != 0x10) {
            goto L_8c1af5a4;
        }
    }
    ((ObjectData *)o)->f104 &= -0xf;
    operation_8c05428c((void *)o, 0, 1);
L_8c1af5a4:;
    return o;
}
