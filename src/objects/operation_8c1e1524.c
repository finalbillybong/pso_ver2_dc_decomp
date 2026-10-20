typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x34];
    int f34;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    int f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    int f30;
    int *f34;
    int f38;
    int f3c;
};
struct Arg2 {
    float f00;
    float f04;
};
struct Arg1 {
    char unknown0[0x34];
    float f34;
};
extern int g_8c418244;
extern void call_8c38ef2c(void *, int, int, float);
void operation_8c1e1524(Object *o, Arg1 *a1, Arg2 *a2)
{
    Frame frame;
    int v1;
    int v2;
    int c;
    float w;
    if (((g_8c418244 & 0x10)) == 0 && ((o->f34 & 2)) == 0) {
        w = a1->f34 + 0.1794f;
        v1 = 4;
        (&frame)->f30 = (int)(&(&frame)->f10);
        (&frame)->f34 = &(&frame)->f00;
        (&frame)->f38 = 0;
        (&frame)->f3c = v1;
        c = -0x7fff0100;
        (&frame)->f34[0] = c;
        (&frame)->f34[1] = c;
        (&frame)->f34[2] = c;
        (&frame)->f34[3] = c;
        (&frame)->f10 = a2->f00;
        (&frame)->f14 = a2->f04;
        (&frame)->f18 = a2->f00 + 6.0f;
        (&frame)->f1c = a2->f04;
        (&frame)->f20 = a2->f00 + 6.0f;
        (&frame)->f24 = a2->f04 + 18.0f;
        (&frame)->f28 = a2->f00;
        (&frame)->f2c = a2->f04 + 18.0f;
        v2 = (int)0x60;
        call_8c38ef2c((void *)(&(&frame)->f30), v1, v2, w);
    }
}
