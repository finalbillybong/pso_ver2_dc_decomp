typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_394 Arg0_394;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0x33c];
    int f390;
    Arg0_394 *f394;
    int f398;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_394 {
    char unknown0[0x3a8];
    int f3a8;
};
extern void call_8c3bdf60(void *, void *);
extern float call_8c37e480(Frame *);
void operation_8c1bcd60(Object *o)
{
    Frame frame;
    float t1;
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
    call_8c3bdf60((void *)(&o->f3c), (void *)(((char *)o + 0x3a8)));
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
    (&frame)->f00.f04 = 0.0f;
    if (--o->f398 >= 0) {
        t1 = call_8c37e480((Frame *)((&frame)));
        if (!(t1 > 260.0f)) {
            return;
        }
    }
    if (o->f390 != 3) {
        o->f394->f3a8 += 1;
        o->f390 = 3;
    }
}
