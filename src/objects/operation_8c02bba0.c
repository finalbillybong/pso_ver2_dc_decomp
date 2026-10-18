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
int operation_8c02bba0(Object *o)
{
    int v1;
    v1 = (int)(((o->f350 & 0x10000000)) != 0);
    return (int)(v1);
}
