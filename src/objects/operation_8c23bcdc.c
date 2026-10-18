typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_1d4 Arg0_1d4;
typedef struct S_vv1 S_vv1;
typedef struct S_vv20 S_vv20;
typedef struct S_vv20_2c S_vv20_2c;
struct Object {
    char unknown0[0x1d4];
    Arg0_1d4 *f1d4;
    char unknown1d8[0x60];
    int f238;
    int f23c;
    int f240;
};
struct S_vv20 {
    char unknown0[0x2c];
    S_vv20_2c *f2c;
};
struct S_vv20_2c {
    int f00;
};
struct S_vv1 {
    char unknown0[0x18];
    int f18;
};
void operation_8c23bcdc(Object *o)
{
    S_vv20 *v20;
    S_vv1 *v1;
    int lim;
    *(int *)((char *)o + 0x238) += 0x1999;
    v20 = (S_vv20 *)o->f1d4;
    if (v20 != 0) {
        v1 = (S_vv1 *)v20->f2c;
        v20->f2c->f00 &= -3;
        v1->f18 = (int)(o->f238);
    }
    switch (o->f240) {
    case 1:
        *(int *)((char *)o + 0x23c) += 0xe38;
        if (o->f23c >= 0) {
            o->f23c = 0;
            o->f240 = 0;
            return;
        }
        break;
    case 2:
        *(int *)((char *)o + 0x23c) -= 0xe38;
        lim = -0x31c7;
        if (lim >= o->f23c) {
            o->f23c = lim;
            o->f240 = 3;
            return;
        }
        break;
    case 3:
        o->f240 = 1;
        break;
    }
}
