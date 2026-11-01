/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b07b8
 * function: operation_8c0b07b8
 * language: c
 * reference size: 900 bytes
 * compiled size: 900 bytes (+0.0%)
 * differing lines: 40 of 351 reference instruction lines
 * differing bytes: 22
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling; review found and fixed behaviour defects of the
 *   generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c285378 S_L8c285378;
typedef struct Frame Frame;
typedef struct S_g8c285378 S_g8c285378;
typedef struct S_g8c285378_0 S_g8c285378_0;
typedef struct Object Object;
typedef struct Arg0_14c Arg0_14c;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv20 S_vv20;
typedef struct S_vv20_14c S_vv20_14c;
typedef struct S_vv20_14c_0 S_vv20_14c_0;
typedef struct S_vv21 S_vv21;
typedef struct S_vv32 S_vv32;
typedef struct S_vv32_14c S_vv32_14c;
typedef struct S_vv32_14c_0 S_vv32_14c_0;
typedef struct S_vv33 S_vv33;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5_0 S_vv5_0;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg0_20 *f20;
    char unknown24[0x34];
    int f58;
    char unknown5c[0x4];
    int f60;
    char unknown64[0x64];
    short fc8;
    short fca;
    int fcc;
    short fd0;
    char unknownd2[0x7a];
    Arg0_14c **f14c;
};
struct Frame {
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
};
struct S_L8c285378 {
    char unknown0[0x4];
    int f04;
};
struct S_vv4 {
    char unknown0[0x60];
    int f60;
    char unknown64[0x66];
    short fca;
    int fcc;
};
struct S_vv20 {
    char unknown0[0xcc];
    int fcc;
    char unknownd0[0x7c];
    S_vv20_14c *f14c;
};
struct S_vv21 {
    char unknown0[0x44];
    float f44;
    float f48;
};
struct S_vv32 {
    char unknown0[0xcc];
    int fcc;
    char unknownd0[0x7c];
    S_vv32_14c *f14c;
};
struct S_vv33 {
    char unknown0[0x44];
    float f44;
    float f48;
};
struct Arg0_20 {
    char unknown0[0x20];
    short f20;
};
typedef struct Entry {
    int id;
    int flags;
} Entry;
typedef struct Row {
    Entry *entries;
    unsigned int count;
} Row;
struct Arg0_14c {
    char unknown0[0x44];
    float f44;
    float f48;
};
extern int g_8c305168;
extern Row g_8c285378[];
#define ROWS(o) (*(Entry **)((char *)g_8c285378 + ((o)->fcc << 3)))
#define COUNT(o) (*(unsigned int *)((char *)&g_8c285378[0].count + ((o)->fcc << 3)))
extern void call_8c0b9730(Object *, int, int, int, int);
extern void initialize_effect0_template(void *);
extern void create_effect_7ab8(void *, void *, int);
extern int call_8c18e768(int, int);
extern Arg0_14c **operator_new_8c18de4c(int);
extern Arg0_14c *create_effect_785c(void *, void *, int);
extern Arg0_14c *create_effect_769c(void *, int);
extern int play_se_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
Object *operation_8c0b07b8(Object *o, int a1, int a2, int a3, int a4)
{
    Frame frame;
    Object **home = &o;
    int i;
    int k;
    int off;
    int flags;
    int j;
    short s;
    short s2;
    Arg0_14c *p;
    int t;
    Object *base;
    int boff;
    (void)home;
    call_8c0b9730(o, a1, a2, a3, a4);
    o->dispatch = (void *)0x8c265e70;
    o->tag = g_8c305168;
    o->size = 0x150;
    initialize_effect0_template((void *)o);
    frame.f10 = o->f58;
    frame.f14 = 0;
    frame.f18 = o->f60;
    create_effect_7ab8((void *)((char *)o + 0x24), (void *)&frame.f10, 0x18);
    {
        Object *base = o;
        base->fcc = call_8c18e768(base->fc8, 5);
    }
    o->f14c = operator_new_8c18de4c(COUNT(o) << 2);
    off = 0x14c;
    k = 0x8000;
    for (i = 0; base = o, boff = base->fcc << 3, i < *(unsigned int *)((char *)&g_8c285378[0].count + boff); i++) {
        flags = *(int *)((char *)&(*(Entry **)((char *)g_8c285378 + boff))->flags + (i << 3));
        if ((flags & 1) != 0) {
            frame.f04 = base->f58 + k;
            frame.f08 = 0;
            frame.f0c = base->f60;
            *(Arg0_14c **)(*(char **)((char *)o + off) + (i << 2)) = create_effect_785c((void *)((char *)base + 0x24), (void *)&frame.f04, *(int *)((char *)ROWS(base) + (i << 3)));
        } else if ((flags & 2) != 0) {
            *(Arg0_14c **)(*(char **)((char *)o + off) + (i << 2)) = create_effect_785c((void *)((char *)base + 0x24), (void *)&frame.f10, *(int *)((char *)*(Entry **)((char *)g_8c285378 + boff) + (i << 3)));
        } else {
            *(Arg0_14c **)(*(char **)((char *)o + off) + (i << 2)) = create_effect_769c((void *)((char *)base + 0x24), *(int *)((char *)*(Entry **)((char *)g_8c285378 + boff) + (i << 3)));
        }
    }
    if (o->fcc == 2) {
        s = o->fca;
        if (s >= 0xf && 0x19 > s) {
            for (j = 0; base = o, j < COUNT(base); j++) {
                if (1 >= j) {
                    p = *(Arg0_14c **)((char *)base->f14c + (j << 2));
                    if (p != 0) {
                        p->f44 = 1.6f;
                        p->f48 = 1.6f;
                    }
                }
            }
        } else if (s >= 0x19 && 0x1e > s) {
            for (j = 0; base = o, j < COUNT(base); j++) {
                if (1 >= j) {
                    p = *(Arg0_14c **)((char *)base->f14c + (j << 2));
                    if (p != 0) {
                        p->f44 = 2.2f;
                        p->f48 = 2.2f;
                    }
                }
            }
        }
    }
    {
        Object *self = o;
        switch (self->fcc) {
        case 0:
            t = play_se_8c05fbf8(0x20000, (void *)((char *)self + 0x24), 0, 0);
            if (t >= 0) {
                emit_control_60320(t, 0x100, 0);
            }
            break;
        case 1:
            play_se_8c05fbf8(0x20000, (void *)((char *)self + 0x24), 0, 0);
            break;
        case 2:
            s2 = self->fca;
            if (s2 >= 0xf && 0x19 > s2) {
                t = play_se_8c05fbf8(0x20000, (void *)((char *)self + 0x24), 0, 0);
                if (t >= 0) {
                    emit_control_60320(t, -0x180, 0);
                }
            } else if (s2 >= 0x19 && 0x1e > s2) {
                t = play_se_8c05fbf8(0x20000, (void *)((char *)self + 0x24), 0, 0);
                if (t >= 0) {
                    emit_control_60320(t, -0x250, 0);
                }
            } else {
                t = play_se_8c05fbf8(0x20000, (void *)((char *)self + 0x24), 0, 0);
                if (t >= 0) {
                    emit_control_60320(t, -0x100, 0);
                }
            }
            break;
        }
    }
    if (o->f20 != 0) {
        o->fd0 = o->f20->f20;
    }
    return o;
}
