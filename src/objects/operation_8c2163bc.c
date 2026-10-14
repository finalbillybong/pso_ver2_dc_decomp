typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6c];
    int f6c;
};
void operation_8c2163bc(Object *o)
{
    o->f6c = 2;
}
