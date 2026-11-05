/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ab558
 * function: operation_8c0ab558
 * language: c
 * reference size: 424 bytes
 * compiled size: 428 bytes (+0.9%)
 * differing lines: 122 of 198 reference instruction lines
 * differing bytes: 285
 * provenance: generator draft (mode ccastext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and sampled call I/O); not proof
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
    float f48;
    char unknown4c[0x4];
    float f50;
    char unknown54[0x8];
    float f5c;
    char unknown60[0x4];
    float f64;
    float f68;
    float f6c;
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
Object *operation_8c0ab558(Object *o, Arg1 *a1, Arg2 *a2, int a3)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    (void)home;
    ((void (*)(Object *, Arg1 *, int))0x8c0ab3bc)(o, a1, a3);
    o->dispatch = (void *)0x8c265d2c;
    t1 = ((int (*)(void))0x8c12b944)();
    o->f64 = a1->f18 * ((float)t1 / 32768.0f - 0.5f) + a2->f00;
    t2 = ((int (*)(void))0x8c12b944)();
    o->f68 = a1->f1c * ((float)t2 / 32768.0f - 0.5f) + a2->f04;
    t3 = ((int (*)(void))0x8c12b944)();
    o->f6c = a1->f20 * ((float)t3 / 32768.0f - 0.5f) + a2->f08;
    o->f34 = a2->f00;
    o->f38 = a2->f04;
    o->f3c = a2->f08;
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
    o->f5c = a1->f38 * ((float)t6 / 32768.0f) + a1->f30;
    o->f40 = 0.0f;
    o->f44 = 0.0f;
    o->f48 = 0.0f;
    return o;
}
