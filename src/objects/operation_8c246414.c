typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
struct Frame {
    Block16 f00;
};
extern Block16 g_8c33aec8;
extern void operation_8c0c5478(int, Frame *, float);
void operation_8c246414(int a0)
{
    Frame frame;
    {
        Block16 *p_ = (Block16 *)&g_8c33aec8;
        *(Block16 *)&(&frame)->f00 = *p_;
    }
    operation_8c0c5478((int)(a0 + 0x3c), (Frame *)((&frame)), 2.0f);
}
