/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c073288
 * function: operation_8c073288
 * language: c++
 * reference size: 652 bytes
 * compiled size: 652 bytes (+0.0%)
 * differing lines: 96 of 244 reference instruction lines
 * differing bytes: 99
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block44 {
    int words[11];
} Block44;
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct S_g8c4db240 S_g8c4db240;
typedef struct Arg2 Arg2;
typedef struct S_vv3 S_vv3;
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
    virtual void v6(void *);
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    unsigned short f20;
    char unknown22[0xe];
    short f30;
    char unknown32[0x2];
    int f34;
    char unknown38[0xa0];
    int fd8;
    char unknowndc[0xa];
    unsigned short fe6;
    int fe8;
    int fec;
    int ff0;
    Block44 ff4;
    int f120;
    char unknown124[0x8];
    int f12c;
    char unknown130[0x4];
    unsigned char f134;
    char f135;
    char f136;
    char f137;
    char f138;
    char f139;
    char unknown13a[0x2];
    int f13c;
} ObjectData;
struct Arg2 {
    unsigned char f00;
    char f01;
    char f02;
    char unknown3[0x9];
    int f0c;
};
struct Frame {
    char f04;
    char unknown5[0x1];
    unsigned short f06;
};
struct S_vv3 {
    char f00;
};
extern Block44 g_8c284db0;
extern int g_8c2fd6b8;
extern S_g8c418248 *g_8c418248;
extern S_g8c46ed0c *g_8c46ed0c;
extern S_g8c4db240 *g_8c4db240;
extern int g_8c5134c0;
extern "C" void operation_8c051eb8(void *);
extern "C" void transform_with_8c05214c(void *, int, int);
extern "C" void call_8c074e48(Object *);
extern "C" int rand(void);
extern "C" int clamp_int(int, int, int);
extern "C" void operation_193288(unsigned char, void *, void *);
extern "C" void operation_8c07484c(void *, int);
extern "C" int get_game_mode_8c01c25c(void);
extern "C" int operation_195514(unsigned short);
extern "C" int operation_194d60(unsigned short);
extern "C" void operation_8c074384(void *);
extern "C" Object *operation_8c073288(Object *o, int a1, Arg2 *a2)
{
    Frame frame;
    Object **home = &o;
    S_vv3 *v3;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    (void)home;
    operation_8c051eb8((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c262fdc;
    ((ObjectData *)o)->tag = (int)(g_8c2fd6b8);
    ((ObjectData *)o)->size = 0x140;
    ((ObjectData *)o)->f34 |= -0x80000000;
    *(Block44 *)&((ObjectData *)o)->ff4 = *(Block44 *)&g_8c284db0;
    ((ObjectData *)o)->fd8 = 4;
    transform_with_8c05214c((void *)o, (int)(((char *)o + 0xf4)), 1);
    ((ObjectData *)o)->fe6 = 0xffff;
    ((ObjectData *)o)->fe8 = (int)(a2->f0c);
    ((ObjectData *)o)->fec = 0;
    ((ObjectData *)o)->ff0 = 0;
    ((ObjectData *)o)->f120 = 0;
    ((ObjectData *)o)->f12c = 0;
    ((ObjectData *)o)->f134 = a2->f00;
    ((ObjectData *)o)->f136 = a2->f01;
    ((ObjectData *)o)->f138 = a2->f02;
    ((ObjectData *)o)->f13c = 0;
    call_8c074e48(o);
    t1 = rand();
    ((ObjectData *)o)->f135 = (int)((float)t1 / 32768.0f * 256.0f);
    t2 = rand();
    ((ObjectData *)o)->f137 = (int)((float)t2 / 32768.0f * 256.0f);
    t3 = rand();
    ((ObjectData *)o)->f139 = (int)((float)t3 / 32768.0f * 256.0f);
    t4 = clamp_int((int)(((ObjectData *)o)->f134), 0, 4);
    operation_193288((unsigned char)(*(char *)((char *)((char *)t4 + 0x0) + ((int)((void *)0x8c2fd6bc)))), (void *)(((char *)o + 0x128)), (void *)(((char *)o + 0x124)));
    if (g_8c4db240 != 0) {
        o->v6(g_8c4db240);
        ((ObjectData *)o)->f20 = 0xffff;
        operation_8c07484c((void *)o, 0);
    } else {
        operation_8c07484c((void *)o, 3);
    }
    t5 = get_game_mode_8c01c25c();
    if (t5 == 0x10) {
        if (((ObjectData *)o)->fe8 != -1) {
            goto L_8c073460;
        }
        g_8c5134c0 = 1;
        v3 = (S_vv3 *)&*(int *)((char *)((char *)g_8c46ed0c + 0x0) + (((ObjectData *)o)->f30 << 2));
        *(SBlock4 *)&(&frame)->f04 = *(SBlock4 *)&v3->f00;
        t6 = operation_195514((&frame)->f06);
        ((ObjectData *)o)->fe8 = (int)t6;
    } else {
        if (((ObjectData *)o)->fe8 == -1) {
            g_8c5134c0 = 1;
            t7 = operation_194d60((unsigned short)g_8c418248);
            ((ObjectData *)o)->fe8 = (int)t7;
        }
    }
L_8c073460:;
    operation_8c074384((void *)o);
    return o;
}
