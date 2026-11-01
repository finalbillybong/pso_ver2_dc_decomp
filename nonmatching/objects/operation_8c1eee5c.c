/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1eee5c
 * function: operation_8c1eee5c
 * language: c
 * reference size: 356 bytes
 * compiled size: 348 bytes (-2.2%)
 * differing lines: 28 of 143 reference instruction lines
 * differing bytes: 112
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct Object Object;
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct S_vv14 S_vv14;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x194];
    volatile unsigned short f1b6;
    char unknown1b8[0x150];
    short f308;
    char unknown30a[0xae];
    Arg0_3b8 *f3b8;
    char unknown3bc[0x14c];
    int f508;
    char unknown50c[0x2d4];
    int f7e0;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
struct S_vv14 {
    char unknown0[0x20];
    int f20;
};
struct Frame {
    unsigned char f00;
    char f01;
    short f02;
    unsigned short f04;
    short f06;
    char f08;
    char f09;
    short f0a;
    int f0c;
};
extern int g_8c418248;
extern int g_8c41cd2c;
extern S_g8c46fe20 *g_8c46fe20;
extern void operation_8c185134(void *);
extern int operation_8c02ad30(void *);
extern void call_8c023950(Object *);
extern int player_flag13_8c02935c(void);
extern void operation_8c0292ec(void);
extern void operation_8c0368a8(void *);
void operation_8c1eee5c(Object *o)
{
    Frame frame;
    unsigned short v1;
    int v2;
    S_vv14 *v14;
    int v15;
    int v18;
    int t1;
    int t2;
    v1 = (unsigned short)o->f20;
    v2 = (int)(v1 == g_8c418248);
    if (v2 != 0) {
        if (g_8c46fe20 != 0) {
            g_8c46fe20->f20 |= 2;
        }
        g_8c41cd2c = 0;
        o->f508 = 0;
        operation_8c185134((void *)(((char *)o + 0x418)));
        t1 = operation_8c02ad30((void *)o);
        if (t1 == 0) {
            o->f7e0 |= 2;
        }
    }
    call_8c023950(o);
    t2 = player_flag13_8c02935c();
    if (t2 != 0) {
        operation_8c0292ec();
    }
    v14 = (S_vv14 *)o->f3b8;
    if (v14 != 0) {
        v15 = (int)(((v14->f20 & 1)) == 0);
        if (v15 == 0) {
            v14->f20 = (unsigned int)v14->f20 >> 1 << 1;
        }
    }
    if (o != 0) {
        v18 = (int)(o->f308 == 2);
        if (v18 != 0) {
            return;
        }
    }
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f00 = 0x3d;
    (&frame)->f01 = 1;
    (&frame)->f04 = 0xffff;
    (&frame)->f06 = 0;
    (&frame)->f00 = 0x89;
    (&frame)->f01 = 2;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = o->f1b6 & 0xffff;
    operation_8c0368a8((void *)(&frame));
    (&frame)->f08 = 0x1a;
    (&frame)->f09 = 1;
    (&frame)->f08 = 0x3d;
    (&frame)->f09 = 1;
    (&frame)->f0c = 0;
    (&frame)->f08 = 0x4d;
    (&frame)->f09 = 2;
    (&frame)->f0a = o->f20;
    (&frame)->f0c = (int)(o->f7e0);
    operation_8c0368a8((void *)(&(&frame)->f08));
}
