typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_8 {
    float f00;
    float f04;
    float f08;
} Block_frame_8;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x2a0];
    short f308;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
    Block_frame_8 f08;
};
extern void operation_8c0368a8(void *);
void operation_8c1f0ab8(Object *o)
{
    Frame frame;
    int v1;
    if (o != 0) {
        v1 = (int)(o->f308 == 2);
        if (v1 != 0) {
            return;
        }
    }
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f00 = 0x3d;
    (&frame)->f01 = 1;
    (&frame)->f08.f08 = 0.0f;
    (&frame)->f08.f04 = 0.0f;
    (&frame)->f08.f00 = 0.0f;
    (&frame)->f00 = 0x56;
    (&frame)->f01 = 5;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = (int)(o->f64);
    *(Vector3 *)&(&frame)->f08 = *(Vector3 *)&o->f3c;
    operation_8c0368a8((void *)(&frame));
}
