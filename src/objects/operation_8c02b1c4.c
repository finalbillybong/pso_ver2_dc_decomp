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
int operation_8c02b1c4(Object *o)
{
    return ((o->f350 & 0x8000000)) != 0;
}
