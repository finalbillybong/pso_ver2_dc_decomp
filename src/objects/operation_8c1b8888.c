typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern int operation_8c1ae23c(void);
extern int ring_actor_eligible(unsigned short);
extern int operation_8c1b893c(int);
extern S_c8c021ef8 *lookup_low_id(int);
extern float call_8c130334(float, float);
int operation_8c1b8888(int a0)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    S_c8c021ef8 *t4;
    float t5;
    t1 = operation_8c1ae23c();
    if ((unsigned short)t1 != 0xffff) {
        t2 = ring_actor_eligible((unsigned short)t1);
        if (t2 != 0) {
            goto L_8c1b88b6;
        }
    }
    t3 = operation_8c1b893c(a0);
    return (int)(t3);
L_8c1b88b6:;
    t4 = lookup_low_id((int)((unsigned short)t1));
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&t4->f3c;
    (&frame)->f00.f00 -= 10000.0f;
    t5 = call_8c130334(-(&frame)->f00.f00, (&frame)->f00.f08);
    return (int)(t5 * 65536.0f / 6.28318405f) + 0x800 >> 0xc & 0xf;
}
