/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c164fd8
 * function: TObjBoss2CeilJunk_ctor_8c164fd8
 * language: c
 * reference size: 364 bytes
 * compiled size: 364 bytes (+0.0%)
 * differing lines: 16 of 140 reference instruction lines
 * differing bytes: 37
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
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    Vector3 f3c;
    char unknown48[0x4];
    float f4c;
    char unknown50[0x8];
    float f58;
    char unknown5c[0x4];
    int f60;
    int f64;
    char unknown68[0x2c];
    float f94;
    float f98;
    float f9c;
    char unknowna0[0xc];
    int fac;
    int fb0;
    int fb4;
    float fb8;
};
struct Arg2 {
    Vector3 f00;
};
extern int g_8c317430;
extern void TObjectShared_ctor_8c01d1ec(Object *);
extern int rand(void);
extern int query_vector_position_normal(void *, void *, void *);
Object *TObjBoss2CeilJunk_ctor_8c164fd8(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    int t4;
    float v6;
    int pm13;
    char *pm7;
    float pm5;
    int t1;
    float pm11;
    float pm2;
    float pm12;
    int t3;
    float pm14;
    float pm6;
    int pm9;
    TObjectShared_ctor_8c01d1ec(o);
    o->dispatch = (void *)0x8c26f8fc;
    o->tag = (g_8c317430);
    (void)home;
    o->size = (short)0xbc;
    *(&o->f3c) = *(&a2->f00);
    t1 = rand();
    pm14 = 6.0f;
    pm12 = ((float)t1 / 32768.0f) * pm14;
    o->fb0 = (int)(pm12);
    pm7 = (char *)o;
    t1 = query_vector_position_normal((void *)(&o->f3c), (void *)((0x48 + pm7)), (void *)(((char *)o + 0xa0)));
    if (t1 == 0) {
        o->fac = 0;
    } else {
        float pm8;
        o->fac = 2;
        pm8 = *(float *)((char *)0x8c2864b8 + (o->fb0 << 2)) + o->f4c;
        o->f58 = (pm8);
    }
    pm13 = rand();
    t3 = pm13;
    pm12 = (float)t3;
    pm5 = pm12 / 32768.0f * 65536.0f;
    v6 = (pm5);
    pm9 = (int)v6;
    t3 = pm9;
    o->f64 = t3;
    t4 = ((int ( *) ( int ))rand)((int)v6);
    pm11 = (float)t4;
    v6 = pm11 / 32768.0f;
    pm5 = (v6 - 0.5f) * 2.0f;
    o->f60 = (int)(pm5 * 4096.0f);
    pm2 = 0.0f;
    pm6 = 0.0f;
    o->f94 = 0.0f;
    o->f98 = pm6;
    o->f9c = pm2;
    o->fb4 = 0;
    o->fb8 = 1.0f;
    return o;
}
