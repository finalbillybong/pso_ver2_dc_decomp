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
    char unknown22[0x2e6];
    short f308;
    char unknown30a[0x26a];
    short f574;
    char unknown576[0x2];
    int f578;
    short f57c;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    int f08;
};
extern void operation_8c0368a8(void *);
void operation_8c1efdc4(Object *o)
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
    (&frame)->f06 = 0;
    (&frame)->f08 = 0;
    (&frame)->f00 = 0x52;
    (&frame)->f01 = 3;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = o->f57c;
    (&frame)->f08 = (int)(o->f578);
    (&frame)->f06 = o->f574;
    operation_8c0368a8((void *)(&frame));
}
