typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_48 Arg0_48;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x26];
    Vector3 f2c;
    float f38;
    float f3c;
    float f40;
    float f44;
    Arg0_48 *f48;
    int f4c;
};
struct Frame {
    Block_frame_0 f00;
};
extern void call_8c37f6f0(Frame *, void *);
extern float call_8c37e480(Frame *);
extern void call_8c37b630(Frame *);
extern void call_8c3bdf60(void *, void *, float);
extern void call_8c0a7608(void *, void *);
extern float call_8c38d7d8(void *, void *);
void operation_8c21b3f4(Object *o)
{
    Frame frame;
    float t1;
    float t2;
    float t3;
    if (--o->f4c < 0 || o->f48 == 0) {
        o->f04 |= 1;
        return;
    }
    if ((o->f44 += 0.266666681f) > 9.0f) {
        o->f44 = 9.0f;
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f2c;
    call_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x20)));
    t1 = call_8c37e480((Frame *)((&frame)));
    if (t1 > 0.01f) {
        call_8c37b630((Frame *)((&frame)));
    } else {
        (&frame)->f00.f00 = 1.0f;
        (&frame)->f00.f04 = 0.0f;
        (&frame)->f00.f08 = 0.0f;
    }
    t2 = call_8c37e480((Frame *)(&o->f38));
    if (t2 > 0.01f) {
        call_8c37b630((Frame *)(&o->f38));
    } else {
        o->f38 = 1.0f;
        o->f3c = 0.0f;
        o->f40 = 0.0f;
    }
    o->f38 = (o->f38 * 0.9f + (&frame)->f00.f00 * 0.100000024f) * o->f44;
    o->f3c = (o->f3c * 0.9f + (&frame)->f00.f04 * 0.100000024f) * o->f44;
    o->f40 = (o->f40 * 0.9f + (&frame)->f00.f08 * 0.100000024f) * o->f44;
    call_8c3bdf60((void *)(((char *)o + 0x20)), (void *)(&o->f38), 0.9f);
    call_8c0a7608((void *)(o->f48), (void *)(((char *)o + 0x20)));
    t3 = call_8c38d7d8((void *)(((char *)o + 0x20)), (void *)(&o->f2c));
    if (!(t3 > o->f44)) {
        o->f04 |= 1;
    }
}
