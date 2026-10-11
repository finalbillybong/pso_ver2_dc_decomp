typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x8];
    float f08;
    float f0c;
};
struct Arg1 {
    char unknown0[0x8];
    float f08;
    float f0c;
};
void set_fields_8c197cb0(Object *o, Arg1 *a1)
{
    o->f08 = a1->f08 - 7.0f;
    o->f0c = a1->f0c - 5.0f;
}
