typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x64];
    int f64;
};
int operation_8c0dc780(Object *o)
{
    return 7.5f <= (float)o->f64;
}
