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
extern int g_8c510ba0;
extern void operation_8c0368a8(void *);
void operation_8c248980(int a0)
{
    Frame frame;
    int v1;
    v1 = (int)(g_8c510ba0 != 0);
    if (v1 != 0) {
        (&frame)->f00 = 0x97;
        (&frame)->f01 = 5;
        (&frame)->f04 = (int)(g_8c418248);
        (&frame)->f08 = a0;
        operation_8c0368a8((void *)(&frame));
    }
}
