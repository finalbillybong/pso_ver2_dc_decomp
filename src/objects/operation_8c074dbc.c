typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_13c_s58c Arg0_13c_s58c;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
};
struct Arg0_13c_s58c {
    char unknown0[0x1c];
    float f1c;
};
float operation_8c074dbc(Object *o)
{
    return (o->f13c != 0) ? ((Arg0_13c_s58c *)((char *)o->f13c + 0x58c))->f1c : 1.0f;
}
