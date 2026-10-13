typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x10];
    short f10;
};
void operation_8c1aab1c(Object *o)
{
    if ((short)(o->f10++ + 1) > 2) {
        o->f10 = 2;
    }
}
