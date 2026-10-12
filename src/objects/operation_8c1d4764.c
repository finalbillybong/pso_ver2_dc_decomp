typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c418a00 S_g8c418a00;
struct Frame {
    char unknown0[0x18];
};
extern void call_8c253650(int, Frame *);
extern void call_8c02fc44(void *, Frame *);
void operation_8c1d4764(int a0, int a1)
{
    Frame frame;
    call_8c253650(a1, (&frame));
    call_8c02fc44(*(S_g8c418a00 **)0x8c418a00, (&frame));
}
