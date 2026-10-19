typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x13c];
    int f13c;
};
int operation_8c0e73f0(Object *o)
{
    return (int)o->f13c + 0x3c;
}
