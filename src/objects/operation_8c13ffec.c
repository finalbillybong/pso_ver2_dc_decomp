typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_40 Arg0_40;
typedef struct Arg0_48 Arg0_48;
typedef struct Arg0_4c Arg0_4c;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_60_10 Arg0_60_10;
typedef struct Arg0_60_14 Arg0_60_14;
typedef struct Arg0_60_18 Arg0_60_18;
struct Object {
    char unknown0[0x3c];
    Arg0_3c *f3c;
    Arg0_40 *f40;
    int f44;
    Arg0_48 *f48;
    Arg0_4c *f4c;
    char unknown50[0xc];
    int f5c;
    Arg0_60 *f60;
    int f64;
    int f68;
    char unknown6c[0x24];
    int f90;
};
struct Arg0_48 {
    int f00;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    int f0c;
    Arg0_40 *f10;
    int f14;
    Arg0_4c *f18;
    int f1c;
    int f20;
    Arg0_40 *f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    Arg0_40 *f38;
    int f3c;
    Arg0_48 *f40;
    int f44;
    int f48;
    Arg0_40 *f4c;
};
struct Arg0_60 {
    char unknown0[0x10];
    Arg0_60_10 *f10;
    Arg0_60_14 *f14;
    Arg0_60_18 *f18;
    int f1c;
};
struct Arg0_4c {
    int f00;
    int f04;
    int f08;
};
struct Arg0_3c {
    char unknown0[0x3e];
    short f3e;
    short f40;
};
struct Arg0_40 {
    int f00;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4d9e20;
extern int g_8c4d9e24;
extern char g_8c2f5b38[];
extern int operation_8c034c7c(void *);
extern void call_8c13f454(int);
extern int allocate_block(void *, unsigned int);
extern void operation_8c13f504(void *, int, void *);
void operation_8c13ffec(Object *o)
{
    Frame frame;
    int v1;
    int v14;
    int v15;
    int v26;
    int v36;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    o->f5c = (int)(&o->f4c->f08);
    t1 = operation_8c034c7c((void *)(o->f3c));
    o->f60 = (Arg0_60 *)(t1 * 0x2c + g_8c2f5b38);
    v1 = (int)o->f44;
    if (g_8c4d9e20 != 0) {
        call_8c13f454(v1);
        if (4 > v1) {
            *(int *)((char *)0x8c4d9e28 + (v1 << 2)) = g_8c4d9e20 + v1 * 0x9500;
        } else {
            *(int *)((char *)0x8c4d9e38 + (v1 + -4 << 2)) = g_8c4d9e24 + (v1 + -4) * 0x9500;
        }
    }
    o->f48->f00 = 0;
    (&frame)->f3c = (int)(o->f60->f1c);
    (&frame)->f40 = o->f48;
    (&frame)->f44 = (int)(o->f44);
    (&frame)->f48 = 0x40;
    (&frame)->f4c = o->f40;
    t2 = allocate_block(g_8c4d97e0, (unsigned int)0x7c);
    if (t2 != 0) {
        operation_8c13f504((void *)t2, (int)o, (void *)(&(&frame)->f3c));
    }
    if (t2 == 0) {
        return;
    }
    o->f4c->f08 = 0;
    (&frame)->f28 = (int)(*(int *)((char *)((char *)o->f60->f18 + 0x0) + (o->f3c->f3e << 2)));
    (&frame)->f2c = (int)(&o->f4c->f08);
    (&frame)->f30 = (int)(o->f44);
    (&frame)->f34 = 0x20;
    (&frame)->f38 = o->f40;
    t3 = allocate_block(g_8c4d97e0, (unsigned int)0x7c);
    if (t3 != 0) {
        operation_8c13f504((void *)t3, (int)o, (void *)(&(&frame)->f28));
    }
    if (t3 == 0) {
        return;
    }
    v14 = o->f3c->f40;
    o->f4c->f00 = 0;
    if (o->f60->f10 != 0 && (v15 = *(int *)((char *)o->f60->f10 + (v14 << 2))) != 0) {
        (&frame)->f14 = (int)(v15);
        (&frame)->f18 = o->f4c;
        (&frame)->f1c = (int)(o->f44);
        (&frame)->f20 = 0x10;
        (&frame)->f24 = o->f40;
        t4 = allocate_block(g_8c4d97e0, (unsigned int)0x7c);
        if (t4 != 0) {
            operation_8c13f504((void *)t4, (int)o, (void *)(&(&frame)->f14));
        }
        if (t4 != 0) {
        } else {
            return;
        }
    } else {
        o->f40->f00 &= -0x11;
    }
    o->f4c->f04 = 0;
    if (o->f60->f14 != 0 && (v26 = *(int *)((char *)o->f60->f14 + (v14 << 2))) != 0) {
        (&frame)->f00 = (int)(v26);
        (&frame)->f04 = (int)(&o->f4c->f04);
        (&frame)->f08 = (int)(o->f44);
        (&frame)->f0c = 8;
        (&frame)->f10 = o->f40;
        t5 = allocate_block(g_8c4d97e0, (unsigned int)0x7c);
        if (t5 != 0) {
            operation_8c13f504((void *)t5, (int)o, (void *)(&frame));
        }
        if (t5 != 0) {
        } else {
            return;
        }
    } else {
        o->f40->f00 &= -9;
    }
    v36 = (int)0;
    while (6 > v36) {
        *(int *)((char *)((char *)o + 0x78) + (v36 << 2)) = 0;
        v36 = (int)(v36 + 1);
    }
    o->f64 = 0;
    o->f90 = 0;
    o->f68 = 0x1518;
}
