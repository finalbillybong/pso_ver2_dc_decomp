typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Arg1 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x2d0];
    float f318;
    char unknown31c[0x4];
    float f320;
};
extern void call_8c37f6f0(Frame *, int);
extern void normalize_xz_checked(void *);
void operation_8c0f3780(int a0, Arg1 *a1, float f0)
{
    Frame frame;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&a1->f3c;
    call_8c37f6f0((Frame *)((&frame)), (int)(a0 + 0x3c));
    normalize_xz_checked((void *)(&frame));
    a1->f318 = (&frame)->f00.f00 * f0 + a1->f318;
    a1->f320 = (&frame)->f00.f08 * f0 + a1->f320;
}
