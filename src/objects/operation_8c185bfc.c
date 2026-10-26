typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
};
int operation_8c185bfc(Object *o)
{
    int v1;
    v1 = (int)(o->f24 != 0);
    return (int)(v1);
}
