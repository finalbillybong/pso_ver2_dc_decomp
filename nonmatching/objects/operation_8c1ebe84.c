/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ebe84
 * function: operation_8c1ebe84
 * language: c
 * reference size: 220 bytes
 * compiled size: 220 bytes (+0.0%)
 * differing lines: 4 of 88 reference instruction lines
 * differing bytes: 2
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
typedef struct S_c8c0541b4 S_c8c0541b4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct S_vv26 S_vv26;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x42];
    int f64;
    char unknown68[0x2a0];
    short f308;
    char unknown30a[0xae];
    Arg0_3b8 *f3b8;
};
struct S_vv26 {
    char unknown0[0x450];
    unsigned short f450;
    short f452;
};
struct S_c8c0541b4 {
    char unknown0[0xdc];
    int fdc;
};
struct Arg0_3b8 {
    char unknown0[0x452];
    short f452;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
};
extern S_c8c0541b4 *operation_8c0541b4(int, short);
extern int angle_between_xz(void *, void *);
extern int operation_8c029b3c(int, int);
extern int operation_8c1aaadc(void *);
extern void operation_8c036840(int);
void operation_8c1ebe84(Object *o)
{
    Frame frame;
    S_vv26 *v26;
    int v1;
    int v3;
    S_c8c0541b4 *t1;
    int t2;
    int t3;
    int t4;
    v26 = (S_vv26 *)o->f3b8;
    if (v26 != 0) {
        t1 = operation_8c0541b4((int)(v26->f450), v26->f452);
        if (t1 != 0) {
            t4 = angle_between_xz((void *)(((char *)o + 0x3c)), (void *)(t1->fdc + o->f3b8->f452 * 0x2c + 0x1c));
            v1 = (int)t4;
        } else {
            v1 = (int)o->f64;
        }
        t2 = operation_8c029b3c((int)o, v1);
        if (o != 0) {
            v3 = (int)(o->f308 == 2);
            if (v3 != 0) {
                return;
            }
        }
        (&frame)->f00 = 0x1a;
        (&frame)->f01 = 1;
        (&frame)->f00 = 0x3d;
        (&frame)->f01 = 1;
        (&frame)->f04 = 0;
        (&frame)->f06 = 0;
        (&frame)->f00 = 0x45;
        (&frame)->f01 = 2;
        (&frame)->f02 = o->f20;
        (&frame)->f04 = t2;
        t3 = operation_8c1aaadc((void *)(((char *)o + 0x754)));
        (&frame)->f06 = t3;
        operation_8c036840((int)(&frame));
    }
}
