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
    unsigned short f04;
    char unknown6[0xa2];
};
extern void operation_8c0368a8(void *);
void operation_8c24870c(void)
{
    Frame frame;
    (&frame)->f00 = 0x7c;
    (&frame)->f01 = 0x2a;
    (&frame)->f04 = 0xffff;
    operation_8c0368a8((void *)(&frame));
}
