/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11434c
 * function: TOKeyAncient01_ctor_8c11434c
 * language: c++
 * reference size: 360 bytes
 * compiled size: 356 bytes (-1.1%)
 * differing lines: 8 of 133 reference instruction lines
 * differing bytes: 151
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
typedef struct S_g8c4d8260 S_g8c4d8260;
typedef struct S_g8c4d8260_42c S_g8c4d8260_42c;
typedef struct S_g8c4d8260_430 S_g8c4d8260_430;
typedef struct S_g8c4d8264 S_g8c4d8264;
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
    char unknown70[0x1c];
    int f8c;
    char unknown90[0x5c];
    float fec;
    float ff0;
    Arg0_f4 *ff4;
    float ff8;
    float ffc;
    char unknown100[0x8];
    int f108;
} ObjectData;
struct S_g8c4d8260 {
    char unknown0[0x42c];
    S_g8c4d8260_42c *f42c;
    S_g8c4d8260_430 *f430;
};
struct S_g8c4d8260_42c {
    char unknown0[0x8];
    int f08;
};
struct S_g8c4d8260_430 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_f4 {
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
extern int g_8c31018c;
extern S_g8c4d8260 *g_8c4d8260;
extern S_g8c4d8264 *g_8c4d8264;
extern "C" void TOKey_ctor_8c112e74(void *);
extern "C" void operation_8c112f78(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *TOKeyAncient01_ctor_8c11434c(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    TOKey_ctor_8c112e74((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c269d8c;
    ((ObjectData *)o)->tag = (int)(g_8c31018c);
    ((ObjectData *)o)->size = 0x11c;
    o->v6(a2);
    operation_8c112f78((void *)o);
    {
        Object *base = o;
        if (!(((ObjectData *)base)->f8c >= 0)) {
            ((ObjectData *)base)->f8c = 0;
        } else {
            if (((ObjectData *)base)->f8c > 3) {
                ((ObjectData *)base)->f8c = 3;
            }
        }
    }
    ((ObjectData *)o)->f28 = (int)(*(int *)((char *)((char *)g_8c4d8264 + 0x0) + (((ObjectData *)o)->f8c << 2)));
    ((ObjectData *)o)->f38 = (Arg0_38 *)g_8c4d8260->f42c->f08;
    ((ObjectData *)o)->ff4 = (Arg0_f4 *)g_8c4d8260->f430->f04;
    ((ObjectData *)o)->fec = (float)(unsigned int)((ObjectData *)o)->ff4->f04 - 1.0f;
    ((ObjectData *)o)->ff0 = 0.99f;
    copy_actor_records((void *)o, (void *)((void *)0x8c310160), 1);
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
    return o;
}
