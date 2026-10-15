typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
};
extern int operation_8c03d338(void);
extern void operation_8c0c5478(int, Frame *, float);
void operation_8c25b150(int a0)
{
    Frame frame;
    int t1;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        (&frame)->f00 = 0.3f;
        (&frame)->f04 = 0.6f;
        (&frame)->f08 = 0.3f;
        (&frame)->f0c = 0.0f;
        operation_8c0c5478((int)(a0 + 0x3c), (Frame *)((&frame)), 10.0f);
    }
}
