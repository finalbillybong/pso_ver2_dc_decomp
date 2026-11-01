/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d3f58
 * function: operation_8c1d3f58
 * language: c
 * reference size: 288 bytes
 * compiled size: 288 bytes (+0.0%)
 * differing lines: 32 of 112 reference instruction lines
 * differing bytes: 119
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
typedef struct S_c8c254f6c S_c8c254f6c;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct Object Object;
typedef struct Arg0_80 Arg0_80;
typedef struct S_vv13 S_vv13;
typedef struct S_vv5 S_vv5;
struct Frame {
    int f00;
    int f04;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x348];
    int f348;
};
struct Object {
    char unknown0[0x80];
    Arg0_80 *f80;
};
struct S_vv13 {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_vv5 {
    unsigned short f00;
    unsigned short f02;
};
struct S_c8c254f6c {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c467180 *g_8c467180;
extern int g_8c4db9e4;
extern int operation_8c2097a8(int);
extern S_c8c254f6c *TWindowChoiceSetting_ctor_8c254f6c(int, int, int);
extern void operation_8c1dc270(void *, int);
extern int operation_8c1d45b4(int, int);
extern void operation_8c1dc47c(void *, int, int, int);
extern int operation_8c1d45d0(Object *, int, int);
extern void operation_8c1dc50c(S_c8c254f6c *, int);
S_c8c254f6c *operation_8c1d3f58(Object *o)
{
    Frame frame;
    int v4;
    char *v12;
    int v3;
    S_vv13 *v13;
    S_c8c254f6c *t1;
    S_vv5 *v5;
    char *v2;
    unsigned short v14;
    char *v1;
    int v6;
    int t3;
    int t4;
    (&frame)->f00 = (int)(g_8c4db9e4);
    v2 = (char *)operation_8c2097a8(0x40000);
    t1 = TWindowChoiceSetting_ctor_8c254f6c((int)((void *)0x8c2893d8), (int)((void *)0x8c2893e0), 6);
    operation_8c1dc270((void *)t1, (int)(g_8c467180->f2c->f348));
    v12 = (char *)g_8c467180->f2c->f348;
    v1 = (char *)v12;
    t3 = operation_8c1d45b4((int)o, (int)(v2));
    operation_8c1dc47c((void *)t1, (int)(v1), t3, 0);
    v13 = (S_vv13 *)o->f80;
    (&frame)->f04 = v13->f01;
    v3 = (int)-1;
    v4 = (int)0;
    v5 = (S_vv5 *)((int)v13 + 4);
    while ((&frame)->f04 > v4) {
        if (v5->f00 == 0) {
            v3 = (int)(v3 + 1);
            v14 = (unsigned short)0x1f4;
            if (!((unsigned int)v5->f02 < v14)) {
                v6 = (int)v5->f02;
                t4 = operation_8c1d45d0(o, (int)((&frame)->f00 + 0x128c), v3);
                operation_8c1dc47c((void *)t1, (int)((int)v5 + 4), t4, (int)((unsigned short)v6));
                if (v2 != 0) {
                    operation_8c1dc50c(t1, (int)(v5->f02));
                }
            }
        }
        v4 = (int)(v4 + 1);
        v5 = (S_vv5 *)((char *)v5 + 32);
    }
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    return t1;
}
