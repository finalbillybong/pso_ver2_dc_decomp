/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1cacb4
 * function: operation_8c1cacb4
 * language: c
 * reference size: 368 bytes
 * compiled size: 368 bytes (+0.0%)
 * differing lines: 8 of 137 reference instruction lines
 * differing bytes: 14
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
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_44 S_g8c467180_44;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Object {
    char unknown0[0x28];
    char f28;
    char f29;
    char unknown2a[0x2];
    Arg0_2c *f2c;
    Arg0_30 *f30;
    char unknown34[0x2c];
    int f60;
};
struct Frame {
    Block8 f00;
    Block8 f08;
};
struct S_g8c467180 {
    char unknown0[0x44];
    S_g8c467180_44 *f44;
};
struct S_g8c467180_44 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern int replicate_nibble_wrapper_2_8c01d8a8(void *, int);
extern int operation_8c19b054(void);
extern int call_8c372d38(int, void *);
extern void play_se_8c05fbf8(int, int, int, int);
extern void set_global_8c19b290(void);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
extern void operation_8c0dc610(void *, float);
extern void request_resource_release(void *);
extern void operation_8c199b14(void);
extern void operation_8c1b0308(void);
void operation_8c1cacb4(Object *o)
{
    int v8;
    int t1;
    int t2;
    int t3;
    int t4;
    int pm6;
    Arg0_30 *pm5;
    Frame frame;
    int pm7;
    Frame *pm8;
    if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
        t1 = replicate_nibble_wrapper_2_8c01d8a8((void *)(((char *)(0x110 + g_8c41cba0))), 4);
        if (0 == t1) {
            return;
        }
    }
    t1 = o->f60;
    if (!(t1 != 0)) {
        t1 = operation_8c19b054();
        t2 = t1;
        t1 = (int)((char)t2);
        t3 = call_8c372d38(t1, (void *)((void *)0x8c319870));
        switch (t3) {
            case 0:
            play_se_8c05fbf8(0x50001, 0, 0, 0);
            set_global_8c19b290();
            pm7 = 0;
            play_se_8c05fbf8(0x50006, 0, pm7, 0);
            *(Block8 *)&(&frame)->f00 = *(Block8 *)& *(Block8 *)0x8c329098;
            pm8 = &frame;
            *(&(pm8)->f08) = *(Block8 *)& *(Block8 *)0x8c3290a0;
            pm8 = &frame;
            t4 = create_fitted_pair_grid_view((void *)(&frame), (void *)(&(pm8)->f08));
            pm5 = (Arg0_30 *)t4;
            o->f30 = pm5;
            pm5 = o->f30;
            pm6 = (int)(pm5);
            operation_8c119764(pm6, (int)((*(S_g8c467180 **)0x8c467180)->f44->f28), 1);
            operation_8c0dc610((void *)(o->f30), 1e-06f);
            o->f28 = 1;
            return;
            case -1:
            case -0xff:
            case -0xfd:
            break;
            case -0xfb:
            play_se_8c05fbf8(0x50001, 0, 0, 0);
            set_global_8c19b290();
            if (o->f2c != 0) {
                request_resource_release((void *)(o->f2c));
                o->f2c = (Arg0_2c *)0;
            }
            operation_8c199b14();
            operation_8c1b0308();
            pm6 = (int)6;
            t2 = pm6;
            o->f29 = (char)7;
            v8 = t2;
            o->f28 = v8;
        }
    }
}
