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
extern int g_8c510ba0;
extern void operation_8c0368a8(void *);
void operation_8c2489c0(int a0)
{
    Frame frame;
    int v1;
    v1 = (int)(g_8c510ba0 != 0);
    if (v1 == 0 || a0 < 0 || a0 >= 4) {
        return;
    }
    (&frame)->f00 = 0x9d;
    (&frame)->f01 = 2;
    (&frame)->f04 = a0;
    operation_8c0368a8((void *)(&frame));
}
