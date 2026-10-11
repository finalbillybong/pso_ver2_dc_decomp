typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x98];
    float f3a4;
};
void operation_8c1a0f6c(Object *o)
{
    o->f3a4 -= 0.1f;
    if (0.0f > o->f3a4) {
        o->f3a4 = 0.0f;
        o->f30a = 5;
    }
}
