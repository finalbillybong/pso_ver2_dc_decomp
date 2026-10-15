typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c319b78 S_L8c319b78;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
struct S_L8c319b78 {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    S_frame_0 *f00;
};
extern int g_8c4dbc00;
extern int g_8c4dbc04;
extern S_L8c319b78 g_8c319b78;
extern void call_8c12b77c(Frame *, int, int);
void operation_8c187814(int a0)
{
    Frame frame;
    char *v1;
    v1 = (char *)*(int *)((char *)&g_8c319b78.f04 + ((unsigned char)a0 << 3));
    call_8c12b77c((Frame *)((&frame)), (int)(g_8c4dbc00 + g_8c4dbc04), 4);
    g_8c4dbc04 += 4;
    ((void (*)(void *))(v1))((void *)((&frame)->f00));
}
