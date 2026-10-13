typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xa0];
    int fa0;
};
void operation_8c0a6790(Object *o, int a1)
{
    o->fa0 = a1;
}
