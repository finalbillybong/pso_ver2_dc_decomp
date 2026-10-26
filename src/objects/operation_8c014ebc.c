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
    float f10;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
void operation_8c014ebc(Object *o, Arg1 *a1)
{
    o->f08 = a1->f00;
    o->f0c = a1->f04;
    o->f10 = a1->f08;
}
