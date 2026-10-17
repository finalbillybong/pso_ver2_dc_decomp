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
    char unknown0[0x16];
    short f16;
    char unknown18[0x4];
    int f1c;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
extern void operation_8c2326f4(void *);
void operation_8c2325e0(int a0)
{
    Frame frame;
    *(Block32 *)&(&frame)->f00 = *(Block32 *)&*(Block32 *)0x8c338c40;
    (&frame)->f00.f16 = 0x4e32;
    (&frame)->f00.f1c = a0;
    operation_8c2326f4((void *)(&frame));
}
