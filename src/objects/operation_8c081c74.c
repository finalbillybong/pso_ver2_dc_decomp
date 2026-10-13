typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x124];
    int f124;
    int f128;
};
void operation_8c081c74(Object *o)
{
    o->f128 += 0x14;
    o->f124 += 0x200;
}
