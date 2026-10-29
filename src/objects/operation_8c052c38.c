typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block24 {
    int words[6];
} Block24;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct S_vv5 S_vv5;
typedef struct Block_frame_0 {
    int f00;
    int f04;
    Vector3 f08;
    int f14;
} Block_frame_0;
struct Arg1 {
    char unknown0[0x64];
    int f64;
    char unknown68[0x74];
    int fdc;
    int fe0;
};
struct Frame {
    Block_frame_0 a;
    Block_frame_0 b;
};
struct Arg2 {
    Vector3 f00;
};
struct S_vv5 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x74];
    int fdc;
    int fe0;
};
extern float squared_distance_xz(void *, void *);
extern int call_8c052750(Block_frame_0, Block_frame_0);
int operation_8c052c38(int a0, Arg1 *a1, Arg2 *a2)
{
    Frame frame;
    int v1;
    S_vv5 *v5;
    int v4;
    int v2;
    int v3;
    if (a1 != 0) {
        v1 = (int)a1->fdc;
        if (v1 != 0) {
            (&frame)->b.f00 = v1;
            (&frame)->b.f04 = (int)(a1->fe0);
            v2 = -0x7ffff800;
            (&frame)->b.f08 = a2->f00;
            v3 = (int)(a1->f64);
            v4 = *(int *)0x8c467874;
            (&frame)->b.f14 = v3;
            for (; *(int *)0x8c467870 > v4; v4++) {
                v5 = (S_vv5 *)*(S_g8c467240 **)((char *)0x8c467240 + (v4 << 2));
                if (v5 != 0 && v5 != (void *)a1 && ((v5->f34 & v2)) == 0 && v5->fdc != 0) {
                    if (10000.0f > squared_distance_xz((void *)(((char *)a1 + 0x3c)), (void *)((int)v5 + 0x3c))) {
                        (&frame)->a.f00 = (int)(v5->fdc);
                        (&frame)->a.f04 = (int)(v5->fe0);
                        (&frame)->a.f08 = v5->f3c;
                        (&frame)->a.f14 = (int)(v5->f64);
                        if (call_8c052750((&frame)->b, (&frame)->a) != 0) {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
