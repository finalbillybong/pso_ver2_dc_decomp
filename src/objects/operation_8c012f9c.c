typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    unsigned char f00;
    char f01;
    short f02;
    int f04;
};
struct Object {
    char unknown0[0x20];
    short f20;
};
extern void operation_8c036840(int);
void operation_8c012f9c(Object *o, int a1)
{
    Frame frame;
    (&frame)->f04 = 0;
    (&frame)->f00 = 0x9c;
    (&frame)->f01 = 2;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = a1;
    operation_8c036840((int)(&frame));
}
