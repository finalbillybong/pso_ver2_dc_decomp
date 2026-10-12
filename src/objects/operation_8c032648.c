typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0xc];
};
extern float distance_xz(void *, void *);
extern void call_8c3be280(int, int, Frame *);
extern float normalize_vector_checked(void *);
int operation_8c032648(int a0, int a1, float f0, float f1, float f2)
{
    Frame frame;
    int v22;
    float t1;
    float t2;
    if (*(int *)0x8c46ee80 != 0) {
        t1 = distance_xz((void *)(*(int *)0x8c46ee80 + 0x90), (void *)a1);
        if ((f2 * f2) > t1) {
            return 1;
        }
    }
    call_8c3be280(0, a1, (Frame *)((&frame)));
    t2 = normalize_vector_checked((void *)(&frame));
    v22 = (int)(t2 <= f0);
    return v22;
}
