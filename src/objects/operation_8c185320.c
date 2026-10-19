typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x6];
    short f06;
};
void operation_8c185320(Object *o, int a1)
{
    int v3;
    if ((short)a1 < 0 || (short)a1 > 0xa) {
        v3 = (int)0;
    } else {
        v3 = (int)a1;
    }
    o->f06 = v3;
}
