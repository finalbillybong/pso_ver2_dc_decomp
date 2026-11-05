/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1caf6c
 * function: operation_8c1caf6c
 * language: c
 * reference size: 156 bytes
 * compiled size: 156 bytes (+0.0%)
 * differing lines: 4 of 58 reference instruction lines
 * differing bytes: 3
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_44 S_g8c467180_44;
typedef struct S_g8c467180_44_2c S_g8c467180_44_2c;
typedef struct S_g8c467180_44_30 S_g8c467180_44_30;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
struct Frame {
    Block8 f00;
};
struct Object {
    char unknown0[0x28];
    char f28;
    char unknown29[0xf];
    Arg0_38 *f38;
};
struct S_g8c467180 {
    char unknown0[0x44];
    S_g8c467180_44 *f44;
};
struct S_g8c467180_44 {
    char unknown0[0x2c];
    S_g8c467180_44_2c *f2c;
    S_g8c467180_44_30 *f30;
};
extern Block8 g_8c3290a8;
extern S_g8c467180 *g_8c467180;
extern int operation_8c156c24(int, int);
extern void add_wrapper_8c156d30(void *, void *, int, int);
extern void operation_8c15700c(void *, float);
extern void operation_8c1571d4(void *, int);
extern void operation_8c157138(void *);
extern void operation_8c0dc610(void *, float);
void operation_8c1caf6c(Object *o)
{
    Frame frame;
    int t1;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c3290a8;
    t1 = operation_8c156c24((int)(&frame), 2);
    o->f38 = (Arg0_38 *)t1;
    add_wrapper_8c156d30((void *)(o->f38), (void *)(g_8c467180->f44->f2c), 6, 0);
    add_wrapper_8c156d30((void *)(o->f38), (void *)(g_8c467180->f44->f30), 6, 1);
    operation_8c15700c((void *)(o->f38), 442.0f);
    operation_8c1571d4((void *)(o->f38), 1);
    operation_8c157138((void *)(o->f38));
    operation_8c0dc610((void *)(o->f38), 1e-06f);
    o->f28 = 2;
}
