typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1b8];
    int f1b8;
};
int operation_8c05a188(Object *o)
{
    return o->f1b8 & 2;
}
