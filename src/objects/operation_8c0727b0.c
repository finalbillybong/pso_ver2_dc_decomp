typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Arg1 {
    Vector3 f00;
};
extern float g_8c4689b0;
extern void call_8c37f6f0(Frame *, void *);
extern float normalize_xz_checked(void *);
extern float call_8c37f6d8(float);
extern float call_8c3845f0(Frame *, void *);
int operation_8c0727b0(int a0, Arg1 *a1, float f0)
{
    Frame frame;
    float v1;
    float t1;
    float t2;
    float t3;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&a1->f00;
    (&frame)->f00.f04 = 0.0f;
    call_8c37f6f0((Frame *)((&frame)), (void *)((void *)0x8c468998));
    t1 = normalize_xz_checked((void *)(&frame));
    if ((t1 + f0) < g_8c4689b0) {
        t3 = call_8c37f6d8(t1 * t1 + f0 * f0);
        v1 = (float)(t1 * t3);
        t2 = call_8c3845f0((Frame *)((&frame)), (void *)((void *)0x8c4689a4));
        if (!(v1 > t2)) {
            return 1;
        }
    }
    return 0;
}
