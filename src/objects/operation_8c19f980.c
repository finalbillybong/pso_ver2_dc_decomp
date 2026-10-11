typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1d];
    unsigned char f1d;
};
void operation_8c19f980(Object *o)
{
    if (o->f1d == 0x15) {
        o->f1d = 0x14;
    }
}
