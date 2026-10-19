typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x350];
    int f350;
};
void operation_8c02a594(Object *o)
{
    o->f350 &= -0x20001;
}
