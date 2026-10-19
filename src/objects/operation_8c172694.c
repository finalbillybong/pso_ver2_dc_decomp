typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4db4e4 S_g8c4db4e4;
struct Frame {
    char unknown0[0x40];
};
extern S_g8c4db4e4 *g_8c4db4e4;
extern char g_8c318c08[];
extern void call_8c12b048(Frame *, void *, ...);
extern int call_8c12b0cc(Frame *);
extern void call_8c18e720(void *, Frame *);
void operation_8c172694(void)
{
    Frame frame;
    int t1;
    call_8c12b048((Frame *)((&frame)), (void *)((g_8c318c08 + 0x3d)), 1, 0xc);
    t1 = call_8c12b0cc((Frame *)((&frame)));
    call_8c18e720(g_8c4db4e4, (Frame *)((&frame)));
    g_8c4db4e4 = (S_g8c4db4e4 *)((int)g_8c4db4e4 + t1);
}
