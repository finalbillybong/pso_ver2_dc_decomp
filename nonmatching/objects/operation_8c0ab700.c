/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ab700
 * function: operation_8c0ab700
 * language: c
 * reference size: 488 bytes
 * compiled size: 488 bytes (+0.0%)
 * differing lines: 142 of 225 reference instruction lines
 * differing bytes: 140
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
    char unknown22[0x6];
    unsigned short f28;
    short f2a;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    char unknown4c[0x4];
    float f50;
    char unknown54[0x8];
    float f5c;
    char unknown60[0x4];
    float f64;
    float f68;
    float f6c;
    char unknown70[0x19];
    char f89;
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
    char unknown34[0x4];
    float f38;
    char unknown3c[0xc];
    int f48;
    int f4c;
    char unknown50[0x38];
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
extern void initialize_spawn_base(void *, void *, void *);
extern int rand(void);
Object *operation_8c0ab700(Object *o, Arg1 *a1, Arg2 *a2, int a3, unsigned short a4, unsigned short a5)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    (void)home;
    initialize_spawn_base((void *)o, (void *)a1, (void *)a3);
    o->dispatch = (void *)0x8c265d2c;
    t1 = rand();
    o->f64 = a1->f18 * ((float)t1 / 32768.0f - 0.5f) + a2->f00;
    t2 = rand();
    o->f68 = a1->f1c * ((float)t2 / 32768.0f - 0.5f) + a2->f04;
    t3 = rand();
    o->f6c = a1->f20 * ((float)t3 / 32768.0f - 0.5f) + a2->f08;
    o->f28 = a4;
    if (((o->f28 & 0x80)) != 0) {
        o->f89 = 1;
    }
    o->f2a = a5;
    o->f34 = a2->f00;
    o->f38 = a2->f04;
    o->f3c = a2->f08;
    t4 = rand();
    o->f2c = a1->f28 * ((float)t4 / 32768.0f) + a1->f24;
    o->f30 = o->f2c;
    t5 = rand();
    t5 = (int)((float)a1->f4c * ((float)t5 / 32768.0f) + (float)a1->f48);
    if (((a1->f88 & 1)) != 0) {
        o->f50 = 1.0f / (float)(*(S_g8c466e20 **)((char *)0x8c466e20 + (o->f20 << 2)))->f2c->f0c;
    } else {
        o->f50 = 1.0f / (float)t5;
    }
    t6 = rand();
    o->f5c = a1->f38 * ((float)t6 / 32768.0f) + a1->f30;
    o->f40 = 0.0f;
    o->f44 = 0.0f;
    o->f48 = 0.0f;
    return o;
}
