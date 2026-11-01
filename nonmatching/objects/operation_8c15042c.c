/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15042c
 * function: operation_8c15042c
 * language: c
 * reference size: 388 bytes
 * compiled size: 388 bytes (+0.0%)
 * differing lines: 106 of 130 reference instruction lines
 * differing bytes: 172
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4da6a0 S_g8c4da6a0;
typedef struct S_g8c4da6a4 S_g8c4da6a4;
typedef struct S_g8c4da6a8 S_g8c4da6a8;
typedef struct Object Object;
typedef struct Arg0_s324 Arg0_s324;
typedef struct Arg0_s78 Arg0_s78;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
typedef struct S_vv1_0_42c S_vv1_0_42c;
typedef struct Block_p0_324 {
    int f00;
    float f04;
    char unknown8[0x4];
} Block_p0_324;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x8];
    int f34;
    int f38;
    Vector3 f3c;
    char unknown48[0x30];
    int f78;
    char unknown7c[0x74];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x80];
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
};
struct Arg0_s324 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s78 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_vv1 {
    S_vv1_0 *f00;
};
struct S_vv1_0 {
    char unknown0[0x42c];
    S_vv1_0_42c *f42c;
    int f430;
};
struct S_vv1_0_42c {
    char unknown0[0x108];
    int f108;
    int f10c;
};
extern S_g8c4da6a0 *g_8c4da6a0;
extern S_g8c4da6a4 *g_8c4da6a4;
extern S_g8c4da6a8 *g_8c4da6a8;
void operation_8c15042c(Object *o)
{
    char *v2;
    char *v3;
    S_vv1 *v1;
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
    v1 = (S_vv1 *)(void *)0x8c4da6b0;
    o->f324.f04 -= 30.0f;
    *(Vector3 *)&o->f78 = *(Vector3 *)&o->f324;
    o->f114 = (int)(v1->f00->f430);
    o->f110 = (void *)0x8c31584c;
    ((void (*)(Object *, void *, int))0x8c052098)(o, (void *)0x8c3158b8, 1);
    o->f384 = 0;
    o->f36c = (void *)0x8c31589c;
    ((void (*)(Object *, void *, void *, void *, float, float))0x8c0439bc)(o, g_8c4da6a0, g_8c4da6a4, g_8c4da6a8, 1.0f, 1.0f);
    o->ff0 = 0;
    ((void (*)(Object *, short))0x8c01c838)(o, o->ff0);
    o->f330 = o->f198;
    o->f332 = o->f19a;
    o->f35a = o->f330;
    o->f38c = 0x2e;
    ((void (*)(Object *))0x8c053f34)(o);
    o->f38 = (int)(v1->f00->f42c->f108);
    o->f28 = (int)(v1->f00->f42c->f10c);
    ((void (*)(Object *))0x8c0c2a64)(o);
    o->f2bc |= 4;
    o->f34 |= 0x8000;
}
