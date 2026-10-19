typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
struct Frame {
    char f00;
    char f01;
    short f02;
    float f04;
    float f08;
};
struct Object {
    char unknown0[0x7c];
    Arg0_7c *f7c;
    char unknown80[0x30];
    float fb0;
    char unknownb4[0x4];
    float fb8;
};
struct Arg0_7c {
    char unknown0[0x8a];
    volatile unsigned short f8a;
};
extern void operation_8c036840(int);
void operation_8c10d71c(Object *o)
{
    Frame frame;
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f00 = 0x3d;
    (&frame)->f01 = 1;
    (&frame)->f08 = 0.0f;
    (&frame)->f04 = 0.0f;
    (&frame)->f00 = 0x42;
    (&frame)->f01 = 3;
    if (o->f7c != 0) {
        (&frame)->f02 = o->f7c->f8a & 0xffff;
        (&frame)->f04 = o->fb0;
        (&frame)->f08 = o->fb8;
        operation_8c036840((int)(&frame));
    }
}
