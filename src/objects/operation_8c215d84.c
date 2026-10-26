typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x74];
    int f74;
};
int operation_8c215d84(Object *o)
{
    return (int)(o->f74);
}
