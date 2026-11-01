/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0aa7e0
 * function: operation_8c0aa7e0
 * language: c
 * reference size: 668 bytes
 * compiled size: 668 bytes (+0.0%)
 * differing lines: 272 of 301 reference instruction lines
 * differing bytes: 408
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
typedef struct S_g8c466e20 S_g8c466e20;
typedef struct S_g8c466e20_2c S_g8c466e20_2c;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    unsigned short f20;
    char unknown22[0xa];
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    char unknown48[0x8];
    float f50;
    char unknown54[0x8];
    float f5c;
    char unknown60[0x8];
    float f68;
    char unknown6c[0x1e];
    short f8a;
    char unknown8c[0x14];
    float fa0;
    float fa4;
    float fa8;
    int fac;
    int fb0;
};
struct Arg1 {
    char unknown0[0x18];
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    char unknown2c[0x4];
    float f30;
    float f34;
    char unknown38[0x10];
    int f48;
    int f4c;
    char unknown50[0x10];
    float f60;
    float f64;
    float f68;
    char unknown6c[0x8];
    float f74;
    char unknown78[0x10];
    unsigned char f88;
};
struct Arg2 {
    float f00;
    float f04;
    float f08;
};
struct S_g8c466e20 {
    char unknown0[0x2c];
    S_g8c466e20_2c *f2c;
};
struct S_g8c466e20_2c {
    char unknown0[0xc];
    int f0c;
};
Object *operation_8c0aa7e0(Object *o, Arg1 *a1, Arg2 *a2, int a3)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    (void)home;
    ((void (*)(Object *, Arg1 *, int))0x8c0ab3bc)(o, a1, a3);
    o->dispatch = (void *)0x8c265cf4;
    t1 = ((int (*)(void))0x8c12b944)();
    o->fa0 = a1->f18 * 2.0f * ((float)t1 / 32768.0f - 0.5f) + a2->f00;
    t2 = ((int (*)(void))0x8c12b944)();
    o->fa4 = a1->f20 * 2.0f * ((float)t2 / 32768.0f - 0.5f) + a2->f08;
    t3 = ((int (*)(void))0x8c12b944)();
    o->f68 = a1->f1c * 2.0f * ((float)t3 / 32768.0f - 0.5f) + a2->f04;
    o->f34 = a2->f00;
    o->f3c = a2->f08;
    o->f38 = o->f68;
    t4 = ((int (*)(void))0x8c12b944)();
    o->f2c = a1->f28 * ((float)t4 / 32768.0f) + a1->f24;
    o->f30 = o->f2c;
    t5 = ((int (*)(void))0x8c12b944)();
    if (((a1->f88 & 1)) != 0) {
        o->f50 = 1.0f / (float)(*(S_g8c466e20 **)((char *)0x8c466e20 + (o->f20 << 2)))->f2c->f0c;
    } else {
        o->f50 = 1.0f / (float)(int)((float)a1->f4c * ((float)t5 / 32768.0f) + (float)a1->f48);
    }
    t6 = ((int (*)(void))0x8c12b944)();
    o->f40 = a1->f74 * ((float)t6 / 32768.0f) + a1->f30;
    t7 = ((int (*)(void))0x8c12b944)();
    o->f44 = a1->f68 * ((float)t7 / 32768.0f) + a1->f34;
    t8 = ((int (*)(void))0x8c12b944)();
    o->fac = (int)((float)t8 / 32768.0f * 360.0f * 65536.0f / 360.0f);
    t9 = ((int (*)(void))0x8c12b944)();
    o->fa8 = a1->f64 * ((float)t9 / 32768.0f) + a1->f60;
    t10 = ((int (*)(void))0x8c12b944)();
    o->fb0 = (int)((float)t10 / 32768.0f * 360.0f * 65536.0f / 360.0f);
    o->f8a = o->fac;
    t11 = ((int (*)(void))0x8c12b944)();
    o->f5c = (float)t11 / 32768.0f - 0.5f;
    return o;
}
