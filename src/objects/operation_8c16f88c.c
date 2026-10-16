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
extern int g_8c44be04;
extern void operation_8c0368a8(void *);
void operation_8c16f88c(int a0)
{
    Frame frame;
    (&frame)->f00 = 0x67;
    (&frame)->f01 = 4;
    (&frame)->f02 = 0;
    (&frame)->f04 = (int)(g_8c44be04);
    (&frame)->f08 = a0;
    (&frame)->f0c = 0;
    operation_8c0368a8((void *)(&frame));
}
