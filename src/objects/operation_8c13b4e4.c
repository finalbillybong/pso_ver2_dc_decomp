typedef struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0x2c6];
    short f30a;
    char unknown30c[0xa0];
    int f3ac;
} Object;
typedef struct S_c8c053d84 {
    char unknown0[0x34];
    int f34;
} S_c8c053d84;
extern short g_8c4d9b74;
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
int operation_8c13b4e4(Object *o)
{
    int r;
    int a;
    int d;
    int mask;
    S_c8c053d84 *t;
    if (o->f30a == 0) {
        return -1;
    }
    a = o->f3ac;
    r = -1;
    mask = 0xffff;
    d = (a & mask) % 0x2aaa + -0x1555;
    if (!(25.0f > o->f40)) {
        if (d < 0) {
            d = -d;
        }
        if (0x8dc >= d) {
            r = 0;
        }
    } else {
        if (0xdb2 >= d) {
            if (d >= 0x510) {
                r = 1;
            } else if (d >= -0x510) {
                r = 2;
            } else if (d >= -0xdb2) {
                r = 3;
            }
        }
    }
    if (r >= 0) {
        r += (unsigned short)(a + -0x2aaa) / 0x2aaa << 2;
        t = lookup_object_by_id(g_8c4d9b74 + r);
        if (t == 0 || (t->f34 & 0x800) != 0) {
            r = -1;
        }
    }
    return r;
}
