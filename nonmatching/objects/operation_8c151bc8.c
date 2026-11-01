/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c151bc8
 * function: operation_8c151bc8
 * language: c
 * reference size: 596 bytes
 * compiled size: 596 bytes (+0.0%)
 * differing lines: 72 of 204 reference instruction lines
 * differing bytes: 75
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
typedef struct S_L8c4da868 S_L8c4da868;
typedef struct S_g8c4da870 S_g8c4da870;
typedef struct S_g8c4da874 S_g8c4da874;
typedef struct S_g8c4da878 S_g8c4da878;
typedef struct S_g8c4da880 S_g8c4da880;
typedef struct S_g8c4da884 S_g8c4da884;
typedef struct S_g8c4da884_42c S_g8c4da884_42c;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Object {
    int tag;
    char unknown4[0x1a];
    short size;
    short f20;
    char unknown22[0x6];
    int f28;
    char unknown2c[0x8];
    int f34;
    int f38;
    Vector3 f3c;
    char unknown48[0xa0];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x6c];
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
    char unknown370[0x14];
    int f384;
    char unknown388[0x4];
    int f38c;
    char unknown390[0x14];
    int f3a4;
    char unknown3a8[0xe8];
    int f490;
    int f494;
};
struct S_g8c4da884 {
    char unknown0[0x42c];
    S_g8c4da884_42c *f42c;
    int f430;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
struct S_g8c4da884_42c {
    char unknown0[0x138];
    int f138;
    int f13c;
};
struct S_g8c4da880 {
    char unknown0[0x18];
    int f18;
};
struct S_L8c4da868 {
    short f00;
    short f02;
    short f04;
};
extern short g_8c313118;
extern int g_8c315ff4;
extern S_g8c4da870 *g_8c4da870;
extern S_g8c4da874 *g_8c4da874;
extern S_g8c4da878 *g_8c4da878;
extern S_g8c4da880 *g_8c4da880;
extern S_g8c4da884 *g_8c4da884;
extern S_L8c4da868 g_8c4da868;
extern void copy_actor_records(void *, void *, int);
extern void call_8c0439bc(Object *, void *, void *, void *, float, float);
extern void call_8c01c838(Object *, short);
extern void attach_and_insert_object(void *);
extern void operation_8c1543e4(void *);
void operation_8c151bc8(Object *o)
{
    int v9;
    int v8;
    int v10;
    o->tag = (int)(g_8c315ff4);
    o->size = 0x52c;
    o->f114 = (int)(g_8c4da884->f430);
    o->f110 = (void *)0x8c315e14;
    copy_actor_records((void *)o, (void *)((void *)0x8c315ec0), 5);
    o->f384 = 0;
    o->f36c = (void *)0x8c315ea4;
    call_8c0439bc(o, g_8c4da870, g_8c4da874, g_8c4da878, 1.0f, 1.0f);
    o->ff0 = 0;
    call_8c01c838(o, o->ff0);
    o->f330 = o->f198;
    o->f332 = o->f19a;
    o->f35a = o->f330;
    o->f38c = 0x2e;
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    if (o->f184 != 0) {
        o->f324.f04 += o->f184->f10 * 0.5f;
    }
    attach_and_insert_object((void *)o);
    o->f38 = (int)(g_8c4da884->f42c->f138);
    o->f28 = (int)(g_8c4da884->f42c->f13c);
    v8 = (int)0;
    while (4 > v8) {
        *(int *)((char *)((char *)o + 0x400) + (v8 << 2)) = 0;
        v8 = (int)(v8 + 1);
    }
    v9 = (int)0;
    while (4 > v9) {
        *(int *)((char *)((char *)o + 0x514) + (v9 << 2)) = 0;
        v9 = (int)(v9 + 1);
    }
    o->fe8 = (unsigned int)o->fe8 >> 1 << 1;
    operation_8c1543e4((void *)o);
    g_8c313118 = o->f20;
    o->f490 = 0;
    o->f494 = 0;
    o->f2bc |= 4;
    if (g_8c4da880->f18 > 0) {
        v10 = (int)0;
        while (4 > v10) {
            *(short *)((char *)((char *)o + 0x4c8) + (v10 << 1)) = *(int *)((char *)&g_8c4da880->f18 + (v10 << 2));
            *(short *)((char *)((char *)o + 0x4d0) + (v10 << 1)) = *(short *)((char *)((char *)o + 0x4c8) + (v10 << 1));
            v10 = (int)(v10 + 1);
        }
        o->f3a4 |= 0x400000;
    }
    o->f34 |= 0x8000;
    (&g_8c4da868)->f04 = 0;
    (&g_8c4da868)->f02 = 0;
    (&g_8c4da868)->f00 = 0;
}
