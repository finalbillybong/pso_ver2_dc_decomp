typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
};
void operation_8c11895c(Object *o)
{
    o->f20 = 0;
}
