typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_13c_s754 Arg0_13c_s754;
struct Arg0_13c_s754 {
    char unknown0[0x8];
    float f08;
};
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
};
void operation_8c17a0a4(Object *o)
{
    ((Arg0_13c_s754 *)((char *)o->f13c + 0x754))->f08 = 1.0f;
}
