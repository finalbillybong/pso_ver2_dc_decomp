typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block36 {
    int words[9];
} Block36;
typedef struct Frame Frame;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct Block_frame_0 {
    char unknown0[0x20];
    int f20;
} Block_frame_0;
struct S_g8c4db9e4 {
    int f00;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_g8c4db9e0 {
    char unknown0[0x34c];
    Block_frame_0 f34c;
};
extern int operation_8c2324c0(void);
int operation_8c1cab38(void)
{
    Frame frame;
    int v1;
    int v2;
    int t1;
    t1 = operation_8c2324c0();
    if (t1 == 0) {
        return 0;
    }
    if (*(int *)0x8c4db9e4 != 0) {
        v1 = (int)((*(S_g8c4db9e4 **)0x8c4db9e4)->f00 & 2);
    } else {
        v1 = (int)0;
    }
    if (v1 != 0) {
        return 0;
    }
    if (*(int *)0x8c4dbb20 != 0) {
        return 0;
    }
    (&frame)->f00 = (*(S_g8c4db9e0 **)0x8c4db9e0)->f34c;
    v2 = (int)((&frame)->f00.f20 >= 0x186a0);
    return v2;
}
