/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fb540
 * function: TObjEneSlimeTailAttack_ctor_8c0fb540
 * language: c
 * reference size: 340 bytes
 * compiled size: 340 bytes (+0.0%)
 * differing lines: 78 of 125 reference instruction lines
 * differing bytes: 95
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
typedef struct S_g8c470640 S_g8c470640;
typedef struct S_g8c470640_42c S_g8c470640_42c;
typedef struct Object Object;
typedef struct Arg0_390 Arg0_390;
typedef struct Arg2 Arg2;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_42c S_vv2_42c;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0xc];
    int f38;
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x278];
    Arg0_390 *f390;
    int f394;
    int f398;
    float f39c;
    float f3a0;
    float f3a4;
    float f3a8;
};
struct Arg0_390 {
    char unknown0[0x410];
    int f410;
};
struct S_g8c470640 {
    char unknown0[0x42c];
    S_g8c470640_42c *f42c;
};
struct S_vv2 {
    char unknown0[0x42c];
    S_vv2_42c *f42c;
    int f430;
};
struct Arg2 {
    Vector3 f00;
};
extern int g_8c30a610;
extern S_g8c470640 *g_8c470640;
extern void TObjEnemy_ctor_8c012008(void *);
extern void call_8c01c838(Object *, short);
Object *TObjEneSlimeTailAttack_ctor_8c0fb540(Object *o, int a1, Arg2 *a2, int a3, int a4)
{
    Object **home = &o;
    int v1;
    S_vv2 *v2;
    (void)home;
    TObjEnemy_ctor_8c012008((void *)o);
    o->dispatch = (void *)0x8c268a50;
    o->tag = (int)(g_8c30a610);
    o->size = 0x3e8;
    o->f390 = (Arg0_390 *)a4;
    v2 = (S_vv2 *)g_8c470640;
    v1 = (int)(*(int *)((char *)0x8c30a614 + (o->f390->f410 << 2)) << 4);
    o->f28 = (int)(*(int *)((char *)((char *)v2->f42c + 0xc) + (v1)));
    o->f38 = (int)(*(int *)((char *)((char *)v2->f42c + 0x8) + (v1)));
    o->f110 = (void *)0x8c30a2ac;
    o->f110 = (void *)0x8c30a2ac;
    o->f114 = (int)(v2->f430);
    o->f114 = (int)(v2->f430);
    o->ff0 = 6;
    call_8c01c838(o, o->ff0);
    o->f64 = a3;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a2->f00;
    o->f394 = 1;
    o->f398 = 0xffff;
    o->f3a4 = 1.0f;
    o->f3a0 = 1.0f;
    o->f39c = 1.0f;
    o->f3a8 = 1.0f;
    return o;
}
