typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c323e80 S_g8c323e80;
typedef struct S_g8c4df884 S_g8c4df884;
struct Frame {
    char unknown0[0x20];
};
extern S_g8c323e80 *g_8c323e80;
extern S_g8c4df884 *g_8c4df884;
extern int g_8c4df88c;
extern int g_8c4df890;
extern char g_8c323ed4[];
extern void call_8c34d4e8(void *);
extern int call_8c12b0cc(void *);
extern void call_8c03ee90(Frame *, void *, void *);
extern void operation_8c105458(int, int, int);
void operation_8c1a81a0(void)
{
    Frame frame;
    int t1;
    if (g_8c4df88c == 0) {
        call_8c34d4e8(g_8c4df884);
        g_8c4df884 = 0;
        return;
    }
    t1 = call_8c12b0cc(g_8c323e80);
    if (t1 > 0) {
        call_8c03ee90((Frame *)((&frame)), (void *)((void *)0x8c4df864), (void *)((g_8c323ed4 + 0x9)));
        operation_8c105458((int)(&frame), (int)(void *)0x8c4dc860, t1);
    }
    g_8c4df890 = 0;
    g_8c4df88c = 0;
}
