typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0xc0];
};
extern int call_8c371cfc(int);
extern int call_8c371b30(int);
extern void call_8c1847c0(Frame *, int);
extern void call_8c184828(Frame *, Frame *);
extern void call_8c371cb2(int, Frame *);
void operation_8c1846d4(int a0, int a1)
{
    Frame frame;
    char *v1;
    int t1;
    int t2;
    v1 = (char *)*(int *)((char *)0x8c287244 + (a1 << 2));
    t1 = call_8c371cfc((int)(v1));
    if (t1 != 0) {
        t2 = call_8c371b30((int)(v1));
        switch (t2) {
        case 1:
            call_8c1847c0((Frame *)((&frame)), a0);
            call_8c184828((Frame *)((&frame)), (Frame *)((&frame)));
            break;
        default:
            call_8c184828((Frame *)((&frame)), (Frame *)a0);
            break;
        }
        call_8c371cb2((int)(v1), (Frame *)((&frame)));
    }
}
