typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
typedef struct Arg0_7c_94 Arg0_7c_94;
typedef struct Block_p0_b0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_b0;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x18];
    float f44;
    char unknown48[0x1a];
    short f62;
    char unknown64[0x4];
    short f68;
    short f6a;
    char unknown6c[0x10];
    Arg0_7c *f7c;
    unsigned int f80;
    int f84;
    char unknown88[0xe];
    short f96;
    char unknown98[0x18];
    Block_p0_b0 fb0;
    char unknownbc[0x18];
    Vector3 fd4;
    Vector3 fe0;
};
struct Arg0_7c {
    char unknown0[0x94];
    Arg0_7c_94 *f94;
};
struct Arg0_7c_94 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x2c8];
    int f310;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
extern int g_8c4d7ce0;
extern void operation_8c1102b8(void *);
extern void operation_8c110278(void *, int);
extern float call_8c37e480(Frame *);
extern void operation_8c10d684(void *);
extern void operation_8c10d71c(void *);
extern void call_8c10d790(Object *);
extern void operation_8c110e98(void *, int);
void operation_8c10d42c(Object *o)
{
    Frame frame;
    int v10;
    int v15;
    float t1;
    Arg0_7c_94 *p;
    if (((o->f84 & 4)) != 0 && ((g_8c4d7ce0 & 2)) == 0) {
        operation_8c1102b8((void *)o);
    }
    p = o->f7c->f94;
    v10 = (int)(((p->f310 & 2)) != 0);
    if (v10 == 0) {
        return;
    }
    switch (o->f80) {
    case 0:
        *(Vector3 *)&o->fd4 = *(Vector3 *)&o->fe0;
        *(Vector3 *)&o->fb0 = *(Vector3 *)&o->fe0;
        o->f68 += 1;
        if (o->f68 == 0x1519) {
            o->f84 &= -5;
            o->f28 = 0x19;
            o->f68 = 0;
        }
        if (o->f68 >= 0x1518) {
            o->f68 = 0x1518;
            v15 = (int)1;
        } else {
            v15 = (int)0;
        }
        if (v15 == 0) {
            goto L_8c10d5ea;
        }
        operation_8c110278((void *)o, 0xb);
        v10 = (int)&o->fe0;
        break;
    case 1:
        (&frame)->f00 = o->fb0.f00 - p->f3c;
        (&frame)->f04 = 0.0f;
        (&frame)->f08 = o->fb0.f08 - o->f7c->f94->f44;
        t1 = call_8c37e480((Frame *)((&frame)));
        if (!(t1 > 1.0f)) {
            return;
        }
        if (((o->f7c->f94->f34 & 0x100000)) != 0) {
            operation_8c10d684((void *)o);
            goto L_8c10d5ea;
        }
        if (!(t1 > o->f44)) {
            if (((o->f84 & 8)) == 0) {
                operation_8c10d684((void *)o);
                goto L_8c10d5ea;
            }
            operation_8c10d71c((void *)o);
            goto L_8c10d5ea;
        }
        o->f84 |= 8;
        operation_8c10d71c((void *)o);
        break;
    case 2:
        call_8c10d790(o);
        break;
    case 8:
        operation_8c110e98((void *)o, (int)(o->f96));
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        break;
    }
L_8c10d5ea:;
    if (o->f80 != 2) {
        o->f62 = 0;
        o->f6a = 0;
        o->f84 &= -0x8001;
    }
    if (o->f80 != 1) {
        o->f84 &= -9;
    }
    if (o->f80 != 0) {
        o->f68 = 0;
    }
}
