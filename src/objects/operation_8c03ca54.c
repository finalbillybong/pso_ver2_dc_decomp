typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x51152 S_x51152;
typedef struct S_x51152_s20 S_x51152_s20;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_x51152_s20 {
    char unknown0[0x18];
    int f18;
    float f1c;
};
struct Object {
    char unknown0[0x20];
    float f20;
    float f24;
    float f28;
    float f2c;
    char unknown30[0x4];
    int f34;
};
struct S_x51152 {
    char unknown0[0x3c];
    float f3c;
};
extern Vector3 g_8c2ef00c;
extern char g_8c41cba0[];
extern float call_8c130334(float, float);
extern float call_8c38c154(int);
extern float call_8c37eb0c(int);
void operation_8c03ca54(Object *o)
{
    Frame frame;
    float v1;
    int v28;
    float v2;
    float t1;
    float t2;
    float t3;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c2ef00c;
    v28 = o->f34 * 0x3c;
    v1 = ((S_x51152_s20 *)((char *)(v28 + g_8c41cba0) + 0x20))->f1c;
    v2 = (float)((S_x51152_s20 *)((char *)(v28 + g_8c41cba0) + 0x20))->f18;
    if (((*(int *)((char *)(g_8c41cba0 + 0x20) + v28) & 0x200)) != 0) {
        if (v1 > 0.1f) {
            (&frame)->f00.f00 = 0.0f;
            t1 = call_8c130334((float)*(short *)((char *)(g_8c41cba0 + 0x34) + (v28)), (float)*(short *)((char *)(g_8c41cba0 + 0x36) + (v28)));
            (&frame)->f00.f04 += -(v1 * call_8c38c154((int)((int)(float)(int)(t1 * 65536.0f / 6.28318405f))) * 0.4f) * o->f2c;
            (&frame)->f00.f08 = 0.0f;
            goto L_8c03cb70;
        }
        (&frame)->f00.f00 = 0.0f;
        (&frame)->f00.f04 = 0.0f;
        (&frame)->f00.f08 = 0.0f;
    } else {
        if (((*(int *)((char *)(g_8c41cba0 + 0x24) + v28) & 0x400)) != 0) {
            if (v1 > 0.1f) {
                t2 = call_8c37eb0c((int)((int)v2));
                (&frame)->f00.f00 = v1 * t2 * o->f2c;
                (&frame)->f00.f04 = 0.0f;
                t3 = call_8c38c154((int)((int)v2));
                (&frame)->f00.f08 = v1 * t3 * o->f2c;
            } else {
                (&frame)->f00.f00 = 0.0f;
                (&frame)->f00.f04 = 0.0f;
                (&frame)->f00.f08 = 0.0f;
            }
        }
    }
L_8c03cb70:;
    o->f20 += (&frame)->f00.f00;
    o->f24 += (&frame)->f00.f04;
    o->f28 += (&frame)->f00.f08;
}
