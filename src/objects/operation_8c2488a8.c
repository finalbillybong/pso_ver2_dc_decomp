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
    int f08;
    char unknownc[0x8];
};
extern int g_8c418248;
extern int operation_8c238420(int);
extern void operation_8c0368a8(void *);
void operation_8c2488a8(int a0)
{
    Frame frame;
    int t1;
    (&frame)->f00 = 0x95;
    (&frame)->f01 = 5;
    t1 = operation_8c238420(a0);
    (&frame)->f04 = (int)(g_8c418248);
    (&frame)->f08 = (int)(t1);
    operation_8c0368a8((void *)(&frame));
}
