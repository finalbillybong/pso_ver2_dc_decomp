typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
typedef struct Block_p0_54 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_54;
typedef struct Block_p0_3a8 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3a8;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0xc];
    Block_p0_54 f54;
    char unknown60[0x330];
    int f390;
    char unknown394[0x10];
    int f3a4;
    Block_p0_3a8 f3a8;
    float f3b4;
    float f3b8;
    char unknown3bc[0x4];
    int f3c0;
};
extern void call_8c37f6f0(Frame *, void *);
extern float call_8c37e480(Frame *);
extern int call_8c04a52c(Object *, int, float);
extern void call_8c37b630(void *);
extern void call_8c3bdf60(void *, void *);
void operation_8c1bb9c8(Object *o)
{
    Frame frame;
    float v3;
    float t1;
    int t2;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f54;
    call_8c37f6f0((Frame *)((&frame)), (void *)(&o->f3c));
    (&frame)->f00.f04 = 0.0f;
    t1 = call_8c37e480((Frame *)((&frame)));
    if (1.0f > t1 && 1.0f > o->f3b4) {
        o->f3c = o->f54.f00;
        o->f44 = o->f54.f08;
        o->f3b4 = 0.0f;
        o->f3a8.f08 = 0.0f;
        o->f3a8.f00 = 0.0f;
        if (--*(int *)((char *)o + 0x3c0) >= 0) {
            return;
        }
        t2 = call_8c04a52c(o, 0, 150.0f);
        o->f3a4 = (unsigned short)t2;
        if ((unsigned short)t2 == 0xffff) {
            o->f3c0 = 0x3c;
            return;
        }
        o->f3c0 = 0xb4;
        o->f390 = 2;
        return;
    }
    if (25.0f > t1) {
        if (!(0.333333343f > (o->f3b4 -= 0.0333333351f))) {
            goto L_8c1bbab6;
        }
        o->f3b4 = 0.333333343f;
    } else {
        if ((o->f3b4 += 0.0333333351f) > o->f3b8) {
            o->f3b4 = o->f3b8;
        }
    }
L_8c1bbab6:;
    *(Vector3 *)&o->f3a8 = *(Vector3 *)&(&frame)->f00;
    if (t1 != 0.0f) {
        call_8c37b630((void *)(&o->f3a8));
    }
    o->f3a8.f00 = o->f3b4 * o->f3a8.f00;
    o->f3a8.f08 *= o->f3b4;
    call_8c3bdf60((void *)(&o->f3c), (void *)(&o->f3a8));
}
