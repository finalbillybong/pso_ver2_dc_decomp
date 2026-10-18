typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
typedef struct Arg0_7c_94 Arg0_7c_94;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x34];
    short f60;
    char unknown62[0x1a];
    Arg0_7c *f7c;
    char unknown80[0x4];
    int f84;
};
struct Arg0_7c {
    char unknown0[0x94];
    Arg0_7c_94 *f94;
};
struct Arg0_7c_94 {
    char unknown0[0x20];
    unsigned short f20;
};
void operation_8c1102b8(Object *o)
{
    char v1;
    unsigned short v2;
    int v6;
    int t1;
    if (o->f28 >= 0x19) {
        o->f84 &= -5;
        o->f28 = 0x19;
        return;
    }
    t1 = ((int (*)(void))0x8c1692c0)();
    if (t1 == 0) {
        v2 = o->f7c->f94->f20;
        if (v2 != 0xffff) {
            v1 = (char)*(char *)((char *)0x8c30c888 + (o->f28 << 6));
            if (v1 != 0 && v1 != 0) {
                ((void (*)(int, void *, int))0x8c0ddbd0)(v2, &*(int *)((char *)0x8c30c888 + (o->f28 << 6)), 0x1b);
            }
        }
        o->f84 &= -5;
        if (o->f60 >= 0x190) {
            o->f60 = 0;
            v6 = (int)1;
        } else {
            v6 = (int)0;
        }
        if (v6 != 0) {
            o->f28 = 0x19;
        }
    }
}
