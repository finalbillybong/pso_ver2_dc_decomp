typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_0 S_g8c467180_2c_0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
typedef struct Arg0_9c Arg0_9c;
typedef struct S_vv17 S_vv17;
typedef struct S_vv30 S_vv30;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x8e];
    Arg0_94 *f94;
    int f98;
    Arg0_9c *f9c;
    unsigned short fa0;
    short fa2;
    short fa4;
    short fa6;
    int fa8;
};
struct S_c8c021ef8 {
    char unknown0[0x7ba];
    short f7ba;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct Frame {
    float f00;
    float f04;
    int f08;
    char unknownc[0x8];
};
struct Arg0_94 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x7a];
    unsigned short f80;
};
struct S_vv17 {
    char unknown0[0x4];
    short f04;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct S_vv30 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c467180 *g_8c467180;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c41cba0 g_8c41cba0;
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c15761c(void *);
extern void call_8c156d48(Arg0_94 *, void *, int, int, int);
extern int operation_8c156c24(int, int);
extern void call_8c156f50(Arg0_94 *);
extern void operation_8c157138(void *);
extern int call_8c0b49b0(void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c0b4584(int, void *, int, void *);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern int operation_8c192084(void *, float);
extern int player_flag9_8c026508(void);
extern void operation_8c0b62d4(void *, void *, float);
extern void create_effect_777c(void *, int);
extern void operation_8c026700(int, int);
extern void call_8c05fbf8(int, void *, int, int);
extern void call_8c191f38(Object *);
void operation_8c191b98(Object *o)
{
    Frame frame;
    int v1;
    S_c8c021ef8 *t1;
    int v2;
    int v4;
    S_vv17 *v17;
    short v25;
    S_vv30 *v30;
    int v7;
    int t2;
    int t3;
    int t5;
    int t6;
    S_c8c021ef8 *t7;
    t1 = lookup_low_id((int)(o->fa0 & 0xffff));
    if (t1 != 0) {
        v7 = (int)t1->f7ba;
        v1 = (int)o->f94;
        if (v1 != 0) {
            v7 = (int)t1->f7ba;
            if (t1->f7ba > 0) {
                v4 = (int)t1->f7ba;
                if (o->f98 != t1->f7ba) {
                    v2 = (int)t1->f7ba;
                    operation_8c15761c((void *)v1);
                    o->f98 = (int)(v2);
                    v4 = (int)v2;
                }
                call_8c156d48((Arg0_94 *)(o->f94), (void *)(*(S_g8c467180_2c_0 **)((char *)((char *)g_8c467180->f2c + 0x0) + (*(int *)((char *)0x8c287718 + (v4 << 2)) << 2))), 2, 0, -1);
                v7 = (int)v4;
            }
        }
        if (o->f94 == 0 && v7 > 0) {
            (&frame)->f00 = 400.0f;
            (&frame)->f04 = 250.0f;
            t2 = operation_8c156c24((int)(&frame), 1);
            o->f94 = (Arg0_94 *)t2;
            if (o->f94 != 0) {
                o->f98 = (int)(v7);
                call_8c156d48((Arg0_94 *)(o->f94), (void *)(*(S_g8c467180_2c_0 **)((char *)((char *)g_8c467180->f2c + 0x0) + (*(int *)((char *)0x8c287718 + (v7 << 2)) << 2))), 2, 0, -1);
                o->f94->f80 = (o->f94->f80 & 0xffff) | 0x40;
                call_8c156f50((Arg0_94 *)(o->f94));
                operation_8c157138((void *)(o->f94));
                o->f94->f04 |= 4;
                o->f94->f04 |= 0x10;
                v7 = (int)(v7 << 2);
            }
        }
    }
    if (t1 == 0) {
        if (o->f9c != 0) {
            v17 = (S_vv17 *)o->f9c;
            v17->f04 |= 1;
            o->f9c = (Arg0_9c *)0;
        }
        o->fa8 = 1;
        if (o->f94 != 0) {
            o->f94->f04 |= 4;
            o->f94->f04 |= 0x10;
        }
        return;
    }
    if ((o->fa0 & 0xffff) == 0xffff) {
        return;
    }
    if (!(t1 != 0)) {
        return;
    }
    t3 = call_8c0b49b0((void *)(((char *)t1 + 0x7b8)));
    if (t3 == 0) {
    } else {
        o->fa4 = 1;
        if (o->fa8 != 0 && o->f9c == 0) {
            v7 = allocate_block(g_8c4d97e0, (unsigned int)0x44);
            if (v7 != 0) {
                call_8c0b4584(v7, (void *)(((char *)o + 0x3c)), (int)(o->fa0 & 0xffff), g_8c44bea0);
            }
            o->f9c = (Arg0_9c *)v7;
            o->fa8 = 0;
        }
        call_8c05fd7c(0x20019, o, (void *)(((char *)o + 0x3c)), 0, 0);
        if (o->fa6 != 0) {
            if (o->fa6 == 1) {
                goto L_8c191e98;
            }
            if (o->fa6 == 2) {
                goto L_8c191eb8;
            }
            return;
        }
        t5 = operation_8c192084((void *)o, 10.0f);
        if (t5 == 0) {
            return;
        }
        t6 = player_flag9_8c026508();
        if (t6 != 0) {
            return;
        }
        if ((((&g_8c41cba0)->f28 & 4)) == 0) {
            return;
        }
        o->fa6 = 1;
        operation_8c0b62d4((void *)(((char *)o + 0x3c)), (void *)(&(&frame)->f08), 10.0f);
        create_effect_777c((void *)(&(&frame)->f08), 0xb3);
        t7 = lookup_low_id((int)g_8c418248);
        if (t7 == 0) {
            return;
        }
        operation_8c026700((int)t7, 0xa);
        call_8c05fbf8(0x2001a, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    L_8c191e98:
        ;
        v25 = (short)o->fa2;
        o->fa2 = v25 + 1;
        if (!(v25 > 0xa)) {
            return;
        }
        o->fa6 = 2;
        return;
    L_8c191eb8:
        ;
        call_8c191f38(o);
        o->f04 |= 1;
        return;
    }
    if (o->f94 != 0) {
        o->f94->f04 |= 4;
        o->f94->f04 |= 0x10;
    }
    o->fa4 = 0;
    o->fa6 = 0;
    o->fa2 = 0;
    if (o->f9c != 0) {
        v30 = (S_vv30 *)o->f9c;
        v30->f04 |= 1;
        o->f9c = (Arg0_9c *)0;
    }
    o->fa8 = 1;
}
