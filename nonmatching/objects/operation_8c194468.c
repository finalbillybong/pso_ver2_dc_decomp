/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c194468
 * function: operation_8c194468
 * language: c
 * reference size: 264 bytes
 * compiled size: 264 bytes (+0.0%)
 * differing lines: 78 of 103 reference instruction lines
 * differing bytes: 67
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
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_3a0 S_g8c467180_2c_3a0;
typedef struct S_g8c467180_2c_3a4 S_g8c467180_2c_3a4;
typedef struct S_g8c467180_2c_3a8 S_g8c467180_2c_3a8;
typedef struct S_g8c467180_2c_3ac S_g8c467180_2c_3ac;
typedef struct S_g8c467180_2c_3b0 S_g8c467180_2c_3b0;
typedef struct S_g8c467180_2c_3b4 S_g8c467180_2c_3b4;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_1c Arg0_30_1c;
typedef struct Arg0_30_34 Arg0_30_34;
typedef struct Arg0_30_4 Arg0_30_4;
typedef struct Arg0_30_4c Arg0_30_4c;
typedef struct Arg0_30_64 Arg0_30_64;
typedef struct Arg0_30_7c Arg0_30_7c;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x30];
    int f64;
    int f68;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
    Arg0_30_4 *f04;
    char unknown8[0x14];
    Arg0_30_1c *f1c;
    char unknown20[0x14];
    Arg0_30_34 *f34;
    char unknown38[0x14];
    Arg0_30_4c *f4c;
    char unknown50[0x14];
    Arg0_30_64 *f64;
    char unknown68[0x14];
    Arg0_30_7c *f7c;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x3a0];
    S_g8c467180_2c_3a0 *f3a0;
    S_g8c467180_2c_3a4 *f3a4;
    S_g8c467180_2c_3a8 *f3a8;
    S_g8c467180_2c_3ac *f3ac;
    S_g8c467180_2c_3b0 *f3b0;
    S_g8c467180_2c_3b4 *f3b4;
};
struct Arg0_30_0 {
    char unknown0[0x30];
    int f30;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c467180 *g_8c467180;
extern void call_8c0e196c(void *, void *);
extern void call_8c0e2278(void *, void *, int);
extern int lookup_low_id(int);
void operation_8c194468(Object *o)
{
    int t1;
    if ((float)o->f64 > 7.5f) {
        o->f64 = 7;
    }
    call_8c0e196c((void *)(((char *)o + 0x2c)), (void *)((void *)0x8c31a61c));
    call_8c0e2278((void *)(o->f30->f04), (void *)(g_8c467180->f2c->f3a0), 0x20);
    call_8c0e2278((void *)(o->f30->f1c), (void *)(g_8c467180->f2c->f3a4), 0x20);
    call_8c0e2278((void *)(o->f30->f34), (void *)(g_8c467180->f2c->f3a8), 0x20);
    call_8c0e2278((void *)(o->f30->f4c), (void *)(g_8c467180->f2c->f3ac), 0x20);
    call_8c0e2278((void *)(o->f30->f64), (void *)(g_8c467180->f2c->f3b0), 0x20);
    call_8c0e2278((void *)(o->f30->f7c), (void *)(g_8c467180->f2c->f3b4), 0x20);
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        o->f30->f00->f30 = (int)(&o->f68);
        o->f68 = t1 + 0xbbc;
    }
}
