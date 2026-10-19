typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_1c Arg0_1c;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    float f0c;
    char unknown10[0xc];
    Arg0_1c *f1c;
    Arg0_20 *f20;
    Arg0_24 *f24;
};
struct Arg1 {
    char unknown0[0x10];
    float f10;
    float f14;
    char unknown18[0x18];
    int f30;
    float f34;
};
struct Frame {
    float f00;
    float f04;
};
extern void operation_8c19a370(int, int, int, float, float);
extern void call_8c19a3a0(Frame *, void *, void *, float);
void operation_8c1db904(Object *o, Arg1 *a1)
{
    Frame frame;
    if (((o->tag & 4)) != 0 && a1->f30 >= 0) {
        (&frame)->f00 = a1->f10 + o->f08;
        (&frame)->f04 = a1->f14 + o->f0c;
        operation_8c19a370((int)a1, 1, 1, -1.0f / (a1->f34 + 0.0897f), 100000.0f);
        call_8c19a3a0((Frame *)((&frame)), (void *)(o->f1c), (void *)(o->f24), 100000.0f);
        if (((o->tag & 0x10)) == 0) {
            (&frame)->f00 += 143.0f;
            call_8c19a3a0((Frame *)((&frame)), (void *)((void *)0x8c32ae18), (void *)(o->f24), 100000.0f);
        }
        (&frame)->f00 += 12.0f;
        call_8c19a3a0((Frame *)((&frame)), (void *)(o->f20), (void *)(o->f24), 100000.0f);
    }
}
