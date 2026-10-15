typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0xc];
};
extern char g_8c32c13c[];
extern int operation_8c2324c0(void);
extern void call_8c12b048(Frame *, void *, ...);
extern void call_8c12b77c(void *, Frame *, int);
void operation_8c1e7684(void)
{
    Frame frame;
    int t1;
    t1 = operation_8c2324c0();
    if (t1 != 0) {
        call_8c12b048((Frame *)((&frame)), (void *)((g_8c32c13c + 0x12)), t1);
        call_8c12b77c((void *)((void *)0x8c4e3120), (Frame *)((&frame)), 8);
    }
}
