typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct Object Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x94];
    int f94;
    float f98;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_g8c46ee80 {
    char unknown0[0x90];
    Vector3 f90;
};
extern void call_8c37f6f0(Frame *, void *);
extern float call_8c37e480(Frame *);
void operation_8c21a908(Object *o)
{
    Frame frame;
    float v2;
    float t1;
    switch (o->f94) {
    case 0:
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&(*(S_g8c46ee80 **)0x8c46ee80)->f90;
        call_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x3c)));
        (&frame)->f00.f04 = 0.0f;
        t1 = call_8c37e480((Frame *)((&frame)));
        if (!(t1 > 150.0f)) {
            v2 = (float)0.0f;
        } else {
            if (!(200.0f > t1)) {
                v2 = (float)1.0f;
            } else {
                v2 = (float)((t1 - 150.0f) / 50.0f);
            }
        }
        o->f98 = v2 * 0.35f + 0.05f;
        return;
    case 1:
        if (!((o->f98 += 0.0333333351f) > 1.0f)) {
            return;
        }
        o->f98 = 1.0f;
        return;
    case 2:
        if (0.0f > (o->f98 += -0.0333333351f)) {
            o->f98 = 0.0f;
        }
    }
}
