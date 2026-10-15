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
    short f06;
    short f08;
    char f0a;
    char f0b;
};
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0xde];
    int f100;
};
extern void operation_8c0368a8(void *);
void operation_8c113564(Object *o)
{
    Frame frame;
    (&frame)->f06 = 0;
    (&frame)->f00 = 4;
    (&frame)->f01 = 2;
    (&frame)->f00 = 5;
    (&frame)->f01 = 3;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = 0;
    (&frame)->f08 = o->f100;
    (&frame)->f0a = *(int *)0x8c44be04;
    (&frame)->f0b = 1;
    operation_8c0368a8((void *)(&frame));
}
