/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c130430
 * function: operation_8c130430
 * language: c++
 * reference size: 388 bytes
 * compiled size: 388 bytes (+0.0%)
 * differing lines: 8 of 138 reference instruction lines
 * differing bytes: 98
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d9a20 S_L8c4d9a20;
typedef struct S_L8c4d9a20_4 S_L8c4d9a20_4;
typedef struct S_L8c4d9a20_4_42c S_L8c4d9a20_4_42c;
typedef struct S_L8c4d9a20_4_430 S_L8c4d9a20_4_430;
typedef struct S_g8c4d9a28 S_g8c4d9a28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_4 Arg0_38_4;
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
    Arg0_38 *f38;
    char unknown3c[0x30];
    float f6c;
    char unknown70[0x7c];
    float fec;
    float ff0;
    Arg0_f4 *ff4;
    float ff8;
    float ffc;
    char unknown100[0x8];
    int f108;
    char unknown10c[0x10];
    char f11c;
    char unknown11d[0x3];
    int f120;
    int f124;
    int f128;
    int f12c;
} ObjectData;
struct S_L8c4d9a20 {
    char unknown0[0x4];
    S_L8c4d9a20_4 *f04;
};
struct S_L8c4d9a20_4 {
    char unknown0[0x42c];
    S_L8c4d9a20_4_42c *f42c;
    S_L8c4d9a20_4_430 *f430;
};
struct S_L8c4d9a20_4_42c {
    char unknown0[0x8];
    int f08;
};
struct S_L8c4d9a20_4_430 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_f4 {
    char unknown0[0x4];
    int f04;
};
struct S_g8c4d9a28 {
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
extern int g_8c3126f8;
extern S_g8c4d9a28 *g_8c4d9a28;
extern S_L8c4d9a20 g_8c4d9a20;
extern "C" void TOKey_ctor_8c112e74(void *);
extern "C" void operation_8c112f78(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" int get_current_area_8c032b10(void);
extern "C" Object *operation_8c130430(Object *o, int a1, int a2)
{
    Object **home = &o;
    int t1;
    (void)home;
    TOKey_ctor_8c112e74((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26cb6c;
    ((ObjectData *)o)->tag = (int)(g_8c3126f8);
    ((ObjectData *)o)->size = 0x130;
    o->v6(a2);
    operation_8c112f78((void *)o);
    ((ObjectData *)o)->f38 = (Arg0_38 *)(&g_8c4d9a20)->f04->f42c->f08;
    ((ObjectData *)o)->ff4 = (Arg0_f4 *)(&g_8c4d9a20)->f04->f430->f04;
    ((ObjectData *)o)->fec = (float)(unsigned int)((ObjectData *)o)->ff4->f04 - 1.0f;
    ((ObjectData *)o)->ff0 = 2.0f;
    ((ObjectData *)o)->f28 = (int)(g_8c4d9a28->f04);
    copy_actor_records((void *)o, (void *)((void *)0x8c3126cc), 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    ((ObjectData *)o)->ff8 = 400.0f;
    ((ObjectData *)o)->ffc = ((ObjectData *)o)->f38->f04->f14;
    {
        Object *base = o;
        if (((ObjectData *)base)->f108 != 2 && 0.0f > ((ObjectData *)base)->f6c) {
            ((ObjectData *)base)->f108 = 1;
        } else {
            ((ObjectData *)base)->f108 = 0;
        }
    }
    t1 = get_current_area_8c032b10();
    ((ObjectData *)o)->f11c = t1;
    ((ObjectData *)o)->f120 = 0;
    ((ObjectData *)o)->f124 = 0;
    ((ObjectData *)o)->f128 = 0;
    ((ObjectData *)o)->f12c = 0;
    return o;
}
