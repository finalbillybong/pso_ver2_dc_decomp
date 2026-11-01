/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19fc1c
 * function: operation_8c19fc1c
 * language: c++
 * reference size: 468 bytes
 * compiled size: 468 bytes (+0.0%)
 * differing lines: 72 of 176 reference instruction lines
 * differing bytes: 277
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
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4dc580 S_g8c4dc580;
typedef struct S_g8c4dc580_42c S_g8c4dc580_42c;
typedef struct Arg0_128 Arg0_128;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct S_x15552 S_x15552;
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
    short f20;
    char unknown22[0x6];
    int f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    Vector3 f3c;
    char unknown48[0xb4];
    float ffc;
    char unknown100[0x4];
    int f104;
    float f108;
    char unknown10c[0x4];
    float f110;
    char unknown114[0x8];
    float f11c;
    char unknown120[0x4];
    int f124;
    Arg0_128 *f128;
    unsigned short f12c;
} ObjectData;
struct S_g8c4dc580 {
    char unknown0[0x42c];
    S_g8c4dc580_42c *f42c;
};
struct S_g8c4dc580_42c {
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
struct S_x15552 {
    Vector3 f00;
};
extern int g_8c31ce78;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4dc580 *g_8c4dc580;
extern "C" void operation_8c0ee870(void *, void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" void operation_8c05428c(void *, int, int);
extern "C" int create_effect_769c(void *, int);
extern "C" int hierarchy_is_active(void *);
extern "C" int create_effect_7708(void *, int, int);
extern "C" void bind_id(void *, unsigned short);
extern "C" Object *operation_8c19fc1c(Object *o, int a1)
{
    Object **home = &o;
    int v1;
    char *v11;
    char *v12;
    int t1;
    int t2;
    int t3;
    int t4;
    (void)home;
    operation_8c0ee870((void *)o, g_8c44be98);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c272cb4;
    ((ObjectData *)o)->tag = (int)(g_8c31ce78);
    ((ObjectData *)o)->size = 0x130;
    o->v6(a1);
    ((ObjectData *)o)->f38 = (Arg0_38 *)g_8c4dc580->f42c->f08;
    ((ObjectData *)o)->f28 = (int)(g_8c4dc580->f42c->f0c);
    ((ObjectData *)o)->ffc = ((ObjectData *)o)->f38->f04->f14;
    copy_actor_records((void *)o, (void *)((void *)0x8c31ce4c), 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    operation_8c05428c((void *)o, 0, 1);
    ((ObjectData *)o)->f104 = 0;
    ((ObjectData *)o)->f108 = 0.0f;
    v1 = (int)0;
    while (2 > v1) {
        *(Vector3 *)&((S_x15552 *)((char *)(int *)((char *)o + 0x10c) + v1 * 0xc))->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
        v1 = (int)(v1 + 1);
    }
    ((ObjectData *)o)->f110 += 26.1000023f;
    ((ObjectData *)o)->f11c += 22.3f;
    t1 = create_effect_769c((void *)(((char *)o + 0x10c)), 0x63);
    ((ObjectData *)o)->f124 = (int)t1;
    v11 = (char *)((ObjectData *)o)->f124;
    if (v11 != 0) {
        t2 = hierarchy_is_active((void *)v11);
        if (t2 == 0) {
            ((ObjectData *)o)->f124 = 0;
        }
    }
    t3 = create_effect_7708((void *)(((char *)o + 0x118)), 0x63, 0x10);
    ((ObjectData *)o)->f128 = (Arg0_128 *)(int)t3;
    v12 = (char *)((ObjectData *)o)->f128;
    if (v12 != 0) {
        t4 = hierarchy_is_active((void *)v12);
        if (t4 != 0) {
            bind_id((void *)(((ObjectData *)o)->f128), (unsigned short)(((ObjectData *)o)->f20));
            goto L_8c19fd68;
        }
    }
    ((ObjectData *)o)->f128 = (Arg0_128 *)0;
L_8c19fd68:;
    ((ObjectData *)o)->f12c = 0xffff;
    return o;
}
