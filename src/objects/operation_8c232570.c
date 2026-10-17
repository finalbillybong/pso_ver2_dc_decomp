typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block32 {
    int words[8];
} Block32;
typedef struct Frame Frame;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    short f04;
    char unknown6[0xa];
    int f10;
    char unknown14[0xc];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
extern void operation_8c2326f4(void *);
void operation_8c232570(int a0)
{
    Frame frame;
    *(Block32 *)&(&frame)->f00 = *(Block32 *)&*(Block32 *)0x8c338c40;
    (&frame)->f00.f04 = 0x5332;
    (&frame)->f00.f10 = a0;
    operation_8c2326f4((void *)(&frame));
}
