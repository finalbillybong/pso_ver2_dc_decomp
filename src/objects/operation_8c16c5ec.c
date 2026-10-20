typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c317ba8 S_L8c317ba8;
typedef struct Frame Frame;
typedef struct S_g8c4db400 S_g8c4db400;
struct S_L8c317ba8 {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    unsigned short f00;
    char unknown2[0x2];
};
extern S_g8c4db400 *g_8c4db400;
extern int g_8c4db420;
extern S_L8c317ba8 g_8c317ba8;
extern void call_8c12b77c(Frame *, int, int);
void operation_8c16c5ec(int a0)
{
    Frame frame;
    int v1;
    char v3;
    char *v2;
    v2 = (char *)*(int *)((char *)&g_8c317ba8.f04 + (a0 << 3));
    v1 = (int)g_8c4db420;
    g_8c4db420 = v1 + 1;
    v3 = (char)*(char *)((char *)((char *)g_8c4db400 + 0x0) + (v1));
    call_8c12b77c((Frame *)((&frame)), (int)((int)g_8c4db400 + g_8c4db420), 2);
    g_8c4db420 += 2;
    ((void (*)(char, unsigned short))(v2))(v3, (unsigned short)((&frame)->f00));
}
