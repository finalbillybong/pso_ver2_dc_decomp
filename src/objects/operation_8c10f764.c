typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct Arg4 Arg4;
typedef struct Block_frame_24 {
    float f00;
    float f04;
    float f08;
} Block_frame_24;
struct Frame {
    float f00;
    float f04;
    float f08;
    Vector3 f0c;
    Vector3 f18;
    Block_frame_24 f24;
};
struct Arg3 {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct Arg2 {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
struct Object {
    char unknown0[0x90];
    char f90;
};
struct Arg4 {
    float f00;
    float f04;
    float f08;
};
extern float call_8c37e480(void *);
extern void call_8c37b630(void *);
extern void call_8c38ade4(void *);
extern void call_8c37df90(int, int);
extern void call_8c3be280(int, void *, void *);
extern void call_8c38accc(int);
extern float call_8c3845f0(Frame *, void *);
void operation_8c10f764(Object *o, Arg1 *a1, Arg2 *a2, Arg3 *a3, Arg4 *a4)
{
    Frame frame;
    float t1;
    float t2;
    float t3;
    (&frame)->f24.f00 = -a3->f00;
    (&frame)->f24.f04 = 0.0f;
    (&frame)->f24.f08 = -a3->f08;
    t1 = call_8c37e480((void *)(&(&frame)->f24));
    if (t1 != 0.0f) {
        call_8c37b630((void *)(&(&frame)->f24));
    }
    call_8c38ade4((void *)((void *)0x8c400500));
    call_8c37df90(0, 0x4000);
    call_8c3be280(0, (void *)(&(&frame)->f24), (void *)(&(&frame)->f18));
    call_8c38accc(1);
    call_8c38ade4((void *)((void *)0x8c400500));
    call_8c37df90(0, -0x4000);
    call_8c3be280(0, (void *)(&(&frame)->f24), (void *)(&(&frame)->f0c));
    call_8c38accc(1);
    (&frame)->f00 = a2->f00 - a1->f00;
    (&frame)->f04 = 0.0f;
    (&frame)->f08 = a2->f08 - a1->f08;
    t2 = call_8c37e480((void *)(&frame));
    if (t2 != 0.0f) {
        call_8c37b630((void *)(&frame));
    }
    t3 = call_8c3845f0((Frame *)((&frame)), (void *)(&(&frame)->f18));
    if (t3 > 0.0f) {
        *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&(&frame)->f0c;
    } else {
        *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&(&frame)->f18;
    }
    if (o->f90 >= 0x14) {
        a4->f00 = a1->f00 - (&frame)->f24.f00 * 20.0f;
        a4->f04 = a1->f04;
        a4->f08 = a1->f08 - (&frame)->f24.f08 * 20.0f;
        return;
    }
    a4->f00 = a1->f00 + (&frame)->f24.f00 * 20.0f;
    a4->f04 = a1->f04;
    a4->f08 = a1->f08 + (&frame)->f24.f08 * 20.0f;
}
