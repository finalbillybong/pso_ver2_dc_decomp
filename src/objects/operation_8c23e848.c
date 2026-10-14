typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x23c];
    float f23c;
};
void operation_8c23e848(Object *o)
{
    if (1.0f > o->f23c) {
        o->f23c += 0.3f;
        if (o->f23c > 1.0f) {
            o->f23c = 1.0f;
        }
    }
}
