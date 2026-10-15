typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_78 Arg0_78;
typedef struct Arg0_78_94 Arg0_78_94;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
typedef struct Block_p0_78_94_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_78_94_3c;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x78];
    Arg0_78 *f78;
    char unknown7c[0x34];
    Vector3 fb0;
    char unknownbc[0x18];
    float fd4;
    float fd8;
    float fdc;
};
struct Arg0_78 {
    char unknown0[0x94];
    Arg0_78_94 *f94;
};
struct Arg0_78_94 {
    char unknown0[0x3c];
    Block_p0_78_94_3c f3c;
};
void operation_8c10e5c4(Object *o)
{
    Frame frame;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&*(Vector3 *)0x8c30fb1c;
    if (o->f78->f94 != 0) {
        o->fd4 = o->f78->f94->f3c.f00 + (&frame)->f00.f00;
        o->fd8 = o->f78->f94->f3c.f04 + (&frame)->f00.f04;
        o->fdc = o->f78->f94->f3c.f08 + (&frame)->f00.f08;
        *(Vector3 *)&o->fb0 = *(Vector3 *)&o->f78->f94->f3c;
    }
}
