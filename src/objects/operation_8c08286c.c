typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    float f00;
    char unknown4[0x4];
};
extern float squared_distance_xyz(void *, void *);
extern void call_8c38ad50(int, int, Frame *);
int operation_8c08286c(int a0, float f0, float f1)
{
    Frame frame;
    float t1;
    t1 = squared_distance_xyz((void *)(a0 + 0x3c), (void *)(*(int *)0x8c46ee80 + 0x90));
    if (t1 > (f0 * f0)) {
        return 0;
    }
    if ((f1 * f1) > t1) {
        return 1;
    }
    call_8c38ad50(0, (int)(a0 + 0x3c), (Frame *)((&frame)));
    if (-f1 <= (&frame)->f00 && (&frame)->f00 <= (f1 + 640.0f)) {
        return 1;
    }
    return 0;
}
