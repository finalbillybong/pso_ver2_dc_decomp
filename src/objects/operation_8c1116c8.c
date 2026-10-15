typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0x40];
};
extern char g_8c30fb40[];
extern void call_8c12b0cc(int);
extern void call_8c12b048(Frame *, void *, ...);
extern void call_8c18e720(void *, Frame *);
void operation_8c1116c8(int a0, int a1)
{
    Frame frame;
    if (!(a0 >= 0x19)) {
        call_8c12b0cc(a1);
        call_8c12b048((Frame *)((&frame)), (void *)((g_8c30fb40 + 0x1d)), a1);
        call_8c18e720((void *)(&*(int *)((char *)0x8c30c888 + (a0 << 6))), (Frame *)((&frame)));
    }
}
