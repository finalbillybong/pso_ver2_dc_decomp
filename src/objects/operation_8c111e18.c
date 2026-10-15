typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Block_p0_3c f3c;
    char unknown48[0xa0];
    float fe8;
};
struct Arg1 {
    Vector3 f00;
};
extern int operation_8c051ff4(void *, void *, void *);
void operation_8c111e18(Object *o, Arg1 *a1, float f0)
{
    Frame frame;
    int t1;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
    t1 = operation_8c051ff4((void *)o, (void *)(&frame), (void *)0);
    if (a1 != 0) {
        *(Vector3 *)&a1->f00 = *(Vector3 *)&(&frame)->f00;
    }
    if (t1 == 1) {
        o->fe8 += -0.108888887f;
        o->f3c.f04 += o->fe8;
        (&frame)->f00.f04 += f0;
        if (!((&frame)->f00.f04 < o->f3c.f04)) {
            o->f3c.f04 = (&frame)->f00.f04;
            o->fe8 = 0.0f;
            o->f34 |= 0x800000;
            return;
        }
        o->f34 &= -0x800001;
        return;
    }
    o->f34 &= -0x800001;
}
