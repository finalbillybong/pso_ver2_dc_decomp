typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Block4 { int a; } Block4;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x4];
    Arg0_28 *f28;
    char unknown2c[0x4];
    int f30;
    int f34;
    int f38;
    int f3c;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct Frame {
    Block4 f00;
    Block8 f04;
    Block8 f0c;
    Block8 f14;
    Block8 f1c;
    Vector3 f24;
};
struct Arg0_20 {
    char unknown0[0x30];
    char f30;
};
extern Block8 g_8c30115c;
extern Vector3 g_8c301164;
extern Block8 g_8c301170;
extern Block8 g_8c301178;
extern Block8 g_8c301180;
extern Block4 g_8c301188;
extern float g_8c31bf88;
extern S_g8c467180 *g_8c467180;
extern int g_8c46ec14;
extern int call_8c0353ec(Arg0_20 *);
extern float call_8c37eb0c(int);
extern float call_8c12c714(float);
extern int call_8c04b8dc(int);
extern void operation_8c04b230(float, float, int, int);
extern int operation_8c09b33c(void);
extern void operation_1957e0(int, void *);
extern void operation_195830(void);
void operation_8c097b8c(Object *o)
{
    Frame frame;
    float v4;
    float v37;
    int v5;
    int v8;
    char *v9;
    int v6;
    float v12;
    float v7;
    int v28;
    int t1;
    float t2;
    int t3;
    int t4;
    float t5;
    int t6;
    if (*(int *)((char *)((char *)o->f28 + 0x0) + (o->f34 << 2)) == 9) {
        t1 = call_8c0353ec((Arg0_20 *)(o->f20));
        if (t1 == 0) {
            t2 = call_8c37eb0c((int)(o->f3c << 0xa));
            t5 = call_8c12c714(t2);
            v5 = (int)((unsigned int)((1.0f - t5 * 0.35f) * 255.0f) << 0x18 | 0xffffff);
            v37 = g_8c31bf88 * 19.0f;
            v7 = g_8c31bf88 * 396.0f - v37;
            v6 = (int)0x260;
            v8 = (int)0;
            while (2 > v8) {
                v9 = (char *)*(int *)((char *)((char *)g_8c467180->f2c + 0x0) + (v8 + 0x4f << 2));
                t6 = call_8c04b8dc((int)(v9));
                v12 = (float)(float)(unsigned int)(v6 - t6);
                operation_8c04b230(v12, v7, (int)(v9), v5);
                v8 = (int)(v8 + 1);
                v7 += v37;
            }
        }
    }
    switch (o->f30) {
    case 0:
        t3 = operation_8c09b33c();
        if (t3 != 0) {
            if (*(int *)((char *)((char *)o->f28 + 0x0) + (o->f34 << 2)) == 9) {
                t4 = call_8c0353ec((Arg0_20 *)(o->f20));
                if (t4 == 0) {
                    *(Block8 *)&(&frame)->f1c = *(Block8 *)&g_8c30115c;
                    operation_1957e0(2, (void *)(&(&frame)->f1c));
                    return;
                }
            }
            if (o->f20->f30 == -1) {
                {
                    Vector3 *p_ = (Vector3 *)&g_8c301164;
                    *(Vector3 *)&(&frame)->f24 = *p_;
                }
                operation_1957e0(3, (void *)(&(&frame)->f24));
                return;
            }
            *(Block8 *)&(&frame)->f14 = *(Block8 *)&g_8c301170;
            operation_1957e0(2, (void *)(&(&frame)->f14));
            return;
        }
        operation_195830();
        return;
    case 1:
        v28 = (int)*(int *)((char *)((char *)o->f28 + 0x0) + (o->f34 << 2));
        if (v28 != 7) {
            if (v28 == 8) {
                return;
            }
        } else {
            *(Block8 *)&(&frame)->f0c = *(Block8 *)&g_8c301178;
            operation_1957e0(2, (void *)(&(&frame)->f0c));
            return;
        }
        *(Block8 *)&(&frame)->f04 = *(Block8 *)&g_8c301180;
        operation_1957e0(2, (void *)(&(&frame)->f04));
        return;
    case 2:
        if (o->f38 != 0) {
            if (g_8c46ec14 != 2) {
                goto L_8c097d3e;
            }
        }
        (&frame)->f00 = g_8c301188;
        operation_1957e0(1, (void *)(&frame));
        return;
L_8c097d3e:;
        operation_195830();
        return;
    }
    operation_195830();
}
