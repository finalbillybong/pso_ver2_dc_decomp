typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
    char unknown3a4[0x184];
    int f528;
};
void operation_8c1baa90(Object *o)
{
    o->f528 = 0;
    o->f3a0 = 0x93;
}
