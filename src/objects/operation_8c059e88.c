typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x84];
    int f390;
};
int operation_8c059e88(Object *o)
{
    int v1;
    v1 = (int)(o->f390 != o->f30a);
    return (int)(v1);
}
