typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0x20];
};
extern char g_8c2e8428[];
extern void call_8c03ef04(Frame *, int, void *);
extern int call_8c104d50(Frame *);
extern int call_8c011e9c(int);
extern int call_8c105380(Frame *, int);
void operation_8c030cc8(int a0)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    call_8c03ef04((Frame *)((&frame)), a0, (void *)((g_8c2e8428 + 0x3c)));
    t1 = call_8c104d50((Frame *)((&frame)));
    *(int *)0x8c44be48 = t1;
    if (t1 > 0) {
        t2 = call_8c011e9c(t1);
        *(int *)0x8c44be34 = t2;
        if (t2 != 0) {
            t3 = call_8c105380((Frame *)((&frame)), t2);
            *(int *)0x8c44be10 = t3;
            return;
        }
        *(int *)0x8c44be10 = 0;
        return;
    }
    *(int *)0x8c44be10 = 0;
}
