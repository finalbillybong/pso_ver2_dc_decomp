typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1e7];
    char f1e7;
};
int operation_8c0756fc(Object *o)
{
    return (unsigned char)o->f1e7;
}
