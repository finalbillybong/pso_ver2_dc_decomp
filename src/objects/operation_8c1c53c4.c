typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0541b4 S_c8c0541b4;
typedef struct Frame Frame;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_c8c0541b4 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x2e0];
    float f328;
};
extern S_c8c0541b4 *operation_8c0541b4(int, int);
extern void create_effect_777c(void *, int);
void operation_8c1c53c4(int a0, int a1, int a2, int a3)
{
    Frame frame;
    S_c8c0541b4 *t1;
    t1 = operation_8c0541b4(a2, a3);
    if (t1 != 0) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&t1->f3c;
        (&frame)->f00.f04 = t1->f328;
    }
    create_effect_777c((void *)(&frame), 0x45);
}
