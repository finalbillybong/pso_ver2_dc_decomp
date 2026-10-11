typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x35c];
    int f35c;
};
int operation_8c02c338(Object *o)
{
    if (o->f35c < 0 || o->f35c >= 5) {
        return 1;
    }
    return o->f35c;
}
