typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2852d0 S_L8c2852d0;
typedef struct Frame Frame;
typedef struct S_g8c2852d0 S_g8c2852d0;
typedef struct S_g8c2852d0_0 S_g8c2852d0_0;
typedef struct Object Object;
typedef struct Arg0_14c Arg0_14c;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv24 S_vv24;
typedef struct S_vv24_14c S_vv24_14c;
typedef struct S_vv24_14c_0 S_vv24_14c_0;
typedef struct S_vv26 S_vv26;
typedef struct S_vv37 S_vv37;
typedef struct S_vv37_14c S_vv37_14c;
typedef struct S_vv37_14c_0 S_vv37_14c_0;
typedef struct S_vv39 S_vv39;
typedef struct S_vv8 S_vv8;
typedef struct S_vv9_0 S_vv9_0;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg0_20 *f20;
    char unknown24[0x4];
    float f28;
    char unknown2c[0x2c];
    int f58;
    char unknown5c[0x4];
    int f60;
    char unknown64[0x64];
    short fc8;
    short fca;
    int fcc;
    short fd0;
    char unknownd2[0x5e];
    int f130;
    char unknown134[0x18];
    Arg0_14c **f14c;
    char unknown150[0x40];
    int f190;
};
struct Frame {
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
};
struct S_L8c2852d0 {
    char unknown0[0x4];
    int f04;
};
struct S_vv8 {
    char unknown0[0x60];
    int f60;
    char unknown64[0x66];
    short fca;
    int fcc;
};
struct S_vv24 {
    char unknown0[0xcc];
    int fcc;
    char unknownd0[0x7c];
    S_vv24_14c *f14c;
};
struct S_vv26 {
    char unknown0[0x44];
    float f44;
    float f48;
};
struct S_vv37 {
    char unknown0[0xcc];
    int fcc;
    char unknownd0[0x7c];
    S_vv37_14c *f14c;
};
struct S_vv39 {
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
extern int g_8c3047d8;
extern Row g_8c2852d0[];
#define ROWS(o) (*(Entry **)((char *)g_8c2852d0 + ((o)->fcc << 3)))
#define COUNT(o) (*(unsigned int *)((char *)&g_8c2852d0[0].count + ((o)->fcc << 3)))
extern void call_8c0b9730(Object *, int, int, int, int);
extern void call_8c0ad348(Object *);
extern int call_8c18e768(int, int);
extern Arg0_14c **operator_new_8c18de4c(int);
extern Arg0_14c *create_effect_785c(void *, void *, int);
extern Arg0_14c *create_effect_769c(void *, int);
extern int call_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
Object *operation_8c0ac934(Object *o, int a1, int a2, int a3, int a4)
{
    Frame frame;
    Object **home = &o;
    int n;
    unsigned short fill;
    int slots;
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
    o->dispatch = (void *)0x8c265dc8;
    o->tag = g_8c3047d8;
    o->size = 0x194;
    call_8c0ad348(o);
    fill = 0xffff;
    slots = 0x150;
    for (n = 0; n < 0x20; n++) {
        *(unsigned short *)((char *)((char *)o + slots) + (n << 1)) = fill;
    }
    o->f190 = 0;
    o->f130 = 0x80003;
    o->f28 += 5.0f;
    {
        Object *base = o;
        frame.f10 = base->f58;
        frame.f14 = 0;
        frame.f18 = base->f60;
        base->fcc = call_8c18e768(base->fc8, 5);
    }
    o->f14c = operator_new_8c18de4c(COUNT(o) << 2);
    off = 0x14c;
    k = 0x8000;
    for (i = 0; base = o, boff = base->fcc << 3, i < *(unsigned int *)((char *)&g_8c2852d0[0].count + boff); i++) {
        flags = *(int *)((char *)&(*(Entry **)((char *)g_8c2852d0 + boff))->flags + (i << 3));
        if ((flags & 1) != 0) {
            frame.f04 = base->f58 + k;
            frame.f08 = 0;
            frame.f0c = base->f60;
            *(Arg0_14c **)(*(char **)((char *)o + off) + (i << 2)) = create_effect_785c((void *)((char *)base + 0x24), (void *)&frame.f04, *(int *)((char *)ROWS(base) + (i << 3)));
        } else if ((flags & 2) != 0) {
            *(Arg0_14c **)(*(char **)((char *)o + off) + (i << 2)) = create_effect_785c((void *)((char *)base + 0x24), (void *)&frame.f10, *(int *)((char *)*(Entry **)((char *)g_8c2852d0 + boff) + (i << 3)));
        } else {
            *(Arg0_14c **)(*(char **)((char *)o + off) + (i << 2)) = create_effect_769c((void *)((char *)base + 0x24), *(int *)((char *)*(Entry **)((char *)g_8c2852d0 + boff) + (i << 3)));
        }
    }
    if (o->fcc == 2) {
        s = o->fca;
        if (s >= 0xf && 0x19 > s) {
            for (j = 0; base = o, j < COUNT(base); j++) {
                if (j == 0 || j == 3) {
                    p = *(Arg0_14c **)((char *)base->f14c + (j << 2));
                    if (p != 0) {
                        p->f44 = 1.6f;
                        p->f48 = 1.6f;
                    }
                }
            }
        } else if (s >= 0x19 && 0x1e > s) {
            for (j = 0; base = o, j < COUNT(base); j++) {
                if (j == 0 || j == 3) {
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
            t = call_8c05fbf8(0x20004, (void *)((char *)self + 0x24), 0, 0);
            if (t >= 0) {
                emit_control_60320(t, 0x100, 0);
            }
            break;
        case 1:
            call_8c05fbf8(0x20004, (void *)((char *)self + 0x24), 0, 0);
            break;
        case 2:
            s2 = self->fca;
            if (s2 >= 0xf && 0x19 > s2) {
                t = call_8c05fbf8(0x20004, (void *)((char *)self + 0x24), 0, 0);
                if (t >= 0) {
                    emit_control_60320(t, -0x180, 0);
                }
            } else if (s2 >= 0x19 && 0x1e > s2) {
                t = call_8c05fbf8(0x20004, (void *)((char *)self + 0x24), 0, 0);
                if (t >= 0) {
                    emit_control_60320(t, -0x250, 0);
                }
            } else {
                t = call_8c05fbf8(0x20004, (void *)((char *)self + 0x24), 0, 0);
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
