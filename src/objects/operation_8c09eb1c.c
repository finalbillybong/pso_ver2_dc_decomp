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
};
struct Object {
    char unknown0[0x20];
    short f20;
};
extern int g_8c44be04;
extern void operation_8c0368a8(void *);
void operation_8c09eb1c(Object *o, int a1)
{
    Frame frame;
    (&frame)->f00 = 0x76;
    (&frame)->f01 = 2;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = g_8c44be04;
    (&frame)->f06 = a1;
    operation_8c0368a8((void *)(&frame));
}
