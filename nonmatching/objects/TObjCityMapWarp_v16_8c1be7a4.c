/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1be7a4
 * function: TObjCityMapWarp_v16_8c1be7a4
 * language: c
 * reference size: 208 bytes
 * compiled size: 212 bytes (+1.9%)
 * differing lines: 18 of 80 reference instruction lines
 * differing bytes: 134
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * class header: src/include/classes/TObjCityMapWarp.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_0 S_g8c467180_2c_0;
typedef struct Object Object;
typedef struct Arg0_e8 Arg0_e8;
struct Object {
    char unknown0[0x90];
    int f90;
    char unknown94[0x54];
    Arg0_e8 *fe8;
};
struct Frame {
    float f00;
    float f04;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct Arg0_e8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c467180 *g_8c467180;
extern int operation_8c156c24(int, int);
extern void operation_8c1be874(void *);
extern void call_8c156d48(Arg0_e8 *, void *, int, int, int);
extern void operation_8c156f50(Arg0_e8 *);
extern void operation_8c157138(void *);
void TObjCityMapWarp_v16_8c1be7a4(Object *o)
{
    Frame frame;
    int t1;
    if (o->fe8 == 0) {
        (&frame)->f00 = 450.0f;
        (&frame)->f04 = 150.0f;
        t1 = operation_8c156c24((int)(&frame), 1);
        o->fe8 = (Arg0_e8 *)t1;
        operation_8c1be874((void *)o);
        call_8c156d48((Arg0_e8 *)(o->fe8), (void *)((S_g8c467180_2c_0 **)g_8c467180->f2c)[*(int *)((char *)0x8c288fe0 + (o->f90 << 2))], 0xa, 0, -1);
        o->fe8->f80 = (o->fe8->f80 & 0xffff) | 0x10;
        o->fe8->f80 = (o->fe8->f80 & 0xffff) | 0x40;
        operation_8c156f50((Arg0_e8 *)(o->fe8));
        operation_8c157138((void *)(o->fe8));
    }
}
