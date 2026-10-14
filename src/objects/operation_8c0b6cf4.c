typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0x94];
    float fd8;
};
void operation_8c0b6cf4(Object *o)
{
    o->fd8 = o->f40;
}
