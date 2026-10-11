typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xa8];
    int fa8;
};
int operation_8c21118c(Object *o)
{
    int v1;
    v1 = (int)o->fa8;
    if (o->fa8 == 2) {
        return 1;
    }
    return (v1 == 3) ? 2 : 0;
}
