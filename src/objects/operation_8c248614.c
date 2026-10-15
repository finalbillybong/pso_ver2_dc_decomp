typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block160 {
    int words[40];
} Block160;
typedef struct Frame Frame;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
struct Frame {
    char f00;
    char f01;
    char unknown2[0x2];
    short f04;
    char unknown6[0x2];
    Block160 f08;
};
struct S_g8c4db9e4 {
    char unknown0[0x11c4];
    Block160 f11c4;
};
extern int g_8c418248;
extern S_g8c4db9e4 *g_8c4db9e4;
extern void operation_8c0368a8(void *);
void operation_8c248614(void)
{
    Frame frame;
    (&frame)->f00 = 0x7c;
    (&frame)->f01 = 0x2a;
    (&frame)->f04 = g_8c418248;
    *(Block160 *)&(&frame)->f08 = *(Block160 *)&g_8c4db9e4->f11c4;
    operation_8c0368a8((void *)(&frame));
}
