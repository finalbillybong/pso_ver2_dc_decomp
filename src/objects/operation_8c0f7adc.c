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
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern void call_8c38c0e6(int, int);
extern void call_8c38c0f0(Frame *);
void operation_8c0f7adc(float f0, float f1, float f2, float f3)
{
    Frame frame;
    g_8c46f560 = (int)(g_8c575570);
    g_8c575570 |= 0x20;
    g_8c46f574 = (int)(g_8c5755a4);
    g_8c46f578 = (int)(g_8c5755a8);
    call_8c38c0e6(0xff00, 0x800);
    (&frame)->f00 = f0 + -1.0f;
    (&frame)->f04 = f1;
    (&frame)->f08 = f2;
    (&frame)->f0c = f3;
    call_8c38c0f0((Frame *)((&frame)));
}
