/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c127658
 * function: operation_8c127658
 * language: c
 * reference size: 224 bytes
 * compiled size: 224 bytes (+0.0%)
 * differing lines: 18 of 95 reference instruction lines
 * differing bytes: 21
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
typedef struct Arg5 Arg5;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    short f20;
    char unknown22[0xa];
    short f2c;
    short f2e;
    short f30;
    char unknown32[0xa];
    Vector3 f3c;
    char unknown48[0xc];
    Vector3 f54;
    int f60;
    int f64;
    int f68;
    char unknown6c[0x18];
    int f84;
    char unknown88[0x348];
    float f3d0;
    int f3d4;
    float f3d8;
};
struct Arg2 {
    char unknown0[0x2c];
    short f2c;
    short f2e;
    char unknown30[0x24];
    Vector3 f54;
    char unknown60[0x370];
    float f3d0;
    int f3d4;
    float f3d8;
};
struct Arg5 {
    Vector3 f00;
};
extern void TObjEneBalClaw_ctor_8c11dbd0(void *);
extern void call_8c127738(Object *);
extern void set_fields_8c128bb0(void *);
Object *operation_8c127658(Object *o, int a1, Arg2 *a2, int a3, int a4, Arg5 *a5, int a6)
{
    Object **home = &o;
    void *pm1;
    int pm2;
    float pm3;
    TObjEneBalClaw_ctor_8c11dbd0((void *)o);
    o->dispatch = (void *)0x8c26c170;
    o->f20 = (short)a3;
    o->f30 = (short)a4;
    o->f2c = a2->f2c;
    o->f2e = (int)a2->f2e;
    *(&o->f3c) = *(Vector3 *)&a5->f00;
    *(Vector3 *)&o->f54 = *(&a2->f54);
    o->f68 = 0;
    (void)home;
    pm2 = 0;
    o->f60 = pm2;
    o->f64 = a6;
    call_8c127738(o);
    o->f84 = 0;
    a3 = a2->f3d4;
    o->f3d4 = (a3);
    o->f3d8 = a2->f3d8;
    pm3 = a2->f3d0;
    o->f3d0 = pm3;
    pm1 = (void *)o;
    set_fields_8c128bb0(pm1);
    return o;
}
