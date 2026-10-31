typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2853d8 S_L8c2853d8;
typedef struct Frame Frame;
typedef struct S_g8c2853d8 S_g8c2853d8;
typedef struct S_g8c2853d8_0 S_g8c2853d8_0;
typedef struct Object Object;
typedef struct Arg0_14c Arg0_14c;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_5c Arg0_5c;
typedef struct S_vv20 S_vv20;
typedef struct S_vv20_14c S_vv20_14c;
typedef struct S_vv20_14c_0 S_vv20_14c_0;
typedef struct S_vv21 S_vv21;
typedef struct S_vv32 S_vv32;
typedef struct S_vv32_14c S_vv32_14c;
typedef struct S_vv32_14c_0 S_vv32_14c_0;
typedef struct S_vv33 S_vv33;
typedef struct S_vv7_0 S_vv7_0;
typedef struct S_vv7_0_0 S_vv7_0_0;
typedef struct S_vv8 S_vv8;
typedef struct Block_frame_10 {
    float f00;
    float f04;
    float f08;
} Block_frame_10;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg0_20 *f20;
    float f24;
    float f28;
    float f2c;
    char unknown30[0x28];
    int f58;
    Arg0_5c *f5c;
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
    float f04;
    float f08;
    float f0c;
    Block_frame_10 f10;
    int f1c;
    int f20;
    int f24;
};
struct S_L8c2853d8 {
    char unknown0[0x4];
    int f04;
};
struct S_vv8 {
    char unknown0[0xca];
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
typedef struct Block_frame_1c {
    int f00;
    int f04;
    int f08;
} Block_frame_1c;
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
extern int g_8c305184;
extern Vector3 g_8c305188;
extern Row g_8c2853d8[];
#define ROWS(o) (*(Entry **)((char *)g_8c2853d8 + ((o)->fcc << 3)))
#define COUNT(o) (*(unsigned int *)((char *)&g_8c2853d8[0].count + ((o)->fcc << 3)))
extern void call_8c0b9730(Object *, int, int, int, int);
extern void initialize_effect4_template(void *);
extern int call_8c18e768(int, int);
extern Arg0_14c **call_8c18de4c(int);
extern Arg0_14c *create_effect_785c(void *, void *, int);
extern void call_8c38ade4(void *);
extern void call_8c37df90(int, void *);
extern void call_8c3be280(int, void *, void *);
extern void call_8c38accc(int);
extern Arg0_14c *create_effect_769c(void *, int);
extern int call_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
Object *operation_8c0b11f4(Object *o, int a1, int a2, int a3, int a4)
{
    Block_frame_1c blk;
    Block_frame_10 v;
    Vector3 pos;
    Object **home = &o;
    int n;
    unsigned short fill;
    int slots;
    int sh;
    int i;
    int off;
    int j;
    short s;
    short s2;
    Arg0_14c *p;
    int t;
    Object *base;
    int boff;
    (void)home;
    call_8c0b9730(o, a1, a2, a3, a4);
    o->dispatch = (void *)0x8c265e98;
    o->tag = g_8c305184;
    o->size = 0x194;
    initialize_effect4_template((void *)o);
    fill = 0xffff;
    slots = 0x150;
    for (n = 0; n < 0x20; n++) {
        *(unsigned short *)((char *)((char *)o + slots) + (n << 1)) = fill;
    }
    o->f190 = 0;
    {
        Object *base = o;
        blk.f00 = base->f58;
        blk.f04 = 0;
        blk.f08 = base->f60;
        base->fcc = call_8c18e768(base->fc8, 5);
    }
    o->f14c = call_8c18de4c(COUNT(o) << 2);
    off = 0x14c;
    for (i = 0; base = o, boff = base->fcc << 3, i < *(unsigned int *)((char *)&g_8c2853d8[0].count + boff); i++) {
        sh = i << 3;
        if ((*(int *)((char *)&(*(Entry **)((char *)g_8c2853d8 + boff))->flags + sh) & 2) != 0) {
            *(Arg0_14c **)(*(char **)((char *)o + off) + (i << 2)) = create_effect_785c((void *)((char *)base + 0x24), (void *)&blk, *(int *)((char *)*(Entry **)((char *)g_8c2853d8 + boff) + sh));
        } else {
            *(Vector3 *)&v = g_8c305188;
            call_8c38ade4((void *)0x8c400500);
            call_8c37df90(0, (void *)o->f5c);
            call_8c3be280(0, (void *)&v, (void *)&v);
            call_8c38accc(1);
            pos.x = o->f24 + v.f00;
            pos.y = o->f28 + v.f04;
            pos.z = o->f2c + v.f08;
            *(Arg0_14c **)(*(char **)((char *)o + off) + (i << 2)) = create_effect_769c((void *)&pos, *(int *)((char *)ROWS(o) + sh));
        }
    }
    if (o->fcc == 2) {
        s = o->fca;
        if (s >= 0xf && 0x19 > s) {
            for (j = 0; base = o, j < COUNT(base); j++) {
                if (j == 1) {
                    p = *(Arg0_14c **)((char *)base->f14c + (j << 2));
                    if (p != 0) {
                        p->f44 = 1.3f;
                        p->f48 = 1.3f;
                    }
                }
            }
        } else if (s >= 0x19 && 0x1e > s) {
            for (j = 0; base = o, j < COUNT(base); j++) {
                if (j == 1) {
                    p = *(Arg0_14c **)((char *)base->f14c + (j << 2));
                    if (p != 0) {
                        p->f44 = 1.8f;
                        p->f48 = 1.8f;
                    }
                }
            }
        }
    }
    {
        Object *self = o;
        switch (self->fcc) {
        case 0:
            t = call_8c05fbf8(0x20005, (void *)&self->f24, 0, 0);
            if (t >= 0) {
                emit_control_60320(t, 0x100, 0);
            }
            break;
        case 1:
            call_8c05fbf8(0x20005, (void *)&self->f24, 0, 0);
            break;
        case 2:
            s2 = self->fca;
            if (s2 >= 0xf && 0x19 > s2) {
                t = call_8c05fbf8(0x20005, (void *)&self->f24, 0, 0);
                if (t >= 0) {
                    emit_control_60320(t, -0x180, 0);
                }
            } else if (s2 >= 0x19 && 0x1e > s2) {
                t = call_8c05fbf8(0x20005, (void *)&self->f24, 0, 0);
                if (t >= 0) {
                    emit_control_60320(t, -0x250, 0);
                }
            } else {
                t = call_8c05fbf8(0x20005, (void *)&self->f24, 0, 0);
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
