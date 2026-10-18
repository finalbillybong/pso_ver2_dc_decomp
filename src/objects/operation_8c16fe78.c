typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block72 {
    int words[18];
} Block72;
typedef struct S_L8c46fec0 S_L8c46fec0;
typedef struct Frame Frame;
struct Frame {
    Block72 f00;
};
struct S_L8c46fec0 {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    int f1c;
};
extern Block72 g_8c317b60;
extern S_L8c46fec0 g_8c46fec0;
void operation_8c16fe78(unsigned int a0)
{
    Frame frame;
    int v1;
    *(Block72 *)&(&frame)->f00 = *(Block72 *)&g_8c317b60;
    if ((unsigned int)0x11 >= a0) {
        v1 = (int)*(int *)((char *)&(&frame)->f00 + (a0 << 2));
        (&g_8c46fec0)->f04 = (int)(v1);
        (&g_8c46fec0)->f08 = v1 + 1;
        (&g_8c46fec0)->f0c = v1 + 1;
        (&g_8c46fec0)->f10 = 0;
        (&g_8c46fec0)->f14 = 0;
        (&g_8c46fec0)->f18 = 0;
        (&g_8c46fec0)->f00 = -1;
        (&g_8c46fec0)->f1c = 0;
    }
}
