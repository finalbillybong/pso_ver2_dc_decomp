typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x390];
    float f3c8;
    float f3cc;
    float f3d0;
    char unknown3d4[0x4];
    float f3d8;
};
struct Frame {
    Block_frame_0 f00;
};
extern Vector3 g_8c3114f0;
extern void call_8c04a9e0(Object *, Frame *, float, float);
void operation_8c11e000(Object *o, int a1)
{
    Frame frame;
    float v42;
    float v1;
    if (((o->f34 & 0x800)) == 0 && a1 != 0) {
        v42 = (float)o->f3c8;
        v1 = (float)((o->f3d0 + o->f3d8 - v42) * 0.5f * (1.0f / (o->f3cc - v42)));
        {
            Vector3 *p_ = (Vector3 *)&g_8c3114f0;
            *(Vector3 *)&(&frame)->f00 = *p_;
        }
        (&frame)->f00.f00 = 1.0f - v1;
        (&frame)->f00.f04 = 1.0f - v1;
        (&frame)->f00.f08 = 1.0f - v1;
        call_8c04a9e0(o, (Frame *)((&frame)), v1, v42);
    }
}
