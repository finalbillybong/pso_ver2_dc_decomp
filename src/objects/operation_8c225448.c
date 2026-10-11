typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x82];
    char f82;
    char f83;
};
int operation_8c225448(Object *o)
{
    return o->f82 + (o->f83 << 2);
}
