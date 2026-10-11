typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1];
    unsigned char f01;
};
int get_field_8c19cacc(Object *o)
{
    return o->f01 == *(int *)((char *)0x8c31cec0 + (*(int *)0x8c4dc5a0 << 2));
}
