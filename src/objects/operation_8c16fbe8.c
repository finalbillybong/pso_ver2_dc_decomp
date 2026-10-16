typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
    int f08;
    int f0c;
};
extern void operation_8c0368a8(void *);
void operation_8c16fbe8(int a0, int a1)
{
    Frame frame;
    (&frame)->f00 = 0x67;
    (&frame)->f01 = 4;
    (&frame)->f02 = 0;
    (&frame)->f04 = a0;
    (&frame)->f08 = a1;
    (&frame)->f0c = 0;
    operation_8c0368a8((void *)(&frame));
}
