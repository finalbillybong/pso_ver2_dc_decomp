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
void operation_8c23e870(Object *o)
{
    if (o->f23c > 0.08f) {
        o->f23c -= 0.3f;
        if (0.08f > o->f23c) {
            o->f23c = 0.08f;
        }
    }
}
