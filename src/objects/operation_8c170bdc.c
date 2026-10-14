typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db658 S_g8c4db658;
struct Frame {
    char unknown0[0x14];
};
extern void call_8c1c9a74(Frame *, void *, void *);
extern int call_8c2481b4(Frame *);
void operation_8c170bdc(int a0)
{
    Frame frame;
    int t1;
    call_8c1c9a74((Frame *)((&frame)), (void *)((void *)0x8c4db64c), (void *)(*(S_g8c4db658 **)0x8c4db658));
    t1 = call_8c2481b4((Frame *)((&frame)));
    if (t1 != 0) {
        *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2)) = 1;
        return;
    }
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2)) = 0;
}
