/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1948b0
 * function: operation_8c1948b0
 * language: c
 * reference size: 216 bytes
 * compiled size: 216 bytes (+0.0%)
 * differing lines: 18 of 81 reference instruction lines
 * differing bytes: 39
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
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_3cc S_g8c467180_2c_3cc;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_18 Arg0_30_18;
typedef struct Arg0_30_24 Arg0_30_24;
typedef struct Arg0_30_30 Arg0_30_30;
typedef struct Arg0_30_3c Arg0_30_3c;
typedef struct Arg0_30_c Arg0_30_c;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x30];
    int f64;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
    char unknown4[0x8];
    Arg0_30_c *f0c;
    char unknown10[0x8];
    Arg0_30_18 *f18;
    char unknown1c[0x8];
    Arg0_30_24 *f24;
    char unknown28[0x8];
    Arg0_30_30 *f30;
    char unknown34[0x8];
    Arg0_30_3c *f3c;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x3cc];
    S_g8c467180_2c_3cc *f3cc;
};
struct Arg0_30_c {
    char unknown0[0x20];
    int f20;
};
struct S_g8c4db9e4 {
    char unknown0[0x11ac];
    unsigned short f11ac;
    unsigned short f11ae;
    unsigned short f11b0;
    unsigned short f11b2;
    unsigned short f11b4;
};
struct Arg0_30_18 {
    char unknown0[0x20];
    int f20;
};
struct Arg0_30_24 {
    char unknown0[0x20];
    int f20;
};
struct Arg0_30_30 {
    char unknown0[0x20];
    int f20;
};
struct Arg0_30_3c {
    char unknown0[0x20];
    int f20;
};
extern void call_8c0e196c(void *, void *);
extern void call_8c0e2278(void *, void *, int);
extern int operation_8c244bd8(void);
void operation_8c1948b0(Object *o)
{
    int v3;
    int v4;
    int t1;
    if ((float)o->f64 > 7.5f) {
        o->f64 = 7;
    }
    call_8c0e196c((void *)(((char *)o + 0x2c)), (void *)((void *)0x8c31add4));
    call_8c0e2278((void *)(o->f30->f00), (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f3cc), 0);
    o->f30->f0c->f20 = (*(S_g8c4db9e4 **)0x8c4db9e4)->f11ac & 0xffff;
    o->f30->f18->f20 = (*(S_g8c4db9e4 **)0x8c4db9e4)->f11ae & 0xffff;
    o->f30->f24->f20 = (*(S_g8c4db9e4 **)0x8c4db9e4)->f11b0 & 0xffff;
    o->f30->f30->f20 = (*(S_g8c4db9e4 **)0x8c4db9e4)->f11b2 & 0xffff;
    v3 = (int)((*(S_g8c4db9e4 **)0x8c4db9e4)->f11b4 & 0xffff);
    t1 = operation_8c244bd8();
    v4 = (int)v3;
    if (t1 != 0) {
        v4 = (int)(v3 + -1);
    }
    o->f30->f3c->f20 = (int)(v4);
}
