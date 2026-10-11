typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x80];
    char f80;
    unsigned char f81;
};
void operation_8c0e10f4(Object *o)
{
    if (((o->f81 & 0x10)) == 0) {
        o->f80 = 7;
    }
}
