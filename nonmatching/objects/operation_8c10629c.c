/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10629c
 * function: operation_8c10629c
 * language: c
 * reference size: 256 bytes
 * compiled size: 256 bytes (+0.0%)
 * differing lines: 2 of 108 reference instruction lines
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
typedef struct S_g8c4dbc20_0_18 S_g8c4dbc20_0_18;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x4];
    Arg0_2c *f2c;
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
    char unknown14[0x4];
    S_g8c4dbc20_0_18 *f18;
};
struct Arg0_2c {
    char unknown0[0x80];
    volatile unsigned short f80;
};
struct S_vv9 {
    char unknown0[0x80];
    volatile unsigned short f80;
};
extern Block8 g_8c30b664;
extern S_g8c4dbc20 *g_8c4dbc20;
extern int operation_8c156c24(int, int);
extern void add_wrapper_8c156d30(Arg0_2c *, void *, int, int);
extern void operation_8c156f50(void *);
extern void operation_8c157138(void *);
extern int operation_8c1571f4(void *);
extern void request_resource_release(void *);
extern void call_8c220b80(int, int);
void operation_8c10629c(Object *o)
{
    Frame frame;
    S_vv9 *v9;
    int t1;
    int t2;
    if (o->f2c == 0) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c30b664;
        t1 = operation_8c156c24((int)(&frame), 2);
        o->f2c = (Arg0_2c *)t1;
        add_wrapper_8c156d30(o->f2c, (void *)(g_8c4dbc20->f00->f10), 6, 0);
        add_wrapper_8c156d30(o->f2c, (void *)((*g_8c4dbc20).f00->f18), 6, 1);
        operation_8c156f50((void *)(o->f2c));
        operation_8c157138((void *)(o->f2c));
        o->f2c->f80 = (o->f2c->f80 & 0xffff) | 1;
    }
    v9 = (S_vv9 *)o->f2c;
    if (v9 != 0 && ((v9->f80 & 0xffff & 2)) != 0) {
        t2 = operation_8c1571f4((void *)v9);
        if (t2 == 0) {
            o->f24 = 3;
            request_resource_release((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
            return;
        }
        if (t2 == 1) {
            o->f24 = 4;
            request_resource_release((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
            return;
        }
    }
    if (o->f2c != 0 && ((o->f2c->f80 & 0xffff & 4)) != 0) {
        call_8c220b80(0x2b, 1);
        o->f24 = 9;
        request_resource_release((void *)(o->f2c));
        o->f2c = (Arg0_2c *)0;
    }
}
