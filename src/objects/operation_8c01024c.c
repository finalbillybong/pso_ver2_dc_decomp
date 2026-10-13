typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0x8];
};
extern void read_time_fields(void *);
extern void call_8c372f14(int, int, int, int, Frame *, int);
void operation_8c01024c(int a0, int a1, int a2, int a3)
{
    Frame frame;
    read_time_fields((void *)(&frame));
    call_8c372f14(a0, a1, a2, a3, (Frame *)((&frame)), -0x80000000);
}
