typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
};
struct Arg1 {
    Vector3 f00;
};
struct Arg2 {
    Vector3 f00;
};
extern void call_8c37f6f0(Frame *, void *);
extern float call_8c37e480(Frame *);
extern void call_8c37b630(Frame *);
extern int operation_8c051ff4(void *, void *, void *);
extern void call_8c3bdf60(void *, Frame *);
int operation_8c11b7f0(int a0, Arg1 *a1, Arg2 *a2, float f0, float f1)
{
    float t1;
    Frame frame;
    float v1;
    int t2;
    Vector3 *pm3;
    float v2;
    Frame *pm5;
    pm3 = &a1->f00;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)pm3;
    *(Vector3 *)&(&frame)->f00 = *(&a2->f00);
    call_8c37f6f0(((&frame)), (void *)(&(&frame)->f0c));
    t1 = call_8c37e480(((&frame)));
    if (f0 > t1) {
        return 1;
    }
    call_8c37b630((Frame *)((&frame)));
    v1 = (float)0.0f;
    (&frame)->f00.f00 *= f0;
    (&frame)->f00.f04 *= f0;
    (&frame)->f00.f08 *= f0;
    v2 = (float)v1;
    while (t1 > v2) {
        (&frame)->f0c.f04 += f1;
        t2 = operation_8c051ff4((void *)a0, (void *)(&(&frame)->f0c), (void *)0);
        if (t2 == 0) {
            return 0;
        }
        pm5 = (Frame *)((&frame));
        v1 = v2 + f0;
        v2 = (float)(v1);
        call_8c3bdf60((void *)(&(&frame)->f0c), pm5);
    }
    return 1;
}
