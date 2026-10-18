typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Frame {
    char f00;
    char f01;
    short f02;
    Vector3 f04;
    int f10;
};
struct Object {
    char unknown0[0x20];
    short f20;
};
struct Arg1 {
    Vector3 f00;
};
extern void operation_8c0368a8(void *);
void operation_8c13a344(Object *o, Arg1 *a1, int a2)
{
    Frame frame;
    if (o != 0) {
        (&frame)->f00 = 0x17;
        (&frame)->f01 = 5;
        (&frame)->f02 = o->f20;
        *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&a1->f00;
        (&frame)->f10 = a2;
        operation_8c0368a8((void *)(&frame));
    }
}
