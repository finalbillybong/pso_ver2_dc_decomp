typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
};
void operation_8c2237b0(Object *o)
{
    o->f28 += 1;
}
