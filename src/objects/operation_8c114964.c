typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    float dispatch;
};
int operation_8c114964(Object *o)
{
    int v1;
    v1 = (int)(o->dispatch > 0.0f);
    return (int)(v1);
}
