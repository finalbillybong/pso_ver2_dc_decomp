typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x234];
    float f234;
    float f238;
    float f23c;
};
void operation_8c23ade8(Object *o)
{
    if (o->f23c > 1e-07f) {
        o->f23c -= 0.3f;
        if (1e-07f > o->f23c) {
            o->f23c = 1e-07f;
        }
        o->f234 = o->f238 = o->f23c;
    }
}
