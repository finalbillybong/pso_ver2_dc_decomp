typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x3b0];
    Vector3 f3b0;
};
struct Arg1 {
    Vector3 f00;
};
void set_fields_8c05c1a4(Object *o, Arg1 *a1)
{
    o->f3b0 = a1->f00;
}
