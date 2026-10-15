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
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
struct Frame {
    Block8 f00;
    Block8 f08;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern Block8 g_8c30bc70;
extern Block8 g_8c30bc78;
extern S_g8c418248 *g_8c418248;
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d59d8 *g_8c4d59d8;
extern int g_8c4d7ca0;
extern S_L8c41cba0 g_8c41cba0;
extern void operation_8c220b34(int, int);
extern void call_8c220b80(int, int);
extern int lookup_low_id(int);
extern void operation_8c0246d0(void *);
extern int operation_8c220ce0(void);
extern void operation_8c024720(void *);
extern void operation_8c220b5c(void);
void operation_8c10aea8(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    if (o->f20 != 0) {
        if (o->f20 == 1) {
            goto L_8c10af30;
        }
        if (o->f20 == 2) {
            goto L_8c10af4a;
        }
        return;
    }
    g_8c4d7ca0 = 1;
    if (g_8c46fe20 != 0) {
        g_8c46fe20->f20 |= 1;
        if (g_8c4d59d8 != 0) {
            g_8c4d59d8->f04 |= 0x10;
        }
    }
    *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c30bc70;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c30bc78;
    operation_8c220b34((int)(&(&frame)->f08), (int)(&frame));
    call_8c220b80(0x24, 1);
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        operation_8c0246d0((void *)t1);
    }
    o->f20 = 1;
    return;
L_8c10af30:;
    t2 = operation_8c220ce0();
    if (t2 != 0 && (((&g_8c41cba0)->f28 & 4)) != 0) {
        o->f20 = 2;
        return;
L_8c10af4a:;
        t3 = lookup_low_id((int)g_8c418248);
        if (t3 != 0) {
            operation_8c024720((void *)t3);
        }
        operation_8c220b5c();
        if (g_8c46fe20 != 0) {
            g_8c46fe20->f20 = (unsigned int)g_8c46fe20->f20 >> 1 << 1;
            if (g_8c4d59d8 != 0) {
                g_8c4d59d8->f04 &= -0x11;
            }
        }
        g_8c4d7ca0 = 0;
        o->f04 |= 1;
    }
}
