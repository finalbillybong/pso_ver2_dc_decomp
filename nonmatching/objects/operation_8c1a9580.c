/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a9580
 * function: operation_8c1a9580
 * language: c
 * reference size: 696 bytes
 * compiled size: 696 bytes (+0.0%)
 * differing lines: 146 of 269 reference instruction lines
 * differing bytes: 40
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order; review found and
 *   fixed behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1d0224 S_c8c1d0224;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct Object Object;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x32c];
    int f32c;
    int f330;
    int f334;
    int f338;
    char unknown33c[0x8];
    int f344;
    char unknown348[0x4];
    int f34c;
    int f350;
    int f354;
    int f358;
    int f35c;
    int f360;
    int f364;
    int f368;
    int f36c;
    int f370;
    int f374;
    int f378;
    int f37c;
    int f380;
    int f384;
    char unknown388[0x84];
    int f40c;
    int f410;
};
struct Object {
    char unknown0[0x21];
    char f21;
};
struct S_c8c1d0224 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c467180 *g_8c467180;
extern S_c8c1d0224 *operation_8c1d0224(int, int);
extern void operation_8c1cd38c(void *, int);
extern void operation_8c1d02c0(int, int, int);
extern int operation_8c2097a8(int);
extern int operation_8c2097c4(void);
extern int operation_8c209810(void);
extern void operation_8c1d039c(void *, int);
S_c8c1d0224 *operation_8c1a9580(Object *o, int a1)
{
    S_c8c1d0224 *t1;
    int r;
    t1 = operation_8c1d0224((int)((void *)0x8c288d08), (int)((void *)0x8c288d10));
    switch (a1) {
    case 0:
        operation_8c1cd38c((void *)t1, (int)(g_8c467180->f2c->f32c));
        operation_8c1d02c0((int)t1, (int)(g_8c467180->f2c->f350), 0);
        operation_8c1d02c0((int)t1, (int)(g_8c467180->f2c->f354), 1);
        r = operation_8c2097a8(1);
        break;
    case 1:
        operation_8c1cd38c((void *)t1, (int)(g_8c467180->f2c->f330));
        operation_8c1d02c0((int)t1, (int)(g_8c467180->f2c->f358), 0);
        operation_8c1d02c0((int)t1, (int)(g_8c467180->f2c->f35c), 1);
        r = operation_8c2097a8(2);
        break;
    case 2:
        operation_8c1cd38c((void *)t1, (int)(g_8c467180->f2c->f334));
        operation_8c1d02c0((int)t1, (int)(g_8c467180->f2c->f360), 0);
        operation_8c1d02c0((int)t1, (int)(g_8c467180->f2c->f364), 1);
        r = operation_8c2097a8(4);
        break;
    case 4:
        operation_8c1cd38c((void *)t1, (int)(g_8c467180->f2c->f344));
        operation_8c1d02c0((int)t1, (int)(g_8c467180->f2c->f40c), 0);
        operation_8c1d02c0((int)t1, (int)(g_8c467180->f2c->f410), 1);
        r = operation_8c2097a8(8);
        o->f21 = r;
        break;
    case 3:
        operation_8c1cd38c((void *)t1, (int)(g_8c467180->f2c->f338));
        operation_8c1d02c0((int)t1, (int)(g_8c467180->f2c->f368), 0);
        operation_8c1d02c0((int)t1, (int)(g_8c467180->f2c->f36c), 1);
        operation_8c1d02c0((int)t1, (int)(g_8c467180->f2c->f370), 2);
        operation_8c1d02c0((int)t1, (int)(g_8c467180->f2c->f374), 3);
        r = operation_8c2097c4();
        break;
    case 5:
        operation_8c1cd38c((void *)t1, (int)(g_8c467180->f2c->f34c));
        operation_8c1d02c0((int)t1, (int)(g_8c467180->f2c->f378), 0);
        operation_8c1d02c0((int)t1, (int)(g_8c467180->f2c->f37c), 1);
        operation_8c1d02c0((int)t1, (int)(g_8c467180->f2c->f380), 2);
        operation_8c1d02c0((int)t1, (int)(g_8c467180->f2c->f384), 3);
        r = operation_8c209810();
    }
    operation_8c1d039c((void *)t1, r);
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    return t1;
}
