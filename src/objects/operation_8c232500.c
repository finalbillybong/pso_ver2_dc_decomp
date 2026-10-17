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
    short f00;
    char unknown2[0x6];
    int f08;
    char unknownc[0x14];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
extern void operation_8c2326f4(void *);
void operation_8c232500(int a0)
{
    Frame frame;
    *(Block32 *)&(&frame)->f00 = *(Block32 *)&*(Block32 *)0x8c338c40;
    (&frame)->f00.f00 = 0x544d;
    (&frame)->f00.f08 = a0;
    operation_8c2326f4((void *)(&frame));
}
