typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x2a0];
    short f308;
    char unknown30a[0x72];
    int f37c;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    Block_frame_c f0c;
};
extern void operation_8c02c100(void *);
extern int operation_8c01d728(void *);
extern void operation_8c036840(int);
void operation_8c1e9180(Object *o)
{
    Frame frame;
    int v1;
    int v3;
    int t1;
    if (o != 0) {
        v1 = (int)(o->f308 == 2);
        if (v1 != 0) {
            return;
        }
    }
    v3 = (int)(((o->f34 & 0x100000)) != 0);
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f00 = 0x3d;
    (&frame)->f01 = 1;
    (&frame)->f04 = 0;
    (&frame)->f06 = 0;
    (&frame)->f08 = -1;
    (&frame)->f0a = -1;
    (&frame)->f0c.f08 = 0.0f;
    (&frame)->f0c.f04 = 0.0f;
    (&frame)->f0c.f00 = 0.0f;
    (&frame)->f00 = 0x3e;
    (&frame)->f01 = 6;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = v3;
    (&frame)->f06 = o->f64;
    operation_8c02c100((void *)o);
    (&frame)->f08 = o->f37c;
    t1 = operation_8c01d728((void *)o);
    (&frame)->f0a = t1;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f3c;
    operation_8c036840((int)(&frame));
}
