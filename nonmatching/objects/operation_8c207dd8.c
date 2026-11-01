/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c207dd8
 * function: operation_8c207dd8
 * language: c
 * reference size: 548 bytes
 * compiled size: 544 bytes (-0.7%)
 * differing lines: 44 of 215 reference instruction lines
 * differing bytes: 429
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
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
typedef struct S_L8c504968 S_L8c504968;
typedef struct S_L8c504968_38 S_L8c504968_38;
typedef struct S_L8c5049a4 S_L8c5049a4;
typedef struct S_L8c5049a4_38 S_L8c5049a4_38;
typedef struct Frame Frame;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
typedef struct S_g8c4dbc28 S_g8c4dbc28;
typedef struct S_g8c4dbc28_0 S_g8c4dbc28_0;
typedef struct S_g8c5049e8 S_g8c5049e8;
typedef struct S_g8c5049f4 S_g8c5049f4;
typedef struct S_g8c5049f8 S_g8c5049f8;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
typedef struct S_vv1 S_vv1;
struct Frame {
    Block8 f00;
    Block8 f08;
    int f10;
    char unknown14[0xc];
};
struct S_g8c4dbc28 {
    S_g8c4dbc28_0 *f00;
};
struct S_g8c4dbc28_0 {
    char unknown0[0x50];
    int f50;
};
struct S_vv1 {
    char unknown0[0x20];
    short f20;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
struct S_L8c504968 {
    char unknown0[0x34];
    int f34;
    S_L8c504968_38 *f38;
};
struct Object {
    char unknown0[0x38];
    Arg0_38 *f38;
};
struct S_L8c5049a4 {
    char unknown0[0x34];
    int f34;
    S_L8c5049a4_38 *f38;
};
extern Block8 g_8c335d78;
extern Block8 g_8c335d80;
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d59d8 *g_8c4d59d8;
extern S_g8c4dbc28 *g_8c4dbc28;
extern int g_8c5049e0;
extern int g_8c5049e4;
extern S_g8c5049e8 *g_8c5049e8;
extern int g_8c5049f0;
extern S_g8c5049f4 *g_8c5049f4;
extern S_g8c5049f8 *g_8c5049f8;
extern S_L8c504968 g_8c504968;
extern S_L8c5049a4 g_8c5049a4;
extern char g_8c335da4[];
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
extern void call_8c119c78(void *);
extern void operation_8c0dc610(void *, float);
extern void time_hierarchy_visit(void *);
extern void wait_vsync_and_flip_8c380516(void);
extern void toggle_group_flag_08(void *);
extern void memset_8c12b880(void *, int, int);
extern void strncpy_8c12b154(void *, void *, int);
extern int call_8c12b1c4(void *, void *);
extern int strncmp(int, void *, int);
extern int operator_new_8c18de4c(void *);
extern void operation_8c25decc(int, int);
void operation_8c207dd8(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    if (g_8c5049e8 == 0) {
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c335d78;
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c335d80;
        t1 = create_fitted_pair_grid_view((void *)(&(&frame)->f08), (void *)(&frame));
        g_8c5049e8 = (S_g8c5049e8 *)(int)(t1);
        operation_8c119764(t1, (int)(g_8c4dbc28->f00->f50), 1);
        call_8c119c78(g_8c5049e8);
        operation_8c0dc610(g_8c5049e8, -13000.0f);
        time_hierarchy_visit((void *)((void *)0x8c44bec8));
        wait_vsync_and_flip_8c380516();
        time_hierarchy_visit((void *)((void *)0x8c44bec8));
        wait_vsync_and_flip_8c380516();
        time_hierarchy_visit((void *)((void *)0x8c44bec8));
        wait_vsync_and_flip_8c380516();
        v1 = (S_vv1 *)g_8c46fe20;
        if (v1 != 0) {
            v1->f20 |= 1;
            if (g_8c4d59d8 != 0) {
                g_8c4d59d8->f04 |= 0x10;
            }
        }
        toggle_group_flag_08((void *)((void *)0x8c44bec8));
        g_8c5049f0 = 1;
        g_8c5049f4 = (S_g8c5049f4 *)0;
        g_8c5049f8 = (S_g8c5049f8 *)0;
    }
    if (o != 0) {
        memset_8c12b880((void *)(&(&frame)->f10), 0, 0x10);
        strncpy_8c12b154((void *)(&(&frame)->f10), (void *)(((char *)o + 0x27)), 0x10);
        t2 = call_8c12b1c4((void *)(&(&frame)->f10), (void *)((void *)g_8c335da4));
        if (t2 != 0) {
            t3 = call_8c12b1c4((void *)0, (void *)((g_8c335da4 + 0x2)));
            if (t3 != 0) {
                t4 = strncmp(t3, (void *)((g_8c335da4 + 0x3)), 4);
                if (t4 == 0) {
                    if ((&g_8c504968)->f38 != 0) {
                        return;
                    }
                    strncpy_8c12b154((void *)((void *)&g_8c504968), (void *)(((char *)o + 0x27)), 0x10);
                    (&g_8c504968)->f34 = (int)(o->f38);
                    t5 = operator_new_8c18de4c((void *)(o->f38));
                    (&g_8c504968)->f38 = (S_L8c504968_38 *)t5;
                    memset_8c12b880((void *)((&g_8c504968)->f38), 0, (int)(o->f38));
                    g_8c5049e4 = 0;
                    g_8c5049f4 = (S_g8c5049f4 *)((int)g_8c5049f4 + (int)o->f38);
                    return;
                }
                t6 = strncmp(t3, (void *)((g_8c335da4 + 0x7)), 4);
                if (t6 == 0 && (&g_8c5049a4)->f38 == 0) {
                    strncpy_8c12b154((void *)((void *)&g_8c5049a4), (void *)(((char *)o + 0x27)), 0x10);
                    (&g_8c5049a4)->f34 = (int)(o->f38);
                    t7 = operator_new_8c18de4c((void *)(o->f38));
                    (&g_8c5049a4)->f38 = (S_L8c5049a4_38 *)t7;
                    memset_8c12b880((void *)((&g_8c5049a4)->f38), 0, (int)(o->f38));
                    g_8c5049e0 = 0;
                    g_8c5049f4 = (S_g8c5049f4 *)((int)g_8c5049f4 + (int)o->f38);
                    operation_8c25decc((int)g_8c5049f8, (int)g_8c5049f4);
                }
            }
        }
    }
}
