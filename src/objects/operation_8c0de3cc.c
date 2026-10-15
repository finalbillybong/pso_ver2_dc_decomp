typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c418a00 S_g8c418a00;
struct Frame {
    int f00;
    char unknown4[0x14];
};
extern int operation_8c2097a8(int);
extern void call_8c253650(int, Frame *);
extern void call_8c02fbcc(void *, Frame *);
void operation_8c0de3cc(void)
{
    Frame frame;
    char *v1;
    int t1;
    v1 = (char *)*(int *)0x8c4db9e4;
    t1 = operation_8c2097a8(0x40000);
    if (t1 != 0) {
        (&frame)->f00 = 1;
    } else {
        (&frame)->f00 = 0;
    }
    call_8c253650((int)(v1 + 0x128c), (Frame *)((&frame)));
    call_8c02fbcc((void *)(*(S_g8c418a00 **)0x8c418a00), (Frame *)((&frame)));
}
