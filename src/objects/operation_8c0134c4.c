typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    Vector3 f00;
};
struct Object {
    char unknown0[0x324];
    Vector3 f324;
};
void operation_8c0134c4(Object *o, Arg1 *a1)
{
    a1->f00 = o->f324;
}
