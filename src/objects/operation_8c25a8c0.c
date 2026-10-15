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
};
struct Object {
    char unknown0[0x20];
    short f20;
};
extern void operation_8c0368a8(void *);
void operation_8c25a8c0(Object *o, int a1)
{
    Frame frame;
    (&frame)->f00 = 0x6a;
    (&frame)->f01 = 2;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = a1;
    operation_8c0368a8((void *)(&frame));
}
