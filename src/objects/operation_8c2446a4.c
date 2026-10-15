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
    char unknown5[0x3];
    int f08;
    char unknownc[0xc];
};
extern int g_8c418248;
extern void operation_8c0368a8(void *);
void operation_8c2446a4(void)
{
    Frame frame;
    (&frame)->f00 = 0x7d;
    (&frame)->f01 = 6;
    (&frame)->f04 = 4;
    (&frame)->f08 = (int)(g_8c418248);
    operation_8c0368a8((void *)(&frame));
}
