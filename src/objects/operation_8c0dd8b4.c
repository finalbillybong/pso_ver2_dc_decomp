typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x26];
    short f26;
};
void operation_8c0dd8b4(Object *o)
{
    if (o->f26 > 0) {
        o->f26 -= 1;
    }
}
