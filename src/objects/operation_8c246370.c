typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    char f08;
    char f09;
    char f0a;
    char f0b;
    int f0c;
    char unknown10[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x24];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x10];
    int f88;
    int f8c;
    int f90;
    Arg0_94 *f94;
};
struct Arg0_94 {
    char unknown0[0x30];
    Vector3 f30;
    Block20 f3c;
};
struct Frame {
    Block_frame_0 f00;
};
void operation_8c246370(Object *o)
{
    Frame frame;
    if (o->f94 != 0) {
        *(Vector3 *)&o->f94->f30 = *(Vector3 *)&o->f3c;
        (&frame)->f00.f00 = o->f6c;
        (&frame)->f00.f04 = o->f70;
        (&frame)->f00.f08 = (int)o->f74;
        (&frame)->f00.f09 = (int)(float)o->f88;
        (&frame)->f00.f0a = (int)(float)o->f8c;
        (&frame)->f00.f0b = (int)(float)o->f90;
        (&frame)->f00.f0c = 0;
        *(Block20 *)&o->f94->f3c = *(Block20 *)&(&frame)->f00;
    }
}
