typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
    float f0c;
};
struct Object {
    char unknown0[0xc];
    float f0c;
    char unknown10[0xc];
    Vector3 f1c;
};
struct Arg1 {
    Block16 f00;
};
int operation_8c053ad8(Object *o, Arg1 *a1)
{
    Frame frame;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f1c;
    (&frame)->f00.f04 = 0.0f;
    (&frame)->f0c = o->f0c;
    if (a1 != 0) {
        *(Block16 *)&a1->f00 = *(Block16 *)&(&frame)->f00;
        return 1;
    }
    return 0;
}
