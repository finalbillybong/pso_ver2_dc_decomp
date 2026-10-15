typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char f00;
    char f01;
    char unknown2[0x2];
    short f04;
    unsigned short f06;
    short f08;
    short f0a;
};
extern void operation_8c0368a8(void *);
void operation_8c110360(int a0, int a1)
{
    Frame frame;
    (&frame)->f00 = 0x69;
    (&frame)->f01 = 3;
    (&frame)->f04 = a0;
    (&frame)->f06 = 0xffff;
    (&frame)->f08 = 0;
    (&frame)->f0a = a1;
    (&frame)->f06 = 1;
    operation_8c0368a8((void *)(&frame));
}
