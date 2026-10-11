typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
};
struct Arg0_24 {
    char unknown0[0x38];
    float f38;
    float f3c;
    char unknown40[0x18];
    int f58;
};
void operation_8c051dcc(Object *o, float f0, float f1)
{
    o->f24->f38 = f0 - 9.0f;
    o->f24->f3c = f1 - 13.0f;
    o->f24->f58 = 3;
}
