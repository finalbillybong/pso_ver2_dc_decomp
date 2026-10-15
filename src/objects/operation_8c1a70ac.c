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
    short f06;
};
extern void operation_8c0368a8(void *);
void operation_8c1a70ac(int a0, int a1)
{
    Frame frame;
    (&frame)->f00 = 0x75;
    (&frame)->f01 = 2;
    (&frame)->f04 = a0;
    (&frame)->f06 = a1;
    operation_8c0368a8((void *)(&frame));
}
