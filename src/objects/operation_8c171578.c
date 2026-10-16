typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    int f04;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
void operation_8c171578(int a0, int a1)
{
    Frame frame;
    char *v1;
    v1 = (char *)*(int *)0x8c4db408;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)((char *)0x8c510c9c + (*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0 << 2)) << 3));
    *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a1 << 2)) = (int)((&frame)->f00.f04);
}
