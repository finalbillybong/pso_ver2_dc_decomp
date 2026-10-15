typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0xc];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
extern void call_8c38c0e6(int, int);
void operation_8c075274(float f0)
{
    Frame frame;
    if (1.0f > f0) {
        *(int *)0x8c575570 |= 0x24;
        call_8c38c0e6(-1, 0x800);
        *(Block16 *)&(&frame)->f00 = *(Block16 *)&*(Block16 *)0x8c2fd6c4;
        (&frame)->f00.f00 = f0 - 1.0f;
        *(Block16 *)&*(Block16 *)0x8c469a1c = *(Block16 *)&*(Block16 *)0x8c5755ac;
        *(Block16 *)&*(Block16 *)0x8c5755ac = *(Block16 *)&(&frame)->f00;
    }
    *(float *)0x8c469a2c = f0;
}
