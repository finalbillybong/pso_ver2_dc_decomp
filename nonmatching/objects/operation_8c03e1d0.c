/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03e1d0
 * function: operation_8c03e1d0
 * language: c
 * reference size: 108 bytes
 * compiled size: 108 bytes (+0.0%)
 * differing lines: 20 of 42 reference instruction lines
 * differing bytes: 43
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, instruction or operand order; review found and fixed behaviour defects
 *   of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c462ce4 S_g8c462ce4;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_4 Arg0_4;
struct Object {
    Arg0_0 *tag;
    Arg0_4 *f04;
};
struct Arg0_0 {
    int f00;
};
struct Frame {
    char unknown0[0x4];
    int f04;
};
struct Arg0_4 {
    char unknown0[0x8];
    int f08;
};
extern S_g8c462ce4 *g_8c462ce4;
extern char g_8c2ef0e4[];
void operation_8c03e1d0(Object *o)
{
    int t1;
    Frame frame;
    o->tag->f00 = 0;
    frame.f04 = 0;
    t1 = ((int (*)(Arg0_4 *, void *, void *, Frame *))0x8c03ec84)(o->f04, g_8c462ce4, &frame.f04, &frame);
    if (t1 == 0) {
        ((void (*)(void *, ...))0x8c03ef80)(g_8c2ef0e4 + 0x26a);
    }
    o->tag->f00 = t1;
    o->f04->f08 = o->f04->f08 + 1;
    ((void (*)(Arg0_4 *))0x8c03e264)(o->f04);
}
