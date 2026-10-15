typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c317ba8 S_L8c317ba8;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
struct S_L8c317ba8 {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    S_frame_0 *f00;
};
extern int g_8c4db400;
extern int g_8c4db420;
extern S_L8c317ba8 g_8c317ba8;
extern void call_8c12b77c(Frame *, int, int);
void operation_8c16c3ec(int a0)
{
    Frame frame;
    char *v1;
    v1 = (char *)*(int *)((char *)&g_8c317ba8.f04 + (a0 << 3));
    call_8c12b77c((Frame *)((&frame)), (int)(g_8c4db400 + g_8c4db420), 4);
    g_8c4db420 += 4;
    ((void (*)(void *))(v1))((void *)((&frame)->f00));
}
