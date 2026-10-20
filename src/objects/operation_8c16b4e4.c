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
typedef struct S_vv5 S_vv5;
typedef struct Block_frame_0 {
    int f00;
    int f04;
    Vector3 f08;
    int f14;
} Block_frame_0;
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
struct Frame {
    Block_frame_0 f00;
};
struct Arg1 {
    Block24 f00;
};
extern int g_8c467870;
extern int g_8c467874;
extern int g_8c467878;
extern float squared_distance_xz(void *, void *);
extern int call_8c052750(Block24, Block_frame_0);
int operation_8c16b4e4(int a0, Arg1 *a1)
{
    Block_frame_0 frame;
    S_vv5 *v5;
    int v4;
    int v3;
    int v1;
    int t2;
    v1 = 0x800;
    v3 = g_8c467870;
    for (v4 = g_8c467874 + g_8c467878; v4 < v3; v4++) {
        v5 = *(S_vv5 **)((char *)0x8c467240 + (v4 << 2));
        if (v5 != 0 && v5->fdc != 0 && (v5->f34 & v1) == 0) {
            if (10000.0f > squared_distance_xz((char *)a1 + 0x8, (char *)v5 + 0x3c)) {
                frame.f00 = v5->fdc;
                frame.f04 = v5->fe0;
                frame.f08 = v5->f3c;
                frame.f14 = v5->f64;
                t2 = call_8c052750(a1->f00, frame);
                if (t2 != 0) {
                    return t2;
                }
            }
        }
    }
    return 0;
}
