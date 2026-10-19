typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    Block_frame_c f0c;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
};
struct Arg1 {
    Vector3 f00;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c036840(int);
void operation_8c1112d4(int a0, Arg1 *a1, int a2)
{
    Frame frame;
    int v1;
    S_c8c021ef8 *t1;
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f00 = 0x3d;
    (&frame)->f01 = 1;
    (&frame)->f04 = 0;
    (&frame)->f06 = 0;
    (&frame)->f08 = -1;
    (&frame)->f0a = -1;
    (&frame)->f0c.f08 = 0.0f;
    (&frame)->f0c.f04 = 0.0f;
    (&frame)->f0c.f00 = 0.0f;
    (&frame)->f00 = 0x3e;
    (&frame)->f01 = 6;
    t1 = lookup_low_id((int)((unsigned short)a0));
    v1 = (int)0;
    if (t1 != 0) {
        if (((t1->f34 & 0x100000)) != 0) {
            v1 = (int)1;
        }
        (&frame)->f02 = a0;
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&a1->f00;
        (&frame)->f06 = a2;
        (&frame)->f04 = v1;
        operation_8c036840((int)(&frame));
    }
}
