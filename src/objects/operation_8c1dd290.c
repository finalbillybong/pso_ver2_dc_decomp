typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
struct Object {
    char unknown0[0x22];
    unsigned short f22;
    char unknown24[0x8];
    Arg0_2c *f2c;
};
struct Arg0_2c {
    char unknown0[0x68];
    int f68;
};
extern void call_8c1dccb4(void);
void operation_8c1dd290(Object *o)
{
    if (((o->f22 & 1)) != 0) {
        if (((o->f22 & 0x10)) != 0) {
            o->f22 &= -0x11;
            call_8c1dccb4();
        }
        if (((o->f22 & 0x20)) != 0) {
            o->f22 &= -0x21;
            ((void (*)(Object *))call_8c1dccb4)(o);
        }
        o->f22 = (unsigned int)o->f22 >> 1 << 1;
        o->f22 |= 2;
        o->f2c->f68 &= -0x201;
        ((void (*)(Object *))call_8c1dccb4)(o);
    }
}
