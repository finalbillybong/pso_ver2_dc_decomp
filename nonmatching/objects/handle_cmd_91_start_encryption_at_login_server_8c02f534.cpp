/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02f534
 * function: handle_cmd_91_start_encryption_at_login_server_8c02f534
 * language: c++
 * reference size: 264 bytes
 * compiled size: 264 bytes (+0.0%)
 * differing lines: 18 of 106 reference instruction lines
 * differing bytes: 22
 * provenance: generator draft (mode switch2)
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
} ObjectData;
struct Frame {
    unsigned char f00;
    char unknown1[0x1];
    unsigned short f02;
    int f04;
    char unknown8[0x20];
};
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
extern "C" void handle_cmd_91_start_encryption_at_login_server_8c02f534(Object *o, Arg1 *a1)
{
    Frame frame;
    int v1;
    int t1;
    o->v4((g_8c2e7ce0 + 0x550));
    v1 = (int)*(int *)0x8c2e761c;
    t1 = icmp((unsigned char *)v1, (unsigned char *)((char *)a1 + 0x4));
    if (t1 == 0) {
        seed_random_state((void *)(((char *)o + 0x974)), (unsigned int)(a1->f44));
        seed_random_state((void *)(((char *)o + 0x88c)), (unsigned int)(a1->f48));
        ((ObjectData *)o)->fa5c = 1;
        memset_8c12b880((Frame *)((&frame)), 0, 0x28);
        (&frame)->f00 = 0x90;
        (&frame)->f02 = 0x28;
        strncpy_8c12b154((void *)(&(&frame)->f04), (void *)(((char *)o + 0x3024)), 0x10);
        strncpy_8c12b154((void *)(((char *)(&frame) + 0x15)), (void *)(((char *)o + 0x3035)), 0x10);
        o->v9((&frame), (unsigned short)(&frame)->f02);
        return;
    }
    o->v6();
    o->v4((g_8c2e7ce0 + 0xa8));
}
