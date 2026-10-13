typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x11c];
    int f11c;
};
void operation_8c0f2298(Object *o)
{
    o->f11c += 0x222;
}
