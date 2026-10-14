typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
};
void operation_8c1e64cc(Object *o)
{
    o->f04 |= 1;
    *(char *)0x8c4e3104 = 1;
}
