typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0xc];
};
extern char g_8c34041c[];
extern int operation_8c232480(void);
extern void call_8c12b048(Frame *, void *, ...);
extern void call_8c12b77c(void *, Frame *, int);
void operation_8c25c2c4(void)
{
    Frame frame;
    int t1;
    t1 = operation_8c232480();
    if (t1 != 0) {
        call_8c12b048((Frame *)((&frame)), (void *)((g_8c34041c + 0x9)), t1);
        call_8c12b77c((void *)((void *)0x8c513400), (Frame *)((&frame)), 8);
    }
}
