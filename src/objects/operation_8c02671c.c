typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    float f08;
    float f0c;
    float f10;
};
struct Arg1 {
    float f00;
    char unknown4[0x4];
    float f08;
};
extern void operation_8c0368a8(void *, float);
int operation_8c02671c(Object *o, Arg1 *a1, int a2, float f0)
{
    Frame frame;
    int v1;
    if (o != 0) {
        v1 = (int)(o->f308 == 2);
        if (v1 != 0) {
            return 0;
        }
    }
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f04 = 0;
    (&frame)->f06 = 0;
    (&frame)->f0c = 0.0f;
    (&frame)->f08 = 0.0f;
    (&frame)->f00 = 0x2c;
    (&frame)->f01 = 5;
    (&frame)->f02 = o->f20;
    (&frame)->f06 = 0;
    (&frame)->f04 = a2;
    (&frame)->f08 = a1->f00;
    (&frame)->f0c = a1->f08;
    (&frame)->f10 = f0 * f0;
    operation_8c0368a8((void *)(&frame), f0 * f0);
    return 1;
}
