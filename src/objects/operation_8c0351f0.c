typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
};
struct Arg1 {
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
extern void call_8c3aa716(int);
void operation_8c0351f0(int a0, Arg1 *a1, float f0)
{
    Frame frame;
    g_8c46f560 = (int)(g_8c575570);
    g_8c46f574 = (int)(g_8c5755a4);
    g_8c46f578 = g_8c5755a8;
    g_8c575570 = g_8c575570 & -0x21 | 0x81c;
    if (1.0f > f0) {
        call_8c38c0e6(-1, 0x800);
    }
    (&frame)->f00 = f0;
    (&frame)->f04 = (float)a1->f42 * 0.00392156886f;
    (&frame)->f08 = (float)a1->f44 * 0.00392156886f;
    (&frame)->f0c = (float)a1->f46 * 0.00392156886f;
    call_8c38c0f0((Frame *)((&frame)));
    call_8c3aa716(a0);
    g_8c5755a4 = (int)(g_8c46f574);
    g_8c5755a8 = (int)(g_8c46f578);
    g_8c575570 = (int)(g_8c46f560);
}
