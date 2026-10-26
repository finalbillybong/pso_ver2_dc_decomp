typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x20];
    float f20;
    float f24;
    float f28;
};
struct Arg1 {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
};
void operation_8c014f34(Object *o, Arg1 *a1)
{
    o->f20 = a1->f04;
    o->f24 = a1->f08;
    o->f28 = a1->f0c;
}
