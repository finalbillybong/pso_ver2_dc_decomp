typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    int f04;
};
int operation_8c03bd74(Object *o)
{
    int v1;
    v1 = o->f04;
    if (o->f04 < 0) {
        return 1;
        v1 = 1;
    }
    o->f04 = v1 + -1;
    return (v1 + -1) >= 0;
}
