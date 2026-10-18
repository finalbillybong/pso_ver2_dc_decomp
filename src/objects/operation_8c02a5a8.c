typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv5 S_vv5;
struct S_vv5 {
    char unknown0[0x308];
    short f308;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
    short f08;
    unsigned short f0a;
};
extern void operation_8c0368a8(void *);
void operation_8c02a5a8(int a0, int a1, int a2)
{
    Frame frame;
    int v1;
    int v3;
    S_vv5 *v5;
    int v6;
    if ((unsigned short)a0 == 0xffff) {
        v5 = (S_vv5 *)0;
    } else {
        if ((int)(unsigned short)a0 >= 0xc) {
            v3 = (int)0;
        } else {
            v1 = (int)*(int *)((char *)0x8c41ce2c + ((unsigned short)a0 << 2));
            v3 = (int)v1;
        }
        v5 = (S_vv5 *)v3;
    }
    if (v5 != 0) {
        v6 = (int)(v5->f308 == 2);
        if (v6 != 0) {
            return;
        }
    }
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f04 = 0;
    (&frame)->f08 = 0;
    (&frame)->f0a = 0xffff;
    (&frame)->f00 = 0x2f;
    (&frame)->f01 = 3;
    (&frame)->f02 = a0;
    (&frame)->f04 = 0;
    (&frame)->f08 = a2;
    (&frame)->f0a = a1;
    operation_8c0368a8((void *)(&frame));
}
