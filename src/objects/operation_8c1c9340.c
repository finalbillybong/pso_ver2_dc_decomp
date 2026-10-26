typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x8];
    short f08;
};
void operation_8c1c9340(Object *o, int a1)
{
    o->f08 = a1;
}
