typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x69];
    char f69;
    char f6a;
};
int operation_8c220650(Object *o)
{
    return o->f69 + (o->f6a << 1);
}
