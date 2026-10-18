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
};
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
    int f08;
};
extern void operation_8c0368a8(void *);
void operation_8c0242e0(Object *o, int a1, int a2)
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
    (&frame)->f04 = -1;
    (&frame)->f08 = -1;
    (&frame)->f00 = 0x28;
    (&frame)->f01 = 3;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = a1;
    (&frame)->f08 = a2;
    operation_8c0368a8((void *)(&frame));
}
