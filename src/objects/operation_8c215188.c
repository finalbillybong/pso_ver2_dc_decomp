typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x70];
    int f70;
};
int operation_8c215188(Object *o)
{
    return (int)(o->f70);
}
