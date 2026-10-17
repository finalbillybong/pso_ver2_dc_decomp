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
    char unknown0[0x2];
    short f02;
    char unknown4[0x8];
    int f0c;
    char unknown10[0x10];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
extern void operation_8c2326f4(void *);
void operation_8c232538(int a0)
{
    Frame frame;
    *(Block32 *)&(&frame)->f00 = *(Block32 *)&*(Block32 *)0x8c338c40;
    (&frame)->f00.f02 = 0x5331;
    (&frame)->f00.f0c = a0;
    operation_8c2326f4((void *)(&frame));
}
