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
extern Block16 g_8c33b200;
extern int operation_8c03d338(void);
extern void operation_8c0c5478(int, Frame *, float);
void operation_8c24a000(int a0)
{
    Frame frame;
    int t1;
    t1 = operation_8c03d338();
    if (t1 != 0) {
        {
            Block16 *p_ = (Block16 *)&g_8c33b200;
            *(Block16 *)&(&frame)->f00 = *p_;
        }
        operation_8c0c5478((int)(a0 + 0x3c), (Frame *)((&frame)), 40.0f);
    }
}
