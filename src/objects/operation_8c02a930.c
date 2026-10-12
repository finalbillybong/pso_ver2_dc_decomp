typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x350];
    int f350;
};
int operation_8c02a930(Object *o)
{
    return ((o->f350 & 0x400000)) != 0;
}
