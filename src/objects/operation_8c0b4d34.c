typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c285640 S_L8c285640;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_14c Arg0_14c;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv17 S_vv17;
typedef struct S_vv17_14c S_vv17_14c;
typedef struct S_vv17_14c_0 S_vv17_14c_0;
typedef struct S_vv18 S_vv18;
typedef struct S_vv29 S_vv29;
typedef struct S_vv29_14c S_vv29_14c;
typedef struct S_vv29_14c_0 S_vv29_14c_0;
typedef struct S_vv30 S_vv30;
typedef struct S_vv7_0 S_vv7_0;
typedef struct S_vv7_0_0 S_vv7_0_0;
typedef struct S_vv8 S_vv8;
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
    char unknown150[0x40];
    int f190;
};
struct Frame {
    int f04;
    int f08;
    int f0c;
};
struct S_L8c285640 {
    char unknown0[0x4];
    int f04;
};
struct S_vv8 {
    char unknown0[0xca];
    short fca;
    int fcc;
};
struct S_vv17 {
    char unknown0[0xcc];
    int fcc;
    char unknownd0[0x7c];
    S_vv17_14c *f14c;
};
struct S_vv18 {
    char unknown0[0x44];
    float f44;
    float f48;
};
struct S_vv29 {
    char unknown0[0xcc];
    int fcc;
    char unknownd0[0x7c];
    S_vv29_14c *f14c;
};
struct S_vv30 {
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
extern int g_8c305270;
extern Row g_8c285640[];
#define ROWS(o) (*(Entry **)((char *)g_8c285640 + ((o)->fcc << 3)))
#define COUNT(o) (*(unsigned int *)((char *)&g_8c285640[0].count + ((o)->fcc << 3)))
extern void call_8c0b9730(Object *, int, int, int, int);
extern void call_8c0b572c(Object *);
extern int call_8c18e768(int, int);
extern Arg0_14c **operator_new_8c18de4c(int);
extern Arg0_14c *create_effect_785c(void *, void *, int);
extern Arg0_14c *create_effect_769c(void *, int);
extern int play_se_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
Object *TTecMegid_ctor_1_8c0b4d34(Object *o, int a1, int a2, int a3, int a4)
{
    Frame frame;
    Object **home = &o;
    int n;
    unsigned short fill;
    int slots;
    int sh;
    Entry *e;
    int i;
    int off;
    int lim;
    int j;
    short s;
    short s2;
    Arg0_14c *p;
    int t;
    Object *base;
    int boff;
    (void)home;
    call_8c0b9730(o, a1, a2, a3, a4);
    o->dispatch = (void *)0x8c266060;
    o->tag = g_8c305270;
    o->size = 0x194;
    call_8c0b572c(o);
    fill = 0xffff;
    slots = 0x150;
    for (n = 0; n < 0x20; n++) {
        *(unsigned short *)((char *)((char *)o + slots) + (n << 1)) = fill;
    }
    o->f190 = 0;
    {
        Object *base = o;
        frame.f04 = base->f58;
        frame.f08 = 0;
        frame.f0c = base->f60;
        base->fcc = call_8c18e768(base->fc8, 5);
    }
    o->f14c = operator_new_8c18de4c(COUNT(o) << 2);
    off = 0x14c;
    for (i = 0; base = o, boff = base->fcc << 3, i < *(unsigned int *)((char *)&g_8c285640[0].count + boff); i++) {
        e = *(Entry **)((char *)g_8c285640 + boff);
        sh = i << 3;
        if ((*(int *)((char *)&e->flags + sh) & 2) != 0) {
            *(Arg0_14c **)(*(char **)((char *)o + off) + (i << 2)) = create_effect_785c((void *)((char *)base + 0x24), (void *)&frame.f04, *(int *)((char *)e + sh));
        } else {
            *(Arg0_14c **)(*(char **)((char *)o + off) + (i << 2)) = create_effect_769c((void *)((char *)base + 0x24), *(int *)((char *)e + sh));
        }
    }
    if (o->fcc == 2) {
        s = o->fca;
        if (s >= 0xf && 0x19 > s) {
            for (j = 0, lim = 1; base = o, j < COUNT(base); j++) {
                if (j >= lim) {
                    p = *(Arg0_14c **)((char *)base->f14c + (j << 2));
                    if (p != 0) {
                        p->f44 = 1.6f;
                        p->f48 = 1.6f;
                    }
                }
            }
        } else if (s >= 0x19 && 0x1e > s) {
            for (j = 0, lim = 1; base = o, j < COUNT(base); j++) {
                if (j >= lim) {
                    p = *(Arg0_14c **)((char *)base->f14c + (j << 2));
                    if (p != 0) {
                        p->f44 = 1.6f;
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
            t = play_se_8c05fbf8(0x2000b, (void *)((char *)self + 0x24), 0, 0);
            if (t >= 0) {
                emit_control_60320(t, 0x100, 0);
            }
            break;
        case 1:
            play_se_8c05fbf8(0x2000b, (void *)((char *)self + 0x24), 0, 0);
            break;
        case 2:
            s2 = self->fca;
            if (s2 >= 0xf && 0x19 > s2) {
                t = play_se_8c05fbf8(0x2000b, (void *)((char *)self + 0x24), 0, 0);
                if (t >= 0) {
                    emit_control_60320(t, -0x180, 0);
                }
            } else if (s2 >= 0x19 && 0x1e > s2) {
                t = play_se_8c05fbf8(0x2000b, (void *)((char *)self + 0x24), 0, 0);
                if (t >= 0) {
                    emit_control_60320(t, -0x250, 0);
                }
            } else {
                t = play_se_8c05fbf8(0x2000b, (void *)((char *)self + 0x24), 0, 0);
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
