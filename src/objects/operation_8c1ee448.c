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
    char unknown30a[0xe];
    float f318;
    char unknown31c[0x4];
    float f320;
    char unknown324[0xc];
    short f330;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    float f08;
    float f0c;
};
extern void operation_8c0368a8(void *);
void operation_8c1ee448(Object *o)
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
    (&frame)->f06 = 0;
    (&frame)->f04 = 0;
    (&frame)->f0c = 0.0f;
    (&frame)->f08 = 0.0f;
    (&frame)->f00 = 0x4b;
    (&frame)->f01 = 4;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = o->f64;
    (&frame)->f06 = o->f330;
    (&frame)->f08 = o->f318;
    (&frame)->f0c = o->f320;
    operation_8c0368a8((void *)(&frame));
}
