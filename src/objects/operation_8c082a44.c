typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xfc];
    float ffc;
};
void operation_8c082a44(Object *o)
{
    o->ffc -= 0.05f;
    if (0.0f > o->ffc) {
        o->ffc = 0.0f;
    }
}
