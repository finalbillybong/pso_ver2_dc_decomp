/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15bf24
 * function: operation_8c15bf24
 * language: c
 * reference size: 296 bytes
 * compiled size: 296 bytes (+0.0%)
 * differing lines: 2 of 128 reference instruction lines
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
typedef struct S_g8c4dbc20_0_20 S_g8c4dbc20_0_20;
typedef struct S_g8c4dbc20_0_24 S_g8c4dbc20_0_24;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x10];
    Arg0_38 *f38;
    char unknown3c[0x8];
    int f44;
};
struct Frame {
    Block8 f00;
};
struct S_g8c4dbc20 {
    S_g8c4dbc20_0 *f00;
};
struct S_g8c4dbc20_0 {
    char unknown0[0x20];
    S_g8c4dbc20_0_20 *f20;
    S_g8c4dbc20_0_24 *f24;
};
struct Arg0_38 {
    char unknown0[0x80];
    volatile unsigned short f80;
};
struct S_vv9 {
    char unknown0[0x80];
    volatile unsigned short f80;
};
extern Block8 g_8c31666c;
extern S_g8c4dbc20 *g_8c4dbc20;
extern int operation_8c156c24(int, int);
extern void operation_8c156d30(Arg0_38 *, void *, int, int);
extern void operation_8c156f50(Arg0_38 *);
extern void operation_8c157138(void *);
extern int operation_8c1571f4(void *);
extern void request_resource_release(void *);
extern void call_8c220b80(int, int);
void operation_8c15bf24(Object *o)
{
    Frame frame;
    S_vv9 *v9;
    int t1;
    int t2;
    switch (o->f44) {
    case 0:
        if (o->f38 == 0) {
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c31666c;
            t1 = operation_8c156c24((int)(&frame), 2);
            o->f38 = (Arg0_38 *)t1;
            operation_8c156d30((Arg0_38 *)(o->f38), (void *)(g_8c4dbc20->f00->f20), 6, 0);
            operation_8c156d30((Arg0_38 *)(o->f38), (void *)(g_8c4dbc20->f00->f24), 6, 1);
            operation_8c156f50((Arg0_38 *)(o->f38));
            operation_8c157138((void *)(o->f38));
            o->f38->f80 = (o->f38->f80 & 0xffff) | 1;
        }
        o->f44 = 1;
        return;
    case 1:
        v9 = (S_vv9 *)o->f38;
        if (v9 != 0) {
            if (((v9->f80 & 0xffff & 2)) != 0) {
                t2 = operation_8c1571f4((void *)v9);
                if (t2 == 0) {
                    o->f24 = 3;
                    request_resource_release((void *)(o->f38));
                    o->f38 = (Arg0_38 *)0;
                }
                if (t2 == 1) {
                    o->f24 = 0xa;
                    request_resource_release((void *)(o->f38));
                    o->f38 = (Arg0_38 *)0;
                }
                o->f44 = 0;
            }
        }
        if (o->f38 != 0) {
            if (((o->f38->f80 & 0xffff & 4)) != 0) {
                call_8c220b80(0x47, 1);
                o->f24 = 0xd;
                request_resource_release((void *)(o->f38));
                o->f38 = (Arg0_38 *)0;
                o->f44 = 0;
            }
        }
    }
}
