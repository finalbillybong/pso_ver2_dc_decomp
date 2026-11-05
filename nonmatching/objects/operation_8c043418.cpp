/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c043418
 * function: operation_8c043418
 * language: c++
 * reference size: 712 bytes
 * compiled size: 712 bytes (+0.0%)
 * differing lines: 240 of 235 reference instruction lines
 * differing bytes: 233
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_x83792 S_x83792;
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
    virtual void v6();
    virtual void v7();
};
typedef struct ObjectData {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    unsigned short f20;
    char unknown22[0xb4];
    short fd6;
    char unknownd8[0xac];
    int f184;
    int f188;
    int f18c;
    int f190;
    int f194;
    short f198;
    short f19a;
    short f19c;
    short f19e;
    short f1a0;
    short f1a2;
    short f1a4;
    short f1a6;
    short f1a8;
    short f1aa;
    short f1ac;
    short f1ae;
    short f1b0;
    short f1b2;
    short f1b4;
    char unknown1b6[0x6];
    int f1bc;
    short f1c0;
    short f1c2;
    short f1c4;
    short f1c6;
    short f1c8;
    short f1ca;
    short f1cc;
    short f1ce;
    short f1d0;
    short f1d2;
    char unknown1d4[0xe8];
    int f2bc;
    char unknown2c0[0x42];
    short f302;
    short f304;
    unsigned short f306;
    short f308;
    char unknown30a[0xa];
    int f314;
    char unknown318[0x18];
    short f330;
    short f332;
    int f334;
    int f338;
    int f33c;
    int f340;
    int f344;
    int f348;
    int f34c;
} ObjectData;
struct S_x83792 {
    float f00;
};
extern "C" void operation_8c01c488(void *);
extern "C" void construct_random_state(void *);
extern "C" void call_8c18e044(void *, void *, int, int, int);
extern "C" void seed_random_state(void *, unsigned int);
extern "C" Object *operation_8c043418(Object *o)
{
    Object **home = &o;
    int v1;
    int v2;
    (void)home;
    operation_8c01c488((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c261d18;
    construct_random_state((void *)(((char *)o + 0x1d4)));
    call_8c18e044((void *)(((char *)o + 0x2c0)), (void *)((void *)0x8c026b04), 0, 0xc, 5);
    ((ObjectData *)o)->f314 = 0;
    o->v7();
    ((ObjectData *)o)->f184 = 0;
    ((ObjectData *)o)->f188 = 0;
    ((ObjectData *)o)->f190 = 0;
    ((ObjectData *)o)->f18c = 0;
    ((ObjectData *)o)->f194 = 0;
    ((ObjectData *)o)->f334 = 0;
    ((ObjectData *)o)->f338 = 0;
    ((ObjectData *)o)->f33c = 0;
    ((ObjectData *)o)->f340 = 0;
    ((ObjectData *)o)->f344 = 0;
    ((ObjectData *)o)->f348 = 0;
    ((ObjectData *)o)->f19e = 0;
    ((ObjectData *)o)->f19c = 0;
    ((ObjectData *)o)->f332 = 0;
    ((ObjectData *)o)->f330 = 0;
    ((ObjectData *)o)->f19a = 0;
    ((ObjectData *)o)->f198 = 0;
    ((ObjectData *)o)->f1a0 = 0;
    ((ObjectData *)o)->f1aa = 0;
    ((ObjectData *)o)->f1a2 = 0;
    ((ObjectData *)o)->f1ac = 0;
    ((ObjectData *)o)->f1a4 = 0;
    ((ObjectData *)o)->f1ae = 0;
    ((ObjectData *)o)->f1a6 = 0;
    ((ObjectData *)o)->f1b0 = 0;
    ((ObjectData *)o)->f1a8 = 0;
    ((ObjectData *)o)->f1b4 = 0;
    ((ObjectData *)o)->f1b2 = 0;
    ((ObjectData *)o)->f1bc = 0;
    ((ObjectData *)o)->f1c8 = 0;
    ((ObjectData *)o)->f1c6 = 0;
    ((ObjectData *)o)->f1c4 = 0;
    ((ObjectData *)o)->f1c2 = 0;
    ((ObjectData *)o)->f1c0 = 0;
    ((ObjectData *)o)->f1d2 = 0;
    ((ObjectData *)o)->f1d0 = 0;
    ((ObjectData *)o)->f1ce = 0;
    ((ObjectData *)o)->f1cc = 0;
    ((ObjectData *)o)->f1ca = 0;
    seed_random_state((void *)(((char *)o + 0x1d4)), (unsigned int)(((ObjectData *)o)->f20));
    ((ObjectData *)o)->f2bc = 0;
    ((ObjectData *)o)->f308 = 0;
    v1 = (int)0;
    while (v1 != 3) {
        *(char *)((char *)((char *)o + 0x2fc) + (v1 << 1)) = 0;
        *(char *)((char *)((char *)o + 0x2fd) + (v1 << 1)) = 0;
        v1 = (int)(v1 + 1);
    }
    v2 = (int)0;
    while (5 > v2) {
        *(int *)((char *)((char *)o + 0x2c0) + (v2 * 0xc)) = 0;
        ((S_x83792 *)((char *)(int *)((char *)o + 0x2c4) + v2 * 0xc))->f00 = 0.0f;
        *(int *)((char *)((char *)o + 0x2c8) + (v2 * 0xc)) = 0;
        v2 = (int)(v2 + 1);
    }
    ((ObjectData *)o)->f302 = 0;
    ((ObjectData *)o)->f304 = 0;
    ((ObjectData *)o)->f306 = 0xffff;
    ((ObjectData *)o)->f34c = 0;
    ((ObjectData *)o)->fd6 = 1;
    return o;
}
