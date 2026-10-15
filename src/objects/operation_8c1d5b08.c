typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x10];
    int f10;
};
float operation_8c1d5b08(Object *o)
{
    int v1;
    v1 = (int)o->f10;
    if (0xa > o->f10) {
        v1 = (int)0xa;
    }
    return (float)v1 * 17.0f;
}
