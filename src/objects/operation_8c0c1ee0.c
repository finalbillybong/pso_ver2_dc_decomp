typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg1 Arg1;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x368];
    int f3d0;
};
struct Arg1 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
};
struct Frame {
    Block_frame_0 f00;
};
extern void call_8c37f6f0(Frame *, void *);
extern float call_8c130334(float, float);
extern int angle_difference(int, int);
void operation_8c0c1ee0(Object *o, Arg1 *a1)
{
    Frame frame;
    int v1;
    float t1;
    int t2;
    if (!(o->f3d0 >= 0xc) && a1 != 0 && a1 != (void *)o && ((a1->f34 & 0x6000800)) == 0) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&a1->f3c;
        call_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x3c)));
        if (!(((&frame)->f00.f00 * (&frame)->f00.f00 + (&frame)->f00.f08 * (&frame)->f00.f08) > 160000.0f)) {
            t1 = call_8c130334((&frame)->f00.f08, (&frame)->f00.f00);
            t2 = angle_difference((int)(-(int)(t1 * 65536.0f / 6.28318405f) + 0x4000), (int)(o->f64));
            if (!(t2 > 0xaaa)) {
                v1 = (int)o->f3d0;
                o->f3d0 = v1 + 1;
                *(short *)((char *)((char *)o + 0x3d4) + (v1 << 1)) = a1->f20;
            }
        }
    }
}
