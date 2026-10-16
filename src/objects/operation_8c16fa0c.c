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
    char unknown6[0x2];
    int f08;
};
extern void operation_8c0368a8(void *);
void operation_8c16fa0c(int a0, int a1)
{
    Frame frame;
    (&frame)->f00 = 0x77;
    (&frame)->f01 = 3;
    (&frame)->f04 = a0;
    (&frame)->f08 = a1;
    operation_8c0368a8((void *)(&frame));
}
