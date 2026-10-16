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
    char f04;
    char f05;
    char unknown6[0x2];
    int f08;
    int f0c;
    char unknown10[0x8];
};
extern void operation_8c0368a8(void *);
void operation_8c2436b8(int a0, int a1, int a2)
{
    Frame frame;
    (&frame)->f00 = 0x7d;
    (&frame)->f01 = 6;
    (&frame)->f04 = 0;
    (&frame)->f05 = a0;
    (&frame)->f08 = a1;
    (&frame)->f0c = a2;
    operation_8c0368a8((void *)(&frame));
}
