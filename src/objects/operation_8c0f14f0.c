typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x110];
    int f110;
};
void operation_8c0f14f0(Object *o, int a1)
{
    int v1;
    v1 = (int)a1;
    if (!(a1 >= 0)) {
        v1 = (int)0;
    }
    o->f110 = (int)(v1);
}
