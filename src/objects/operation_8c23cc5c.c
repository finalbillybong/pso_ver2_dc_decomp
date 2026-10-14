typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x280];
    int f280;
};
void operation_8c23cc5c(Object *o)
{
    if (o != 0) {
        o->f280 = 1;
    }
}
