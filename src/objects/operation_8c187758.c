typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c319b78 S_L8c319b78;
typedef struct Frame Frame;
struct S_L8c319b78 {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    unsigned short f00;
    char unknown2[0x2];
};
extern int g_8c4dbc00;
extern int g_8c4dbc04;
extern S_L8c319b78 g_8c319b78;
extern void call_8c12b77c(Frame *, int, int);
void operation_8c187758(int a0)
{
    Frame frame;
    char *v1;
    v1 = (char *)*(int *)((char *)&g_8c319b78.f04 + ((unsigned char)a0 << 3));
    call_8c12b77c((Frame *)((&frame)), (int)(g_8c4dbc00 + g_8c4dbc04), 2);
    g_8c4dbc04 += 2;
    ((void (*)(unsigned short))(v1))((unsigned short)((&frame)->f00));
}
