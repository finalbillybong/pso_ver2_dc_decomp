typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    char unknown6[0x2];
    int f08;
    char unknownc[0x4];
};
struct Object {
    char unknown0[0x20];
    short f20;
};
extern void operation_8c0368a8(void *);
void operation_8c1ae0d8(Object *o, int a1)
{
    Frame frame;
    (&frame)->f00 = 0x19;
    (&frame)->f01 = 4;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = -1;
    (&frame)->f08 = a1;
    operation_8c0368a8((void *)(&frame));
}
