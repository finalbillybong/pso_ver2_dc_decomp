typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    Frame *f18;
    int f1c;
    int f20;
    int f24;
};
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Arg0_24 *f24;
};
struct Arg0_20 {
    Vector3 f00;
};
struct Arg0_24 {
    Vector3 f00;
};
extern void set_child_blend(void);
extern void call_8c38e354(void *, int, int);
void operation_8c0cb478(Object *o)
{
    Frame frame;
    (&frame)->f18 = (&frame);
    (&frame)->f1c = (int)(((char *)o + 0x28));
    (&frame)->f20 = 0;
    (&frame)->f24 = 2;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f20->f00;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->f24->f00;
    set_child_blend();
    call_8c38e354((void *)(&(&frame)->f18), 1, 0x40);
}
