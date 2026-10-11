typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x2c];
    Arg0_2c *f2c;
    Arg0_30 *f30;
};
struct Arg0_30 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_2c {
    char unknown0[0x4];
    short f04;
};
void operation_8c2356cc(Object *o)
{
    if (o->f30 != 0) {
        o->f30->f04 |= 1;
        o->f30 = 0;
    }
    if (o->f2c != 0) {
        o->f2c->f04 |= 1;
        o->f2c = 0;
    }
}
