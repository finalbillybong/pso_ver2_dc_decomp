/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c105bec
 * function: operation_8c105bec
 * language: c
 * reference size: 140 bytes
 * compiled size: 140 bytes (+0.0%)
 * differing lines: 2 of 56 reference instruction lines
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c4dbc20 S_g8c4dbc20;
typedef struct S_g8c4dbc20_0 S_g8c4dbc20_0;
typedef struct S_g8c4dbc20_0_10 S_g8c4dbc20_0_10;
typedef struct S_g8c4dbc20_0_14 S_g8c4dbc20_0_14;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x8];
    Arg0_30 *f30;
};
struct Frame {
    Block8 f00;
};
struct S_g8c4dbc20 {
    S_g8c4dbc20_0 *f00;
};
struct S_g8c4dbc20_0 {
    char unknown0[0x10];
    S_g8c4dbc20_0_10 *f10;
    S_g8c4dbc20_0_14 *f14;
};
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c4dbc20 *g_8c4dbc20;
extern int operation_8c156c24(int, int);
extern void add_wrapper_8c156d30(Arg0_30 *, void *, int, int);
extern void operation_8c156f50(Arg0_30 *);
extern void operation_8c157138(void *);
void operation_8c105bec(Object *o)
{
    Frame frame;
    int t1;
    if (o->f30 == 0) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c30b634;
        t1 = operation_8c156c24((int)(&frame), 2);
        o->f30 = (Arg0_30 *)t1;
        add_wrapper_8c156d30((Arg0_30 *)(o->f30), (void *)(g_8c4dbc20->f00->f10), 6, 0);
        add_wrapper_8c156d30((Arg0_30 *)(o->f30), (void *)(g_8c4dbc20->f00->f14), 6, 1);
        operation_8c156f50((Arg0_30 *)(o->f30));
        operation_8c157138((void *)(o->f30));
        o->f30->f80 = (o->f30->f80 & 0xffff) | 1;
    }
    o->f24 = 2;
}
