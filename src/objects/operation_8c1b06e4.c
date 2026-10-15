typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xf0];
    float ff0;
    float ff4;
    float ff8;
};
void operation_8c1b06e4(Object *o)
{
    o->ff0 += o->ff8;
    if (o->ff4 < o->ff0) {
        o->ff0 -= o->ff4;
    }
}
