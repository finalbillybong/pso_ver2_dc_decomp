typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
typedef struct S_vv7 S_vv7;
typedef struct Block_frame_8 {
    float f00;
    float f04;
    float f08;
} Block_frame_8;
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
    Block_frame_8 f08;
};
struct S_vv7 {
    char unknown0[0x308];
    short f308;
};
struct Arg1 {
    Vector3 f00;
};
extern void operation_8c0368a8(void *);
void operation_8c02a438(int a0, Arg1 *a1, int a2)
{
    Frame frame;
    int v1;
    int v4;
    S_vv7 *v7;
    int v8;
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f04 = 0;
    (&frame)->f08.f08 = 0.0f;
    (&frame)->f08.f04 = 0.0f;
    (&frame)->f08.f00 = 0.0f;
    (&frame)->f00 = 0x24;
    (&frame)->f01 = 5;
    if ((unsigned short)a0 == 0xffff) {
        v7 = (S_vv7 *)0;
    } else {
        if ((int)(unsigned short)a0 >= 0xc) {
            v4 = (int)0;
        } else {
            v1 = (int)*(int *)((char *)0x8c41ce2c + ((unsigned short)a0 << 2));
            v4 = (int)v1;
        }
        v7 = (S_vv7 *)v4;
    }
    if (v7 != 0) {
        v8 = (int)(v7->f308 == 2);
        if (v8 == 0) {
            (&frame)->f02 = a0;
            (&frame)->f04 = a2;
            *(Vector3 *)&(&frame)->f08 = *(Vector3 *)&a1->f00;
            operation_8c0368a8((void *)(&frame));
        }
    }
}
