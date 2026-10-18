typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_6c Arg0_6c;
typedef struct Arg0_6c_428 Arg0_6c_428;
typedef struct Arg0_6c_42c Arg0_6c_42c;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    int f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
    char unknown30[0x3c];
    Arg0_6c *f6c;
    int f70;
    char unknown74[0x4];
    int f78;
};
struct Arg0_6c {
    int f00;
    char unknown4[0x424];
    Arg0_6c_428 *f428;
    Arg0_6c_42c *f42c;
};
struct Arg0_6c_42c {
    char unknown0[0x8];
    int f08;
};
struct Arg0_20 {
    int f00;
};
struct Arg0_2c {
    int f00;
};
extern void call_8c03dc40(Arg0_6c *, int);
extern int call_8c011ecc(int);
extern int call_8c13f47c(void *, int);
extern void call_8c03d360(int, int, void *, void *, int, int, int);
void operation_8c13f708(Object *o)
{
    int v3;
    char *v50;
    int v4;
    int t1;
    int t2;
    if (!(--o->f78 >= 0)) {
        if (o->f6c != 0) {
            call_8c03dc40((Arg0_6c *)(o->f6c), 1);
        } else {
            return;
        }
        t1 = call_8c011ecc(0x440);
        if (t1 != 0) {
            t2 = call_8c13f47c((void *)(o->f28), 0);
            call_8c03d360(t1, 6, (void *)(((char *)o + 0x64)), (void *)(((char *)o + 0x68)), 0, 0, t2);
        }
        o->f6c = (Arg0_6c *)t1;
        if (t1 == 0) {
            return;
        }
        o->f78 = 0x12c;
        return;
    }
    v3 = (int)(((o->f6c->f00 & 0x400)) != 0);
    if (v3 != 0) {
        v50 = (char *)o->f6c->f42c->f08;
        o->f20->f00 = (int)(v50);
        if (v50 != 0) {
            call_8c13f47c((void *)(o->f28), (int)(o->f6c->f428));
            call_8c03dc40((Arg0_6c *)(o->f6c), 1);
            o->f6c = (Arg0_6c *)0;
            v4 = (int)*(int *)0x8c4d9e58;
            if (v4 >= 0 && !(v4 > 1) && o->f70 != 0) {
                *(int *)0x8c4d9e58 = v4 + -1;
                o->f70 = 0;
            }
            o->f2c->f00 &= ~o->f24;
            o->f04 |= 1;
        }
    }
}
