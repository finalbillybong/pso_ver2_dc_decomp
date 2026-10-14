typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_2c Arg0_38_2c;
struct Object {
    char unknown0[0x38];
    Arg0_38 *f38;
    char unknown3c[0x1f8];
    int f234;
};
struct Arg0_38 {
    char unknown0[0x2c];
    Arg0_38_2c *f2c;
};
struct Arg0_38_2c {
    int f00;
};
void operation_8c23a120(Object *o)
{
    int v2;
    if (o->f38 != 0) {
        v2 = (int)o->f38->f2c->f00;
        if (o->f234 == 1) {
            if (((o->f38->f2c->f00 & 8)) == 0) {
                return;
            }
            o->f38->f2c->f00 &= -9;
            return;
        }
        if (((v2 & 8)) == 0) {
            o->f38->f2c->f00 = v2 | 8;
        }
    }
}
