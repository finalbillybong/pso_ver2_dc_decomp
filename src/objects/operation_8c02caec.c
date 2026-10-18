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
    unsigned char f00;
    char f01;
    short f02;
    char f04;
    char f05;
    char f06;
    char f07;
};
extern void operation_8c0368a8(void *);
void operation_8c02caec(Object *o, int a1)
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
    (&frame)->f04 = 0;
    (&frame)->f05 = 0;
    (&frame)->f06 = 0;
    (&frame)->f07 = 0;
    (&frame)->f00 = 0x9b;
    (&frame)->f01 = 2;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = a1;
    operation_8c0368a8((void *)(&frame));
}
