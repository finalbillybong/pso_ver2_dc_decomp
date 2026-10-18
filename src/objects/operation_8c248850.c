typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    unsigned char f00;
    char f01;
    char unknown2[0x2];
    int f04;
};
extern void operation_8c0368a8(void *);
void operation_8c248850(int a0, int a1)
{
    Frame frame;
    (&frame)->f00 = 0x8a;
    (&frame)->f01 = 2;
    (&frame)->f04 = a1;
    operation_8c0368a8((void *)(&frame));
}
