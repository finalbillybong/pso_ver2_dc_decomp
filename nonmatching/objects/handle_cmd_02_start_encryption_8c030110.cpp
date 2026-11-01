/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c030110
 * function: handle_cmd_02_start_encryption_8c030110
 * language: c++
 * reference size: 584 bytes
 * compiled size: 584 bytes (+0.0%)
 * differing lines: 68 of 228 reference instruction lines
 * differing bytes: 70
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Block100 {
    int words[25];
} Block100;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
class Object;
typedef struct Block_frame_cc {
    int f00;
    char unknown4[0x60];
} Block_frame_cc;
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
    Block8 fa6c;
    unsigned short fa74;
    char unknowna76[0xe];
    int fa84;
    char unknowna88[0x14];
    int fa9c;
    int faa0;
} ObjectData;
struct Frame {
    unsigned char f00;
    char f01;
    unsigned short f02;
    Block8 f04;
    Block8 f0c;
    int f14;
    char f18;
    char f19;
    char unknown1a[0x2];
    int f1c;
    char unknown20[0xc];
    int f2c;
    char unknown30[0xc];
    int f3c;
    char unknown40[0xc];
    int f4c;
    char unknown50[0xc];
    int f5c;
    char unknown60[0x2c];
    int f8c;
    char unknown90[0x2c];
    int fbc;
    char unknownc0[0xc];
    Block_frame_cc fcc;
};
extern int g_8c2e7618;
extern Block100 g_8c42ae8c;
extern "C" char g_8c2e7ce0[];
extern "C" void seed_random_state(void *, unsigned int);
extern "C" void call_8c18e044(void *, void *, int, int, int);
extern "C" void memset_8c12b880(Frame *, int, int);
extern "C" void strncpy_8c12b154(void *, void *, int);
extern "C" void operation_8c02db24();
static inline int icmp(const unsigned char *a, const unsigned char *b)
{
    unsigned char c1, c2;
    while ((c1 = *a++) == (c2 = *b++)) {
        if (c1 == 0) return 0;
    }
    return c1 - c2;
}
extern "C" void handle_cmd_02_start_encryption_8c030110(Object *o, Arg1 *a1)
{
    Frame frame;
    int v1;
    int t1;
    o->v4((g_8c2e7ce0 + 0x6e4));
    v1 = (int)g_8c2e7618;
    t1 = icmp((unsigned char *)v1, (unsigned char *)((char *)a1 + 0x4));
    switch (t1) {
    case 0:
        seed_random_state((void *)(((char *)o + 0x974)), (unsigned int)(a1->f44));
        seed_random_state((void *)(((char *)o + 0x88c)), (unsigned int)(a1->f48));
        ((ObjectData *)o)->fa5c = 1;
        call_8c18e044((void *)(&(&frame)->fcc.f00), operation_8c02db24, 0, 8, 8);
        memset_8c12b880((Frame *)((&frame)), 0, 0x130);
        (&frame)->f00 = 0x9d;
        (&frame)->f01 = ((ObjectData *)o)->fa9c;
        *(Block8 *)&(&frame)->f04 = *(Block8 *)&((ObjectData *)o)->fa6c;
        *(Block8 *)&(&frame)->f0c = *(Block8 *)&((ObjectData *)o)->fa64;
        (&frame)->f14 = ((ObjectData *)o)->fa74 & 0xffff;
        (&frame)->f19 = ((ObjectData *)o)->faa0;
        strncpy_8c12b154((void *)(&(&frame)->f1c), (void *)(((char *)o + 0x3024)), 0x10);
        strncpy_8c12b154((void *)(&(&frame)->f2c), (void *)(((char *)o + 0x3035)), 0x10);
        strncpy_8c12b154((void *)(&(&frame)->f3c), (void *)(((char *)o + 0x30f6)), 0x10);
        strncpy_8c12b154((void *)(&(&frame)->f4c), (void *)(((char *)o + 0x3107)), 0x10);
        strncpy_8c12b154((void *)(&(&frame)->f5c), (void *)(((char *)o + 0x3046)), 0x30);
        strncpy_8c12b154((void *)(&(&frame)->f8c), (void *)(((char *)o + 0x3076)), 0x30);
        strncpy_8c12b154((void *)(&(&frame)->fbc), (void *)(((char *)o + 0x30e6)), 0x10);
        if (((ObjectData *)o)->fa84 != 0) {
            (&frame)->f18 = 1;
            *(Block100 *)&(&frame)->fcc = *(Block100 *)&g_8c42ae8c;
            (&frame)->f02 = 0x130;
            o->v9((&frame), (unsigned short)(&frame)->f02);
            goto L_8c0302c4;
        }
        (&frame)->f02 = 0xcc;
        o->v9((&frame), (unsigned short)(&frame)->f02);
        break;
    default:
        o->v6();
        o->v4((g_8c2e7ce0 + 0xa8));
        break;
    }
L_8c0302c4:;
    ((ObjectData *)o)->fa84 = 0;
}
