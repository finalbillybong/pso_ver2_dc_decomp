typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0xc];
};
extern void call_8c3be280(int, int, Frame *);
extern float normalize_vector_checked(void *);
int operation_8c032614(int a0, int a1, float f0)
{
    Frame frame;
    int v1;
    float t1;
    call_8c3be280(0, a1, (&frame));
    t1 = normalize_vector_checked((void *)(&frame));
    v1 = (int)(t1 <= f0);
    return v1;
}
