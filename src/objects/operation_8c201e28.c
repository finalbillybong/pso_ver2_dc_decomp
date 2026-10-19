typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xa];
    char f0a;
    char f0b;
};
void operation_8c201e28(Object *o)
{
    o->f0a = 0;
    o->f0b = 0;
}
