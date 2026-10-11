typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x16];
    short f16;
};
void operation_8c2391d0(Object *o, int a1)
{
    int v1;
    v1 = a1;
    if ((short)a1 >= 0xc8) {
        v1 = 0;
    }
    o->f16 = v1;
}
