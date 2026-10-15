typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct Block_frame_10 {
    float f00;
    float f04;
    float f08;
    float f0c;
} Block_frame_10;
struct Frame {
    Block16 f00;
    Block_frame_10 f10;
};
extern void call_8c075ccc(int, Frame *, ...);
int operation_8c076d7c(int a0)
{
    Frame frame;
    call_8c075ccc(a0, (Frame *)((&frame)));
    *(Block16 *)&(&frame)->f10 = *(Block16 *)&(&frame)->f00;
    return (unsigned int)((&frame)->f10.f0c * 255.0f) | ((unsigned int)((&frame)->f10.f00 * 255.0f) << 0x18 | (unsigned int)((&frame)->f10.f04 * 255.0f) << 0x10 | (unsigned int)((&frame)->f10.f08 * 255.0f) << 8);
}
