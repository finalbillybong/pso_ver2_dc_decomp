typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg2 Arg2;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
};
struct Arg2 {
    char unknown0[0x42];
    short f42;
    short f44;
    short f46;
};
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern void call_8c38c0e6(int, int);
extern void call_8c38c0f0(Frame *);
extern void operation_8c02a998(int);
void operation_8c1c34e0(int a0, int a1, Arg2 *a2, float f0)
{
    Frame frame;
    g_8c46f560 = (int)(g_8c575570);
    g_8c46f574 = (int)(g_8c5755a4);
    g_8c46f578 = (int)(g_8c5755a8);
    g_8c575570 |= 0x10;
    if (1.0f > f0) {
        call_8c38c0e6(-1, 0x800);
    }
    (&frame)->f00 = f0;
    (&frame)->f04 = (float)a2->f42 * 0.00392156886f;
    (&frame)->f08 = (float)a2->f44 * 0.00392156886f;
    (&frame)->f0c = (float)a2->f46 * 0.00392156886f;
    call_8c38c0f0((Frame *)((&frame)));
    operation_8c02a998(a1);
    g_8c5755a4 = (int)(g_8c46f574);
    g_8c5755a8 = (int)(g_8c46f578);
    g_8c575570 = (int)(g_8c46f560);
}
