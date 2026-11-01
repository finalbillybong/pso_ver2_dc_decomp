/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1510c8
 * function: operation_8c1510c8
 * language: c
 * reference size: 384 bytes
 * compiled size: 384 bytes (+0.0%)
 * differing lines: 46 of 134 reference instruction lines
 * differing bytes: 59
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
typedef struct S_g8c4da6c0 S_g8c4da6c0;
typedef struct S_g8c4da6c4 S_g8c4da6c4;
typedef struct S_g8c4da6c8 S_g8c4da6c8;
typedef struct S_g8c4da6cc S_g8c4da6cc;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x13c];
    Arg0_184 *f184;
    char unknown188[0x10];
    short f198;
    short f19a;
    char unknown19c[0x120];
    int f2bc;
    char unknown2c0[0x64];
    Block_p0_324 f324;
    short f330;
    short f332;
    char unknown334[0x26];
    short f35a;
    char unknown35c[0x10];
    void *f36c;
    char unknown370[0x1c];
    int f38c;
    char unknown390[0x18];
    short f3a8;
    short f3aa;
    short f3ac;
};
struct S_g8c4da6c0 {
    char unknown0[0x6];
    short f06;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
extern S_g8c4da6c0 *g_8c4da6c0;
extern S_g8c4da6c4 *g_8c4da6c4;
extern S_g8c4da6c8 *g_8c4da6c8;
extern S_g8c4da6cc *g_8c4da6cc;
extern int call_8c18e8a0(int, int);
extern void call_8c0439bc(Object *, S_g8c4da6c0 *, void *, void *, float, float);
extern void attach_and_insert_object(void *);
extern int rand(void);
void operation_8c1510c8(Object *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    o->f36c = (void *)0x8c315900;
    t3 = call_8c18e8a0((int)(o->f3a8), 4);
    v1 = (int)(t3 != 0);
    g_8c4da6c0->f06 = *(int *)((char *)((char *)g_8c4da6cc + 0x18) + (v1 << 2));
    call_8c0439bc(o, g_8c4da6c0, g_8c4da6c4, g_8c4da6c8, 1.0f, 1.0f);
    v1 = 0x330;
    *(short *)((char *)o + v1) = o->f198;
    o->f332 = o->f19a;
    o->f35a = *(short *)((char *)o + v1);
    o->f38c = 0x2e;
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    if (o->f184 != 0) {
        o->f324.f04 += o->f184->f10 * 0.5f;
    }
    attach_and_insert_object((void *)o);
    t1 = rand();
    o->f3aa = (int)((float)t1 / 32768.0f * 8.0f);
    t2 = rand();
    o->f3ac = (int)((float)t2 / 32768.0f * 3.0f);
    o->f2bc |= 4;
    *(char *)((char *)0x8c4da6ec + (o->f3a8)) = 0;
    o->f34 |= 0x8000;
}
