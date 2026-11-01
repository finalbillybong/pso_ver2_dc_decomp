/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0faf6c
 * function: TObjEneSlimeWaterBomb_ctor_8c0faf6c
 * language: c
 * reference size: 356 bytes
 * compiled size: 356 bytes (+0.0%)
 * differing lines: 44 of 134 reference instruction lines
 * differing bytes: 71
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
typedef struct S_c8c1794c8 S_c8c1794c8;
typedef struct S_g8c30a600 S_g8c30a600;
typedef struct Object Object;
typedef struct Arg0_10 Arg0_10;
typedef struct Arg0_3a8 Arg0_3a8;
typedef struct Arg0_64 Arg0_64;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_3c;
struct Object {
    int tag;
    char unknown4[0xc];
    Arg0_10 *f10;
    char unknown14[0x4];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    Block_p0_3c f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x328];
    float f390;
    float f394;
    float f398;
    char unknown39c[0x4];
    float f3a0;
    int f3a4;
    Arg0_3a8 *f3a8;
    float f3ac;
    int f3b0;
};
struct Arg0_10 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
};
struct Arg0_3a8 {
    char unknown0[0x410];
    int f410;
};
struct S_c8c1794c8 {
    float f00;
};
extern int g_8c30a5fc;
extern void TObjEnemy_ctor_8c012008(void *);
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
extern int create_effect_769c(void *, int, float);
extern S_c8c1794c8 *record30_8c1794c8(int);
Object *TObjEneSlimeWaterBomb_ctor_8c0faf6c(Object *o, int a1, int a2)
{
    Object **home = &o;
    float v1;
    char *v2;
    float t1;
    float t2;
    int t3;
    S_c8c1794c8 *t4;
    (void)home;
    TObjEnemy_ctor_8c012008((void *)o);
    o->dispatch = (void *)0x8c268bbc;
    o->tag = (int)(g_8c30a5fc);
    o->size = 0x3b4;
    o->f3a8 = (Arg0_3a8 *)a2;
    o->f64 = (Arg0_64 *)o->f10->f64;
    *(Vector3 *)&o->f3c = *(Vector3 *)&o->f10->f3c;
    t1 = njSin_8c37eb0c((void *)(o->f64));
    t2 = njCos_8c38c154((void *)(o->f64));
    o->f3c.f00 += t1 * 15.0f;
    v1 = (float)(o->f3c.f04 + 20.0f);
    o->f3c.f04 = v1;
    o->f3c.f08 += t2 * 15.0f;
    o->f390 = t1 * 0.6f;
    o->f394 = 0.0f;
    o->f398 = t2 * 0.6f;
    o->f3a0 = 0.0f;
    t3 = create_effect_769c((void *)(&o->f3c), 0xcf, v1);
    o->f3a4 = (int)(t3);
    v2 = (char *)o->f3a8->f410;
    t4 = record30_8c1794c8((int)(*(S_g8c30a600 **)((char *)0x8c30a600 + ((int)(v2) << 2))));
    o->f3ac = t4->f00;
    if (0.0f > o->f3ac) {
        o->f3ac = 0.0f;
    }
    o->f3b0 = 0;
    return o;
}
