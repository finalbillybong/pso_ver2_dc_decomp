typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x30];
    Vector3 f30;
};
struct Arg1 {
    Vector3 f00;
};
void operation_8c246154(Object *o, Arg1 *a1)
{
    o->f30 = a1->f00;
}
