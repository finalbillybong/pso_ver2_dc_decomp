/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02ff24
 * function: handle_cmd_17_9B_8c02ff24
 * language: c++
 * reference size: 420 bytes
 * compiled size: 420 bytes (+0.0%)
 * differing lines: 60 of 164 reference instruction lines
 * differing bytes: 70
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
class Object;
struct Arg1 {
    char unknown0[0x44];
    int f44;
    int f48;
};
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *);
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9(Frame *, int);
};
typedef struct ObjectData {
    char unknown0[0xa5c];
    int fa5c;
    char unknowna60[0x4];
    Block8 fa64;
    char unknowna6c[0x8];
    unsigned short fa74;
} ObjectData;
struct Frame {
    unsigned char f00;
    char unknown1[0x1];
    unsigned short f02;
    int f04;
    char unknown8[0xc];
    int f14;
    char unknown18[0xc];
    int f24;
    char unknown28[0xc];
    int f34;
    char unknown38[0xc];
    Block8 f44;
    int f4c;
    int f50;
    char unknown54[0x2c];
    int f80;
    char unknown84[0x2c];
    int fb0;
    char unknownb4[0x2c];
};
extern int g_8c2e761c;
extern "C" char g_8c2e7ce0[];
extern "C" void seed_random_state(void *, unsigned int);
extern "C" void memset_8c12b880(Frame *, int, int);
extern "C" void strncpy_8c12b154(void *, void *, int);
static inline int icmp(const unsigned char *a, const unsigned char *b)
{
    unsigned char c1, c2;
    while ((c1 = *a++) == (c2 = *b++)) {
        if (c1 == 0) return 0;
    }
    return c1 - c2;
}
extern "C" void handle_cmd_17_9B_8c02ff24(Object *o, Arg1 *a1)
{
    Frame frame;
    int v1;
    int t1;
    o->v4((g_8c2e7ce0 + 0x6ba));
    v1 = (int)g_8c2e761c;
    t1 = icmp((unsigned char *)v1, (unsigned char *)((char *)a1 + 0x4));
    if (t1 == 0) {
        seed_random_state((void *)(((char *)o + 0x974)), (unsigned int)(a1->f44));
        seed_random_state((void *)(((char *)o + 0x88c)), (unsigned int)(a1->f48));
        ((ObjectData *)o)->fa5c = 1;
        memset_8c12b880((Frame *)((&frame)), 0, 0xe0);
        (&frame)->f00 = 0x9a;
        (&frame)->f02 = 0xe0;
        strncpy_8c12b154((void *)(&(&frame)->f04), (void *)(((char *)o + 0x3024)), 0x10);
        strncpy_8c12b154((void *)(&(&frame)->f14), (void *)(((char *)o + 0x3035)), 0x10);
        strncpy_8c12b154((void *)(&(&frame)->f24), (void *)(((char *)o + 0x30f6)), 0x10);
        strncpy_8c12b154((void *)(&(&frame)->f34), (void *)(((char *)o + 0x3107)), 0x10);
        *(Block8 *)&(&frame)->f44 = *(Block8 *)&((ObjectData *)o)->fa64;
        (&frame)->f4c = ((ObjectData *)o)->fa74 & 0xffff;
        strncpy_8c12b154((void *)(&(&frame)->f50), (void *)(((char *)o + 0x3046)), 0x30);
        strncpy_8c12b154((void *)(&(&frame)->f80), (void *)(((char *)o + 0x3076)), 0x30);
        strncpy_8c12b154((void *)(&(&frame)->fb0), (void *)(((char *)o + 0x30a6)), 0x30);
        o->v9((&frame), (unsigned short)(&frame)->f02);
        return;
    }
    o->v6();
    o->v4((g_8c2e7ce0 + 0xa8));
}
