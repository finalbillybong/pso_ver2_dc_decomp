typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
};
void operation_8c137a28(Object *o)
{
    if (o != 0) {
        o->f04 |= 1;
    }
}
