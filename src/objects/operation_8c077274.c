typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x210];
    int f210;
};
void operation_8c077274(Object *o, int a1)
{
    o->f210 = a1;
}
