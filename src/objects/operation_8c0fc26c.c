typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c06533c S_c8c06533c;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct S_c8c06533c {
    char unknown0[0x4];
    float f04;
};
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x7c];
    int fa0;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_20 {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern S_c8c06533c *forward_word_operation_8c06533c(void);
extern int operation_8c065554(void);
extern void call_8c37f6f0(Frame *, S_c8c06533c *);
extern float call_8c130334(float, float);
void operation_8c0fc26c(Object *o, int a1)
{
    Frame frame;
    S_c8c06533c *t1;
    int t2;
    float t3;
    t1 = forward_word_operation_8c06533c();
    if (t1 != 0 && !(0.0f > t1->f04)) {
        t2 = operation_8c065554();
        if (t2 != 0) {
            goto L_8c0fc2a0;
        }
    }
    o->fa0 = a1;
    return;
L_8c0fc2a0:;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f20->f3c;
    call_8c37f6f0((Frame *)((&frame)), t1);
    t3 = call_8c130334((&frame)->f00.f00, (&frame)->f00.f08);
    o->fa0 = (int)(t3 * 65536.0f / 6.28318405f);
}
