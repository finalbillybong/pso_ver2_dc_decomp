typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4e2284 S_g8c4e2284;
typedef struct Object Object;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
typedef struct Block_p0_3c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3c;
typedef struct Block_frame_c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_c;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x34c];
    int f394;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
};
struct S_g8c4e2284 {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern void call_8c37f6f0(Frame *, void *);
extern float call_8c37e480(Frame *);
extern void call_8c37b630(Frame *);
void operation_8c1bc0c4(Object *o)
{
    Frame frame;
    float t1;
    if (o->f394 != 0 && *(int *)0x8c4e2284 != 0) {
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&(*(S_g8c4e2284 **)0x8c4e2284)->f3c;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
        call_8c37f6f0((Frame *)((&frame)), (void *)(&(&frame)->f0c));
        (&frame)->f00.f04 = 0.0f;
        t1 = call_8c37e480((Frame *)((&frame)));
        if (100.0f > t1) {
            if (t1 > 0.01f) {
                call_8c37b630((Frame *)((&frame)));
            } else {
                (&frame)->f00.f00 = 1.0f;
                (&frame)->f00.f08 = 0.0f;
            }
            o->f3c.f00 = (&frame)->f0c.f00 + (&frame)->f00.f00 * 100.0f;
            o->f3c.f08 = (&frame)->f0c.f08 + (&frame)->f00.f08 * 100.0f;
        }
    }
}
