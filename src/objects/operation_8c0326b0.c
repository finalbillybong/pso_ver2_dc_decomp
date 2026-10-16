typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct Arg3 Arg3;
struct Frame {
    char unknown0[0xc];
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
};
struct S_g8c46ee80 {
    char unknown0[0x90];
    float f90;
    char unknown94[0x4];
    float f98;
};
struct Arg3 {
    float f00;
    float f04;
    float f08;
};
extern S_g8c46ee80 *g_8c46ee80;
extern float call_8c3845f0(int, Arg3 *);
extern float call_8c38d6e0(int, void *, Frame *);
int operation_8c0326b0(int a0, int a1, int a2, Arg3 *a3, float f0)
{
    Frame frame;
    int v1;
    float t1;
    float t2;
    t1 = call_8c3845f0(a2, a3);
    if (0.0f > t1) {
        return 0;
    }
    (&frame)->f0c = g_8c46ee80->f90;
    (&frame)->f10 = 0.0f;
    (&frame)->f14 = g_8c46ee80->f98;
    (&frame)->f18 = a3->f00;
    (&frame)->f1c = a3->f04;
    (&frame)->f20 = a3->f08;
    t2 = call_8c38d6e0(a1, (void *)(&(&frame)->f0c), (Frame *)((&frame)));
    v1 = (int)(t2 <= f0);
    return (int)(v1);
}
