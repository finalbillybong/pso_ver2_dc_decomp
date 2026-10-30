typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_400 Arg0_400;
typedef struct Arg0_404 Arg0_404;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
typedef struct Block_p0_400_3c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_400_3c;
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
};
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x398];
    Arg0_400 *f400;
    Arg0_404 *f404;
};
struct Arg0_400 {
    char unknown0[0x3c];
    Block_p0_400_3c f3c;
};
struct Arg0_404 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
extern void call_8c3bdf60(void *, void *);
extern void call_8c37f6f0(Frame *, void *);
extern float call_8c37e480(Frame *);
extern void call_8c37b630(Frame *);
extern int operation_8c051ff4(void *, void *, void *);
extern int call_8c11b8b8(Object *, void *);
extern int call_8c11b7f0(Object *, int, void *, float, float);
extern float call_8c130334(float, float);
int operation_8c11b610(Object *o)
{
    float t1;
    Frame frame;
    int v4;
    int v5;
    int t4;
    int t5;
    float v7;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f400->f3c;
    call_8c3bdf60((void *)(&(&frame)->f0c), (void *)(&o->f404->f3c));
    (&frame)->f0c.f00 *= 0.5f;
    (&frame)->f0c.f04 *= 0.5f;
    (&frame)->f0c.f08 *= 0.5f;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
    call_8c37f6f0((Frame *)((&frame)), (void *)(&(&frame)->f0c));
    t1 = call_8c37e480((Frame *)((&frame)));
    if (!(10.0f > t1)) {
        call_8c37b630((Frame *)((&frame)));
        (&frame)->f00.f00 *= 10.0f;
        (&frame)->f00.f04 *= 10.0f;
        (&frame)->f00.f08 *= 10.0f;
    }
    v4 = (int)0x400;
    v7 = (float)(float)0.0f;
    v5 = (int)0x404;
    while (t1 > v7) {
        int t2;
        (&frame)->f0c.f04 += 10.0f;
        t2 = operation_8c051ff4((void *)o, (void *)(&(&frame)->f0c), (void *)0);
        if (0 != t2) {
            int t3;
            t3 = call_8c11b8b8(o, (void *)(&(&frame)->f0c));
            if (t3 != 0) {
                t4 = call_8c11b7f0(o, (int)((int)*(int *)((char *)((char *)o + 0x0) + (v4)) + 0x3c), (void *)(&(&frame)->f0c), 10.0f, 10.0f);
                if (t4 != 0) {
                    float pm7;
                    pm7 = 10.0f;
                    t5 = call_8c11b7f0(o, (int)(0x3c + (int)*(int *)((v5) + (char *)((char *)o + 0x0))), (void *)(&(&frame)->f0c), pm7, 10.0f);
                    if (!(t5 == 0)) {
                        float t6;
                        Arg0_400 *pm8;
                        *(Vector3 *)&o->f3c = *(Vector3 *)&(&frame)->f0c;
                        pm8 = o->f400;
                        t6 = call_8c130334(o->f404->f3c - pm8->f3c.f00, o->f404->f44 - o->f400->f3c.f08);
                        o->f64 = (int)(t6 * 65536.0f / 6.28318405f) + 0x4000;
                        return 1;
                    }
                }
            }
        }
        v7 = (float)(v7 + 10.0f);
        call_8c3bdf60((void *)(&(&frame)->f0c), (void *)(&frame));
    }
    return 0;
}
