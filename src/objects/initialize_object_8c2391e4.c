typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    short dispatch;
};
void initialize_object_8c2391e4(Object *o, int a1)
{
    int v1;
    v1 = a1;
    if ((short)a1 >= 0x1e) {
        v1 = 0;
    }
    o->dispatch = v1;
}
