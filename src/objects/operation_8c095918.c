typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4ec];
    int f4ec;
};
int operation_8c095918(Object *o)
{
    int v1;
    v1 = (int)(0 >= o->f4ec);
    return (int)(v1);
}
