typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x2dc];
    Vector3 f324;
    char unknown330[0x88];
    Arg0_3b8 *f3b8;
};
struct Arg0_3b8 {
    char unknown0[0x3c];
    Vector3 f3c;
};
void operation_8c15edf4(Object *o)
{
    *(Vector3 *)&o->f3c = *(Vector3 *)&o->f3b8->f3c;
    o->f3c.f00 += 1000.0f;
    o->f3c.f04 += 1000.0f;
    *(Vector3 *)&o->f324 = *(Vector3 *)&o->f3c;
}
