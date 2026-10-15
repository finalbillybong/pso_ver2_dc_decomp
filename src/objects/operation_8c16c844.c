typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c317ba8 S_L8c317ba8;
typedef struct Frame Frame;
struct S_L8c317ba8 {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    char unknown0[0x400];
};
extern int g_8c4db400;
extern int g_8c4db420;
extern S_L8c317ba8 g_8c317ba8;
extern int call_8c12b0cc(int);
extern void call_8c172b64(int, Frame *);
void operation_8c16c844(int a0)
{
    Frame frame;
    char *v1;
    int t1;
    v1 = (char *)*(int *)((char *)&g_8c317ba8.f04 + (a0 << 3));
    t1 = call_8c12b0cc((int)(g_8c4db400 + g_8c4db420));
    call_8c172b64((int)(g_8c4db400 + g_8c4db420), (Frame *)((&frame)));
    g_8c4db420 += t1 + 1;
    ((void (*)(Frame *))(v1))((Frame *)((&frame)));
}
