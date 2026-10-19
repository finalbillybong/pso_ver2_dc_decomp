typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4db4e4 S_g8c4db4e4;
struct Frame {
    char unknown0[0x3f];
    char f3f;
};
extern S_g8c4db4e4 *g_8c4db4e4;
extern char g_8c318c08[];
extern int operation_8c248044(void);
extern void call_8c12b048(Frame *, void *, ...);
extern int call_8c12b0cc(Frame *);
extern void call_8c18e720(void *, Frame *);
void operation_8c172750(void)
{
    Frame frame;
    int t1;
    int t2;
    t1 = operation_8c248044();
    call_8c12b048((Frame *)((&frame)), (void *)((g_8c318c08 + 0x50)), t1);
    (&frame)->f3f = 0;
    t2 = call_8c12b0cc((Frame *)((&frame)));
    call_8c18e720(g_8c4db4e4, (Frame *)((&frame)));
    g_8c4db4e4 = (S_g8c4db4e4 *)((int)g_8c4db4e4 + t2);
}
