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
    short f04;
    short f06;
};
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x370];
    volatile unsigned short f392;
};
extern void operation_8c0368a8(void *);
void operation_8c0feb08(Object *o, int a1)
{
    Frame frame;
    if ((unsigned int)3 > (unsigned int)(unsigned short)a1) {
        (&frame)->f00 = 0x80;
        (&frame)->f01 = 2;
        (&frame)->f02 = o->f20;
        (&frame)->f04 = o->f392 & 0xffff;
        (&frame)->f06 = a1;
        operation_8c0368a8((void *)(&frame));
    }
}
