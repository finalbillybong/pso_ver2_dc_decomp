typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
};
int operation_8c07a948(Object *o)
{
    int v1;
    v1 = (int)(((o->f34 & 0x800000)) != 0);
    return (int)(v1);
}
