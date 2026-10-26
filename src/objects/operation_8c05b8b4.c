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
int operation_8c05b8b4(Object *o)
{
    int v1;
    v1 = (int)((o->f34 & 0x10) == 0x10);
    return (int)(v1);
}
