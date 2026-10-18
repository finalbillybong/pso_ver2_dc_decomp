typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x42];
    int f64;
    char unknown68[0x2a0];
    short f308;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
};
extern void operation_8c036840(int);
void operation_8c1ee040(Object *o)
{
    Frame frame;
    int v1;
    if (o != 0) {
        v1 = (int)(o->f308 == 2);
        if (v1 != 0) {
            return;
        }
    }
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f00 = 0x3d;
    (&frame)->f01 = 1;
    (&frame)->f04 = 0;
    (&frame)->f00 = 0x50;
    (&frame)->f01 = 2;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = (int)(o->f64);
    operation_8c036840((int)(&frame));
}
