typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
typedef struct Block_frame_8 {
    float f00;
    float f04;
    float f08;
} Block_frame_8;
typedef struct Block_frame_14 {
    float f00;
    float f04;
    float f08;
} Block_frame_14;
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x2c0];
    short f308;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
    Block_frame_8 f08;
    Block_frame_14 f14;
};
struct Arg1 {
    Vector3 f00;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c0368a8(void *);
void operation_8c1f0948(int a0, Arg1 *a1, int a2)
{
    Frame frame;
    int v1;
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((int)((unsigned short)a0));
    if (t1 != 0) {
        if (t1 != 0) {
            v1 = (int)(t1->f308 == 2);
            if (v1 != 0) {
                return;
            }
        }
        (&frame)->f00 = 0x1a;
        (&frame)->f01 = 1;
        (&frame)->f00 = 0x3d;
        (&frame)->f01 = 1;
        (&frame)->f04 = 0;
        (&frame)->f08.f08 = 0.0f;
        (&frame)->f08.f04 = 0.0f;
        (&frame)->f08.f00 = 0.0f;
        (&frame)->f14.f08 = 0.0f;
        (&frame)->f14.f04 = 0.0f;
        (&frame)->f14.f00 = 0.0f;
        (&frame)->f00 = 0x55;
        (&frame)->f01 = 8;
        (&frame)->f02 = a0;
        (&frame)->f04 = a2;
        *(Vector3 *)&(&frame)->f08 = *(Vector3 *)&t1->f3c;
        *(Vector3 *)&(&frame)->f14 = *(Vector3 *)&a1->f00;
        operation_8c0368a8((void *)(&frame));
    }
}
