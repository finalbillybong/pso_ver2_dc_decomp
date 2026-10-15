typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_20_38 Arg0_20_38;
typedef struct Arg0_20_38_2c Arg0_20_38_2c;
typedef struct Arg0_20_38_2c_2c Arg0_20_38_2c_2c;
typedef struct Arg0_20_38_2c_2c_4 Arg0_20_38_2c_2c_4;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    int f24;
    int f28;
};
struct Arg0_20 {
    char unknown0[0x38];
    Arg0_20_38 *f38;
    char unknown3c[0xb88];
    int fbc4;
};
struct Arg0_20_38 {
    char unknown0[0x2c];
    Arg0_20_38_2c *f2c;
};
struct Arg0_20_38_2c {
    char unknown0[0x2c];
    Arg0_20_38_2c_2c *f2c;
};
struct Arg0_20_38_2c_2c {
    char unknown0[0x4];
    Arg0_20_38_2c_2c_4 *f04;
};
struct Arg0_20_38_2c_2c_4 {
    int f00;
};
void operation_8c25fba0(Object *o)
{
    if (o->f20->fbc4 != 0 || o->f20->f38 == 0 || o->f20->f38->f2c == 0 || o->f20->f38->f2c->f2c == 0 || o->f20->f38->f2c->f2c->f04 == 0 || o->f20->f38->f2c->f2c->f04->f00 == 0) {
        return;
    }
    o->f24 = (int)(o->f20->f38->f2c->f2c->f04->f00);
    o->f28 = 1;
}
