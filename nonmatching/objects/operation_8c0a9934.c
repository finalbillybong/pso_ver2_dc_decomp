/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a9934
 * function: operation_8c0a9934
 * language: c
 * reference size: 836 bytes
 * compiled size: 844 bytes (+1.0%)
 * differing lines: 182 of 379 reference instruction lines
 * differing bytes: 669
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
 * runtime: suspect on boot+title+opening movie (6 bytes differ, I/O equal); not proof
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
typedef struct Arg3 Arg3;
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
    short f8a;
    int f8c;
    int f90;
    int f94;
    char unknown98[0x8];
    float fa0;
    float fa4;
    float fa8;
};
struct Arg3 {
    int f00;
    int f04;
    int f08;
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
    float f38;
    float f3c;
    char unknown40[0x8];
    int f48;
    int f4c;
    char unknown50[0x4];
    float f54;
    char unknown58[0x30];
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
extern int rand(Object *);
extern void rotate_vector_xz(void *, void *, int);
Object *operation_8c0a9934(Object *o, Arg1 *a1, Arg2 *a2, Arg3 *a3, int a4, unsigned short a5, unsigned short a6)
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
    (void)home;
    initialize_spawn_base((void *)o, (void *)a1, (void *)a4);
    o->dispatch = (void *)0x8c265cd8;
    o->fa0 = 0.0f;
    o->fa4 = 0.0f;
    o->fa8 = 0.0f;
    o->f28 = a5;
    if (((o->f28 & 0x80)) != 0) {
        o->f89 = 1;
    }
    o->f2a = a6;
    o->f8c = (int)(a3->f00);
    o->f90 = (int)(a3->f04);
    o->f94 = (int)(a3->f08);
    t1 = rand(o);
    o->f64 = a1->f18 * ((float)t1 / 32768.0f - 0.5f) + a2->f00;
    t2 = ((int (*)(void))rand)();
    o->f6c = a1->f20 * ((float)t2 / 32768.0f - 0.5f) + a2->f08;
    if (((a1->f88 & 2)) != 0) {
        o->f68 = a2->f04 + a1->f1c;
    } else {
        t3 = ((int (*)(void))rand)();
        o->f68 = a1->f1c * ((float)t3 / 32768.0f - 0.5f) + a2->f04;
    }
    o->f34 = a2->f00;
    o->f3c = a2->f08;
    if (((a1->f88 & 2)) != 0) {
        o->f38 = a2->f04;
    } else {
        o->f38 = a2->f04;
    }
    t4 = ((int (*)(void))rand)();
    o->f2c = a1->f28 * ((float)t4 / 32768.0f) + a1->f24;
    o->f30 = o->f2c;
    t5 = ((int (*)(void))rand)();
    if (((a1->f88 & 1)) != 0) {
        o->f50 = 1.0f / (float)(*(S_g8c466e20 **)((char *)0x8c466e20 + (o->f20 << 2)))->f2c->f0c;
    } else {
        o->f50 = 1.0f / (float)(int)((float)a1->f4c * ((float)t5 / 32768.0f) + (float)a1->f48);
    }
    t6 = ((int (*)(void))rand)();
    o->f40 = a1->f38 * ((float)t6 / 32768.0f) + a1->f30;
    t7 = rand((Object *)(&o->f40));
    o->f44 = a1->f3c * ((float)t7 / 32768.0f) + a1->f34;
    o->f48 = 0.0f;
    t8 = ((int (*)(void))rand)();
    rotate_vector_xz((void *)(&o->f40), (void *)(&o->f40), (int)((int)((float)t8 / 32768.0f * 360.0f * 65536.0f / 360.0f)));
    if (a1->f54 == 0.0f && a1->f34 == 0.0f && a1->f30 == 0.0f) {
        o->f8a = 0;
        o->f5c = 0.0f;
    } else {
        t9 = ((int (*)(void))rand)();
        o->f8a = (int)((float)t9 / 32768.0f * 360.0f * 65536.0f / 360.0f);
        t10 = rand(o);
        o->f5c = (float)t10 / 32768.0f - 0.5f;
    }
    return o;
}
